//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMMediaObjectDelegate-Protocol.h>

@class HMAccessorySettings, HMMediaProfile, HMMediaSession;

@protocol HMMediaProfileDelegate <HMMediaObjectDelegate>

@optional
- (void)mediaProfile:(HMMediaProfile *)arg1 didUpdateSettings:(HMAccessorySettings *)arg2;
- (void)mediaProfile:(HMMediaProfile *)arg1 didUpdateMediaSession:(HMMediaSession *)arg2;
@end

