//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/NSObject-Protocol.h>

@class AVSpeechSynthesizer, AVSpeechUtterance;

@protocol AVSpeechSynthesizerDelegate <NSObject>

@optional
- (void)speechSynthesizer:(AVSpeechSynthesizer *)arg1 willSpeakRangeOfSpeechString:(struct _NSRange)arg2 utterance:(AVSpeechUtterance *)arg3;
- (void)speechSynthesizer:(AVSpeechSynthesizer *)arg1 didCancelSpeechUtterance:(AVSpeechUtterance *)arg2;
- (void)speechSynthesizer:(AVSpeechSynthesizer *)arg1 didContinueSpeechUtterance:(AVSpeechUtterance *)arg2;
- (void)speechSynthesizer:(AVSpeechSynthesizer *)arg1 didPauseSpeechUtterance:(AVSpeechUtterance *)arg2;
- (void)speechSynthesizer:(AVSpeechSynthesizer *)arg1 didFinishSpeechUtterance:(AVSpeechUtterance *)arg2;
- (void)speechSynthesizer:(AVSpeechSynthesizer *)arg1 didStartSpeechUtterance:(AVSpeechUtterance *)arg2;
@end

