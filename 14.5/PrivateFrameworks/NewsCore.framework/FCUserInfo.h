//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCPrivateDataController.h>

#import <NewsCore/FCTagSettingsDelegate-Protocol.h>

@class FCMTWriterLock, FCTagSettings, NSDate, NSDictionary, NSNumber, NSString;

@interface FCUserInfo : FCPrivateDataController <FCTagSettingsDelegate>
{
    _Bool _useParsecResults;
    FCTagSettings *_tagSettings;
    NSDictionary *_readOnlyUserInfo;
    FCMTWriterLock *_userInfoLock;
}

+ (id)overrideFeldsparID;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (unsigned long long)localStoreVersion;
+ (id)localStoreFilename;
+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (_Bool)requiresHighPriorityFirstSync;
+ (_Bool)requiresBatchedSync;
+ (_Bool)requiresPushNotificationSupport;
+ (unsigned long long)progressivePersonalization;
+ (id)desiredKeys;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool useParsecResults; // @synthesize useParsecResults=_useParsecResults;
@property(retain, nonatomic) FCTagSettings *tagSettings; // @synthesize tagSettings=_tagSettings;
- (id)recordsForRestoringZoneName:(id)arg1;
- (_Bool)canHelpRestoreZoneName:(id)arg1;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2;
- (void)accessTokenRemovedForTagID:(id)arg1 userInitiated:(_Bool)arg2;
- (void)accessTokenDidChangeForTagID:(id)arg1;
- (void)addModifyTagSettingsCommandToCommandQueue:(id)arg1;
- (void)syncWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)loadLocalCachesFromStore;
@property(nonatomic) _Bool endOfAudioTrackNotificationsEnabled;
@property(nonatomic) _Bool newIssueNotificationsEnabled;
@property(nonatomic) _Bool marketingNotificationsEnabled;
@property(copy, nonatomic) NSString *canonicalLanguage;
@property(copy, nonatomic) NSString *editorialArticleVersion;
@property(readonly, nonatomic) NSDate *dateLastViewedSaved;
- (void)markSavedAsViewed;
- (void)maybeUpdateOnboardingVersion:(CDUnknownBlockType)arg1;
- (void)updateOnboardingVersion;
- (void)refreshOnboardingVersion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool mightNeedToUpdateOnboardingVersion;
@property(copy, nonatomic) NSDate *appLaunchUpsellLastSeenDate;
@property(copy, nonatomic) NSString *lastAppLaunchUpsellInstanceID;
@property(copy, nonatomic) NSNumber *upsellAppLaunchCount;
@property(copy, nonatomic) NSDate *bundleSubscriptionMeteredCountLastResetDate;
@property(copy, nonatomic) NSNumber *monthlyBundleSubscriptionMeteredCount;
@property(copy, nonatomic) NSDate *aLaCarteSubscriptionMeteredCountLastResetDate;
@property(copy, nonatomic) NSNumber *monthlyALaCarteSubscriptionMeteredCount;
@property(copy, nonatomic) NSDate *issuesNewsletterOptinLastSeenDate;
@property(copy, nonatomic) NSDate *personalizedNewsletterSignupLastSeenDate;
@property(copy, nonatomic) NSDate *newsletterSignupLastSeenDate;
@property(nonatomic) _Bool userHasCompletedFavoritesSetup;
@property(nonatomic) _Bool hasShownProgressivePersonalizationWelcomeBrick;
@property(readonly, nonatomic) unsigned long long progressivePersonalization;
@property(readonly, nonatomic) _Bool shouldShowDefaultForYou;
@property(copy, nonatomic) NSDate *dateLastOpened;
@property(copy, nonatomic) NSDate *userStartDate;
@property(copy, nonatomic) NSNumber *onboardingVersionNumber;
@property(copy, nonatomic) NSString *adsUserID;
@property(readonly, copy, nonatomic) NSString *notificationsUserID;
@property(copy, nonatomic) NSString *feldsparID;
- (void)prepareForUse;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

