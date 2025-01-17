//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TrialServer/TRIExperimentBaseTask.h>

#import <TrialServer/TRIRetryableTask-Protocol.h>

@class NSArray, NSDate, NSString;
@protocol TRITaskQueueStateProviding;

@interface TRIDeactivateTreatmentTask : TRIExperimentBaseTask <TRIRetryableTask>
{
    _Bool _failOnUnrecognizedExperiment;
    int retryCount;
    NSDate *_startTime;
}

+ (_Bool)supportsSecureCoding;
+ (id)parseFromData:(id)arg1;
+ (id)taskWithExperimentId:(id)arg1 failOnUnrecognizedExperiment:(_Bool)arg2;
+ (id)taskWithExperimentId:(id)arg1 startTime:(id)arg2 failOnUnrecognizedExperiment:(_Bool)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool failOnUnrecognizedExperiment; // @synthesize failOnUnrecognizedExperiment=_failOnUnrecognizedExperiment;
@property(nonatomic) int retryCount; // @synthesize retryCount;
@property(copy, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (unsigned long long)requiredCapabilities;
- (id)serialize;
- (id)_asPersistedTask;
- (_Bool)_purgeRolloutLayerIfNecessaryWithRecord:(id)arg1 fromAppContainer:(id)arg2 paths:(id)arg3;
- (id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2;
@property(readonly, nonatomic) int taskType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NSArray *dependencies;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <TRITaskQueueStateProviding> stateProvider;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSArray *tags;
@property(readonly, nonatomic) NSString *taskName;

@end

