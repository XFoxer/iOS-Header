//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, VCPAsset;

@interface VCPMovieAnalyzer : NSObject
{
    unsigned long long _requestedAnalyses;
    NSMutableDictionary *_analysis;
    NSMutableDictionary *_privateResults;
    VCPAsset *_asset;
    _Bool _supportConditionalAnalysis;
    NSDictionary *_existingAnalysis;
    _Bool _prepareLivePhotoScenes;
    _Bool _faceDominated;
    _Bool _allowStreaming;
    float _maxHighlightDuration;
    long long _status;
}

+ (id)analyzerWithVCPAsset:(id)arg1 withExistingAnalysis:(id)arg2 forAnalysisTypes:(unsigned long long)arg3;
+ (float)getMaximumHighlightInSec;
+ (_Bool)canAnalyzeUndegraded:(id)arg1 withResources:(id)arg2;
- (void).cxx_destruct;
@property(readonly) long long status; // @synthesize status=_status;
@property(nonatomic) _Bool faceDominated; // @synthesize faceDominated=_faceDominated;
@property(nonatomic) float maxHighlightDuration; // @synthesize maxHighlightDuration=_maxHighlightDuration;
@property(nonatomic) _Bool allowStreaming; // @synthesize allowStreaming=_allowStreaming;
- (int)generateKeyFrameResource:(id)arg1;
- (id)analyzeAsset:(CDUnknownBlockType)arg1 streamed:(_Bool *)arg2;
- (int)analyzeVideoTrack:(id)arg1 start:(CDStruct_1b6d18a9)arg2 forAnalysisTypes:(unsigned long long)arg3 cancel:(CDUnknownBlockType)arg4;
- (int)analyzeVideoSegment:(id)arg1 timerange:(const CDStruct_e83c9415 *)arg2 forAnalysisTypes:(unsigned long long)arg3 cancel:(CDUnknownBlockType)arg4;
- (id)createVideoAnalyzer:(id)arg1 withFrameStats:(id)arg2;
- (id)createDecoderForTrack:(id)arg1 timerange:(const CDStruct_e83c9415 *)arg2 forAnalysisTypes:(unsigned long long)arg3;
- (int)performMetadataAnalysisOnAsset:(id)arg1 withCancelBlock:(CDUnknownBlockType)arg2;
- (id)processExistingAnalysisForTimeRange:(CDStruct_e83c9415)arg1 analysisTypes:(unsigned long long *)arg2;
- (void)loadPropertiesForAsset:(id)arg1;
- (id)privateResults;
- (id)initWithPHAsset:(id)arg1 withExistingAnalysis:(id)arg2 forAnalysisTypes:(unsigned long long)arg3;
- (id)initWithPHAsset:(id)arg1 withPausedAnalysis:(id)arg2 forAnalysisTypes:(unsigned long long)arg3;
- (id)initWithVCPAsset:(id)arg1 withExistingAnalysis:(id)arg2 forAnalysisTypes:(unsigned long long)arg3;

@end

