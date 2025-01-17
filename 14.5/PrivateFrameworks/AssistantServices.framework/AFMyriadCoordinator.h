//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AFMyriadAdvertisementContextManager, AFMyriadAdvertisementContextRecord, AFMyriadEmergencyCallPunchout, AFMyriadGoodnessScoreEvaluator, AFMyriadRecord, AFMyriadSession, AFNotifyStatePublisher, AFPowerAssertionManager, AFWatchdogTimer, NSData, NSDate, NSDateFormatter, NSMutableDictionary, NSString, NSUUID, SFDiagnostics;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AFMyriadCoordinator : NSObject
{
    unsigned long long _myriadState;
    unsigned long long _nextState;
    unsigned long long _previousState;
    NSData *_incomingAudioData;
    NSData *_previousAdvertisedData;
    NSMutableDictionary *_replies;
    NSMutableDictionary *_replyCounts;
    NSMutableDictionary *_repliesBeforeDecision;
    NSMutableDictionary *_previousTrumps;
    NSMutableDictionary *_incomingTrumps;
    NSMutableDictionary *_multipleContinuations;
    id _delegate;
    NSString *_deviceClassName;
    unsigned char _deviceClass;
    unsigned char _productType;
    NSString *_productTypeName;
    int _deviceAdjust;
    double _deviceDelay;
    double _deviceTrumpDelay;
    double _deviceVTEndtimeDistanceThreshold;
    double _deviceInEarDelay;
    double _deviceInEarInterval;
    unsigned char _deviceGroup;
    NSObject<OS_dispatch_queue> *_myriadWorkQueue;
    NSObject<OS_dispatch_queue> *_myriadAdvertisementContextQueue;
    NSString *_timerLabel;
    NSObject<OS_dispatch_source> *_timer;
    NSUUID *_eventToken;
    AFWatchdogTimer *_overallTimeout;
    AFPowerAssertionManager *_powerAssertionManager;
    struct __CFNotificationCenter *_center;
    AFMyriadRecord *_triggerRecord;
    long long _recordType;
    unsigned long long _voiceTriggerTime;
    float _delayTarget;
    float _advertInterval;
    int _nTimesContinued;
    int _nTimesExtended;
    BOOL _incomingAdjustment;
    AFMyriadRecord *_overrideMyriadRecord;
    int _slowdownMsecs;
    int _testInducedSlowdownMsecs;
    AFMyriadRecord *_maxSlowdownRecord;
    _Bool _BTLEReady;
    _Bool _inTask;
    _Bool _inSetupMode;
    _Bool _ducking;
    _Bool _stateMachineEncounteredError;
    _Bool _listenTimerIsRunning;
    _Bool _coordinationEnabled;
    _Bool _BLEActivityEnabled;
    _Bool _clientIsDirectActivating;
    _Bool _clientIsInEarActivation;
    _Bool _clientRecentlyLostElection;
    _Bool _clientLostDueToTrumping;
    _Bool _clientIsListeningAfterRecentWin;
    _Bool _clientIsWatchActivation;
    _Bool _clientIsWatchTrumpPromote;
    _Bool _clientIsRespondingToSlowdown;
    _Bool _clientDoneRespondingToSlowdown;
    _Bool _clientRespondingToCarPlay;
    _Bool _clientIsDeciding;
    int _constantGoodness;
    NSObject<OS_dispatch_source> *_timerSource;
    NSDateFormatter *_dateFormat;
    NSUUID *_designatedSelfID;
    NSDate *_triggerTime;
    int _nDeltaTs;
    AFMyriadEmergencyCallPunchout *_callPunchout;
    unsigned long long _lastDecisionTime;
    _Bool _lastDecision;
    unsigned short _lastPHash;
    double _lastEmergencyAttempt;
    _Bool _wasEmergency;
    _Bool _suppressLateTrigger;
    SFDiagnostics *_sfdiagnostics;
    AFWatchdogTimer *_sfDiagnosticsTimer;
    struct {
        _Bool didRequestForBTLEScan;
        _Bool didRequestForBTLEAdvertisement;
    } _heySiriBTLEState;
    struct {
        NSObject<OS_dispatch_source> *waitTimer;
        CDUnknownBlockType waitBlock;
        _Bool isWaitTimerSuspended;
    } _wiproxReadinessTimer;
    struct {
        NSDate *advertTriggerAdvStartTime;
        NSDate *advertTriggerEndTime;
    } _advTiming;
    AFMyriadAdvertisementContextManager *_advContextManager;
    AFMyriadAdvertisementContextRecord *_contextRecord;
    AFMyriadGoodnessScoreEvaluator *_goodnessScoreEvaluator;
    AFMyriadSession *_myriadSession;
    AFNotifyStatePublisher *_electionBeginPublisher;
    AFNotifyStatePublisher *_electionWinPublisher;
    AFNotifyStatePublisher *_electionLossPublisher;
    AFNotifyStatePublisher *_electionRepostWinDecisionPublisher;
    unsigned long long _electionPublisherState;
}

+ (void)clearCurrentCoordinator;
+ (void)didChangeDefaults;
+ (id)currentCoordinator;
- (void).cxx_destruct;
- (void)resetMyriadCoordinator:(CDUnknownBlockType)arg1;
- (void)myriadSession:(CDUnknownBlockType)arg1;
- (id)stateAsString:(unsigned long long)arg1;
- (void)updateRepliesWith:(id)arg1 id:(id)arg2 data:(id)arg3;
- (unsigned char)deviceGroup;
- (unsigned char)deviceClass;
- (void)setupActionWindows;
- (float)deviceTrumpDelay;
- (void)startAdvertisingEmergencySignal;
- (void)startListeningToEmergencySignal;
- (void)injectAdvertisementForTesting:(id)arg1 forDevice:(id)arg2;
- (void)_signalEmergencyCallHandled;
- (void)_leaveBLEDiagnosticMode;
- (void)_enterBLEDiagnosticMode;
- (void)_waitWiProxAndExecute:(CDUnknownBlockType)arg1;
- (void)waitWiProx:(long long)arg1 andExecute:(CDUnknownBlockType)arg2;
- (void)_waitWiProx:(long long)arg1 andExecute:(CDUnknownBlockType)arg2;
- (void)_createWaitWiProxTimer:(long long)arg1 waitBlock:(CDUnknownBlockType)arg2;
- (void)_clearWiProxReadinessTimer;
- (void)_suspendWiProxReadinessTimer;
- (void)_resumeWiProxReadinessTimer;
- (void)_initializeWiProxReadinessTimer;
- (void)_ageWedgeFilter;
- (_Bool)_testAndUpdateWedgeFilter:(id)arg1;
- (unsigned long long)_nextElectionPublisherState;
- (void)notifyCurrentDecisionResult;
- (void)_updateRepliesWith:(id)arg1 id:(id)arg2 data:(id)arg3;
- (_Bool)_inTaskTriggerWasTooSoon;
- (id)_sortedReplies:(id)arg1;
- (id)_sortedReplies;
- (_Bool)_isAPhone:(unsigned char)arg1;
- (_Bool)_shouldHandleEmergency;
- (_Bool)_shouldContinueFor:(id)arg1;
- (id)emptyRecord;
- (id)slowdownRecord:(unsigned short)arg1;
- (id)responseObject:(unsigned short)arg1;
- (id)emergencyHandledRecord;
- (id)emergencyRecord;
- (id)continuationRecord;
- (id)lateSuppressionRecord;
- (id)directTriggerRecord;
- (id)_phsSetupRecord;
- (id)voiceTriggerRecord;
- (void)_advertiseWith:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3 thenExecute:(CDUnknownBlockType)arg4;
- (void)advertiseWith:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3;
- (void)advertiseWith:(id)arg1;
- (void)_startAdvertising:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3;
- (void)startAdvertising:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3;
- (void)_advertiseIndefinite:(id)arg1;
- (void)_advertise:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3 andMoveTo:(unsigned long long)arg4;
- (void)_advertise:(id)arg1 andMoveTo:(unsigned long long)arg2;
- (void)_advertiseSuppressTriggerInOutput;
- (_Bool)_okayToSuppressOnOutput;
- (void)_advertiseSlowdown;
- (void)_advertiseTrigger;
- (void)_resetAdvertisementTimings;
- (void)setupAdvIntervalsInDelay:(float *)arg1 interval:(float *)arg2 withSlowdown:(int)arg3;
- (void)_duringNextWindowEnterState:(unsigned long long)arg1;
- (void)_duringNextWindowExecute:(CDUnknownBlockType)arg1;
- (void)_adjustActionWindowsFromSlowdown:(int)arg1;
- (void)_resetActionWindows;
- (void)_setupActionWindows;
- (void)_resetAudioData;
- (void)_pushMyriadAdvertisementContextToContextCollectorWithAdvertisementInterval:(double)arg1 advertisementDelay:(double)arg2;
- (void)_suppressDeviceIfNeededWithVoiceTriggerEndTime:(double)arg1 adverisementDispatchTime:(double)arg2;
- (id)_testAndFilterAdvertisementsFromContextCollector:(id)arg1 voiceTriggerEndTime:(double)arg2 advertisementDispatchTime:(double)arg3 advertisement:(id)arg4;
- (_Bool)_shouldUseContextCollector;
- (double)_contextFetchDelayForAdvertimentInterval:(double)arg1 advertisementDelay:(double)arg2;
- (void)_handleStateMachineErrorIfNeeded;
- (void)_unduck;
- (void)_stopAdvertisingAndListening;
- (void)stopListening:(CDUnknownBlockType)arg1;
- (void)stopListening;
- (void)_stopListening:(CDUnknownBlockType)arg1;
- (void)_stopAdvertising:(CDUnknownBlockType)arg1;
- (_Bool)_shouldStopListeningBeforeAdvertising;
- (void)startListening:(CDUnknownBlockType)arg1;
- (void)startListening;
- (void)_startListening:(CDUnknownBlockType)arg1;
- (void)resetReplies;
- (void)_enteringIntoState:(unsigned long long)arg1 fromState:(unsigned long long)arg2;
- (id)_stateAsString:(unsigned long long)arg1;
- (id)_stateAsString;
- (void)enterState:(unsigned long long)arg1;
- (void)_enterState:(unsigned long long)arg1;
- (void)_cancelOverallTimeout;
- (void)_setOverallTimeout;
- (void)_cancelTimer;
- (void)_startTimer:(id)arg1 for:(float)arg2 thenEnterState:(unsigned long long)arg3;
- (void)_startTimer:(id)arg1 for:(float)arg2 thenExecute:(CDUnknownBlockType)arg3;
- (void)_startListenTimer;
- (void)_createDispatchTimerForEvent:(id)arg1 toExecute:(CDUnknownBlockType)arg2;
- (void)_createDispatchTimerFor:(double)arg1 toExecute:(CDUnknownBlockType)arg2;
- (void)_createDispatchTimerWithTime:(unsigned long long)arg1 toExecute:(CDUnknownBlockType)arg2;
- (void)_initializeTimer;
- (void)_clearMyriadSession;
- (void)_createMyriadSessionIfRequired;
- (void)_addElectionAdvertisementDataToMyriadSession:(id)arg1;
- (id)_myriadSession;
- (void)_loseElection;
- (void)_winElection;
- (_Bool)_deviceShouldContinue:(id)arg1;
- (void)setupEnabled:(_Bool)arg1;
- (void)setInTask:(_Bool)arg1;
- (_Bool)inTask;
- (void)endTask;
- (void)endAdvertisingWithDeviceProhibitions:(id)arg1;
- (void)_endAdvertisingWithDeviceProhibitions:(id)arg1;
- (id)_endAdvertisingAnalyticsContext:(_Bool)arg1;
- (void)endAdvertising;
- (void)endAdvertising:(CDUnknownBlockType)arg1;
- (void)_endAdvertising:(CDUnknownBlockType)arg1;
- (void)endAdvertisingAfterDelay:(float)arg1;
- (void)startAdvertisingSlowdown:(unsigned short)arg1;
- (void)startResponseAdvertising:(unsigned short)arg1;
- (void)startAdvertisingFromAlertFiringVoiceTriggerWithContext:(id)arg1;
- (void)startAdvertisingFromAlertFiringVoiceTrigger;
- (void)startAdvertisingFromInTaskVoiceTrigger;
- (void)startAdvertisingFromInTaskVoiceTriggerWithContext:(id)arg1;
- (void)startAdvertisingFromInTaskTriggerWithContext:(id)arg1;
- (void)_startAdvertisingFromInTaskVoiceTrigger;
- (void)startAdvertisingEmergency;
- (void)startAdvertisingEmergencyHandled;
- (void)startAdvertisingFromCarPlayTrigger;
- (void)startAdvertisingFromInEarTrigger;
- (void)startAdvertisingFromOutgoingTriggerWithContext:(id)arg1;
- (void)startAdvertisingFromOutgoingTrigger;
- (void)startAdvertisingFromDirectTriggerWithContext:(id)arg1;
- (void)startAdvertisingFromDirectTrigger;
- (void)startWatchAdvertisingFromDirectTriggerWithContext:(id)arg1;
- (void)startWatchAdvertisingFromDirectTrigger;
- (void)startWatchAdvertisingFromVoiceTriggerWithContext:(id)arg1;
- (void)startWatchAdvertisingFromVoiceTrigger;
- (void)startAdvertisingFromVoiceTriggerWithGoodnessScoreContext:(id)arg1 withContext:(id)arg2;
- (void)startAdvertisingFromVoiceTriggerAdjusted:(BOOL)arg1 withContext:(id)arg2;
- (void)startAdvertisingFromVoiceTriggerAdjusted:(BOOL)arg1;
- (void)resetStateMachine;
- (void)_startAdvertisingFromVoiceTrigger;
- (void)startAdvertisingFromVoiceTriggerWithContext:(id)arg1;
- (void)startAdvertisingFromVoiceTrigger;
- (void)startAdvertisingForPHSSetupAfterDelay:(float)arg1 maxInterval:(float)arg2;
- (void)preheatWiProx;
- (void)_setMyraidAudioData:(id)arg1;
- (void)_initDeviceClassAndAdjustments;
- (void)_readDefaults;
- (void)readDefaults;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

