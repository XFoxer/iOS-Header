//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SceneKit/SCNBufferStream-Protocol.h>

@class CAMetalLayer, MISSING_TYPE, MTLRenderPassDescriptor, NSMutableArray, NSMutableDictionary, NSString, SCNMTLMesh, SCNMTLMeshElement, SCNMTLRenderPipeline, SCNMTLResourceManager, SCNMTLShadable;
@protocol CAMetalDrawable, MTLBuffer, MTLCommandBuffer, MTLCommandQueue, MTLDepthStencilState, MTLDevice, MTLRenderCommandEncoder, MTLSamplerState, MTLTexture, OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface SCNMTLRenderContext : NSObject <SCNBufferStream>
{
    long long _currentFrameIndex;
    struct __C3DEngineStats *__engineStats;
    double _superSamplingFactor;
    struct SCNMatrix4 _screenTransform;
    long long _sampleCount;
    _Bool _needSuperSampling;
    SCNMTLResourceManager *_resourceManager;
    id <MTLDevice> _device;
    _Bool _isValidationEnabled;
    int _profile;
    unsigned int _features;
    struct __C3DEngineContext *_engineContext;
    unsigned int _wantsWideGamut:1;
    unsigned int _isOpaque:1;
    unsigned int _disableLinearRendering:1;
    unsigned int _enableARMode:1;
    unsigned int _shouldDelegateARCompositing:1;
    unsigned int _useFunctionConstants:1;
    unsigned int _reverseZ:1;
    id <MTLCommandQueue> _ownedCommandQueue;
    NSObject<OS_dispatch_semaphore> *_inFlightSemaphore;
    struct atomic<int> _pendingGPUFrameCount;
    id <MTLTexture> _textureTarget;
    CAMetalLayer *_layerTarget;
    id <CAMetalDrawable> _drawable;
    float _targetedFrameInterval;
    _Bool _shouldPresentAfterMinimumDuration;
    _Bool _shouldPresentWithTransaction;
    MTLRenderPassDescriptor *_currentRenderPassDescriptor;
    MTLRenderPassDescriptor *_originalRenderPassDescriptor;
    MISSING_TYPE *_renderSize;
    id <MTLCommandBuffer> _currentCommandBuffer;
    struct SCNMTLRenderCommandEncoder *_renderEncoder;
    id <MTLCommandBuffer> _resourceCommandBuffer;
    struct SCNMTLBlitCommandEncoder _resourceBlitEncoder;
    struct SCNMTLComputeCommandEncoder _resourceComputeEncoder;
    CDStruct_7e4e619b _renderPassParameters;
    CDStruct_21854d8c _currentStreamBufferIndices;
    struct SCNMTLBufferPool *_volatileBufferPools[3];
    struct SCNMTLBufferPool *_frameVolatileBufferPool;
    NSMutableArray *_volatileMeshes;
    NSMutableArray *_bufferPool;
    NSMutableArray *_usedVolatileMeshElements;
    NSMutableArray *_freeVolatileMeshElements;
    struct SCNMTLBufferPool *_constantBufferPools[3];
    struct SCNMTLBufferPool *_frameConstantBufferPool;
    struct SCNMTLTexturePool *_frameTexturePool;
    id <MTLDepthStencilState> _defaultDepthStencilState;
    id <MTLSamplerState> _defaultSamplerState;
    struct __C3DFXMetalProgram *_background2DProgram[3];
    struct __C3DFXMetalProgram *_backgroundCubeProgram[3];
    struct __C3DFXMetalProgram *_backgroundVideoProgram;
    struct __C3DFXMetalProgram *_backgroundVideoAlpha0Program;
    struct __C3DRasterizerStates *_backgroundRasterizerStates;
    double _initialTime;
    NSObject<OS_dispatch_queue> *_resourceQueue;
    NSObject<OS_dispatch_group> *_resourceGroup;
    id <MTLBuffer> _shadowKernelBuffer;
    struct {
        struct __C3DFXPassInstance *passInstance;
        struct __C3DLightingSystem *lightingSystem;
        struct __C3DDynamicBatchingSystem *dynamicBatchingSystem;
        struct __C3DFXPass *pass;
        void *renderGraphPass;
        _Bool passRequiresLighting;
        struct __C3DTransformTree *transformTree;
    } _processingContext;
    unsigned int _seed;
    struct SCNSceneBuffer _frameUniforms[6];
    CDStruct_deec94a8 _sceneUniforms;
    struct {
        id <MTLBuffer> buffer;
        unsigned long long offset;
        unsigned long long size;
        id <MTLTexture> shadowMaps[256];
        id <MTLTexture> textureMaps[256];
        id <MTLSamplerState> samplerStates[256];
    } _lightsData;
    struct {
        struct float4x4 modelTransform;
        struct float4x4 lastFrameModelTransform;
        struct float4x4 normalTransform;
        struct float4x4 modelViewTransform;
        struct float4x4 modelViewProjectionTransform;
        struct float2x3 boundingBox;
        struct float2x3 worldBoundingBox;
        struct __C3DNode *instanceNode;
        unsigned int flags;
        unsigned int *probeCacheIndex;
        unsigned int boneTransformSizeWritten;
    } _nodeUniforms;
    struct {
        CDStruct_c6b9131d currentLightingSet;
        id <MTLTexture> currentShadowMaps[8];
        id <MTLTexture> currentGoboMaps[8];
        struct unordered_map<unsigned long long, SCNMTLLightSetData, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, SCNMTLLightSetData>>> frameLightingSetDatas;
        unsigned long long currentLightingHashKey;
        struct {
            long long count;
            struct __C3DLight *lights[8];
            struct __C3DLightRuntimeData *lightsData[8];
        } currentLightingDesc;
        CDStruct_14d5dc5e currentLightingSpace;
        CDStruct_14d5dc5e currentLightingSpaceShadow;
        _Bool needLightingSpaceTransformation;
        struct SCNMTLClusterSystem clusterSystem;
        struct Info clusterInfo;
        id <MTLTexture> reflectionProbesTextureArray;
    } _lighting;
    struct Cache {
        struct __C3DRasterizerStates *rasterizerStates;
        struct __C3DMesh *mesh;
        SCNMTLMesh *metalMesh;
        struct __C3DMeshElement *meshElement;
        SCNMTLMeshElement *metalMeshElement;
        struct __C3DFXMetalProgram *program;
        struct __C3DMaterial *material;
        struct __C3DGeometry *geometry;
        SCNMTLShadable *metalShadable;
        struct __C3DEffectCommonProfile *commonProfile;
        struct __C3DBlendStates *blendStates;
        unsigned char colorBufferWriteMask;
        unsigned char topologyClass;
        struct __C3DNode *node;
        unsigned long long vertexDescriptorHash;
        unsigned char tessellationPipelineStateHash;
        SCNMTLRenderPipeline *renderPipeline;
    } _cache;
    struct {
        struct __C3DFXPass *debugLightMeshPass[7];
        struct __C3DFXPass *lightPasses[7];
        struct __C3DMesh *lightMeshes[7];
        _Bool resourcesAreReady;
    } _deferredRendering;
    struct {
        unsigned long long hash;
        SCNMTLRenderPipeline *pipeline;
    } _compositeRendering[2];
    SCNMTLRenderPipeline *_downSamplePipeline;
    struct {
        id <MTLTexture> backgroundTexture;
        id <MTLTexture> overlayTexture;
        id <MTLTexture> stencilDepthTexture;
    } _skCompositing;
    struct {
        unsigned long long pixelFormat;
        unsigned long long sampleCount;
        SCNMTLRenderPipeline *displayCubemapPipeline;
        SCNMTLRenderPipeline *displayTexture2DPipeline;
        SCNMTLRenderPipeline *displayDepth2DPipeline;
        SCNMTLRenderPipeline *displayDepthCubePipeline;
    } _debug;
    _Bool _showsAuthoringEnvironment;
    struct {
        _Bool collectEnabled;
        NSMutableDictionary *errors;
    } _compilationIssues;
    struct {
        unsigned int modelTransformBindingCount;
        unsigned int modelViewTransformBindingCount;
        unsigned int normalTransformBindingCount;
        unsigned int nodeOpacityBindingCount;
    } _counters;
    struct {
        unsigned long long passHash;
        struct __C3DMaterial *material;
    } _renderGraph;
    _Bool enablesDeferredShading;
    MTLRenderPassDescriptor *_clientRenderPassDescriptor;
    id <MTLRenderCommandEncoder> _clientRenderCommandEncoder;
    id <MTLCommandBuffer> _clientCommandBuffer;
    unsigned long long _debugOptions;
    double _contentScaleFactor;
    id <MTLCommandQueue> _clientCommandQueue;
    NSString *_generatedTexturePath;
}

+ (void)registerBindings;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *generatedTexturePath; // @synthesize generatedTexturePath=_generatedTexturePath;
@property(nonatomic) double superSamplingFactor; // @synthesize superSamplingFactor=_superSamplingFactor;
@property(retain, nonatomic) id <MTLCommandQueue> clientCommandQueue; // @synthesize clientCommandQueue=_clientCommandQueue;
@property(readonly, nonatomic) void *renderEncoder; // @synthesize renderEncoder=_renderEncoder;
@property(nonatomic) _Bool shouldPresentAfterMinimumDuration; // @synthesize shouldPresentAfterMinimumDuration=_shouldPresentAfterMinimumDuration;
@property(readonly, nonatomic) void *frameTexturePool; // @synthesize frameTexturePool=_frameTexturePool;
@property(readonly, nonatomic) SCNMTLResourceManager *resourceManager; // @synthesize resourceManager=_resourceManager;
@property(nonatomic) _Bool enablesDeferredShading; // @synthesize enablesDeferredShading;
@property(nonatomic) double contentScaleFactor; // @synthesize contentScaleFactor=_contentScaleFactor;
@property(nonatomic) unsigned long long debugOptions; // @synthesize debugOptions=_debugOptions;
@property(retain, nonatomic) id <MTLCommandBuffer> clientCommandBuffer; // @synthesize clientCommandBuffer=_clientCommandBuffer;
@property(retain, nonatomic) id <MTLRenderCommandEncoder> clientRenderCommandEncoder; // @synthesize clientRenderCommandEncoder=_clientRenderCommandEncoder;
@property(retain, nonatomic) MTLRenderPassDescriptor *clientRenderPassDescriptor; // @synthesize clientRenderPassDescriptor=_clientRenderPassDescriptor;
- (unsigned long long)cubeArrayTypeIfSupported;
- (struct __C3DMaterial *)getCurrentPassMaterial;
- (unsigned long long)getCurrentPassHash;
- (void)setCurrentPassMaterial:(struct __C3DMaterial *)arg1;
- (void)setCurrentPassHash:(unsigned long long)arg1;
- (void)writeBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void)endRenderCommandEncoding;
- (void)renderSKSceneWithRenderer:(id)arg1 overlay:(_Bool)arg2 atTime:(double)arg3;
- (MISSING_TYPE *)renderSize;
- (float)renderTime;
- (void)_drawFullScreenTexture:(id)arg1 over:(_Bool)arg2;
- (void)_drawShadowMaps;
- (void)_drawPBRTextures;
@property(readonly, nonatomic) id <MTLCommandBuffer> currentCommandBuffer;
@property(readonly, nonatomic) MTLRenderPassDescriptor *currentRenderPassDescriptor;
@property(readonly, nonatomic) id <MTLRenderCommandEncoder> currentRenderCommandEncoder;
- (void)endDeferredLighting;
- (void)renderLight:(struct __C3DNode *)arg1 lightType:(int)arg2 lightData:(struct __C3DLightRuntimeData *)arg3;
- (void)beginDeferredLighting;
- (void)drawFullScreenQuadForPass:(struct __C3DFXPass *)arg1;
- (void)resetVolatileMeshElements;
- (void)unmapVolatileMeshElement:(struct __C3DMeshElement *)arg1;
- (struct __C3DMeshElement *)createVolatileMeshElementOfType:(BOOL)arg1 primitiveCount:(long long)arg2 bytesPerIndex:(long long)arg3;
- (void)_recycleMTLBufferToPool:(id)arg1;
- (id)_newMTLBufferFromPoolWithLength:(unsigned long long)arg1;
- (void)resetVolatileMeshes;
- (void)unmapVolatileMesh:(struct __C3DMesh *)arg1 modifiedVerticesCount:(long long)arg2;
- (_Bool)mapVolatileMesh:(struct __C3DMesh *)arg1 verticesCount:(long long)arg2;
- (void)drawWireframeOverlayForElements:(CDStruct_d65e47c4 *)arg1 range:(CDStruct_912cb5d2)arg2 store:(struct __C3DRendererElementStore *)arg3 passInstance:(struct __C3DFXPassInstance *)arg4;
@property(readonly, nonatomic) NSMutableDictionary *compilationErrors;
@property(nonatomic) _Bool collectsCompilationErrors;
@property(nonatomic) _Bool showsAuthoringEnvironment;
- (void)drawRenderElement:(struct __C3DRendererElement *)arg1 withPass:(struct __C3DFXPass *)arg2;
- (void)_prepareMaterialTextures:(struct __C3DMaterial *)arg1;
- (void)stopProcessingRendererElements:(_Bool)arg1;
- (void)startProcessingRendererElementsWithEngineIterationContext:(CDStruct_65434d98 *)arg1;
- (void)processRendererElements:(CDStruct_d65e47c4 *)arg1 count:(unsigned int)arg2 engineIterationContext:(CDStruct_65434d98 *)arg3;
- (void)renderMesh:(struct __C3DMesh *)arg1 meshElement:(struct __C3DMeshElement *)arg2 withProgram:(struct __C3DFXMetalProgram *)arg3 engineContext:(struct __C3DEngineContext *)arg4 transform:(union C3DMatrix4x4)arg5 color:(const C3DColor4_0cad58d8 *)arg6 rasterizerStates:(struct __C3DRasterizerStates *)arg7 blendState:(struct __C3DBlendStates *)arg8 texture:(struct __C3DImage *)arg9 depthBias:(_Bool)arg10;
- (void)renderVideoBackground:(struct __C3DImageProxy *)arg1 engineContext:(struct __C3DEngineContext *)arg2 slot:(struct __C3DEffectSlot *)arg3;
- (void)renderBackground:(struct __C3DEffectSlot *)arg1 engineContext:(struct __C3DEngineContext *)arg2 passInstance:(struct __C3DFXPassInstance *)arg3;
- (float)_zFarForSkyboxRenderingProjectionMatrix:(const union C3DMatrix4x4 *)arg1 defaultZFar:(float)arg2;
- (void)_updateProjectionMatrixForOrthographicSkyboxRenderingIfNeeded:(union C3DMatrix4x4 *)arg1;
- (void)_drawPatchForMeshElement:(id)arg1 instanceCount:(unsigned long long)arg2;
- (void)_drawMeshElement:(id)arg1 instanceCount:(unsigned long long)arg2;
- (void)_setMeshBuffers:(id)arg1;
- (void)_setSceneBufferAtVertexIndex:(long long)arg1 fragmentIndex:(long long)arg2;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (void)setRasterizerStates:(struct __C3DRasterizerStates *)arg1;
- (void)_logLightingInformation;
- (id)radianceTextureForEffectSlot:(struct __C3DEffectSlot *)arg1;
- (id)irradianceTextureForEffectSlot:(struct __C3DEffectSlot *)arg1;
- (id)textureForEffectSlot:(struct __C3DEffectSlot *)arg1;
- (id)newRenderTargetWithDescription:(CDStruct_ace98575 *)arg1 size:(unsigned long long)arg2 arrayLength: /* Error: Ran out of types for this method. */;
- (void)endRenderPass;
- (void)beginRenderPass:(id)arg1 renderEncoder:(void *)arg2 parameters:(CDStruct_7e4e619b)arg3;
@property(readonly, nonatomic) struct SCNMTLComputeCommandEncoder *resourceComputeEncoder;
@property(readonly, nonatomic) struct SCNMTLBlitCommandEncoder *resourceBlitEncoder;
@property(readonly, nonatomic) id <MTLCommandBuffer> resourceCommandBuffer;
- (void)_createResourceCommandBufferIfNeeded;
- (void)_clearRenderCaches;
- (void *)_clusterInfo;
- (void)_setReflectionProbeArrayTexture:(id)arg1;
- (id)_reflectionProbeArrayTexture;
- (id)_finalRenderTexture;
@property(readonly, nonatomic) CAMetalLayer *layerTarget;
@property(readonly, nonatomic) id <MTLTexture> textureTarget;
- (void)endFrameWaitingUntilCompleted:(_Bool)arg1;
- (void)endFrameSceneSpecifics;
- (void)beginFrame:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *resourceQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *resourceGroup;
@property(readonly, nonatomic) long long currentFrameIndex;
- (struct __C3DEngineStats *)stats;
- (void)_clearUnusedBindingPoints;
@property(nonatomic) _Bool isOpaque;
@property(nonatomic) long long sampleCount;
@property(nonatomic) _Bool reverseZ;
@property(nonatomic) _Bool shouldDelegateARCompositing;
@property(nonatomic) _Bool enableARMode;
@property(nonatomic) _Bool disableLinearRendering;
@property(readonly, nonatomic) long long pendingGPUFrameCount;
@property(nonatomic) _Bool wantsWideGamut;
- (_Bool)supportsMTLFeatureSet:(unsigned long long)arg1;
@property(readonly, nonatomic) int profile;
@property(readonly, nonatomic) unsigned int features;
@property(nonatomic) struct SCNMatrix4 screenTransform;
@property(readonly, nonatomic) void *frameConstantBufferPool;
@property(nonatomic) long long preferredFramesPerSecond;
@property(readonly, nonatomic) id <MTLCommandQueue> commandQueue;
@property(readonly, nonatomic) struct __C3DEngineContext *engineContext;
@property(readonly, nonatomic) id <MTLDevice> device;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 engineContext:(struct __C3DEngineContext *)arg2;
- (void)_reduceStatsOfConstantBuffer:(id)arg1;
- (struct __C3DFXPass *)_createPassWithVertex:(id)arg1 fragment:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

