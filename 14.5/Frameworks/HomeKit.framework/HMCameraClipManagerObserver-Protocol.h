//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/NSObject-Protocol.h>

@class HMCameraClipManager, NSSet;

@protocol HMCameraClipManagerObserver <NSObject>

@optional
- (void)clipManager:(HMCameraClipManager *)arg1 didRemoveSignificantEventsWithUUIDs:(NSSet *)arg2;
- (void)clipManager:(HMCameraClipManager *)arg1 didUpdateSignificantEvents:(NSSet *)arg2;
- (void)clipManager:(HMCameraClipManager *)arg1 didRemoveClipsWithUUIDs:(NSSet *)arg2;
- (void)clipManager:(HMCameraClipManager *)arg1 didUpdateClips:(NSSet *)arg2;
@end

