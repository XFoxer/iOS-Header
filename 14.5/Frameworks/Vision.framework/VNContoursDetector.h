//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNDetector.h>

@class CIContext;

__attribute__((visibility("hidden")))
@interface VNContoursDetector : VNDetector
{
    CIContext *_ciContext;
    struct CGColorSpace *_colorSpace;
}

+ (id)configurationOptionKeysForDetectorKey;
- (void).cxx_destruct;
- (struct StandAloneBitString *)_runAutoTraceOnCVPixelBuffer:(struct __CVBuffer *)arg1 darkOnLight:(_Bool)arg2 inHierarchy:(_Bool)arg3 error:(id *)arg4;
- (struct StandAloneBitString *)_runAutoTraceOnImage:(id)arg1 darkOnLight:(_Bool)arg2 inHierarchy:(_Bool)arg3 error:(id *)arg4;
- (struct StandAloneBitString *)_runAutoTraceOnATBitmap:(const struct ATBitmap *)arg1 darkOnLight:(_Bool)arg2 inHierarchy:(_Bool)arg3 error:(id *)arg4;
- (id)_highContastMonoCIImageFromImageBuffer:(id)arg1 cropRect:(struct CGRect)arg2 options:(id)arg3 error:(id *)arg4;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (void)dealloc;
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;

@end

