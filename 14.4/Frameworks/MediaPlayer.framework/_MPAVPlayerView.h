//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayer, NSString, UIViewPropertyAnimator, _MPAVPlayerViewPlayerLayerView;

__attribute__((visibility("hidden")))
@interface _MPAVPlayerView : UIView
{
    _MPAVPlayerViewPlayerLayerView *_playerLayerView;
    NSString *_targetVideoGravity;
    UIViewPropertyAnimator *_videoGravityAnimator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIViewPropertyAnimator *videoGravityAnimator; // @synthesize videoGravityAnimator=_videoGravityAnimator;
@property(copy, nonatomic) NSString *targetVideoGravity; // @synthesize targetVideoGravity=_targetVideoGravity;
- (id)_mediaTimingFunctionForCurrentAnimationCurve;
- (void)_updatePlayerLayerViewFrame:(id)arg1;
- (void)_updatePlayerLayerViewFrame;
- (_Bool)_isDescendantOfScrollView;
- (void)layoutSubviews;
- (void)willMoveToWindow:(id)arg1;
@property(readonly, nonatomic) _MPAVPlayerViewPlayerLayerView *playerLayerView;
- (void)setVideoGravity:(id)arg1 duration:(float)arg2;
@property(copy, nonatomic) NSString *videoGravity;
@property(readonly, nonatomic) struct CGRect videoBounds;
@property(retain, nonatomic) AVPlayer *player;
- (id)initWithFrame:(struct CGRect)arg1;

@end

