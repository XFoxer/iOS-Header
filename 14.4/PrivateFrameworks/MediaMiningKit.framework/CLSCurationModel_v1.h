//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/CLSCurationModel-Protocol.h>

@class CLSAestheticsModel, CLSFaceModel, CLSJunkClassificationModel, CLSMediaAnalysisModel, CLSMediaPreAnalysisModel, NSString;
@protocol CLSAssetProcessedSignals;

@interface CLSCurationModel_v1 : NSObject <CLSCurationModel>
{
    id <CLSAssetProcessedSignals> _defaultProcessedSignals;
    CLSMediaPreAnalysisModel *_mediaPreAnalysisModel;
    CLSMediaAnalysisModel *_mediaAnalysisModel;
    CLSAestheticsModel *_aestheticsModel;
    CLSJunkClassificationModel *_junkClassificationModel;
    CLSFaceModel *_faceModel;
    double _faceSizeUpperLimit;
    double _faceSizeLowerLimit;
}

+ (short)uninterestingAudioClassifications;
+ (_Bool)maximumAllowedAnalysisVersionsAreMatchedBySpecification:(id)arg1;
+ (_Bool)minimumRequiredAnalysisVersionsAreMatchedBySpecification:(id)arg1;
+ (unsigned long long)maximumAllowedFaceAnalysisVersion;
+ (unsigned long long)maximumAllowedMediaAnalysisVersion;
+ (unsigned long long)maximumAllowedSceneAnalysisVersion;
+ (unsigned long long)minimumRequiredFaceAnalysisVersion;
+ (unsigned long long)minimumRequiredMediaAnalysisVersion;
+ (unsigned long long)minimumRequiredSceneAnalysisVersion;
- (void).cxx_destruct;
@property(readonly) double faceSizeLowerLimit; // @synthesize faceSizeLowerLimit=_faceSizeLowerLimit;
@property(readonly) double faceSizeUpperLimit; // @synthesize faceSizeUpperLimit=_faceSizeUpperLimit;
@property(readonly) CLSFaceModel *faceModel; // @synthesize faceModel=_faceModel;
@property(readonly) CLSJunkClassificationModel *junkClassificationModel; // @synthesize junkClassificationModel=_junkClassificationModel;
@property(readonly) CLSAestheticsModel *aestheticsModel; // @synthesize aestheticsModel=_aestheticsModel;
@property(readonly) CLSMediaAnalysisModel *mediaAnalysisModel; // @synthesize mediaAnalysisModel=_mediaAnalysisModel;
@property(readonly) CLSMediaPreAnalysisModel *mediaPreAnalysisModel; // @synthesize mediaPreAnalysisModel=_mediaPreAnalysisModel;
- (void)enumerateClassificationBasedSignalModelsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSignalModelsUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly) double minimumDurationForHighFramerateVideoToNotBeJunk;
@property(readonly) double minimumDurationForTimelapseVideoToNotBeJunk;
@property(readonly) double minimumDurationForVideoToNotBeJunk;
- (id)processedSignalsFromSignals:(id)arg1;
- (id)newProcessedSignals;
- (id)faceInformationSummaryWithFaces:(id)arg1 personUUIDs:(id)arg2 hiddenPersonLocalIdentifiers:(id)arg3;
- (_Bool)assetIsJunkWithSceneClassifications:(id)arg1 confidenceThresholdBySceneIdentifierForScenesPreventingJunking:(id)arg2 confidenceThresholdBySceneIdentifierForJunkingScenes:(id)arg3 confidenceThresholdBySceneIdentifierForScenesPreventingSceneBasedJunking:(id)arg4;
- (_Bool)isJunkWithSignal:(id)arg1 isReliable:(_Bool *)arg2;
- (_Bool)isUtilityForMemoriesWithAsset:(id)arg1;
- (_Bool)isUtilityWithAsset:(id)arg1;
- (_Bool)isUtilityForMemoriesForImageAsset:(id)arg1;
- (_Bool)isUtilityForImageAsset:(id)arg1;
- (_Bool)imageAssetIsJunkForMemoriesFromSceneAndJunkClassifications:(id)arg1 forKeyAsset:(_Bool)arg2;
- (_Bool)imageAssetIsJunkFromSceneAndJunkClassifications:(id)arg1;
- (_Bool)isJunkWithJunkClassification:(id)arg1;
- (_Bool)isTragicFailureWithImageAsset:(id)arg1;
- (_Bool)isBadQualityForImageKeyAssetWithAsset:(id)arg1;
- (_Bool)isUtilityForVideoAsset:(id)arg1;
- (_Bool)isShowcasingFoodWithSceneClassification:(id)arg1;
- (_Bool)isRegularGemWithAsset:(id)arg1;
- (_Bool)isShinyGemWithAsset:(id)arg1;
- (_Bool)isGoldWithAsset:(id)arg1;
- (double)scoreWithAsset:(id)arg1 inContext:(id)arg2;
- (float)interactionScoreWithAsset:(id)arg1;
- (_Bool)asset:(id)arg1 isAestheticallyAwesomeWithContext:(id)arg2;
- (_Bool)isAestheticallyPrettyGoodWithAsset:(id)arg1;
- (_Bool)isNonMemorableWithAsset:(id)arg1;
- (_Bool)isInterestingVideoWithAsset:(id)arg1;
- (short)interestingAudioClassificationsWithAsset:(id)arg1;
- (_Bool)hasInterestingAudioClassificationWithAsset:(id)arg1;
- (_Bool)isInterestingReframeWithAsset:(id)arg1;
- (_Bool)isInterestingHDRWithAsset:(id)arg1;
- (_Bool)isInterestingSDOFWithAsset:(id)arg1;
- (_Bool)isInterestingPanoramaWithAsset:(id)arg1;
- (_Bool)isInterestingLivePhotoWithAsset:(id)arg1;
- (_Bool)hasInterestingScenesWithAsset:(id)arg1;
- (_Bool)hasPoorResolutionWithAsset:(id)arg1;
- (_Bool)avoidIfPossibleForKeyAssetWithAsset:(id)arg1;
- (_Bool)isInhabitedWithAsset:(id)arg1;
- (_Bool)isBlurryWithAsset:(id)arg1;
- (id)initWithCurationModelSpecification:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

