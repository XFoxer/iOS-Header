//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricMeasurement/NSObject-Protocol.h>

@class MXMProxyMetric;

@protocol MXMSProxyProbeProtocol_Internal <NSObject>
- (void)_sampleWithProxyMetric:(MXMProxyMetric *)arg1 timeout:(double)arg2 response:(void (^)(MXMSampleData *, unsigned long long, NSError *))arg3;
@end

