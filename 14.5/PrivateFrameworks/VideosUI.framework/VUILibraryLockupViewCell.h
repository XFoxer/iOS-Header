//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <VideosUI/VUIRentalExpirationLabelDelegate-Protocol.h>

@class NSString, VUILabel, VUIRentalExpirationLabel, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUILibraryLockupViewCell : UICollectionViewCell <VUIRentalExpirationLabelDelegate>
{
    _Bool _hideTitleLabel;
    _TVImageView *_imageView;
    double _imageAspectRatio;
    VUILabel *_titleLabel;
    VUIRentalExpirationLabel *_expirationLabel;
}

+ (void)configureImageViewArtworkForLockupCell:(id)arg1 withMedia:(id)arg2 width:(double)arg3;
+ (void)configureLockupCell:(id)arg1 withMedia:(id)arg2 width:(double)arg3 forMetrics:(_Bool)arg4;
- (void).cxx_destruct;
@property(nonatomic) _Bool hideTitleLabel; // @synthesize hideTitleLabel=_hideTitleLabel;
@property(retain, nonatomic) VUIRentalExpirationLabel *expirationLabel; // @synthesize expirationLabel=_expirationLabel;
@property(retain, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) double imageAspectRatio; // @synthesize imageAspectRatio=_imageAspectRatio;
@property(retain, nonatomic) _TVImageView *imageView; // @synthesize imageView=_imageView;
- (void)rentalExpirationLabelNeedsRelayout:(id)arg1;
- (double)bottomMarginWithBaselineMargin:(double)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

