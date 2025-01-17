//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDataObserver-Protocol.h>
#import <HealthDaemon/HDDatabaseProtectedDataObserver-Protocol.h>
#import <HealthDaemon/HDTaskServer-Protocol.h>
#import <HealthDaemon/HKQueryServerInterface-Protocol.h>

@class HDDaemonTransaction, HDDataCollectionAssertion, HDDatabaseTransactionContextStatistics, HDHealthStoreClient, HDProfile, HDQueryServerClientState, HKObjectType, HKQuantityType, HKQueryServerConfiguration, HKSampleType, NSArray, NSDictionary, NSSet, NSString, NSUUID, _HKFilter;
@protocol HDQueryServerDelegate, HKQueryClientInterface><NSXPCProxyCreating, OS_dispatch_queue;

@interface HDQueryServer : NSObject <HDDatabaseProtectedDataObserver, HKQueryServerInterface, HDDataObserver, HDTaskServer>
{
    NSDictionary *_baseDataEntityEncodingOptions;
    HKQueryServerConfiguration *_configuration;
    CDUnknownBlockType _queryDidFinishHandler;
    NSArray *_dataObservationAssertions;
    HDDataCollectionAssertion *_dataCollectionAssertion;
    HDDaemonTransaction *_activationTransaction;
    HDQueryServerClientState *_clientState;
    _Atomic int _queryState;
    _Bool _shouldTakeObservationAssertions;
    _Bool _observingData;
    _Bool _isCollectingData;
    _Atomic _Bool _shouldFinish;
    _Atomic _Bool _shouldPause;
    NSObject<OS_dispatch_queue> *_unitTestQueryQueue;
    HDDatabaseTransactionContextStatistics *_transactionStatistics;
    id <HDQueryServerDelegate> _delegate;
    NSUUID *_queryUUID;
    HDHealthStoreClient *_client;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queryQueue;
    double _collectionInterval;
    HKObjectType *_objectType;
    long long _dataCount;
    _HKFilter *_filter;
    CDUnknownBlockType _unitTest_queryServerSetShouldPauseHandler;
    CDUnknownBlockType _unitTest_queryServerWillChangeStateHandler;
}

+ (_Bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id *)arg3;
+ (Class)configurationClass;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (_Bool)supportsAnchorBasedAuthorization;
+ (Class)queryClass;
+ (id)builtInQueryServerClasses;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType unitTest_queryServerWillChangeStateHandler; // @synthesize unitTest_queryServerWillChangeStateHandler=_unitTest_queryServerWillChangeStateHandler;
@property(copy, nonatomic) CDUnknownBlockType unitTest_queryServerSetShouldPauseHandler; // @synthesize unitTest_queryServerSetShouldPauseHandler=_unitTest_queryServerSetShouldPauseHandler;
@property(readonly, nonatomic) _HKFilter *filter; // @synthesize filter=_filter;
@property(nonatomic) long long dataCount; // @synthesize dataCount=_dataCount;
@property(copy, nonatomic) HDQueryServerClientState *clientState; // @synthesize clientState=_clientState;
@property(readonly, copy, nonatomic) HKObjectType *objectType; // @synthesize objectType=_objectType;
@property(nonatomic) double collectionInterval; // @synthesize collectionInterval=_collectionInterval;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queryQueue; // @synthesize queryQueue=_queryQueue;
@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) HDHealthStoreClient *client; // @synthesize client=_client;
@property(readonly, copy, nonatomic) HKQueryServerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, copy, nonatomic) NSUUID *queryUUID; // @synthesize queryUUID=_queryUUID;
@property(nonatomic) __weak id <HDQueryServerDelegate> delegate; // @synthesize delegate=_delegate;
- (double)_queue_logThresholdHardwareFactor;
- (double)_queue_queryLogThreshold;
- (void)_queue_logQueryWithDuration:(double)arg1 statistics:(id)arg2;
@property(readonly, copy) NSString *description;
- (id)_queryStateString;
- (id)diagnosticDescription;
- (id)_predicateString;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)exportedInterface;
- (id)taskUUID;
- (_Bool)_shouldRegisterAsProtectedDataObserver;
- (_Bool)_shouldObserveDatabaseProtectedDataAvailability;
- (_Bool)_shouldExecuteWhenProtectedDataIsUnavailable;
- (_Bool)validateConfiguration:(id *)arg1;
- (id)_queue_collectionObserverState;
- (void)_queue_endObservingDataTypes;
- (void)_queue_beginObservingDataTypes;
- (void)_queue_didChangeStateFromPreviousState:(long long)arg1 state:(long long)arg2;
- (void)_queue_didDeactivate;
- (void)_queue_stop;
- (void)_queue_start;
- (_Bool)_shouldObserveOnPause;
- (_Bool)_shouldObserveAllSampleTypes;
- (id)_sampleTypeToObserveForUpdates;
- (_Bool)_shouldListenForUpdates;
- (id)newDataEntityEnumerator;
- (id)readAuthorizationStatusForType:(id)arg1 error:(id *)arg2;
- (CDUnknownBlockType)sampleAuthorizationFilter;
- (void)onQueue:(CDUnknownBlockType)arg1;
- (void)scheduleDatabaseAccessOnQueueWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) double activationTime;
@property(readonly) _Bool clientHasActiveWorkout;
- (void)setShouldPause:(_Bool)arg1;
@property(readonly, nonatomic) HKQuantityType *quantityType;
@property(readonly, nonatomic) HKSampleType *sampleType;
@property(readonly, copy, nonatomic) NSSet *objectTypes;
@property(readonly) long long queryState;
@property(readonly, nonatomic) id <HKQueryClientInterface><NSXPCProxyCreating> clientProxy;
- (void)remote_deactivateServer;
- (void)remote_startQueryWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isQueryingForHealthRecordsTypes;
- (void)_queue_notifyIfQueryingForHealthRecords;
- (void)_queue_setSampleTypeObservationAssertions:(id)arg1;
- (void)_queue_updateSampleTypeObservationAssertions;
- (void)_queue_stopDataCollection;
- (void)_queue_startDataCollection;
- (void)_queue_startDataCollectionIfNecessary;
- (id)_queue_sampleTypesForObservation;
- (void)_queue_setQueryState:(long long)arg1;
- (void)_queue_transitionToSuspendedState:(long long)arg1;
- (void)_queue_transitionToPaused;
- (void)_queue_transitionToFinished;
- (void)_queue_transitionToRunning;
- (_Bool)_shouldSuspendQuery;
- (_Bool)_shouldStopProcessingQuery;
- (void)clientStateDidChange:(id)arg1;
- (void)clientStateWillChange:(id)arg1;
- (void)schedulePause;
- (void)deactivateServerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_startQueryIfNecessary;
- (void)_scheduleStartQuery;
- (void)_queue_closeActivationTransactionIfNecessary;
- (void)setQueryDidFinishHandler:(CDUnknownBlockType)arg1;
- (void)_queue_activateServerWithClientState:(id)arg1 error:(id)arg2;
- (void)activateServerWithClientState:(id)arg1 error:(id)arg2;
- (_Bool)prepareToActivateServerWithError:(id *)arg1;
- (id)createDatabaseTransactionContext;
- (id)filteredSamplesForClientWithSamples:(id)arg1;
- (id)sanitizedSampleForQueryClient:(id)arg1;
- (void)dealloc;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

