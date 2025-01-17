//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURenderJob.h>

@class CIRenderTask, NUCVPixelBuffer;
@protocol NUAuxiliaryImage;

@interface NUAuxiliaryImageRenderJob : NURenderJob
{
    unsigned int _pixelFormat;
    CIRenderTask *_renderTask;
    NUCVPixelBuffer *_cvBuffer;
    id <NUAuxiliaryImage> _auxiliaryImage;
    long long _auxiliaryImageType;
}

- (void).cxx_destruct;
@property long long auxiliaryImageType; // @synthesize auxiliaryImageType=_auxiliaryImageType;
@property(retain) id <NUAuxiliaryImage> auxiliaryImage; // @synthesize auxiliaryImage=_auxiliaryImage;
- (id)result;
- (void)cleanUp;
- (_Bool)complete:(out id *)arg1;
- (_Bool)render:(out id *)arg1;
- (_Bool)prepare:(out id *)arg1;
- (id)newRenderPipelineStateForEvaluationMode:(long long)arg1;
- (id)scalePolicy;
- (_Bool)wantsRenderScaleClampedToNativeScale;
- (_Bool)wantsRenderNodeCached;
- (_Bool)wantsPrepareNodeCached;
- (_Bool)wantsOutputImage;
- (_Bool)wantsOutputGeometry;

@end

