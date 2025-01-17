//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/TSCH3DRenderPipeline.h>

@class NSNumber, TSCH3DCamera, TSCH3DFramebuffer, TSCH3DScene, TSCH3DSceneRenderSetup;

@interface TSCH3DSceneRenderPipeline : TSCH3DRenderPipeline
{
    TSCH3DSceneRenderPipeline *_original;
    TSCH3DScene *_scene;
    TSCH3DFramebuffer *_framebuffer;
    TSCH3DSceneRenderSetup *_setup;
    TSCH3DCamera *_camera;
    NSNumber *_scale;
    NSNumber *_samples;
    NSNumber *_superSamples;
    NSNumber *_preserveFramebufferContent;
}

+ (id)pipelineWithProcessor:(id)arg1 session:(id)arg2 scene:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) TSCH3DSceneRenderPipeline *original; // @synthesize original=_original;
- (_Bool)run;
- (_Bool)render;
- (_Bool)renderWithFramebuffer:(id)arg1;
- (void)setupCamera:(id)arg1;
- (void)setupRendering;
- (_Bool)activateFramebuffer:(id)arg1;
- (void)clearFramebuffer;
- (tvec4_ac57c72d)backgroundClearColor;
@property(readonly, nonatomic) TSCH3DCamera *camera;
- (void)clearCamera;
- (id)concreteSetup;
@property(nonatomic) _Bool preserveFramebufferContent;
@property(readonly, nonatomic) float renderScale;
- (void)setObjectRenderMode:(int)arg1;
@property(nonatomic) float superSamples;
@property(nonatomic) float samples;
@property(nonatomic) float scale;
@property(retain, nonatomic) TSCH3DSceneRenderSetup *setup;
@property(retain, nonatomic) TSCH3DFramebuffer *framebuffer;
@property(retain, nonatomic) TSCH3DScene *scene;
- (id)session;
- (id)processor;
- (id)cloneWithRetargetProcessor:(id)arg1 scene:(id)arg2;
- (id)baseRecloneWithRetargetProcessor:(id)arg1 scene:(id)arg2;
- (id)recloneWithPipelineClass:(Class)arg1 retargetProcessor:(id)arg2 scene:(id)arg3;
- (id)cloneWithProcessor:(id)arg1 scene:(id)arg2;
- (id)baseRecloneWithProcessor:(id)arg1 scene:(id)arg2;
- (id)recloneWithPipelineClass:(Class)arg1 processor:(id)arg2 scene:(id)arg3;
- (id)initWithProcessor:(id)arg1 session:(id)arg2 scene:(id)arg3;
- (_Bool)shouldSkipLabelsIfHidden;
- (id)labelsMeshRendererForLabelsRenderer:(id)arg1;
- (Class)labelsMeshRendererClassForLabelsRenderer:(id)arg1;

@end

