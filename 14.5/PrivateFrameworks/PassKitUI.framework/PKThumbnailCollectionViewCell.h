//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class CNAvatarView, NSString, UIImage, UIImageView, UILabel;

@interface PKThumbnailCollectionViewCell : PKDashboardCollectionViewCell
{
    UIImageView *_imageView;
    UILabel *_labelTitle;
    NSString *_title;
    UIImage *_image;
    CNAvatarView *_avatarView;
    _Bool _strokeImage;
    NSString *_identifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CNAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
- (void)showAvatarView:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setStrokeImage:(_Bool)arg1;
- (void)_setupImageView:(id)arg1;
- (void)_resetFonts;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

