//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSCharts/TSCH3DChartAllSceneObjectDelegate-Protocol.h>

@class NSString, TSCH3DSceneObject;

@interface TSCH3DRayPickPipelineDelegate : NSObject <TSCH3DChartAllSceneObjectDelegate>
{
    TSCH3DSceneObject *_currentSceneObject;
    tvec2_3b141483 _currentElement;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) tvec2_3b141483 currentElement; // @synthesize currentElement=_currentElement;
@property(retain, nonatomic) TSCH3DSceneObject *currentSceneObject; // @synthesize currentSceneObject=_currentSceneObject;
- (_Bool)willSubmitElement:(id)arg1 sceneObject:(id)arg2;
- (_Bool)willRenderElement:(id)arg1 sceneObject:(id)arg2;
- (void)didTransformElement:(id)arg1 sceneObject:(id)arg2;
- (_Bool)willUpdateElementEffectsStatesForElement:(id)arg1 sceneObject:(id)arg2;
- (struct ElementRenderPass)renderPassForElement:(id)arg1 sceneObject:(id)arg2;
- (_Bool)willProcessElement:(id)arg1 sceneObject:(id)arg2;
- (void)didProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (_Bool)willProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (void)updateExternalLabelAttribute:(id)arg1 sceneObject:(id)arg2 labelRenderInfo:(id)arg3;
- (_Bool)willSubmitLabelForSceneObject:(id)arg1 labelRenderInfo:(id)arg2;
- (_Bool)willSubmitLabelType:(int)arg1 boundsIndex:(long long)arg2 alignment:(unsigned long long)arg3 elementIndex:(unsigned long long)arg4 forSceneObject:(id)arg5;
- (void)labelsResourcesSessionWillEndForSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)labelsResourcesSessionWillBeginForSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)setOffset:(const tvec3_17f03ce0 *)arg1 labelType:(int)arg2 boundsIndex:(long long)arg3 forSceneObject:(id)arg4;
- (void)didSubmitSceneObject:(id)arg1 pipeline:(id)arg2;
- (_Bool)willSubmitSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)didGenerateShaderEffects:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (void)didGenerateShaderEffectsForSeriesAtIndex:(const tvec2_3b141483 *)arg1 effects:(id)arg2 sceneObject:(id)arg3 pipeline:(id)arg4;
- (_Bool)willProcessSeries:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (struct ElementRenderPass)renderPassForSceneObject:(id)arg1;
- (_Bool)renderPassDelayDisallowedForSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)didEndProcessingSceneObject:(id)arg1;
- (_Bool)willBeginProcessingSceneObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

