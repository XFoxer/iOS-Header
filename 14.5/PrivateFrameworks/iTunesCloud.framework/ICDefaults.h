//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSNumber, NSString, NSUserDefaults;

@interface ICDefaults : NSObject
{
    NSUserDefaults *_userDefaults;
    NSUserDefaults *_musicUserDefaults;
    NSUserDefaults *_internalDefaults;
}

+ (id)standardDefaults;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSUserDefaults *internalDefaults; // @synthesize internalDefaults=_internalDefaults;
- (void)_setOrRemoveObject:(id)arg1 forKey:(id)arg2;
- (_Bool)_shouldSpoofIPhoneRequestProperties;
- (id)_musicUserDefaults;
- (void)synchronize;
@property(readonly, nonatomic) _Bool allowLowAffinityRecommendations;
- (void)deleteAutomaticDownloadsKey;
@property(nonatomic) _Bool automaticDownloadsEnabled;
@property(readonly, nonatomic) _Bool shouldTreatInitialSagaImportAsFailed;
@property(readonly, nonatomic) _Bool shouldTreatSagaAddComputerCallAsFailed;
@property(readonly, nonatomic) _Bool shouldTreatSubscriptionStatusCheckAsIncomplete;
@property(readonly, nonatomic) _Bool shouldTreatSubscriptionStatusAsExpired;
@property(readonly, nonatomic) _Bool shouldReduceLibraryRecommendationsXPCInterval;
@property(readonly, nonatomic) _Bool shouldForceLibraryRecommendationAnalysis;
@property(readonly, nonatomic, getter=isLegacyStoreCacheBusterEnabled) _Bool legacyStoreCacheBusterEnabled;
@property(readonly, nonatomic, getter=isPrivacyAcknowledgementDisabledForMusic) _Bool privacyAcknowledgementDisabledForMusic;
@property(nonatomic, getter=isGrazingPathEnabled) _Bool grazingPathEnabled;
@property(nonatomic, getter=isExplicitContentAllowedForExpirationYear) _Bool explicitContentAllowedForExpirationYear;
@property(nonatomic, getter=isExplicitContentAllowedForCurrentYear) _Bool explicitContentAllowedForCurrentYear;
@property(copy, nonatomic) NSDate *ageVerificationExpirationDate;
@property(nonatomic) _Bool shouldRunAgeVerification;
@property(readonly, nonatomic) _Bool shouldForceiPhoneBehaviors;
@property(readonly, copy, nonatomic) NSNumber *networkTypeOverride;
@property(readonly, copy, nonatomic) NSString *productPlatformOverride;
@property(readonly, copy, nonatomic) NSString *productVersionOverride;
@property(readonly, copy, nonatomic) NSString *hardwarePlatformOverride;
@property(readonly, copy, nonatomic) NSNumber *fairPlayDeviceTypeOverride;
@property(readonly, copy, nonatomic) NSString *deviceModelOverride;
@property(readonly, copy, nonatomic) NSNumber *deviceClassOverride;
@property(readonly, nonatomic) _Bool bypassBagSanityChecks;
@property(nonatomic) _Bool ignoreExtendedCertificateValidation;
@property(copy, nonatomic) NSString *lastKnownHouseholdID;
@property(copy, nonatomic) NSDictionary *accountNotificationsShowInLibraryDictionary;
@property(copy, nonatomic) NSDictionary *lastKnownSubscriptionStatusBaseCacheKey;
@property(copy, nonatomic) NSDictionary *lastKnownLocalStoreAccountProperties;
@property(copy, nonatomic) NSDictionary *lastKnownUserAgeVerificationState;
@property(nonatomic) double lastAuthenticationDialogResponseTime;
@property(copy, nonatomic) NSDictionary *authServiceClientTokenCache;
@property(readonly, copy, nonatomic) NSNumber *authServiceClientTokenTimeToLive;
@property(copy, nonatomic) NSDate *lastAllowedInteractiveAuthenticationTime;
@property(copy, nonatomic) NSDictionary *lastCookieHeadersForRevokingMusicUserTokens;
@property(copy, nonatomic) NSNumber *lastActiveAccountDSID;
@property(copy, nonatomic) NSDictionary *mediaLibraryAccessApplicationIdentifiersWithTCCAcceptanceDates;
@property(copy, nonatomic) NSDictionary *pushNotificationState;
@property(copy, nonatomic) NSDictionary *cachedMusicUserTokens;
@property(copy, nonatomic) NSDictionary *cachedSubscriptionStatus;
@property(readonly, nonatomic) NSString *defaultStoreFront;
@property(copy, nonatomic) NSString *cloudMediaLibraryUID;
- (id)init;

@end

