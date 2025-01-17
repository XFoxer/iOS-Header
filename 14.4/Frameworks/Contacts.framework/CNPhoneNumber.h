//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/CNObjectValidation-Protocol.h>
#import <Contacts/NSCopying-Protocol.h>
#import <Contacts/NSSecureCoding-Protocol.h>

@class NSString;

@interface CNPhoneNumber : NSObject <CNObjectValidation, NSCopying, NSSecureCoding>
{
    NSString *_initialCountryCode;
    NSString *_stringValue;
    struct os_unfair_lock_s _stateLock;
    struct __CFPhoneNumber *_phoneNumberRef;
}

+ (CDUnknownBlockType)StringValue;
+ (id)_countryCodeForNorthAmericanDialingPlanAreaCodesExcludingUS;
+ (id)_countryCodesForNorthAmericanDialingPlan;
+ (_Bool)_isCountryCodeForNorthAmericanDialingPlan:(id)arg1;
+ (id)dialingCodeForISOCountryCode:(id)arg1;
+ (id)unsupportedCountryCodes;
+ (struct __CFPhoneNumber *)createCFPhoneNumberForStringValue:(id)arg1 countryCode:(id)arg2;
+ (_Bool)supportsSecureCoding;
+ (id)defaultCountryCode;
+ (id)phoneNumberWithCopiedStringValue:(id)arg1;
+ (id)phoneNumberWithStringValue:(id)arg1;
+ (id)phoneNumberWithDigits:(id)arg1 countryCode:(id)arg2;
+ (id)new;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *initialCountryCode; // @synthesize initialCountryCode=_initialCountryCode;
@property(readonly, copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (id)formattedStringValueRemovingDialingCode;
- (id)digitsRemovingDialingCode;
- (id)fullyQualifiedDigits;
- (_Bool)isFullyQualified;
@property(readonly, copy, nonatomic) NSString *countryCode;
- (id)_countryCodeFromPhoneNumberRef;
@property(readonly, copy, nonatomic) NSString *unformattedInternationalStringValue;
@property(readonly, copy, nonatomic) NSString *formattedInternationalStringValue;
@property(readonly, copy, nonatomic) NSString *formattedStringValue;
@property(readonly, copy, nonatomic) NSString *digits;
- (id)stringValueWithCFPhoneNumberOptions:(unsigned long long)arg1;
- (_Bool)isValid:(id *)arg1;
- (struct __CFPhoneNumber *)nts_lazyPhoneNumberRef;
- (struct __CFPhoneNumber *)phoneNumberRef;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)lastFourDigits;
- (_Bool)isLikePhoneNumber:(id)arg1;
- (_Bool)isLikePhoneNumberForSamePerson:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithStringValue:(id)arg1;
- (id)primitiveInitWithStringValue:(id)arg1 countryCode:(id)arg2;
- (id)initWithStringValue:(id)arg1 countryCode:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

