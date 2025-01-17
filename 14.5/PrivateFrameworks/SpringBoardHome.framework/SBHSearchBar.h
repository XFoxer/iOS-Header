//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SpringBoardHome/UITextFieldDelegate-Protocol.h>

@class NSString, SBHFeatherBlurView, SBHSearchTextField, UIButton;
@protocol SBHSearchBarDelegate, SBIconListLayoutProvider;

@interface SBHSearchBar : UIView <UITextFieldDelegate>
{
    struct UIEdgeInsets _searchTextFieldEdgeInsetsForCancelButton;
    struct UIEdgeInsets _searchTextFieldLayoutInsets;
    _Bool _showsCancelButton;
    SBHSearchTextField *_searchTextField;
    id <SBHSearchBarDelegate> _delegate;
    UIButton *_cancelButton;
    id <SBIconListLayoutProvider> _listLayoutProvider;
    double _searchTextFieldBottomEdgeInset;
    SBHFeatherBlurView *_backgroundView;
    struct UIEdgeInsets _searchTextFieldHorizontalEdgeInsets;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SBHFeatherBlurView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) double searchTextFieldBottomEdgeInset; // @synthesize searchTextFieldBottomEdgeInset=_searchTextFieldBottomEdgeInset;
@property(nonatomic) struct UIEdgeInsets searchTextFieldHorizontalEdgeInsets; // @synthesize searchTextFieldHorizontalEdgeInsets=_searchTextFieldHorizontalEdgeInsets;
@property(nonatomic) __weak id <SBIconListLayoutProvider> listLayoutProvider; // @synthesize listLayoutProvider=_listLayoutProvider;
@property(nonatomic) _Bool showsCancelButton; // @synthesize showsCancelButton=_showsCancelButton;
@property(readonly, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak id <SBHSearchBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SBHSearchTextField *searchTextField; // @synthesize searchTextField=_searchTextField;
- (void)_updateCancelButtonFont;
- (double)_performHeightCalculation;
- (void)_searchBarTextFieldDidChangeText:(id)arg1;
- (void)_cancelButtonWasHit:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)setShowsCancelButton:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) NSString *text;
- (_Bool)isFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)canResignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)_accessibilityBoldStatusDidChange:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

