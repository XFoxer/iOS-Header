//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioFormat, NSMutableArray, NSMutableDictionary, SNForwardPassAudioStreamAnalyzer;
@protocol OS_dispatch_queue;

@interface SNAudioStreamAnalyzer : NSObject
{
    NSMutableArray *_requests;
    AVAudioFormat *_currentFormat;
    NSObject<OS_dispatch_queue> *_analyzerQueue;
    SNForwardPassAudioStreamAnalyzer *_firstPassAnalyzer;
    NSMutableDictionary *_secondPassAnalyzers;
    struct unique_ptr<AudioRingBuffer, std::__1::default_delete<AudioRingBuffer>> _ringBuffer;
    struct unique_ptr<CABufferList, std::__1::default_delete<CABufferList>> _ringBufferWriteBufferList;
}

+ (id)secondPassRecordingPath;
+ (_Bool)shouldRecordSecondPass;
+ (void)deleteWAVAndTextFilesCreatedBeforeLastWeekInDirectory:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)sendErrorToAllRequests:(id)arg1;
- (id)detailedDescription;
- (void)writeDSPGraphDotFilesToDirectory:(id)arg1;
- (void)completeAnalysis;
- (void)_analyzeAudioBuffer:(id)arg1 atAudioFramePosition:(long long)arg2;
- (void)analyzeAudioBuffer:(id)arg1 atAudioFramePosition:(long long)arg2;
- (void)removeAllRequests;
- (void)_removeTwoPassRequest:(id)arg1;
- (void)_removeSinglePassRequest:(id)arg1;
- (void)removeRequestAsync:(id)arg1;
- (void)_removeRequest:(id)arg1;
- (void)removeRequest:(id)arg1;
- (void)handleEndSecondPassForRequest:(id)arg1;
- (void)handleBeginSecondPassForRequest:(id)arg1 secondPassController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 resultsHandler:(CDUnknownBlockType)arg4;
- (_Bool)_addTwoPassRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 resultsHandler:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (_Bool)_addSinglePassRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 resultsHandler:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (_Bool)_addRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 resultsHandler:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (_Bool)addRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 resultsHandler:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (_Bool)addRequest:(id)arg1 withObserver:(id)arg2 error:(id *)arg3;
- (id)initWithFormat:(id)arg1;

@end

