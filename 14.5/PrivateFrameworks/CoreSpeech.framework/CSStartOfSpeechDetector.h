//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/EARCaesuraSilencePosteriorGeneratorDelegate-Protocol.h>

@class EARCaesuraSilencePosteriorGenerator, NSString;
@protocol CSStartOfSpeechDetectorDelegate, OS_dispatch_queue;

@interface CSStartOfSpeechDetector : NSObject <EARCaesuraSilencePosteriorGeneratorDelegate>
{
    _Bool _startDetected;
    float _prevAudioProcessedMs;
    id <CSStartOfSpeechDetectorDelegate> _delegate;
    EARCaesuraSilencePosteriorGenerator *_caesuraSPG;
    NSString *_configFile;
    unsigned long long _minSpeechFrames;
    unsigned long long _curSpeechFrames;
    unsigned long long _numLeadingFrames;
    unsigned long long _samplingRate;
    NSObject<OS_dispatch_queue> *_spgQueue;
    NSObject<OS_dispatch_queue> *_sosQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *sosQueue; // @synthesize sosQueue=_sosQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *spgQueue; // @synthesize spgQueue=_spgQueue;
@property(nonatomic) unsigned long long samplingRate; // @synthesize samplingRate=_samplingRate;
@property(nonatomic) float prevAudioProcessedMs; // @synthesize prevAudioProcessedMs=_prevAudioProcessedMs;
@property(nonatomic) unsigned long long numLeadingFrames; // @synthesize numLeadingFrames=_numLeadingFrames;
@property(nonatomic) unsigned long long curSpeechFrames; // @synthesize curSpeechFrames=_curSpeechFrames;
@property(nonatomic) unsigned long long minSpeechFrames; // @synthesize minSpeechFrames=_minSpeechFrames;
@property(nonatomic) _Bool startDetected; // @synthesize startDetected=_startDetected;
@property(retain, nonatomic) NSString *configFile; // @synthesize configFile=_configFile;
@property(retain, nonatomic) EARCaesuraSilencePosteriorGenerator *caesuraSPG; // @synthesize caesuraSPG=_caesuraSPG;
@property(nonatomic) __weak id <CSStartOfSpeechDetectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clientSilenceFeaturesAvailable:(id)arg1;
- (void)endAudio;
- (void)addAudio:(id)arg1 numSamples:(unsigned long long)arg2;
- (void)resetForNewRequest;
- (id)initWithConfig:(id)arg1 samplingRate:(unsigned long long)arg2 minSpeechFrames:(unsigned long long)arg3 numLeadingFrames:(unsigned long long)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

