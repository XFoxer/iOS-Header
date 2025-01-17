//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RespiratoryHealth/HKFeatureAvailabilityProvidingObserver-Protocol.h>

@class NSUserDefaults;
@protocol HKFeatureAvailabilityProviding, HKRPUserDefaultsSyncProviding, OS_dispatch_queue;

@interface HKRPOxygenSaturationOnboardingCacher : NSObject <HKFeatureAvailabilityProvidingObserver>
{
    id <HKFeatureAvailabilityProviding> _featureAvailabilityProvider;
    NSUserDefaults *_userDefaults;
    id <HKRPUserDefaultsSyncProviding> _userDefaultsSyncProvider;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)_queue_featureAvailabilityDidChange;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)arg1;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg1;
- (void)dealloc;
- (id)initWithFeatureAvailabilityProviding:(id)arg1 userDefaults:(id)arg2 userDefaultsSyncProvider:(id)arg3 didStart:(CDUnknownBlockType)arg4;
- (id)initWithFeatureAvailabilityProviding:(id)arg1 userDefaults:(id)arg2 userDefaultsSyncProvider:(id)arg3;

@end

