#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[4] = 
{
	{ 13725, 0,  2 } /*tableIndex: 0 */,
	{ 15220, 1,  3 } /*tableIndex: 1 */,
	{ 15220, 2,  3 } /*tableIndex: 2 */,
	{ 20034, 3,  4 } /*tableIndex: 3 */,
};
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[4] = 
{
	"e",
	"noDependencies",
	"fence",
	"job",
};
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[5] = 
{
	{ 0, 0 } /* 0x06000001 System.Boolean Unity.Barracuda.BurstBLAS::IsNative() */,
	{ 0, 1 } /* 0x06000002 System.Boolean Unity.Barracuda.BurstBLAS::IsCurrentPlatformSupported() */,
	{ 1, 2 } /* 0x06000003 System.Void Unity.Barracuda.BurstBLAS::SGEMM(System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean) */,
	{ 3, 1 } /* 0x06000004 Unity.Jobs.JobHandle Unity.Barracuda.BurstBLAS::ScheduleSGEMM(Unity.Jobs.JobHandle,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean) */,
	{ 0, 0 } /* 0x06000005 System.Void Unity.Barracuda.BurstBLAS::.ctor() */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_Barracuda_BurstBLAS[];
Il2CppSequencePoint g_sequencePointsUnity_Barracuda_BurstBLAS[47] = 
{
	{ 62523, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 62523, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 62523, 1, 20, 20, 9, 10, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 62523, 1, 21, 21, 13, 26, 1, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 62523, 1, 22, 22, 9, 10, 5, kSequencePointKind_Normal, 0, 4 } /* seqPointIndex: 4 */,
	{ 62524, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 62524, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 6 } /* seqPointIndex: 6 */,
	{ 62524, 1, 26, 26, 9, 10, 0, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 62524, 1, 28, 28, 13, 14, 1, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 62524, 1, 31, 31, 17, 53, 2, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 62524, 1, 32, 32, 13, 14, 3, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 62524, 1, 33, 33, 13, 32, 6, kSequencePointKind_Normal, 0, 11 } /* seqPointIndex: 11 */,
	{ 62524, 1, 34, 34, 13, 14, 7, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 62524, 1, 35, 35, 17, 91, 8, kSequencePointKind_Normal, 0, 13 } /* seqPointIndex: 13 */,
	{ 62524, 1, 35, 35, 17, 91, 14, kSequencePointKind_StepOut, 0, 14 } /* seqPointIndex: 14 */,
	{ 62524, 1, 35, 35, 17, 91, 20, kSequencePointKind_StepOut, 0, 15 } /* seqPointIndex: 15 */,
	{ 62524, 1, 35, 35, 17, 91, 25, kSequencePointKind_StepOut, 0, 16 } /* seqPointIndex: 16 */,
	{ 62524, 1, 36, 36, 17, 30, 31, kSequencePointKind_Normal, 0, 17 } /* seqPointIndex: 17 */,
	{ 62524, 1, 39, 39, 13, 25, 35, kSequencePointKind_Normal, 0, 18 } /* seqPointIndex: 18 */,
	{ 62524, 1, 40, 40, 9, 10, 39, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 62525, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 20 } /* seqPointIndex: 20 */,
	{ 62525, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 21 } /* seqPointIndex: 21 */,
	{ 62525, 1, 46, 46, 9, 10, 0, kSequencePointKind_Normal, 0, 22 } /* seqPointIndex: 22 */,
	{ 62525, 1, 47, 47, 13, 50, 1, kSequencePointKind_Normal, 0, 23 } /* seqPointIndex: 23 */,
	{ 62525, 1, 48, 48, 13, 119, 9, kSequencePointKind_Normal, 0, 24 } /* seqPointIndex: 24 */,
	{ 62525, 1, 48, 48, 13, 119, 32, kSequencePointKind_StepOut, 0, 25 } /* seqPointIndex: 25 */,
	{ 62525, 1, 49, 49, 13, 30, 38, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 62525, 1, 49, 49, 13, 30, 40, kSequencePointKind_StepOut, 0, 27 } /* seqPointIndex: 27 */,
	{ 62525, 1, 50, 50, 9, 10, 46, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 62526, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 62526, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 30 } /* seqPointIndex: 30 */,
	{ 62526, 1, 57, 57, 9, 10, 0, kSequencePointKind_Normal, 0, 31 } /* seqPointIndex: 31 */,
	{ 62526, 1, 58, 58, 13, 59, 1, kSequencePointKind_Normal, 0, 32 } /* seqPointIndex: 32 */,
	{ 62526, 1, 59, 59, 13, 24, 9, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 62526, 1, 59, 59, 25, 37, 17, kSequencePointKind_Normal, 0, 34 } /* seqPointIndex: 34 */,
	{ 62526, 1, 59, 59, 38, 50, 25, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 62526, 1, 60, 60, 13, 24, 34, kSequencePointKind_Normal, 0, 36 } /* seqPointIndex: 36 */,
	{ 62526, 1, 60, 60, 25, 37, 43, kSequencePointKind_Normal, 0, 37 } /* seqPointIndex: 37 */,
	{ 62526, 1, 60, 60, 38, 50, 52, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 62526, 1, 61, 61, 13, 24, 61, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 62526, 1, 61, 61, 25, 37, 70, kSequencePointKind_Normal, 0, 40 } /* seqPointIndex: 40 */,
	{ 62526, 1, 61, 61, 38, 50, 79, kSequencePointKind_Normal, 0, 41 } /* seqPointIndex: 41 */,
	{ 62526, 1, 62, 62, 13, 41, 88, kSequencePointKind_Normal, 0, 42 } /* seqPointIndex: 42 */,
	{ 62526, 1, 63, 63, 13, 41, 97, kSequencePointKind_Normal, 0, 43 } /* seqPointIndex: 43 */,
	{ 62526, 1, 65, 65, 13, 44, 106, kSequencePointKind_Normal, 0, 44 } /* seqPointIndex: 44 */,
	{ 62526, 1, 65, 65, 13, 44, 109, kSequencePointKind_StepOut, 0, 45 } /* seqPointIndex: 45 */,
	{ 62526, 1, 66, 66, 9, 10, 117, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnity_Barracuda_BurstBLAS[];
Il2CppSequencePoint g_sequencePointsUnity_Barracuda_BurstBLAS[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[] = {
{ 62524, 13725, 6, 0, -1 },
};
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "/Users/flarb9/wkspaces/CalorieChecker/Library/PackageCache/com.unity.barracuda@3.0.0/Barracuda/Runtime/Plugins/Burst/BurstBLAS.cs", { 249, 166, 119, 250, 145, 18, 46, 83, 198, 111, 208, 216, 113, 206, 229, 166} }, //1 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = 
{
	{ 6994, 1 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[5] = 
{
	{ 0, 7 },
	{ 0, 41 },
	{ 6, 35 },
	{ 0, 47 },
	{ 0, 119 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[5] = 
{
	{ 7, 0, 1 } /* System.Boolean Unity.Barracuda.BurstBLAS::IsNative() */,
	{ 41, 1, 2 } /* System.Boolean Unity.Barracuda.BurstBLAS::IsCurrentPlatformSupported() */,
	{ 47, 3, 1 } /* System.Void Unity.Barracuda.BurstBLAS::SGEMM(System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean) */,
	{ 119, 4, 1 } /* Unity.Jobs.JobHandle Unity.Barracuda.BurstBLAS::ScheduleSGEMM(Unity.Jobs.JobHandle,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean) */,
	{ 0, 0, 0 } /* System.Void Unity.Barracuda.BurstBLAS::.ctor() */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnity_Barracuda_BurstBLAS;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnity_Barracuda_BurstBLAS = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	47,
	(Il2CppSequencePoint*)g_sequencePointsUnity_Barracuda_BurstBLAS,
	1,
	(Il2CppCatchPoint*)g_catchPoints,
	1,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
