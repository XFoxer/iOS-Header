//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CNTCCAppAuthorizationRecord : NSObject
{
    NSString *_bundleIdentifier;
    NSString *_localizedName;
    long long _recordType;
    long long _authorizationStatus;
}

+ (unsigned long long)authorizationRightFromAuthorizationStatus:(long long)arg1;
+ (long long)authorizationStatusFromAuthorizationRight:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long authorizationStatus; // @synthesize authorizationStatus=_authorizationStatus;
@property(readonly, nonatomic) long long recordType; // @synthesize recordType=_recordType;
@property(readonly, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)initWithBundleIdentifier:(id)arg1 localizedName:(id)arg2 recordType:(long long)arg3 authorizationStatus:(long long)arg4;
- (id)initWithTCCAuthorizationRecord:(id)arg1;

@end

