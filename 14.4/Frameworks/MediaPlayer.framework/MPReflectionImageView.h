//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIReflectingView.h>

@class UIImage, UIImageView;

@interface MPReflectionImageView : _UIReflectingView
{
    UIImageView *_imageView;
    _Bool _squareImage;
}

+ (double)defaultReflectionHeight;
- (void).cxx_destruct;
@property(nonatomic) _Bool squareImage; // @synthesize squareImage=_squareImage;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)setReflectionVisible:(_Bool)arg1 withDuration:(float)arg2;
- (void)setFrame:(struct CGRect)arg1 withReflectionHeight:(double)arg2;
@property(retain, nonatomic) UIImage *image;
- (void)setAlbumVisible:(_Bool)arg1 reflectionVisible:(_Bool)arg2;
- (id)albumArtImage;
- (id)initWithFrame:(struct CGRect)arg1;

@end

