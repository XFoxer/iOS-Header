//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKDSPContext : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_secureElementID;
    NSString *_serverEndpointIdentifier;
    NSString *_cardholderName;
    NSString *_phoneNumber;
    NSString *_peerPaymentRecipientAddress;
    unsigned long long _eventFrequency;
    NSString *_primaryAppleAccountFirstName;
    NSString *_primaryAppleAccountLastName;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *primaryAppleAccountLastName; // @synthesize primaryAppleAccountLastName=_primaryAppleAccountLastName;
@property(copy, nonatomic) NSString *primaryAppleAccountFirstName; // @synthesize primaryAppleAccountFirstName=_primaryAppleAccountFirstName;
@property(nonatomic) unsigned long long eventFrequency; // @synthesize eventFrequency=_eventFrequency;
@property(copy, nonatomic) NSString *peerPaymentRecipientAddress; // @synthesize peerPaymentRecipientAddress=_peerPaymentRecipientAddress;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *cardholderName; // @synthesize cardholderName=_cardholderName;
@property(copy, nonatomic) NSString *serverEndpointIdentifier; // @synthesize serverEndpointIdentifier=_serverEndpointIdentifier;
@property(copy, nonatomic) NSString *secureElementID; // @synthesize secureElementID=_secureElementID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setPrimaryAppleAccount:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

