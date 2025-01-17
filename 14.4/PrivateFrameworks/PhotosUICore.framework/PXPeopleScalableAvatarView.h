//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSmartScaleView.h>

@class UIImageView;
@protocol PXPerson;

@interface PXPeopleScalableAvatarView : PXSmartScaleView
{
    double _imageViewCornerRadius;
    _Bool _useCornerRadius;
    _Bool _useRoundAvatar;
    UIImageView *_imageView;
    id <PXPerson> _person;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useRoundAvatar; // @synthesize useRoundAvatar=_useRoundAvatar;
@property(nonatomic) _Bool useCornerRadius; // @synthesize useCornerRadius=_useCornerRadius;
@property(retain, nonatomic) id <PXPerson> person; // @synthesize person=_person;
@property(retain) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)_updateImageAndWait:(_Bool)arg1;
- (void)updateImage;
- (void)viewScaleDidChange;
- (void)_updateImageViewCornerWithRadius:(double)arg1;
- (void)setPersonAndWaitForImage:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

