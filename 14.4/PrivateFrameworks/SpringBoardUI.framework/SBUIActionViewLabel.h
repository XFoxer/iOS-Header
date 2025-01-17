//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIFont, UILabel;

@interface SBUIActionViewLabel : UIView
{
    NSString *_text;
    UIColor *_textColor;
    UILabel *_label;
    UILabel *_emojiLabel;
}

- (void).cxx_destruct;
- (void)mt_removeAllVisualStyling;
- (void)_mt_applyVisualStyling:(id)arg1;
@property(nonatomic) long long numberOfLines;
@property(nonatomic) long long lineBreakMode;
@property(nonatomic) long long textAlignment;
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) UIFont *font;
@property(copy, nonatomic) NSString *text;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (struct UIEdgeInsets)alignmentRectInsets;
- (id)initWithFrame:(struct CGRect)arg1;

@end

