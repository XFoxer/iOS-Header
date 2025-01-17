//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricMeasurement/MXMMetric.h>

@class MXMInstrument, NSNumber, NSString;

@interface MXMCPUMetric : MXMMetric
{
}

+ (id)instrumentThread;
+ (id)currentProcess;
- (_Bool)harvestData:(id *)arg1 error:(id *)arg2;
- (id)_constructProbe;
- (_Bool)_shouldConstructProbe;
@property(readonly, nonatomic) NSNumber *processIdentifier;
@property(readonly, nonatomic) NSString *processName;
- (id)initWithIdentifier:(id)arg1 filter:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithProcessName:(id)arg1;
- (id)initWithProcessIdentifier:(int)arg1;

// Remaining properties
@property(readonly, copy, nonatomic) MXMInstrument *instrument; // @dynamic instrument;

@end

