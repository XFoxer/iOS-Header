//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface PKContactFormatConfiguration : NSObject <NSSecureCoding>
{
    NSDictionary *_regionalAddressFormatConfigurations;
    _Bool _checkFormatOfPhoneNumber;
    _Bool _checkFormatOfEmailAddress;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool checkFormatOfEmailAddress; // @synthesize checkFormatOfEmailAddress=_checkFormatOfEmailAddress;
@property(readonly, nonatomic) _Bool checkFormatOfPhoneNumber; // @synthesize checkFormatOfPhoneNumber=_checkFormatOfPhoneNumber;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)regionalAddressFormatConfigurations;
- (id)contactFieldConfigurationForCountryCode:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

