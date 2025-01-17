//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthMenstrualCyclesDaemon/HDDataObserver-Protocol.h>
#import <HealthMenstrualCyclesDaemon/HDDatabaseProtectedDataObserver-Protocol.h>
#import <HealthMenstrualCyclesDaemon/HDFeatureAvailabilityExtensionObserver-Protocol.h>
#import <HealthMenstrualCyclesDaemon/HKMCSettingsManagerObserver-Protocol.h>

@class HAMenstrualAlgorithmsAnalysis, HDFeatureAvailabilityManager, HDProfile, HKMCAnalysis, HKMCSettingsManager, HKObserverSet, NSArray, NSString, _HKDelayedOperation;
@protocol OS_dispatch_queue;

@interface HDMCAnalysisManager : NSObject <HDDataObserver, HDDatabaseProtectedDataObserver, HKMCSettingsManagerObserver, HDFeatureAvailabilityExtensionObserver>
{
    HDProfile *_profile;
    HKObserverSet *_observers;
    HKObserverSet *_userInitiatedObservers;
    NSObject<OS_dispatch_queue> *_queue;
    _HKDelayedOperation *_analyzeOperation;
    HKMCAnalysis *_currentAnalysis;
    HKMCSettingsManager *_settingsManager;
    HDFeatureAvailabilityManager *_featureAvailabilityManager;
    _Bool _needsMaintenenceAnalysis;
    _Bool _maintenanceOperationQueued;
    HAMenstrualAlgorithmsAnalysis *_test_algorithmsAnalysis;
    NSArray *_test_algorithmsCycles;
}

- (void).cxx_destruct;
- (void)_test_setAlgorithmsCycles:(id)arg1;
- (void)_test_setAlgorithmsAnalysis:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 queue:(id)arg2 userInitiated:(_Bool)arg3;
- (id)_analysisWithAlgorithmsAnalysis:(id)arg1 algorithmsCycles:(id)arg2 recentSymptoms:(unsigned long long)arg3 recentBasalBodyTemperature:(id)arg4 lastLoggedDayIndex:(id)arg5 lastMenstrualFlowDayIndex:(id)arg6;
- (void)_setLocalizedTextForVersionMismatchFromOngoingCycleFactors:(id)arg1;
- (void)_forceDisableFertileWindowProjectionsFromOngoingCycleFactors:(id)arg1;
- (void)_forceDisablePeriodProjectionsFromOngoingCycleFactors:(id)arg1;
- (void)_checkToForceDisablePredictionsFromOngoingCycleFactors:(id)arg1;
- (id)_queue_analyzeNowWithError:(id *)arg1;
- (void)_runMaintenanceOperation;
- (void)_queue_enqueueMaintenanceOperationIfNeeded;
- (void)_queue_analyzeIfNeeded;
- (void)_queue_analyzeOperationDidExecute;
- (id)analyzeWithError:(id *)arg1;
@property(readonly, copy, nonatomic) HKMCAnalysis *currentAnalysis;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)arg1;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg1;
- (void)_calendarDayDidChange:(id)arg1;
- (void)_userCharacteristicsDidChange:(id)arg1;
- (void)settingsManagerDidUpdateAlgorithmVersionMismatchSettings:(id)arg1;
- (void)settingsManagerDidUpdateAnalysisSettings:(id)arg1;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)_startObserving;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (void)dealloc;
- (id)initWithProfile:(id)arg1 settingsManager:(id)arg2 featureAvailabilityManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

