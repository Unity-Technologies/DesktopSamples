#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void UnityEngine.Font::InvokeTextureRebuilt_Internal(UnityEngine.Font)
extern void Font_InvokeTextureRebuilt_Internal_m35C57E19A7E53A2F2A94DF909E6903DFFEE7679B (void);
// 0x00000002 System.Void UnityEngine.Font/FontTextureRebuildCallback::.ctor(System.Object,System.IntPtr)
extern void FontTextureRebuildCallback__ctor_m58D67535ED1CC9895AB016CBB713A730A73480E0 (void);
// 0x00000003 System.Void UnityEngine.Font/FontTextureRebuildCallback::Invoke()
extern void FontTextureRebuildCallback_Invoke_m7F5D9CAA51DC8C9779104ACF46F668654B35EA1F (void);
// 0x00000004 System.IAsyncResult UnityEngine.Font/FontTextureRebuildCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern void FontTextureRebuildCallback_BeginInvoke_m3F36739573BA8EE2C6C3BF90DC37E9D78AD7365F (void);
// 0x00000005 System.Void UnityEngine.Font/FontTextureRebuildCallback::EndInvoke(System.IAsyncResult)
extern void FontTextureRebuildCallback_EndInvoke_m3FDA95B07122814A8E63A8B7FFB5BCA7EC157B2C (void);
static Il2CppMethodPointer s_methodPointers[5] = 
{
	Font_InvokeTextureRebuilt_Internal_m35C57E19A7E53A2F2A94DF909E6903DFFEE7679B,
	FontTextureRebuildCallback__ctor_m58D67535ED1CC9895AB016CBB713A730A73480E0,
	FontTextureRebuildCallback_Invoke_m7F5D9CAA51DC8C9779104ACF46F668654B35EA1F,
	FontTextureRebuildCallback_BeginInvoke_m3F36739573BA8EE2C6C3BF90DC37E9D78AD7365F,
	FontTextureRebuildCallback_EndInvoke_m3FDA95B07122814A8E63A8B7FFB5BCA7EC157B2C,
};
static const int32_t s_InvokerIndices[5] = 
{
	2158,
	754,
	1384,
	563,
	1186,
};
extern const CustomAttributesCacheGenerator g_UnityEngine_TextRenderingModule_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_TextRenderingModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_TextRenderingModule_CodeGenModule = 
{
	"UnityEngine.TextRenderingModule.dll",
	5,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_UnityEngine_TextRenderingModule_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
