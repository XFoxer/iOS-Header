//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileTimer/NSObject-Protocol.h>

@class MTEnableAlarmIntent;

@protocol MTEnableAlarmIntentHandling <NSObject>
- (void)handleEnableAlarm:(MTEnableAlarmIntent *)arg1 completion:(void (^)(MTEnableAlarmIntentResponse *))arg2;

@optional
- (void)confirmEnableAlarm:(MTEnableAlarmIntent *)arg1 completion:(void (^)(MTEnableAlarmIntentResponse *))arg2;
@end

