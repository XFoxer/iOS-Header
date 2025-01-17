//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/NSCopying-Protocol.h>
#import <AppleMediaServices/NSMutableCopying-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue, OS_os_log;

@interface AMSLogConfig : NSObject <NSCopying, NSMutableCopying>
{
    NSString *_category;
    NSString *_subsystem;
    NSObject<OS_os_log> *_backingOSLogObject;
    NSObject<OS_dispatch_queue> *_propertyAccessQueue;
}

+ (_Bool)_debugLogsEnabled:(id)arg1;
+ (id)_createLogConfigWithBaseConfig:(id)arg1 subystem:(id)arg2 category:(id)arg3;
+ (id)_createLogConfigWithSubsystem:(id)arg1 category:(id)arg2;
+ (id)sharedMediaServiceOwnerConfig;
+ (id)sharedUserNotificationConfig;
+ (id)sharedRatingsProviderConfig;
+ (id)sharedPushNotificationConfig;
+ (id)sharedPurchaseConfig;
+ (id)sharedPrivacyConfig;
+ (id)sharedMediaConfig;
+ (id)sharedMarketingItemConfig;
+ (id)sharedKeychainConfig;
+ (id)sharedFollowUpConfig;
+ (id)sharedBagCacheConfig;
+ (id)sharedBagConfig;
+ (id)sharedAttestationConfig;
+ (id)sharedAnisetteConfig;
+ (id)sharedAccountsSyncPluginConfig;
+ (id)sharedAccountsStorefrontConfig;
+ (id)sharedAccountsOversizeConfig;
+ (id)sharedAccountsNotificationPluginConfig;
+ (id)sharedAccountsMultiUserConfig;
+ (id)sharedAccountsMigrationConfigOversize;
+ (id)sharedAccountsMigrationConfig;
+ (id)sharedAccountsLogoutConfig;
+ (id)sharedDeviceOffersConfig;
+ (id)sharedDataMigrationConfig;
+ (id)sharedAccountsCookiesConfig;
+ (id)sharedAccountsConfig;
+ (id)sharedAccountsDaemonConfig;
+ (id)sharedAccountsAuthenticationPluginConfig;
+ (id)sharedConfigOversize;
+ (id)sharedConfig;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *propertyAccessQueue; // @synthesize propertyAccessQueue=_propertyAccessQueue;
@property(retain, nonatomic) NSObject<OS_os_log> *backingOSLogObject; // @synthesize backingOSLogObject=_backingOSLogObject;
@property(copy, nonatomic) NSString *subsystem; // @synthesize subsystem=_subsystem;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property(readonly, nonatomic) NSObject<OS_os_log> *OSLogObject;
@property(readonly, nonatomic) _Bool debugLogsEnabled;
- (id)init;

@end

