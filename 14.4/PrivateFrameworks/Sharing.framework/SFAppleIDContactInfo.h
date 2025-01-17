//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface SFAppleIDContactInfo : NSObject <NSSecureCoding>
{
    NSString *_firstName;
    NSString *_lastName;
    NSArray *_validatedEmailAddresses;
    NSArray *_validatedPhoneNumbers;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *validatedPhoneNumbers; // @synthesize validatedPhoneNumbers=_validatedPhoneNumbers;
@property(retain, nonatomic) NSArray *validatedEmailAddresses; // @synthesize validatedEmailAddresses=_validatedEmailAddresses;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (_Bool)isEqualToContactInfo:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

