//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class CSVolumeMonitor;

@protocol CSVolumeMonitorDelegate <NSObject>

@optional
- (void)CSVolumeMonitor:(CSVolumeMonitor *)arg1 didReceiveAlarmVolumeChanged:(float)arg2;
- (void)CSVolumeMonitor:(CSVolumeMonitor *)arg1 didReceiveMusicVolumeChanged:(float)arg2;
@end

