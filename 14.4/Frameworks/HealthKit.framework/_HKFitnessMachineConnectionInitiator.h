//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/HKFitnessMachineConnectionInitiatorClientInterface-Protocol.h>
#import <HealthKit/_HKXPCExportable-Protocol.h>

@class HKTaskServerProxyProvider, NSString, NSUUID;
@protocol _HKFitnessMachineConnectionInitiatorDelegate;

@interface _HKFitnessMachineConnectionInitiator : NSObject <HKFitnessMachineConnectionInitiatorClientInterface, _HKXPCExportable>
{
    HKTaskServerProxyProvider *_proxyProvider;
    id <_HKFitnessMachineConnectionInitiatorDelegate> _delegate;
}

+ (id)taskIdentifier;
- (void).cxx_destruct;
@property(nonatomic) __weak id <_HKFitnessMachineConnectionInitiatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_simulateAccept;
- (void)_simulateTapWithFitnessMachineType:(unsigned long long)arg1;
- (void)clientRemote_encounteredError:(id)arg1;
- (void)clientRemote_workoutAppReady;
- (void)clientRemote_updatedFitnessMachineState:(unsigned long long)arg1 fitnessMachineSessionUUID:(id)arg2;
- (void)clientRemote_updatedFitnessMachine:(id)arg1 fitnessMachineSessionUUID:(id)arg2;
- (void)clientRemote_updatedConnectionState:(unsigned long long)arg1 fitnessMachineSessionUUID:(id)arg2;
- (void)_fetchProxyWithHandler:(CDUnknownBlockType)arg1;
- (void)forbidConnectionForFitnessMachineSessionUUID:(id)arg1;
- (void)permitConnectionForFitnessMachineSessionUUID:(id)arg1 activityType:(unsigned long long)arg2;
- (void)registerClient;
- (void)connectionInvalidated;
- (void)connectionInterrupted;
- (id)remoteInterface;
- (id)exportedInterface;
@property(readonly, nonatomic) NSUUID *UUID;
- (id)initWithHealthStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

