echo Y | rmdir /S Temp
echo Y | rmdir /S Library
echo Y | rmdir /S Export\Debug
echo Y | rmdir /S Export\Release
echo Y | rmdir /S Export\Players
echo Y | rmdir /S Export\XAMLUnityConnection\Unprocessed
echo Y | rmdir /S Export\XAMLUnityConnection\Data
echo Y | rmdir /S Export\XAMLUnityConnection\bin
echo Y | rmdir /S Export\XAMLUnityConnection\obj
erase XAMLUnityConnection-csharp.suo
erase Assembly-CSharp-*
erase Export\XAMLUnityConnection\Assembly-CSharp.*
erase Export\XAMLUnityConnection\UnityEngine.*
erase Export\XAMLUnityConnection\Boo.Lang.*
erase Export\XAMLUnityConnection\UnityScript.Lang.*
erase Export\XAMLUnityConnection\WinRTLegacy.dll
erase Export\XAMLUnityConnection\XAMLUnityConnection.csproj
erase Export\XAMLUnityConnection\XAMLUnityConnection.csproj.user
erase Export\XAMLUnityConnection.v12.suo
erase Export\XAMLUnityConnection.sln
..\..\..\..\tools\doctools\win32\7z\7z.exe a -tzip XAMLUnityConnection ReadMe.txt Assets\* Export\* ProjectSettings\*
copy XAMLUnityConnection.zip ..\..\..\uploads\Main\XAMLUnityConnection.zip 
pause
