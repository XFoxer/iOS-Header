//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SSRTriggerPhraseDetectorNDAPI, SSRTriggerPhraseDetectorQuasar;

@interface SSRTriggerPhraseDetector : NSObject
{
    float _recognizerScoreScaleFactor;
    SSRTriggerPhraseDetectorNDAPI *_detectorNDAPI;
    SSRTriggerPhraseDetectorQuasar *_detectorQuasar;
}

+ (id)filterVTAudioFiles:(id)arg1 withLocale:(id)arg2 withAsset:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) float recognizerScoreScaleFactor; // @synthesize recognizerScoreScaleFactor=_recognizerScoreScaleFactor;
@property(retain, nonatomic) SSRTriggerPhraseDetectorQuasar *detectorQuasar; // @synthesize detectorQuasar=_detectorQuasar;
@property(retain, nonatomic) SSRTriggerPhraseDetectorNDAPI *detectorNDAPI; // @synthesize detectorNDAPI=_detectorNDAPI;
- (void)computeTriggerConfidenceForAudio:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithLocale:(id)arg1 asset:(id)arg2;

@end

