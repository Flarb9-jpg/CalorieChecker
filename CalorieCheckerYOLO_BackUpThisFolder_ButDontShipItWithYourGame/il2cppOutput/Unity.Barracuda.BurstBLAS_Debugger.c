#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[14] = 
{
	{ 14907, 0,  2 } /*tableIndex: 0 */,
	{ 16668, 1,  3 } /*tableIndex: 1 */,
	{ 16668, 2,  3 } /*tableIndex: 2 */,
	{ 20311, 3,  4 } /*tableIndex: 3 */,
	{ 16471, 4,  5 } /*tableIndex: 4 */,
	{ 16471, 4,  6 } /*tableIndex: 5 */,
	{ 16471, 5,  8 } /*tableIndex: 6 */,
	{ 11571, 6,  8 } /*tableIndex: 7 */,
	{ 11571, 7,  8 } /*tableIndex: 8 */,
	{ 11571, 8,  8 } /*tableIndex: 9 */,
	{ 16471, 9,  10 } /*tableIndex: 10 */,
	{ 16471, 10,  11 } /*tableIndex: 11 */,
	{ 16471, 11,  13 } /*tableIndex: 12 */,
	{ 16471, 10,  14 } /*tableIndex: 13 */,
};
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[12] = 
{
	"e",
	"noDependencies",
	"fence",
	"job",
	"tmp",
	"sz",
	"blockA",
	"blockB",
	"blockC",
	"rowA",
	"l",
	"colB",
};
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[8] = 
{
	{ 0, 0 } /* 0x06000001 System.Boolean Unity.Barracuda.BurstBLAS::IsNative() */,
	{ 0, 1 } /* 0x06000002 System.Boolean Unity.Barracuda.BurstBLAS::IsCurrentPlatformSupported() */,
	{ 1, 2 } /* 0x06000003 System.Void Unity.Barracuda.BurstBLAS::SGEMM(System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean) */,
	{ 3, 3 } /* 0x06000004 Unity.Jobs.JobHandle Unity.Barracuda.BurstBLAS::ScheduleSGEMM(Unity.Jobs.JobHandle,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean) */,
	{ 0, 0 } /* 0x06000005 System.Void Unity.Barracuda.BurstBLAS::.ctor() */,
	{ 6, 4 } /* 0x06000006 System.Void Unity.Barracuda.UnsafeMatrixBlockMultiplyUnrolled8xhJob::Execute(System.Int32) */,
	{ 10, 2 } /* 0x06000007 System.Void Unity.Barracuda.UnsafeMatrixBlockMultiplyUnrolled8xhJob::ExecutOverColB(System.Single*,System.Single*,System.Single*,System.Int32) */,
	{ 12, 2 } /* 0x06000008 System.Void Unity.Barracuda.UnsafeMatrixBlockMultiplyUnrolled8xhJob::ExecutOverRowA(System.Single*,System.Single*,System.Single*,System.Int32) */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_Barracuda_BurstBLAS[];
Il2CppSequencePoint g_sequencePointsUnity_Barracuda_BurstBLAS[156] = 
{
	{ 66816, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 66816, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 66816, 1, 22, 22, 9, 10, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 66816, 1, 23, 23, 13, 26, 1, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 66816, 1, 24, 24, 9, 10, 5, kSequencePointKind_Normal, 0, 4 } /* seqPointIndex: 4 */,
	{ 66817, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 66817, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 6 } /* seqPointIndex: 6 */,
	{ 66817, 1, 28, 28, 9, 10, 0, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 66817, 1, 30, 30, 13, 14, 1, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 66817, 1, 33, 33, 17, 63, 2, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 66817, 1, 34, 34, 13, 14, 3, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 66817, 1, 35, 35, 13, 32, 6, kSequencePointKind_Normal, 0, 11 } /* seqPointIndex: 11 */,
	{ 66817, 1, 36, 36, 13, 14, 7, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 66817, 1, 37, 37, 17, 91, 8, kSequencePointKind_Normal, 0, 13 } /* seqPointIndex: 13 */,
	{ 66817, 1, 37, 37, 17, 91, 14, kSequencePointKind_StepOut, 0, 14 } /* seqPointIndex: 14 */,
	{ 66817, 1, 37, 37, 17, 91, 20, kSequencePointKind_StepOut, 0, 15 } /* seqPointIndex: 15 */,
	{ 66817, 1, 37, 37, 17, 91, 25, kSequencePointKind_StepOut, 0, 16 } /* seqPointIndex: 16 */,
	{ 66817, 1, 38, 38, 17, 30, 31, kSequencePointKind_Normal, 0, 17 } /* seqPointIndex: 17 */,
	{ 66817, 1, 41, 41, 13, 25, 35, kSequencePointKind_Normal, 0, 18 } /* seqPointIndex: 18 */,
	{ 66817, 1, 42, 42, 9, 10, 39, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 66818, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 20 } /* seqPointIndex: 20 */,
	{ 66818, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 21 } /* seqPointIndex: 21 */,
	{ 66818, 1, 48, 48, 9, 10, 0, kSequencePointKind_Normal, 0, 22 } /* seqPointIndex: 22 */,
	{ 66818, 1, 49, 49, 13, 50, 1, kSequencePointKind_Normal, 0, 23 } /* seqPointIndex: 23 */,
	{ 66818, 1, 50, 50, 13, 119, 9, kSequencePointKind_Normal, 0, 24 } /* seqPointIndex: 24 */,
	{ 66818, 1, 50, 50, 13, 119, 32, kSequencePointKind_StepOut, 0, 25 } /* seqPointIndex: 25 */,
	{ 66818, 1, 51, 51, 13, 30, 38, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 66818, 1, 51, 51, 13, 30, 40, kSequencePointKind_StepOut, 0, 27 } /* seqPointIndex: 27 */,
	{ 66818, 1, 52, 52, 9, 10, 46, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 66819, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 66819, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 30 } /* seqPointIndex: 30 */,
	{ 66819, 1, 59, 59, 9, 10, 0, kSequencePointKind_Normal, 0, 31 } /* seqPointIndex: 31 */,
	{ 66819, 1, 60, 60, 13, 28, 1, kSequencePointKind_Normal, 0, 32 } /* seqPointIndex: 32 */,
	{ 66819, 1, 60, 60, 0, 0, 4, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 66819, 1, 61, 61, 13, 14, 7, kSequencePointKind_Normal, 0, 34 } /* seqPointIndex: 34 */,
	{ 66819, 1, 62, 62, 17, 30, 8, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 66819, 1, 63, 63, 17, 25, 10, kSequencePointKind_Normal, 0, 36 } /* seqPointIndex: 36 */,
	{ 66819, 1, 64, 64, 17, 26, 14, kSequencePointKind_Normal, 0, 37 } /* seqPointIndex: 37 */,
	{ 66819, 1, 65, 65, 13, 14, 17, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 66819, 1, 67, 67, 13, 28, 18, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 66819, 1, 67, 67, 0, 0, 21, kSequencePointKind_Normal, 0, 40 } /* seqPointIndex: 40 */,
	{ 66819, 1, 68, 68, 13, 14, 24, kSequencePointKind_Normal, 0, 41 } /* seqPointIndex: 41 */,
	{ 66819, 1, 69, 69, 17, 30, 25, kSequencePointKind_Normal, 0, 42 } /* seqPointIndex: 42 */,
	{ 66819, 1, 70, 70, 17, 25, 29, kSequencePointKind_Normal, 0, 43 } /* seqPointIndex: 43 */,
	{ 66819, 1, 71, 71, 17, 26, 33, kSequencePointKind_Normal, 0, 44 } /* seqPointIndex: 44 */,
	{ 66819, 1, 72, 72, 13, 14, 37, kSequencePointKind_Normal, 0, 45 } /* seqPointIndex: 45 */,
	{ 66819, 1, 74, 74, 13, 105, 38, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
	{ 66819, 1, 75, 75, 13, 24, 46, kSequencePointKind_Normal, 0, 47 } /* seqPointIndex: 47 */,
	{ 66819, 1, 76, 76, 13, 25, 54, kSequencePointKind_Normal, 0, 48 } /* seqPointIndex: 48 */,
	{ 66819, 1, 77, 77, 13, 25, 62, kSequencePointKind_Normal, 0, 49 } /* seqPointIndex: 49 */,
	{ 66819, 1, 78, 78, 13, 24, 71, kSequencePointKind_Normal, 0, 50 } /* seqPointIndex: 50 */,
	{ 66819, 1, 79, 79, 13, 25, 80, kSequencePointKind_Normal, 0, 51 } /* seqPointIndex: 51 */,
	{ 66819, 1, 80, 80, 13, 25, 89, kSequencePointKind_Normal, 0, 52 } /* seqPointIndex: 52 */,
	{ 66819, 1, 81, 81, 13, 24, 98, kSequencePointKind_Normal, 0, 53 } /* seqPointIndex: 53 */,
	{ 66819, 1, 82, 82, 13, 25, 107, kSequencePointKind_Normal, 0, 54 } /* seqPointIndex: 54 */,
	{ 66819, 1, 83, 83, 13, 25, 116, kSequencePointKind_Normal, 0, 55 } /* seqPointIndex: 55 */,
	{ 66819, 1, 84, 84, 13, 25, 125, kSequencePointKind_Normal, 0, 56 } /* seqPointIndex: 56 */,
	{ 66819, 1, 85, 85, 13, 41, 134, kSequencePointKind_Normal, 0, 57 } /* seqPointIndex: 57 */,
	{ 66819, 1, 86, 86, 13, 41, 143, kSequencePointKind_Normal, 0, 58 } /* seqPointIndex: 58 */,
	{ 66819, 1, 90, 90, 13, 25, 152, kSequencePointKind_Normal, 0, 59 } /* seqPointIndex: 59 */,
	{ 66819, 1, 90, 90, 0, 0, 159, kSequencePointKind_Normal, 0, 60 } /* seqPointIndex: 60 */,
	{ 66819, 1, 91, 91, 13, 14, 163, kSequencePointKind_Normal, 0, 61 } /* seqPointIndex: 61 */,
	{ 66819, 1, 92, 92, 17, 42, 164, kSequencePointKind_Normal, 0, 62 } /* seqPointIndex: 62 */,
	{ 66819, 1, 93, 93, 17, 86, 172, kSequencePointKind_Normal, 0, 63 } /* seqPointIndex: 63 */,
	{ 66819, 1, 93, 93, 17, 86, 193, kSequencePointKind_StepOut, 0, 64 } /* seqPointIndex: 64 */,
	{ 66819, 1, 96, 96, 13, 14, 202, kSequencePointKind_Normal, 0, 65 } /* seqPointIndex: 65 */,
	{ 66819, 1, 97, 97, 17, 41, 203, kSequencePointKind_Normal, 0, 66 } /* seqPointIndex: 66 */,
	{ 66819, 1, 98, 98, 17, 86, 211, kSequencePointKind_Normal, 0, 67 } /* seqPointIndex: 67 */,
	{ 66819, 1, 98, 98, 17, 86, 230, kSequencePointKind_StepOut, 0, 68 } /* seqPointIndex: 68 */,
	{ 66819, 1, 100, 100, 9, 10, 239, kSequencePointKind_Normal, 0, 69 } /* seqPointIndex: 69 */,
	{ 66821, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 70 } /* seqPointIndex: 70 */,
	{ 66821, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 71 } /* seqPointIndex: 71 */,
	{ 66821, 1, 126, 126, 9, 10, 0, kSequencePointKind_Normal, 0, 72 } /* seqPointIndex: 72 */,
	{ 66821, 1, 128, 128, 13, 14, 1, kSequencePointKind_Normal, 0, 73 } /* seqPointIndex: 73 */,
	{ 66821, 1, 129, 129, 17, 38, 2, kSequencePointKind_Normal, 0, 74 } /* seqPointIndex: 74 */,
	{ 66821, 1, 131, 131, 17, 89, 18, kSequencePointKind_Normal, 0, 75 } /* seqPointIndex: 75 */,
	{ 66821, 1, 131, 131, 17, 89, 22, kSequencePointKind_StepOut, 0, 76 } /* seqPointIndex: 76 */,
	{ 66821, 1, 132, 132, 17, 89, 28, kSequencePointKind_Normal, 0, 77 } /* seqPointIndex: 77 */,
	{ 66821, 1, 132, 132, 17, 89, 32, kSequencePointKind_StepOut, 0, 78 } /* seqPointIndex: 78 */,
	{ 66821, 1, 133, 133, 17, 89, 38, kSequencePointKind_Normal, 0, 79 } /* seqPointIndex: 79 */,
	{ 66821, 1, 133, 133, 17, 89, 42, kSequencePointKind_StepOut, 0, 80 } /* seqPointIndex: 80 */,
	{ 66821, 1, 135, 135, 17, 34, 48, kSequencePointKind_Normal, 0, 81 } /* seqPointIndex: 81 */,
	{ 66821, 1, 135, 135, 0, 0, 56, kSequencePointKind_Normal, 0, 82 } /* seqPointIndex: 82 */,
	{ 66821, 1, 136, 136, 21, 68, 60, kSequencePointKind_Normal, 0, 83 } /* seqPointIndex: 83 */,
	{ 66821, 1, 136, 136, 21, 68, 72, kSequencePointKind_StepOut, 0, 84 } /* seqPointIndex: 84 */,
	{ 66821, 1, 136, 136, 0, 0, 78, kSequencePointKind_Normal, 0, 85 } /* seqPointIndex: 85 */,
	{ 66821, 1, 138, 138, 21, 68, 80, kSequencePointKind_Normal, 0, 86 } /* seqPointIndex: 86 */,
	{ 66821, 1, 138, 138, 21, 68, 92, kSequencePointKind_StepOut, 0, 87 } /* seqPointIndex: 87 */,
	{ 66821, 1, 140, 140, 17, 63, 98, kSequencePointKind_Normal, 0, 88 } /* seqPointIndex: 88 */,
	{ 66821, 1, 140, 140, 17, 63, 100, kSequencePointKind_StepOut, 0, 89 } /* seqPointIndex: 89 */,
	{ 66821, 1, 141, 141, 17, 63, 106, kSequencePointKind_Normal, 0, 90 } /* seqPointIndex: 90 */,
	{ 66821, 1, 141, 141, 17, 63, 108, kSequencePointKind_StepOut, 0, 91 } /* seqPointIndex: 91 */,
	{ 66821, 1, 142, 142, 17, 63, 114, kSequencePointKind_Normal, 0, 92 } /* seqPointIndex: 92 */,
	{ 66821, 1, 142, 142, 17, 63, 116, kSequencePointKind_StepOut, 0, 93 } /* seqPointIndex: 93 */,
	{ 66821, 1, 143, 143, 13, 14, 122, kSequencePointKind_Normal, 0, 94 } /* seqPointIndex: 94 */,
	{ 66821, 1, 144, 144, 9, 10, 123, kSequencePointKind_Normal, 0, 95 } /* seqPointIndex: 95 */,
	{ 66822, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 96 } /* seqPointIndex: 96 */,
	{ 66822, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 97 } /* seqPointIndex: 97 */,
	{ 66822, 1, 147, 147, 9, 10, 0, kSequencePointKind_Normal, 0, 98 } /* seqPointIndex: 98 */,
	{ 66822, 1, 148, 148, 18, 30, 1, kSequencePointKind_Normal, 0, 99 } /* seqPointIndex: 99 */,
	{ 66822, 1, 148, 148, 0, 0, 3, kSequencePointKind_Normal, 0, 100 } /* seqPointIndex: 100 */,
	{ 66822, 1, 149, 149, 13, 14, 8, kSequencePointKind_Normal, 0, 101 } /* seqPointIndex: 101 */,
	{ 66822, 1, 151, 151, 17, 18, 9, kSequencePointKind_Normal, 0, 102 } /* seqPointIndex: 102 */,
	{ 66822, 1, 152, 152, 26, 35, 10, kSequencePointKind_Normal, 0, 103 } /* seqPointIndex: 103 */,
	{ 66822, 1, 152, 152, 0, 0, 12, kSequencePointKind_Normal, 0, 104 } /* seqPointIndex: 104 */,
	{ 66822, 1, 153, 153, 21, 22, 17, kSequencePointKind_Normal, 0, 105 } /* seqPointIndex: 105 */,
	{ 66822, 1, 155, 155, 25, 102, 18, kSequencePointKind_Normal, 0, 106 } /* seqPointIndex: 106 */,
	{ 66822, 1, 155, 155, 25, 102, 51, kSequencePointKind_StepOut, 0, 107 } /* seqPointIndex: 107 */,
	{ 66822, 1, 156, 156, 25, 102, 57, kSequencePointKind_Normal, 0, 108 } /* seqPointIndex: 108 */,
	{ 66822, 1, 156, 156, 25, 102, 91, kSequencePointKind_StepOut, 0, 109 } /* seqPointIndex: 109 */,
	{ 66822, 1, 157, 157, 25, 93, 97, kSequencePointKind_Normal, 0, 110 } /* seqPointIndex: 110 */,
	{ 66822, 1, 157, 157, 25, 93, 126, kSequencePointKind_StepOut, 0, 111 } /* seqPointIndex: 111 */,
	{ 66822, 1, 159, 159, 25, 94, 132, kSequencePointKind_Normal, 0, 112 } /* seqPointIndex: 112 */,
	{ 66822, 1, 159, 159, 25, 94, 141, kSequencePointKind_StepOut, 0, 113 } /* seqPointIndex: 113 */,
	{ 66822, 1, 161, 161, 25, 93, 147, kSequencePointKind_Normal, 0, 114 } /* seqPointIndex: 114 */,
	{ 66822, 1, 161, 161, 25, 93, 175, kSequencePointKind_StepOut, 0, 115 } /* seqPointIndex: 115 */,
	{ 66822, 1, 162, 162, 21, 22, 181, kSequencePointKind_Normal, 0, 116 } /* seqPointIndex: 116 */,
	{ 66822, 1, 152, 152, 45, 52, 182, kSequencePointKind_Normal, 0, 117 } /* seqPointIndex: 117 */,
	{ 66822, 1, 152, 152, 37, 43, 191, kSequencePointKind_Normal, 0, 118 } /* seqPointIndex: 118 */,
	{ 66822, 1, 152, 152, 0, 0, 201, kSequencePointKind_Normal, 0, 119 } /* seqPointIndex: 119 */,
	{ 66822, 1, 163, 163, 17, 18, 207, kSequencePointKind_Normal, 0, 120 } /* seqPointIndex: 120 */,
	{ 66822, 1, 164, 164, 13, 14, 208, kSequencePointKind_Normal, 0, 121 } /* seqPointIndex: 121 */,
	{ 66822, 1, 148, 148, 43, 53, 209, kSequencePointKind_Normal, 0, 122 } /* seqPointIndex: 122 */,
	{ 66822, 1, 148, 148, 32, 41, 218, kSequencePointKind_Normal, 0, 123 } /* seqPointIndex: 123 */,
	{ 66822, 1, 148, 148, 0, 0, 228, kSequencePointKind_Normal, 0, 124 } /* seqPointIndex: 124 */,
	{ 66822, 1, 165, 165, 9, 10, 234, kSequencePointKind_Normal, 0, 125 } /* seqPointIndex: 125 */,
	{ 66823, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 126 } /* seqPointIndex: 126 */,
	{ 66823, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 127 } /* seqPointIndex: 127 */,
	{ 66823, 1, 168, 168, 9, 10, 0, kSequencePointKind_Normal, 0, 128 } /* seqPointIndex: 128 */,
	{ 66823, 1, 170, 170, 13, 14, 1, kSequencePointKind_Normal, 0, 129 } /* seqPointIndex: 129 */,
	{ 66823, 1, 171, 171, 22, 34, 2, kSequencePointKind_Normal, 0, 130 } /* seqPointIndex: 130 */,
	{ 66823, 1, 171, 171, 0, 0, 4, kSequencePointKind_Normal, 0, 131 } /* seqPointIndex: 131 */,
	{ 66823, 1, 172, 172, 17, 18, 9, kSequencePointKind_Normal, 0, 132 } /* seqPointIndex: 132 */,
	{ 66823, 1, 173, 173, 26, 35, 10, kSequencePointKind_Normal, 0, 133 } /* seqPointIndex: 133 */,
	{ 66823, 1, 173, 173, 0, 0, 12, kSequencePointKind_Normal, 0, 134 } /* seqPointIndex: 134 */,
	{ 66823, 1, 174, 174, 21, 22, 17, kSequencePointKind_Normal, 0, 135 } /* seqPointIndex: 135 */,
	{ 66823, 1, 176, 176, 25, 102, 18, kSequencePointKind_Normal, 0, 136 } /* seqPointIndex: 136 */,
	{ 66823, 1, 176, 176, 25, 102, 52, kSequencePointKind_StepOut, 0, 137 } /* seqPointIndex: 137 */,
	{ 66823, 1, 177, 177, 25, 102, 58, kSequencePointKind_Normal, 0, 138 } /* seqPointIndex: 138 */,
	{ 66823, 1, 177, 177, 25, 102, 91, kSequencePointKind_StepOut, 0, 139 } /* seqPointIndex: 139 */,
	{ 66823, 1, 178, 178, 25, 93, 97, kSequencePointKind_Normal, 0, 140 } /* seqPointIndex: 140 */,
	{ 66823, 1, 178, 178, 25, 93, 126, kSequencePointKind_StepOut, 0, 141 } /* seqPointIndex: 141 */,
	{ 66823, 1, 180, 180, 25, 94, 132, kSequencePointKind_Normal, 0, 142 } /* seqPointIndex: 142 */,
	{ 66823, 1, 180, 180, 25, 94, 141, kSequencePointKind_StepOut, 0, 143 } /* seqPointIndex: 143 */,
	{ 66823, 1, 182, 182, 25, 93, 147, kSequencePointKind_Normal, 0, 144 } /* seqPointIndex: 144 */,
	{ 66823, 1, 182, 182, 25, 93, 175, kSequencePointKind_StepOut, 0, 145 } /* seqPointIndex: 145 */,
	{ 66823, 1, 183, 183, 21, 22, 181, kSequencePointKind_Normal, 0, 146 } /* seqPointIndex: 146 */,
	{ 66823, 1, 173, 173, 45, 52, 182, kSequencePointKind_Normal, 0, 147 } /* seqPointIndex: 147 */,
	{ 66823, 1, 173, 173, 37, 43, 191, kSequencePointKind_Normal, 0, 148 } /* seqPointIndex: 148 */,
	{ 66823, 1, 173, 173, 0, 0, 201, kSequencePointKind_Normal, 0, 149 } /* seqPointIndex: 149 */,
	{ 66823, 1, 184, 184, 17, 18, 207, kSequencePointKind_Normal, 0, 150 } /* seqPointIndex: 150 */,
	{ 66823, 1, 171, 171, 47, 57, 208, kSequencePointKind_Normal, 0, 151 } /* seqPointIndex: 151 */,
	{ 66823, 1, 171, 171, 36, 45, 217, kSequencePointKind_Normal, 0, 152 } /* seqPointIndex: 152 */,
	{ 66823, 1, 171, 171, 0, 0, 227, kSequencePointKind_Normal, 0, 153 } /* seqPointIndex: 153 */,
	{ 66823, 1, 185, 185, 13, 14, 233, kSequencePointKind_Normal, 0, 154 } /* seqPointIndex: 154 */,
	{ 66823, 1, 186, 186, 9, 10, 234, kSequencePointKind_Normal, 0, 155 } /* seqPointIndex: 155 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnity_Barracuda_BurstBLAS[];
Il2CppSequencePoint g_sequencePointsUnity_Barracuda_BurstBLAS[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[] = {
{ 66817, 14907, 6, 0, -1 },
};
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "/Users/flarb9/wkspaces/CalorieChecker/Library/PackageCache/com.unity.barracuda@2.0.0/Barracuda/Runtime/Plugins/Burst/BurstBLAS.cs", { 187, 85, 9, 44, 229, 79, 81, 146, 237, 84, 130, 160, 170, 31, 155, 160} }, //1 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[2] = 
{
	{ 7454, 1 },
	{ 7455, 1 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[15] = 
{
	{ 0, 7 },
	{ 0, 41 },
	{ 6, 35 },
	{ 0, 47 },
	{ 0, 242 },
	{ 7, 18 },
	{ 24, 38 },
	{ 0, 124 },
	{ 1, 123 },
	{ 0, 235 },
	{ 1, 234 },
	{ 10, 207 },
	{ 0, 235 },
	{ 2, 233 },
	{ 10, 207 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[8] = 
{
	{ 7, 0, 1 } /* System.Boolean Unity.Barracuda.BurstBLAS::IsNative() */,
	{ 41, 1, 2 } /* System.Boolean Unity.Barracuda.BurstBLAS::IsCurrentPlatformSupported() */,
	{ 47, 3, 1 } /* System.Void Unity.Barracuda.BurstBLAS::SGEMM(System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean) */,
	{ 242, 4, 3 } /* Unity.Jobs.JobHandle Unity.Barracuda.BurstBLAS::ScheduleSGEMM(Unity.Jobs.JobHandle,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean) */,
	{ 0, 0, 0 } /* System.Void Unity.Barracuda.BurstBLAS::.ctor() */,
	{ 124, 7, 2 } /* System.Void Unity.Barracuda.UnsafeMatrixBlockMultiplyUnrolled8xhJob::Execute(System.Int32) */,
	{ 235, 9, 3 } /* System.Void Unity.Barracuda.UnsafeMatrixBlockMultiplyUnrolled8xhJob::ExecutOverColB(System.Single*,System.Single*,System.Single*,System.Int32) */,
	{ 235, 12, 3 } /* System.Void Unity.Barracuda.UnsafeMatrixBlockMultiplyUnrolled8xhJob::ExecutOverRowA(System.Single*,System.Single*,System.Single*,System.Int32) */,
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
	156,
	(Il2CppSequencePoint*)g_sequencePointsUnity_Barracuda_BurstBLAS,
	1,
	(Il2CppCatchPoint*)g_catchPoints,
	2,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
