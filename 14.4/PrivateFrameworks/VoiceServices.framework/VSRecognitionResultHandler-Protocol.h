//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceServices/NSObject-Protocol.h>

@class NSArray, VSRecognitionAction, VSRecognitionResult;

@protocol VSRecognitionResultHandler <NSObject>

@optional
- (VSRecognitionAction *)actionForRecognitionResults:(NSArray *)arg1;
- (VSRecognitionAction *)actionForRecognitionResult:(VSRecognitionResult *)arg1;
@end

