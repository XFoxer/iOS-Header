//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class HMCharacteristic, NSSet;
@protocol HUQuickControlContentCharacteristicWritingDelegate;

@protocol HUQuickControlContentCharacteristicWriting <NSObject>
@property(readonly, copy, nonatomic) NSSet *affectedCharacteristics;
@property(nonatomic) __weak id <HUQuickControlContentCharacteristicWritingDelegate> characteristicWritingDelegate;
- (id)overrideValueForCharacteristic:(HMCharacteristic *)arg1;
@end

