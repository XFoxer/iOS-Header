//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDataCollector-Protocol.h>

@class HDDataCollectorConfiguration, HDProfile, HKHealthService, NSArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface HDBTLEHeartRateDataCollector : NSObject <HDDataCollector>
{
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    long long _state;
    HDDataCollectorConfiguration *_configuration;
    NSArray *_oneShotServices;
    NSMutableDictionary *_pendingSessions;
    HKHealthService *_connectedService;
    unsigned long long _connectedSessionIdentifier;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)canResumeCollectionFromLastSensorDatum;
- (Class)sensorDatumClassForAggregator:(id)arg1;
- (id)identifierForDataAggregator:(id)arg1;
- (id)sourceForDataAggregator:(id)arg1;
- (void)dataAggregator:(id)arg1 wantsCollectionWithConfiguration:(id)arg2;
- (void)beginCollectionForDataAggregator:(id)arg1 lastPersistedSensorDatum:(id)arg2;
- (void)_queue_handleCharacteristic:(id)arg1 device:(id)arg2;
- (void)_cancelSessionsWithIdentifiers:(id)arg1;
- (id)_heartRatePairingsWithError:(id *)arg1;
- (void)_queue_stateDidChange;
- (void)_queue_stopHeartRateCollection;
- (void)_queue_startHeartRateCollection;
- (_Bool)_queue_startHeartRateServices:(id)arg1;
- (void)startOneShotCollectionForService:(id)arg1;
- (void)_queue_service:(id)arg1 sessionDidDisconnect:(unsigned long long)arg2;
- (void)_queue_service:(id)arg1 sessionDidConnect:(unsigned long long)arg2;
- (void)_queue_service:(id)arg1 session:(unsigned long long)arg2 statusDidChange:(long long)arg3 finished:(_Bool)arg4 error:(id)arg5;
- (void)_queue_updateForCurrentConfiguration;
- (void)_queue_configurationChanged:(id)arg1;
- (id)_queue_currentState;
- (id)aggregator;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

