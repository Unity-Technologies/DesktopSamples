echo Y | rmdir /S Temp
echo Y | rmdir /S Library
erase Assembly-CSharp-*

echo Y | rmdir /S Source\Plugins\ARM
echo Y | rmdir /S Source\Plugins\x86
echo Y | rmdir /S Source\Plugins\x64
echo Y | rmdir /S Source\Plugins\Debug
echo Y | rmdir /S Source\Plugins\Release

echo Y | rmdir /S Source\Plugins\DesktopPlugins\ARM
echo Y | rmdir /S Source\Plugins\DesktopPlugins\x86
echo Y | rmdir /S Source\Plugins\DesktopPlugins\x64
echo Y | rmdir /S Source\Plugins\DesktopPlugins\Debug
echo Y | rmdir /S Source\Plugins\DesktopPlugins\Release

echo Y | rmdir /S Source\Plugins\WSAPlugins\ARM
echo Y | rmdir /S Source\Plugins\WSAPlugins\x86
echo Y | rmdir /S Source\Plugins\WSAPlugins\x64
echo Y | rmdir /S Source\Plugins\WSAPlugins\Debug
echo Y | rmdir /S Source\Plugins\WSAPlugins\Release

erase Source\Plugins\Plugins.sdf
erase Source\Plugins\Plugins.v11.suo

..\..\..\..\tools\doctools\win32\7z\7z.exe a -tzip WSANativePlugins Assets\* Source\* ProjectSettings\*
copy WSANativePlugins.zip ..\..\..\uploads\Main\WSANativePlugins.zip 
pause
