//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SBIcon, SBIconView, UIColor, UIFont, _UILegibilitySettings;
@protocol SBIconListLayoutProvider;

@interface SBIconLabelImageParametersBuilder : NSObject
{
    UIFont *_font;
    _Bool _hasSetTextInsets;
    _Bool _accessibilityReduceTransparencyEnabled;
    SBIcon *_icon;
    SBIconView *_iconView;
    Class _iconViewClass;
    NSString *_iconLocation;
    id <SBIconListLayoutProvider> _listLayoutProvider;
    _UILegibilitySettings *_legibilitySettings;
    NSString *_contentSizeCategory;
    UIColor *_focusHighlightColor;
    double _scale;
    long long _labelAccessoryType;
    UIColor *_textColor;
    NSString *_overrideText;
    NSString *_text;
    struct UIEdgeInsets _textInsets;
}

+ (double)_normalFontSizeForSizeParameter:(long long)arg1;
+ (long long)_fontSizeParameterForContentSizeCategory:(id)arg1;
+ (id)defaultFontForContentSizeCategory:(id)arg1 languageInsets:(struct UIEdgeInsets *)arg2;
+ (struct UIEdgeInsets)insetsForFont:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *overrideText; // @synthesize overrideText=_overrideText;
@property(nonatomic) struct UIEdgeInsets textInsets; // @synthesize textInsets=_textInsets;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) long long labelAccessoryType; // @synthesize labelAccessoryType=_labelAccessoryType;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) UIColor *focusHighlightColor; // @synthesize focusHighlightColor=_focusHighlightColor;
@property(copy, nonatomic) NSString *contentSizeCategory; // @synthesize contentSizeCategory=_contentSizeCategory;
@property(nonatomic, getter=isAccessibilityReduceTransparencyEnabled) _Bool accessibilityReduceTransparencyEnabled; // @synthesize accessibilityReduceTransparencyEnabled=_accessibilityReduceTransparencyEnabled;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(retain, nonatomic) id <SBIconListLayoutProvider> listLayoutProvider; // @synthesize listLayoutProvider=_listLayoutProvider;
@property(readonly, nonatomic) NSString *iconLocation; // @synthesize iconLocation=_iconLocation;
@property(retain, nonatomic) Class iconViewClass; // @synthesize iconViewClass=_iconViewClass;
@property(retain, nonatomic) SBIconView *iconView; // @synthesize iconView=_iconView;
@property(readonly, nonatomic) SBIcon *icon; // @synthesize icon=_icon;
- (_Bool)_hasValidInputs;
- (id)_fontWithLanguageInsets:(struct UIEdgeInsets *)arg1;
- (struct CGSize)_maxSize;
- (_Bool)_canTightenLabel;
- (_Bool)_canTruncateLabel;
@property(readonly, nonatomic) struct CGSize iconImageSize;
- (id)listLayout;
- (void)setIcon:(id)arg1;
- (void)setIcon:(id)arg1 forLocation:(id)arg2;
- (id)buildParameters;
- (id)init;

@end

