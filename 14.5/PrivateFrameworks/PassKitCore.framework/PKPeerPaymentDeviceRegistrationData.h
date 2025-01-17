//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface PKPeerPaymentDeviceRegistrationData : NSObject <NSSecureCoding>
{
    _Bool _devSigned;
    NSString *_authorizationHeader;
    NSString *_signedAuthToken;
    NSDictionary *_enrollmentData;
    NSData *_signedEnrollmentDataSignature;
    NSString *_companionSerialNumber;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *companionSerialNumber; // @synthesize companionSerialNumber=_companionSerialNumber;
@property(nonatomic) _Bool devSigned; // @synthesize devSigned=_devSigned;
@property(copy, nonatomic) NSData *signedEnrollmentDataSignature; // @synthesize signedEnrollmentDataSignature=_signedEnrollmentDataSignature;
@property(copy, nonatomic) NSDictionary *enrollmentData; // @synthesize enrollmentData=_enrollmentData;
@property(copy, nonatomic) NSString *signedAuthToken; // @synthesize signedAuthToken=_signedAuthToken;
@property(copy, nonatomic) NSString *authorizationHeader; // @synthesize authorizationHeader=_authorizationHeader;
- (_Bool)isEqualToPeerPaymentDeviceRegistrationData:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

