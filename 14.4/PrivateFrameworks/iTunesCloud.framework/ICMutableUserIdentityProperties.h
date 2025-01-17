//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICUserIdentityProperties.h>

@class ICDelegateToken, NSDate, NSDictionary, NSNumber, NSString;

@interface ICMutableUserIdentityProperties : ICUserIdentityProperties
{
}

- (void)setICloudPersonID:(id)arg1;
- (void)setCloudBackupEnabled:(_Bool)arg1;
- (void)setPrivateListeningEnabledForHomeUsers:(id)arg1;
@property(copy, nonatomic) NSNumber *privateListeningEnabled; // @dynamic privateListeningEnabled;
@property(copy, nonatomic) NSDictionary *cloudLibraryStateReason; // @dynamic cloudLibraryStateReason;
- (void)setHomeUserIdentifiers:(id)arg1;
@property(copy, nonatomic) NSNumber *mergeToCloudLibraryPreference; // @dynamic mergeToCloudLibraryPreference;
@property(copy, nonatomic) NSDate *ageVerificationExpirationDate; // @dynamic ageVerificationExpirationDate;
@property(copy, nonatomic) NSString *username; // @dynamic username;
@property(nonatomic, getter=isSubscriptionStatusEnabled) _Bool subscriptionStatusEnabled; // @dynamic subscriptionStatusEnabled;
@property(copy, nonatomic) NSString *storefrontIdentifier; // @dynamic storefrontIdentifier;
@property(nonatomic, getter=isSandboxed) _Bool sandboxed; // @dynamic sandboxed;
@property(nonatomic, getter=isManagedAppleID) _Bool managedAppleID; // @dynamic managedAppleID;
@property(copy, nonatomic) NSString *lastName; // @dynamic lastName;
@property(copy, nonatomic) NSString *firstName; // @dynamic firstName;
@property(copy, nonatomic) NSNumber *DSID; // @dynamic DSID;
@property(copy, nonatomic) ICDelegateToken *delegateToken; // @dynamic delegateToken;
@property(nonatomic, getter=isDelegated) _Bool delegated; // @dynamic delegated;
@property(copy, nonatomic) NSString *carrierBundleDeviceIdentifier; // @dynamic carrierBundleDeviceIdentifier;
@property(copy, nonatomic) NSString *alternateDSID; // @dynamic alternateDSID;
- (void)replaceValuesWithValuesFromProperties:(id)arg1;
@property(nonatomic, getter=isActive) _Bool active; // @dynamic active;
@property(nonatomic, getter=isActiveLocker) _Bool activeLocker; // @dynamic activeLocker;

@end

