using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Template
{
	public static class Globals
	{
		private static string applicationArguments = "";

		public static string ApplicationArguments
		{
			set { applicationArguments = value; }
			get { return applicationArguments; }
		}
	}
}
