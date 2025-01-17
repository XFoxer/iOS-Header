//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@interface PKPaymentSetupProductPaymentOption : NSObject <NSSecureCoding>
{
    unsigned long long _priority;
    long long _cardType;
    long long _supportedProtocols;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long supportedProtocols; // @synthesize supportedProtocols=_supportedProtocols;
@property(readonly, nonatomic) long long cardType; // @synthesize cardType=_cardType;
@property(readonly, nonatomic) unsigned long long priority; // @synthesize priority=_priority;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPaymentOptionDictionary:(id)arg1;

@end

