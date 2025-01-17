//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/_TVFocusRedirectView.h>

#import <TVMLKit/TVAppTemplateImpressionable-Protocol.h>

@class IKViewElement, NSArray, NSString, UIView;

__attribute__((visibility("hidden")))
@interface _TVProductStackView : _TVFocusRedirectView <TVAppTemplateImpressionable>
{
    UIView *_lastFocusedView;
    UIView *_titleView;
    NSArray *_viewsAboveDescription;
    UIView *_descriptionView;
    NSArray *_viewsBelowDescription;
    UIView *_buttonsRowView;
    UIView *_initialFocusView;
    IKViewElement *_stackElement;
}

+ (id)productStackViewWithElement:(id)arg1 existingView:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) IKViewElement *stackElement; // @synthesize stackElement=_stackElement;
@property(retain, nonatomic) UIView *initialFocusView; // @synthesize initialFocusView=_initialFocusView;
@property(retain, nonatomic) UIView *buttonsRowView; // @synthesize buttonsRowView=_buttonsRowView;
@property(retain, nonatomic) NSArray *viewsBelowDescription; // @synthesize viewsBelowDescription=_viewsBelowDescription;
@property(retain, nonatomic) UIView *descriptionView; // @synthesize descriptionView=_descriptionView;
@property(retain, nonatomic) NSArray *viewsAboveDescription; // @synthesize viewsAboveDescription=_viewsAboveDescription;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (void)layoutSubviews;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)preferredFocusEnvironments;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

