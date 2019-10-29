
#if _MSC_VER // this is defined when compiling with Visual Studio
#define EXPORT_API __declspec(dllexport) // Visual Studio needs annotating exported functions with this
#else
#define EXPORT_API // XCode does not need annotating exported functions, so define is empty
#endif

// ------------------------------------------------------------------------
// Plugin itself


// Link following functions C-style (required for plugins)
extern "C"
{

// The functions we will call from Unity.
//
EXPORT_API const char*  PrintHello(){
	return "Hello";
}

EXPORT_API int PrintANumber(){
	return 5;
}

EXPORT_API int AddTwoIntegers(int a, int b) {
	return a + b;
}

EXPORT_API float AddTwoFloats(float a, float b) {
	return a + b;
}

} // end of export C block
