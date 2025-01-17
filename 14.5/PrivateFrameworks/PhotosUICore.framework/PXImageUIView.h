//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXAdjustableContentsView-Protocol.h>

@class NSArray, NSMutableArray, NSString, PXFocusableUIImageView, PXImageViewSpec, PXRoundedCornerOverlayView, UIImage;

@interface PXImageUIView : UIView <PXAdjustableContentsView>
{
    NSMutableArray *_overlayViews;
    UIView *_floatingOverlayView;
    struct UIEdgeInsets _floatingInsets;
    _Bool _hasParallax;
    unsigned long long _animationFlags;
    UIView *_snapshotView;
    _Bool _floatingViewEnabled;
    _Bool _animating;
    _Bool _floatingRotationEnabled;
    UIImage *_image;
    PXImageViewSpec *_spec;
    UIView *_contentView;
    long long _contentMode;
    PXFocusableUIImageView *__imageView;
    PXRoundedCornerOverlayView *__cornerView;
    NSArray *__overlaySpecs;
    struct CGRect _contentsRect;
}

- (void).cxx_destruct;
@property(copy, nonatomic, setter=_setOverlaySpecs:) NSArray *_overlaySpecs; // @synthesize _overlaySpecs=__overlaySpecs;
@property(retain, nonatomic, setter=_setCornerView:) PXRoundedCornerOverlayView *_cornerView; // @synthesize _cornerView=__cornerView;
@property(readonly, nonatomic) PXFocusableUIImageView *_imageView; // @synthesize _imageView=__imageView;
@property(nonatomic, getter=isFloatingRotationEnabled) _Bool floatingRotationEnabled; // @synthesize floatingRotationEnabled=_floatingRotationEnabled;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool floatingViewEnabled; // @synthesize floatingViewEnabled=_floatingViewEnabled;
@property(retain, nonatomic) PXImageViewSpec *spec; // @synthesize spec=_spec;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) struct CGRect contentsRect; // @synthesize contentsRect=_contentsRect;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setAnimating:(_Bool)arg1 withFlags:(unsigned long long)arg2;
- (void)_updateSubviewsOrdering;
- (void)_updateCorners;
- (void)_updateFloatingOverlay;
- (void)setFloatingOverlay:(id)arg1 withInsets:(struct UIEdgeInsets)arg2 parallax:(_Bool)arg3;
- (void)_PXImageUIViewInitialization;
@property(nonatomic) _Bool allowsFocus;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

