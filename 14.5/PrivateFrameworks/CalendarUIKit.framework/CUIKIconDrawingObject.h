//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCalendar, NSString, UIFont;

@interface CUIKIconDrawingObject : NSObject
{
    NSCalendar *_calendar;
    NSString *_dayNumber;
    CDUnknownBlockType _dateNameBlock;
    long long _dateNameFormatType;
    long long _format;
    UIFont *_dateNameFont;
    struct CGSize _canvasSize;
}

+ (id)_dateNamesForDateFormatter:(id)arg1 type:(long long)arg2;
+ (id)_dateNamesForCalendar:(id)arg1 type:(long long)arg2;
+ (id)colorForDayOfWeek;
+ (_Bool)isBlackDayOfWeekRequiredForLocale:(id)arg1;
+ (id)countriesRequiringBlackDayOfWeek;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIFont *dateNameFont; // @synthesize dateNameFont=_dateNameFont;
@property long long format; // @synthesize format=_format;
@property struct CGSize canvasSize; // @synthesize canvasSize=_canvasSize;
@property long long dateNameFormatType; // @synthesize dateNameFormatType=_dateNameFormatType;
@property(copy) CDUnknownBlockType dateNameBlock; // @synthesize dateNameBlock=_dateNameBlock;
@property(copy) NSString *dayNumber; // @synthesize dayNumber=_dayNumber;
@property(retain) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(readonly, nonatomic) double minDateNameLetterSpacing;
@property(readonly, nonatomic) double minDateNameFontScale;
@property(readonly, nonatomic) double minFullDateNameFontScale;
@property(readonly, nonatomic) double dateNameHorizontalInset;
@property(readonly, nonatomic) double dateNameBaselineVerticalInset;
- (double)_homeScreenDateNameBaselineVerticalInset;
- (_Bool)_shouldUseJ207SmallerFont:(id)arg1;
- (id)_systemG2FromFont:(id)arg1;
- (id)dateNameFont:(id)arg1;
- (id)dateNameFont:(id)arg1 size:(double)arg2;
- (double)dateNameFontSizeForName:(id)arg1;
@property(readonly, nonatomic) double dayNumberTrackingValue;
@property(readonly, nonatomic) double dayNumberBaselineVerticalInset;
@property(readonly, nonatomic) UIFont *dayNumberFont;
- (double)resizeAttributedString:(id)arg1 withDateName:(id)arg2 font:(id)arg3 ctx:(id)arg4 maxSize:(struct CGSize)arg5;
- (void)_drawDateName;
- (void)_drawDayNumberForNotificationIcon;
- (void)_drawDayNumberForHomeScreenStyledIcon;
- (void)_drawDayNumber;
- (void)draw;
- (id)initWithCalendar:(id)arg1 dayNumber:(id)arg2 dateNameBlock:(CDUnknownBlockType)arg3 dateNameFormatType:(long long)arg4 canvasSize:(struct CGSize)arg5 format:(long long)arg6;

@end

