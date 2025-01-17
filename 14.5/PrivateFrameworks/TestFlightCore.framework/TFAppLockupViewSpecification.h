//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIFont;

__attribute__((visibility("hidden")))
@interface TFAppLockupViewSpecification : NSObject
{
    double _titleLabelBaselineToFirstSubtitleLabelBaseline;
    double _firstSubtitleLabelBaselineToSecondSubtitleLabelBaseline;
    UIFont *_titleLabelFont;
    UIFont *_subtitleLabelFont;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIFont *subtitleLabelFont; // @synthesize subtitleLabelFont=_subtitleLabelFont;
@property(readonly, nonatomic) UIFont *titleLabelFont; // @synthesize titleLabelFont=_titleLabelFont;
@property(readonly, nonatomic) double firstSubtitleLabelBaselineToSecondSubtitleLabelBaseline; // @synthesize firstSubtitleLabelBaselineToSecondSubtitleLabelBaseline=_firstSubtitleLabelBaselineToSecondSubtitleLabelBaseline;
@property(readonly, nonatomic) double titleLabelBaselineToFirstSubtitleLabelBaseline; // @synthesize titleLabelBaselineToFirstSubtitleLabelBaseline=_titleLabelBaselineToFirstSubtitleLabelBaseline;
- (id)_subtitleFontStyle;
- (id)_createSubtitleLabelFontWithTraitCollection:(id)arg1;
- (id)_titleFontStyle;
- (id)_createTitleLabelFontWithTraitCollection:(id)arg1;
@property(readonly, nonatomic) double paddingBetweenIconAndText;
@property(readonly, nonatomic) struct CGSize iconSize;
@property(readonly, nonatomic) UIColor *iconPlaceholderColor;
@property(readonly, nonatomic) UIColor *subtitleTextColor;
@property(readonly, nonatomic) UIColor *titleTextColor;
- (id)initWithTraitCollection:(id)arg1;

@end

