//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, SKUIEditorialLinkLayout, UIColor;
@protocol SKUIEditorialLinkViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUIEditorialLinkView : UIView
{
    NSMutableArray *_buttons;
    id <SKUIEditorialLinkViewDelegate> _delegate;
    UIColor *_highlightedTextColor;
    long long _horizontalAlignment;
    SKUIEditorialLinkLayout *_layout;
    UIColor *_textColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SKUIEditorialLinkLayout *linkLayout; // @synthesize linkLayout=_layout;
@property(nonatomic) long long horizontalAlignment; // @synthesize horizontalAlignment=_horizontalAlignment;
@property(nonatomic) __weak id <SKUIEditorialLinkViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_newButton;
- (void)_linkButtonAction:(id)arg1;
- (void)tintColorDidChange;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

