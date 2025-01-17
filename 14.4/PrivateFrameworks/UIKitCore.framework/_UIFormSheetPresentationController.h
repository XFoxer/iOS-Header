//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UISheetPresentationController.h>

@interface _UIFormSheetPresentationController : _UISheetPresentationController
{
    _Bool _layoutStateShouldAvoidKeyboard;
    double _keyboardYOrigin;
}

+ (long long)_initialMode;
- (_Bool)_presentationPotentiallyUnderlapsStatusBar;
- (long long)_defaultPresentationStyleForTraitCollection:(id)arg1;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (_Bool)shouldSubscribeToKeyboardNotifications;
- (_Bool)_shouldHideBottomCorner;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (void)_changeLayoutModeToAvoidKeyboard:(_Bool)arg1 withOrigin:(double)arg2;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionWillBegin;
- (_Bool)_shouldPresentedViewControllerControlStatusBarAppearance;

@end

