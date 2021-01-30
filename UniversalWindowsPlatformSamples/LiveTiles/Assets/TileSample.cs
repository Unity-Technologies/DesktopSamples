using UnityEngine;
using UnityEngine.WSA;
#if NETFX_CORE
using System;
using Windows.Storage;
#endif

public class TileSample : MonoBehaviour
{
	private bool screenshotToTile = false;
	private bool textToTile = false;
	private string text = "";
	private int counter = 0;
	private Tile secondaryTile = null;
	private int secondaryTileBadge = 0;

	void OnGUI()
	{
		// secondary tile and toast can pass arguments to application,
		//which we can use to determine, if application was activated via secondary tile or toast notification
		string activationMode;
		if (UnityEngine.WSA.Application.arguments == "--secondary")
			activationMode = "Activated via secondary tile";
		else if (UnityEngine.WSA.Application.arguments == "--toast")
			activationMode = "Activated via toast notification";
		else
			activationMode = "Activated normally";
		GUILayout.Label(activationMode);


		text = GUILayout.TextField(text);


		// Update main tile with text, screenshot of both
		// we can't read screen here, to we just set flags to do so
		if (GUILayout.Button("Update tile (image only)"))
		{
			screenshotToTile = true;
			textToTile = false;
		}
		if (GUILayout.Button("Update Tile (text only)"))
			Tile.main.Update("", "", "", text);
		if (GUILayout.Button("Update Tile (image and text)"))
		{
			screenshotToTile = true;
			textToTile = true;
		}


		// Secondary tile first has to be create
		// then you can update it just like you would update main tile
		if (GUILayout.Button("Secondary tile (text only)"))
		{
			// first try to find existing secondary tile by it's id
			if (secondaryTile == null)
				secondaryTile = Tile.GetSecondary("secondary");
			// Note that user can destroy tile by unpinning it
			// so you should check secondaryTile.exists
			if (secondaryTile == null || !secondaryTile.exists)
			{
				// Create the tile, if it does not exist
				// id, arguments and 150x150 logo are required, when creating
				SecondaryTileData tileData = new SecondaryTileData("secondary", "Secondary Tile Example");
				tileData.arguments = "--secondary";  // these arguments will be passed to application, when secondary tile is clicked
				tileData.square150x150Logo = "ms-appx:///Assets/SquareTile.png";
				secondaryTile = Tile.CreateOrUpdateSecondary(tileData);
				// at this moment user is presented with pop-up to pin secondary tile
				// there is no tile yet, so no updates can be performed
			}
			else if (secondaryTile.exists && secondaryTile.hasUserConsent)
			{
				// remember to check secondaryTile.hasUserConsent
				// if it's false, tile is not yet created
				// if user agrees, both exists and hasUserConsent are true
				secondaryTile.Update("", "", "", text);
				secondaryTile.UpdateBadgeNumber(++secondaryTileBadge);
			}
			else if (!secondaryTile.exists)
				secondaryTile = null;
		}


		if (GUILayout.Button("Show toast notification"))
		{
			// Create and show toast notification
			// remember to set application "Toast Capable" in appxmanifest
			Toast toast = Toast.Create("", "This is toast notification");
			toast.arguments = "--toast";  // these arguments will be passed to application, when user clicks on notification
			toast.Show();
		}
	}

	void OnPostRender()
	{
		if (screenshotToTile)
		{
			screenshotToTile = false;
			TakeScreenshotToTile();
		}
	}

	void TakeScreenshotToTile()
	{
		// 150x150 tile is required, other sizes are optional
		Texture2D texture = new Texture2D(150, 150);
		texture.ReadPixels(new Rect(Screen.width / 2 - 75, Screen.height / 2 - 75, 150, 150), 0, 0);
		texture.Apply();

		byte[] png150x150 = texture.EncodeToPNG();
		UpdateTile(png150x150);
	}

#if NETFX_CORE
	async
#endif
	void UpdateTile(byte[] png150x150)
	{
#if NETFX_CORE
		// In order to change tile image, we should change the uri too
		// in this example we store images in applications local storage
		// we must also take care of cleaning it up
		StorageFolder localFolder = ApplicationData.Current.LocalFolder;
		StorageFolder tilesFolder = null;
		try
		{
			tilesFolder = await localFolder.GetFolderAsync("tiles");
		}
		catch (Exception)
		{}
		if (tilesFolder != null)
			await tilesFolder.DeleteAsync();
		tilesFolder = await localFolder.CreateFolderAsync("tiles");
		string tileFile = "tile" + counter++ + ".png";
		StorageFile file = await tilesFolder.CreateFileAsync(tileFile, CreationCollisionOption.ReplaceExisting);
		await FileIO.WriteBytesAsync(file, png150x150);

		string txt = textToTile ? text : "";
		Tile.main.Update("ms-appdata:///local/tiles/" + tileFile, "", "", txt);
#endif
	}
}
