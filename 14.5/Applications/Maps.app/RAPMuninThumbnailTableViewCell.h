//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class GEOPDMuninViewState, NSLayoutConstraint, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface RAPMuninThumbnailTableViewCell : UITableViewCell
{
    UIImageView *_thumbnailImageView;
    UILabel *_nameLabel;
    UILabel *_locationLabel;
    NSLayoutConstraint *_topToNameBaselineConstraint;
    NSLayoutConstraint *_nameToLocationBaselineConstraint;
    NSLayoutConstraint *_locationToBottomBaselineConstraint;
    GEOPDMuninViewState *_viewState;
    UIImage *_thumbnailImage;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(retain, nonatomic) GEOPDMuninViewState *viewState; // @synthesize viewState=_viewState;
- (void)_updateFonts;
- (void)_contentSizeDidChange;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

