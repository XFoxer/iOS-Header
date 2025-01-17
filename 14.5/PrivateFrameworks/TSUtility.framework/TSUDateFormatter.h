//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TSUDateFormatter : NSObject
{
    NSString *mDateOnlyFormatString;
    NSString *mTimeOnlyFormatString;
    struct __CFDateFormatter *mFullDateFormatter;
}

+ (id)shortMonthNamesForNonCachedCurrentLocale;
+ (id)timePortionOfDateTimeFormatString:(id)arg1;
+ (id)datePortionOfDateTimeFormatString:(id)arg1;
+ (unsigned long long)p_DateTimeSplitLocationInFormatString:(id)arg1;
+ (id)dateFormatStringSpecialSymbols;
+ (id)supportedTimeFormats;
+ (id)supportedDateFormats;
+ (id)defaultDateTimeFormat;
- (void)dealloc;
- (id)init;
- (id)stringFromDate:(id)arg1 format:(id)arg2;
- (id)appropriateOutputFormatStringForInputFormatString:(id)arg1;
- (id)fullDateString:(id)arg1;

@end

