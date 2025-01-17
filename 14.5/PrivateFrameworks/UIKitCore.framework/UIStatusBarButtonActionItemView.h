//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIStatusBarItemView.h>

@class CALayer, UIButton;

__attribute__((visibility("hidden")))
@interface UIStatusBarButtonActionItemView : UIStatusBarItemView
{
    UIButton *_button;
    UIButton *_externalButton;
    _Bool _selected;
    CALayer *_ringLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CALayer *ringLayer; // @synthesize ringLayer=_ringLayer;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (void)setLayerHighlightImage:(id)arg1;
- (struct CGRect)_contentsImageFrame;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)canBecomeFocused;
- (_Bool)usesAdvancedActions;
- (_Bool)showsTouchWhenHighlighted;
- (long long)buttonType;
- (void)_pressAndHoldButton:(id)arg1;
- (void)_doubleTapButton:(id)arg1;
- (void)_pressButton:(id)arg1;
- (void)_triggerButtonWithAction:(long long)arg1;
- (void)layoutSubviews;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (double)updateContentsAndWidth;
- (_Bool)allowsUserInteraction;
- (id)highlightImage;
- (id)_createButton;
@property(readonly, nonatomic) _Bool extendsHitTestingFrame;

@end

