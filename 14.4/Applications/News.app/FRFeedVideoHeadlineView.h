//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FRFeedHeadlineView.h"

@class SVVideoPlayButton, SXVideoPlayerViewController;
@protocol FRFeedVideoHeadlineViewDelegate;

@interface FRFeedVideoHeadlineView : FRFeedHeadlineView
{
    SXVideoPlayerViewController *_videoPlayerViewController;
    SVVideoPlayButton *_playButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SVVideoPlayButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) SXVideoPlayerViewController *videoPlayerViewController; // @synthesize videoPlayerViewController=_videoPlayerViewController;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (id)_accessibilitySupplementaryFooterViews;
- (_Bool)playInlineAccessibilityAction;
- (id)accessibilityCustomActions;
- (void)animatorDidFinishAnimation:(id)arg1;
- (void)animatorDidBeginAnimation:(id)arg1;
- (id)videoPlayerViewControllerForAnimator:(id)arg1;
- (void)playButtonTapped;
- (void)configureWithVideoPlayerViewController:(id)arg1;
@property(nonatomic) __weak id <FRFeedVideoHeadlineViewDelegate> delegate; // @dynamic delegate;
- (void)reloadThumbnailImageFromCacheWithAnimation;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

