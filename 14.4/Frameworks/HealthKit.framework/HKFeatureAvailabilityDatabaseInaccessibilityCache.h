//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/HKFeatureAvailabilityProviding-Protocol.h>

@class NSString;
@protocol HKFeatureAvailabilityCacheProviding, HKFeatureAvailabilityProviding, OS_os_log;

@interface HKFeatureAvailabilityDatabaseInaccessibilityCache : NSObject <HKFeatureAvailabilityProviding>
{
    id <HKFeatureAvailabilityProviding> _featureAvailabilityProviding;
    id <HKFeatureAvailabilityCacheProviding> _cacheProviding;
    NSObject<OS_os_log> *_loggingCategory;
}

- (void).cxx_destruct;
- (void)setCurrentOnboardingVersionCompletedForCountryCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetOnboardingWithCompletion:(CDUnknownBlockType)arg1;
- (void)registerObserver:(id)arg1 queue:(id)arg2;
- (void)unregisterObserver:(id)arg1;
- (id)isFeatureCapabilitySupportedOnDevice:(id)arg1 error:(id *)arg2;
- (id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id *)arg1;
- (id)onboardedCountryCodeSupportedStateForDevice:(id)arg1 error:(id *)arg2;
- (id)onboardedCountryCodeSupportedStateWithError:(id *)arg1;
- (id)canCompleteOnboardingForCountryCode:(id)arg1 device:(id)arg2 error:(id *)arg3;
- (id)canCompleteOnboardingForCountryCode:(id)arg1 error:(id *)arg2;
- (id)earliestDateLowestOnboardingVersionCompletedWithError:(id *)arg1;
- (void)isCurrentOnboardingVersionCompletedWithCompletion:(CDUnknownBlockType)arg1;
- (id)isCurrentOnboardingVersionCompletedWithError:(id *)arg1;
- (id)highestOnboardingVersionCompletedWithError:(id *)arg1;
@property(readonly, copy, nonatomic) NSString *featureIdentifier;
- (id)_processResult:(id)arg1 resultType:(Class)arg2 error:(id)arg3 cacheKey:(id)arg4;
- (id)_processNumber:(id)arg1 error:(id)arg2 cacheKey:(id)arg3;
- (void)_setCachedObject:(id)arg1 forKey:(id)arg2;
- (id)_cachedObjectForKey:(id)arg1;
- (id)_namespacedKeyForKey:(id)arg1;
- (id)description;
- (id)initWithFeatureAvailabilityProviding:(id)arg1 backedByCache:(id)arg2 loggingCategory:(id)arg3;

@end

