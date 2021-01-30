Windows Store exaple on how to use Unity tiles API.
The application will display a spinning cube and allows capturing screenshot of it and putting on a tile.
The following is showcased in the example:
* Updating main tile with image, text or both (text is taken from entry field at the top). Pin your application in the start screen, click any of top 3 buttons and then look at the tile in start screen, you should see it updated.
* Creating a new secondary tile. The button for creating secondary tile creates only one secondary tile on start screen and later updates it. This sample also shows use of badges: with each update a numeric badge on a tile is updated.
* Showing a toast notification. Mark your application as "Toast Capable" in the Package.appxmanifest and the toast button will display a notification.
* Application activation with arguments. At the very top of of application a text shows whether application was started by clicking main tile, secondary tile or activated via toast notification.