//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsDevice.h>

@class NSData, NSMutableArray;
@protocol MTLDepthStencilState, MTLRenderPipelineState;

@interface MTLGPUDebugDevice : MTLToolsDevice
{
    struct MetalBufferHeap bufferHeap;
    struct Options boundsCheckOptions;
    struct GPUDebugDeviceOptions deviceOptions;
    struct GPUDebugBufferDescriptorHeap globalBufferHeap;
    struct GPUDebugConstantBufferCache constantBufferCache;
    struct GlobalResidentBufferList globalICBBufferResidentList;
    NSData *_boundsCheckOptionsData;
    NSMutableArray *_argumentDescriptors;
    struct once_flag _deviceInitFlag;
    struct once_flag _icbPipelineInit;
    id <MTLRenderPipelineState> _icbInheritVertexPipelineState;
    id <MTLRenderPipelineState> _icbInheritNoneVertexPipelineState;
    id <MTLRenderPipelineState> _icbInheritBuffersVertexPipelineState;
    id <MTLDepthStencilState> _icbDepthStencilState;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)supportsDynamicLibraries;
- (_Bool)supportsBinaryFunctionPointers;
- (_Bool)supportsBinaryLibraries;
- (_Bool)supportsBinaryArchives;
- (_Bool)supportsFunctionPointers;
- (_Bool)supportsRaytracing;
- (_Bool)supportsBufferBoundsChecking;
- (_Bool)supportsGFXIndirectCommandBuffers;
- (_Bool)supportsCMPIndirectCommandBuffers;
- (_Bool)supportsArgumentBuffersTier2;
- (id)newArgumentEncoderWithLayout:(id)arg1;
- (id)newArgumentEncoderWithArguments:(id)arg1;
- (id)newArgumentEncoderWithArguments:(id)arg1 structType:(id *)arg2;
- (id)newHeapWithDescriptor:(id)arg1;
- (id)newBufferWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 gpuAddress:(unsigned long long)arg4 deallocator:(CDUnknownBlockType)arg5;
- (id)newBufferWithBytes:(const void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 gpuAddress:(unsigned long long)arg4;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 gpuAddress:(unsigned long long)arg3;
- (id)newBufferWithIOSurface:(struct __IOSurface *)arg1;
- (id)newBufferWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 deallocator:(CDUnknownBlockType)arg4;
- (id)newBufferWithBytes:(const void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)newBinaryLibraryWithOptions:(unsigned long long)arg1 url:(id)arg2 error:(id *)arg3;
- (id)newBinaryArchiveWithDescriptor:(id)arg1 error:(id *)arg2;
- (void)newLibraryWithSource:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)newLibraryWithURL:(id)arg1 error:(id *)arg2;
- (id)newLibraryWithData:(id)arg1 error:(id *)arg2;
- (id)newLibraryWithFile:(id)arg1 error:(id *)arg2;
- (id)newLibraryWithDAG:(id)arg1 functions:(id)arg2 error:(id *)arg3;
- (id)newDefaultLibraryWithBundle:(id)arg1 error:(id *)arg2;
- (id)newDefaultLibrary;
- (id)newLibraryWithCIFilters:(id)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;
- (id)newLibraryWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;
- (id)newLibraryWithCIFiltersForComputePipeline:(id)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;
@property(readonly, nonatomic) id <MTLDepthStencilState> ICB_DepthStencilState;
@property(readonly, nonatomic) id <MTLRenderPipelineState> ICB_Inherit_Buffers_VertexPipelineState;
@property(readonly, nonatomic) id <MTLRenderPipelineState> ICB_Inherit_None_VertexPipelineState;
@property(readonly, nonatomic) id <MTLRenderPipelineState> ICB_Inherit_PSO_VertexPipelineState;
- (id)newIndirectCommandBufferWithDescriptor:(id)arg1 maxCommandCount:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)newComputePipelineStateWithFunction:(id)arg1 error:(id *)arg2;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 error:(id *)arg2;
- (void)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)newRenderPipelineStateWithTileDescriptor:(id)arg1 error:(id *)arg2;
- (void)newRenderPipelineStateWithTileDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 error:(id *)arg2;
- (id)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1;
- (id)newCommandQueue;
- (id)newCommandQueueWithDescriptor:(id)arg1;
- (void)onComputePipelineCreated:(id)arg1;
- (void)onRenderPipelineCreated:(id)arg1;
- (id)unwrapAndModifyTileRenderPipelineDescriptor:(id)arg1 options:(unsigned long long *)arg2;
- (void)_modifyTileRenderPipelineDescriptor:(id)arg1;
- (id)unwrapAndModifyComputePipelineDescriptor:(id)arg1 options:(unsigned long long *)arg2;
- (void)_modifyComputePipelineDescriptor:(id)arg1;
- (id)unwrapAndModifyRenderPipelineDescriptor:(id)arg1 options:(unsigned long long *)arg2;
- (void)_modifyRenderPipelineDescriptor:(id)arg1;
- (id)_modifyPluginData:(id)arg1;
- (void)_modifyCompileOptions:(unsigned long long *)arg1;
- (id)newInternalBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)newStageArgumentBuffer;
- (id)newStageBufferArgumentEncoder;
- (void)dealloc;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;

@end

