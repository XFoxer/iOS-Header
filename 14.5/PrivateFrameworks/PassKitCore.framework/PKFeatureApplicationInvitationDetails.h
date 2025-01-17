//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSPersonNameComponents, NSString;

@interface PKFeatureApplicationInvitationDetails : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_accountUserAltDSID;
    NSString *_originatorAltDSID;
    unsigned long long _accountUserAccessLevel;
    NSString *_originatorFirstName;
    NSString *_originatorLastName;
    NSString *_accountUserFirstName;
    NSString *_accountUserLastName;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *accountUserLastName; // @synthesize accountUserLastName=_accountUserLastName;
@property(copy, nonatomic) NSString *accountUserFirstName; // @synthesize accountUserFirstName=_accountUserFirstName;
@property(copy, nonatomic) NSString *originatorLastName; // @synthesize originatorLastName=_originatorLastName;
@property(copy, nonatomic) NSString *originatorFirstName; // @synthesize originatorFirstName=_originatorFirstName;
@property(nonatomic) unsigned long long accountUserAccessLevel; // @synthesize accountUserAccessLevel=_accountUserAccessLevel;
@property(copy, nonatomic) NSString *originatorAltDSID; // @synthesize originatorAltDSID=_originatorAltDSID;
@property(copy, nonatomic) NSString *accountUserAltDSID; // @synthesize accountUserAltDSID=_accountUserAltDSID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSPersonNameComponents *accountUserNameComponents;
@property(readonly, nonatomic) NSPersonNameComponents *originatorNameComponents;
- (id)jsonRepresentation;
- (id)initWithAccountUserAltDSID:(id)arg1 accessLevel:(unsigned long long)arg2;
- (id)initWithDictionary:(id)arg1;

@end

