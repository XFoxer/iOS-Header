//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <voiced_tts/NSObject-Protocol.h>

@protocol AFAudioPowerProviding <NSObject>
- (void)didEndAccessPower;
- (_Bool)getAveragePower:(float *)arg1 andPeakPower:(float *)arg2;
- (void)willBeginAccessPower;
@end

