//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Pegasus/PGButtonViewDelegate-Protocol.h>

@class NSString, PGButtonView, PGControlsViewModel, PGDisplayLink, UILabel;

__attribute__((visibility("hidden")))
@interface PGPrerollIndicatorView : UIView <PGButtonViewDelegate>
{
    PGControlsViewModel *_viewModel;
    UILabel *_contentTypeLabel;
    PGButtonView *_skipPrerollButtonView;
    PGDisplayLink *_displayLink;
    struct CGSize _labelSize;
}

+ (double)preferredHeight;
- (void).cxx_destruct;
@property(readonly, nonatomic) PGDisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) struct CGSize labelSize; // @synthesize labelSize=_labelSize;
@property(readonly, nonatomic) PGButtonView *skipPrerollButtonView; // @synthesize skipPrerollButtonView=_skipPrerollButtonView;
@property(readonly, nonatomic) UILabel *contentTypeLabel; // @synthesize contentTypeLabel=_contentTypeLabel;
@property(readonly, nonatomic) PGControlsViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)_layoutSkipPrerollButton;
- (void)_layoutContentTypeLabel;
- (struct CGAffineTransform)_subviewTransform;
- (struct UIEdgeInsets)buttonView:(id)arg1 contentEdgeInsetsForProposedInsets:(struct UIEdgeInsets)arg2;
- (struct CGRect)buttonView:(id)arg1 titleRectForContentRect:(struct CGRect)arg2 proposedRect:(struct CGRect)arg3;
- (struct CGRect)buttonView:(id)arg1 imageRectForContentRect:(struct CGRect)arg2 proposedRect:(struct CGRect)arg3;
- (void)buttonViewDidReceiveTouchUpInside:(id)arg1;
- (double)labelWidth;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(copy, nonatomic) NSString *timeRemainingText;
@property(copy, nonatomic) NSString *labelText;
- (void)updateValues;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 viewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

