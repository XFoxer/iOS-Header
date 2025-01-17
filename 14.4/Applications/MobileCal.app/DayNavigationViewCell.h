//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "_UICursorInteractionDelegate-Protocol.h"

@class NSDate, NSObject, NSString;
@protocol DayNavigationViewCellDelegate;

@interface DayNavigationViewCell : UIControl <_UICursorInteractionDelegate>
{
    _Bool _circled;
    _Bool _isToday;
    _Bool _isWeekend;
    _Bool _labelElementsVisible;
    _Bool _usesRoundedRectInsteadOfCircle;
    NSDate *_date;
    NSObject<DayNavigationViewCellDelegate> *_delegate;
    double _fontSize;
    double _overlayFontSize;
    struct CGSize _roundedRectSize;
}

+ (double)circleDiameter;
+ (void)localeChanged;
- (void).cxx_destruct;
@property(nonatomic) _Bool usesRoundedRectInsteadOfCircle; // @synthesize usesRoundedRectInsteadOfCircle=_usesRoundedRectInsteadOfCircle;
@property(nonatomic) struct CGSize roundedRectSize; // @synthesize roundedRectSize=_roundedRectSize;
@property(nonatomic) double overlayFontSize; // @synthesize overlayFontSize=_overlayFontSize;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) __weak NSObject<DayNavigationViewCellDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool labelElementsVisible; // @synthesize labelElementsVisible=_labelElementsVisible;
@property(nonatomic) _Bool isWeekend; // @synthesize isWeekend=_isWeekend;
@property(nonatomic) _Bool isToday; // @synthesize isToday=_isToday;
@property(nonatomic) _Bool circled; // @synthesize circled=_circled;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3;
- (void)cursorInteraction:(id)arg1 willExitRegion:(id)arg2 withAnimator:(id)arg3;
- (void)cursorInteraction:(id)arg1 willEnterRegion:(id)arg2 withAnimator:(id)arg3;
- (id)cursorInteraction:(id)arg1 regionForLocation:(struct CGPoint)arg2 defaultRegion:(id)arg3;
- (void)_setUpInteraction;
- (id)preferredCursor;
@property(readonly, nonatomic) struct CGRect contentFrame;
- (void)setOverlayShowsMonth:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateWeekNumber;
- (void)updateOverlay;
@property(readonly, nonatomic) double baselineOffsetFromTop;
@property(readonly, copy) NSString *description;
- (void)setDate:(id)arg1 forceStringUpdate:(_Bool)arg2;
- (void)stopPulsing;
- (void)pulseToday;
- (void)prepareForReuse;
- (struct CGRect)circleFrame;
- (void)setCircled:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

