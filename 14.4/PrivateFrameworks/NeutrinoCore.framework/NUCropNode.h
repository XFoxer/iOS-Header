//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUTransformNode.h>

@class NUImageTransformAffine;

@interface NUCropNode : NUTransformNode
{
    _Bool _resetCleanAperture;
    NUImageTransformAffine *_transform;
    CDStruct_996ac03c _cropRect;
}

- (void).cxx_destruct;
@property(readonly) _Bool resetCleanAperture; // @synthesize resetCleanAperture=_resetCleanAperture;
@property(retain) NUImageTransformAffine *transform; // @synthesize transform=_transform;
@property CDStruct_996ac03c cropRect; // @synthesize cropRect=_cropRect;
- (_Bool)canPropagateOriginalAuxiliaryData;
- (id)_evaluateVideoProperties:(out id *)arg1;
- (id)_evaluateImageGeometry:(out id *)arg1;
- (id)debugQuickLookObject;
- (_Bool)canPropagateOriginalLivePhotoMetadataTrack;
- (id)_evaluateImage:(out id *)arg1;
- (_Bool)scaledCropOrigin:(struct CGPoint *)arg1 error:(out id *)arg2;
- (struct CGPoint)scaleCropOriginForOriginalVideoSize:(struct CGSize)arg1 originalCleanAperture:(struct CGRect)arg2 renderScale:(double)arg3 inputExtent:(CDStruct_996ac03c)arg4;
- (id)_transformWithError:(out id *)arg1;
- (id)transformAffine;
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (id)initWithSettings:(id)arg1 inputs:(id)arg2;
- (id)initWithRect:(CDStruct_996ac03c)arg1 input:(id)arg2;
- (id)initWithRect:(CDStruct_996ac03c)arg1 input:(id)arg2 resetCleanAperture:(_Bool)arg3 settings:(id)arg4;

@end

