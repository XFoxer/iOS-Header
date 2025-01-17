//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSKit/TSKFormat.h>

#import <TSKit/NSCopying-Protocol.h>

@class NSNumber, NSString;

@interface TSKCurrencyFormat : TSKFormat <NSCopying>
{
    NSNumber *_propertiesCacheKey;
    _Bool _showThousandsSeparator;
    _Bool _accountingStyle;
    _Bool _usePlusSign;
    int _negativeStyle;
    unsigned long long _decimalPlaces;
    unsigned long long _currencyCodeIndex;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool usePlusSign; // @synthesize usePlusSign=_usePlusSign;
@property(readonly, nonatomic) _Bool accountingStyle; // @synthesize accountingStyle=_accountingStyle;
@property(nonatomic) unsigned long long currencyCodeIndex; // @synthesize currencyCodeIndex=_currencyCodeIndex;
@property(readonly, nonatomic) _Bool showThousandsSeparator; // @synthesize showThousandsSeparator=_showThousandsSeparator;
@property(readonly, nonatomic) int negativeStyle; // @synthesize negativeStyle=_negativeStyle;
@property(readonly, nonatomic) unsigned long long decimalPlaces; // @synthesize decimalPlaces=_decimalPlaces;
- (id)asCurrencyFormat;
- (id)decimalFormatterForLocale:(id)arg1;
- (id)stringFromDouble:(double)arg1 locale:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) NSString *currencyCode;
- (id)initWithDecimalPlaces:(unsigned long long)arg1 negativeStyle:(int)arg2 showSeparator:(_Bool)arg3 accountingStyle:(_Bool)arg4 currencyCode:(id)arg5;
- (id)initWithLocale:(id)arg1;
- (id)initWithFormatType:(unsigned int)arg1;

@end

