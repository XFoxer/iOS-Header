//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDictionary, NSSet, PKAccountUser;

@interface PKAccountUserCollection : NSObject <NSSecureCoding>
{
    NSDictionary *_accountUsersByAltDSID;
    _Bool _coOwner;
    NSSet *_accountUsers;
    PKAccountUser *_currentAccountUser;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isCoOwner) _Bool coOwner; // @synthesize coOwner=_coOwner;
@property(readonly, nonatomic) PKAccountUser *currentAccountUser; // @synthesize currentAccountUser=_currentAccountUser;
@property(readonly, nonatomic) NSSet *accountUsers; // @synthesize accountUsers=_accountUsers;
- (void)_updateWithAccountUsers:(id)arg1;
- (id)activeAccountUsers;
- (id)activeAccountUsersExcludingCurrentAccountUser;
- (id)accountUsersExcludingCurrentAccountUser;
- (id)accountUserForTransaction:(id)arg1;
- (id)accountUserWithAltDSID:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (unsigned long long)hash;
- (_Bool)_isEqualToAccountUserCollection:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccountUsers:(id)arg1;

@end

