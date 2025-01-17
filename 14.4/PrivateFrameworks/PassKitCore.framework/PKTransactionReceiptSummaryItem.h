//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDecimalNumber, NSString, PKCurrencyAmount;

@interface PKTransactionReceiptSummaryItem : NSObject <NSSecureCoding, NSCopying>
{
    long long _type;
    NSString *_label;
    NSDecimalNumber *_amount;
    NSString *_currencyCode;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(retain, nonatomic) NSDecimalNumber *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) PKCurrencyAmount *currencyAmount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToTransactionReceiptSummaryItem:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;

@end

