//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDCameraIDSSessionReceiver, NSError;

@protocol HMDCameraIDSSessionReceiverDelegate <NSObject>
- (void)sessionReceiver:(HMDCameraIDSSessionReceiver *)arg1 didEndSession:(NSError *)arg2;
- (void)sessionReceiver:(HMDCameraIDSSessionReceiver *)arg1 didSetup:(NSError *)arg2;
@end

