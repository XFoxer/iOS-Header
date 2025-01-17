//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/NSCopying-Protocol.h>
#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface PPContactQuery : NSObject <NSSecureCoding, NSCopying>
{
    unsigned char _domain;
    _Bool _onlyQueryMostRelevantContacts;
    NSArray *_matchingIdentifiers;
    NSString *_matchingName;
    NSString *_matchingEmail;
    NSString *_matchingPhone;
    NSString *_matchingPostalAddress;
    NSString *_targetBundleIdentifier;
    NSString *_context;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool onlyQueryMostRelevantContacts; // @synthesize onlyQueryMostRelevantContacts=_onlyQueryMostRelevantContacts;
@property(retain, nonatomic) NSString *context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *targetBundleIdentifier; // @synthesize targetBundleIdentifier=_targetBundleIdentifier;
@property(nonatomic) unsigned char domain; // @synthesize domain=_domain;
@property(retain, nonatomic) NSString *matchingPostalAddress; // @synthesize matchingPostalAddress=_matchingPostalAddress;
@property(retain, nonatomic) NSString *matchingPhone; // @synthesize matchingPhone=_matchingPhone;
@property(retain, nonatomic) NSString *matchingEmail; // @synthesize matchingEmail=_matchingEmail;
@property(retain, nonatomic) NSString *matchingName; // @synthesize matchingName=_matchingName;
@property(retain, nonatomic) NSArray *matchingIdentifiers; // @synthesize matchingIdentifiers=_matchingIdentifiers;
- (_Bool)isEqualToContactQuery:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasNoConstraints;
- (id)description;

@end

