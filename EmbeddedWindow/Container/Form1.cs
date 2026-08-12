using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading;
using System.Windows.Forms;
using System.Diagnostics;
using System.Windows.Forms.VisualStyles;

namespace Container
{
	public partial class Form1 : Form
	{
		[DllImport("User32.dll")]
		static extern bool MoveWindow(IntPtr handle, int x, int y, int width, int height, bool redraw);

		internal delegate int WindowEnumProc(IntPtr hwnd, IntPtr lparam);
		[DllImport("user32.dll")]
		internal static extern bool EnumChildWindows(IntPtr hwnd, WindowEnumProc func, IntPtr lParam);

		[DllImport("user32.dll")]
		static extern int SendMessage(IntPtr hWnd, int msg, IntPtr wParam, IntPtr lParam);

		private Process process;
		private IntPtr unityHWND = IntPtr.Zero;

		private const int WM_ACTIVATE = 0x0006;
		private readonly IntPtr WA_ACTIVE = new IntPtr(1);
		private readonly IntPtr WA_INACTIVE = new IntPtr(0);

		public Form1()
		{
			InitializeComponent();

			try
			{
				process = new Process();
				process.StartInfo.FileName = "Child.exe";
				process.StartInfo.Arguments = "-parentHWND " + panel1.Handle.ToInt32() + " " + Environment.CommandLine;
				process.StartInfo.UseShellExecute = true;
				process.StartInfo.CreateNoWindow = true;

				process.Start();

				process.WaitForInputIdle();
				// Doesn't work for some reason ?!
				//unityHWND = process.MainWindowHandle;
				EnumChildWindows(panel1.Handle, WindowEnum, IntPtr.Zero);

				unityHWNDLabel.Text = "Unity HWND: 0x" + unityHWND.ToString("X8");
			}
			catch (Exception ex)
			{
				MessageBox.Show(ex.Message + ".\nCheck if Container.exe is placed next to Child.exe.");
			}

		}

		private void ActivateUnityWindow()
		{
			SendMessage(unityHWND, WM_ACTIVATE, WA_ACTIVE, IntPtr.Zero);
		}

		private void DeactivateUnityWindow()
		{
			SendMessage(unityHWND, WM_ACTIVATE, WA_INACTIVE, IntPtr.Zero);
		}

		private int WindowEnum(IntPtr hwnd, IntPtr lparam)
		{
			unityHWND = hwnd;
			ActivateUnityWindow();
			return 0;
		}

		private void panel1_Resize(object sender, EventArgs e)
		{
			MoveWindow(unityHWND, 0, 0, panel1.Width, panel1.Height, true);
			ActivateUnityWindow();
		}

		// Close Unity application
		private void Form1_FormClosed(object sender, FormClosedEventArgs e)
		{
			try
			{
				process.CloseMainWindow();

				Thread.Sleep(1000);
				while (process.HasExited == false)
					process.Kill();
			}
			catch (Exception)
			{
				
			}
		}

		private void Form1_Activated(object sender, EventArgs e)
		{
			ActivateUnityWindow();
		}

		private void Form1_Deactivate(object sender, EventArgs e)
		{
			DeactivateUnityWindow();
		}
	}
}
