//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSBatteryPowerMonitor : NSObject
{
    _Bool _isExternalPowerConnected;
}

+ (id)defaultMonitor;
@property(readonly, nonatomic) _Bool isExternalPowerConnected; // @synthesize isExternalPowerConnected=_isExternalPowerConnected;
- (double)batteryPercentRemaining;

@end

