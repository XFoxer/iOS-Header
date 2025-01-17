//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RespiratoryHealthDaemon/NSObject-Protocol.h>

@class HLOxygenSaturationMeasurement, HLOxygenSaturationSession;

@protocol HLOxygenSaturationSessionDelegate <NSObject>
- (void)oxygenSaturationSession:(HLOxygenSaturationSession *)arg1 didEndForReason:(unsigned long long)arg2 measurement:(HLOxygenSaturationMeasurement *)arg3;
- (void)oxygenSaturationSession:(HLOxygenSaturationSession *)arg1 feedbackDidChange:(unsigned long long)arg2;
- (void)oxygenSaturationSession:(HLOxygenSaturationSession *)arg1 didBeginWithStartTime:(double)arg2 expectedDuration:(double)arg3;
@end

