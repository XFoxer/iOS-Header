//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSSet, NSString;

@interface PKCloudStoreZone : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_containerName;
    NSString *_zoneName;
    NSString *_ownerName;
    long long _scope;
    NSString *_zoneSubscriptionIdentifier;
    NSSet *_shareParticipants;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSSet *shareParticipants; // @synthesize shareParticipants=_shareParticipants;
@property(retain, nonatomic) NSString *zoneSubscriptionIdentifier; // @synthesize zoneSubscriptionIdentifier=_zoneSubscriptionIdentifier;
@property(nonatomic) long long scope; // @synthesize scope=_scope;
@property(copy, nonatomic) NSString *ownerName; // @synthesize ownerName=_ownerName;
@property(copy, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(copy, nonatomic) NSString *containerName; // @synthesize containerName=_containerName;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)zoneSubscription;
- (id)recordZone;
- (id)shareParticipantWithLookupInfo:(id)arg1;
- (id)shareParticipantWithHandle:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithZoneID:(id)arg1 containerName:(id)arg2 scope:(long long)arg3;
- (id)initWithZoneID:(id)arg1 containerDatabase:(id)arg2;

@end

