//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDCoreAnalyticsLogging-Protocol.h>

@class NSDictionary;

@interface HMDErrorAggregationLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging>
{
    NSDictionary *_coreAnalyticsSerializedEvent;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *coreAnalyticsSerializedEvent; // @synthesize coreAnalyticsSerializedEvent=_coreAnalyticsSerializedEvent;
- (id)serializedEvent;
- (id)eventName;
- (id)initWithEventGroupName:(id)arg1 errorString:(id)arg2 errorCount:(id)arg3;

@end

