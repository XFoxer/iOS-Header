//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@interface SSSScrollView : UIScrollView
{
    _Bool _animateSuperZoomToRect;
    _Bool _inSuperZoomToRect;
    _Bool _isInProgrammaticCall;
    _Bool _hitTestsUsingSubviews;
}

@property(nonatomic) _Bool hitTestsUsingSubviews; // @synthesize hitTestsUsingSubviews=_hitTestsUsingSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) _Bool isMoving;
@property(readonly, nonatomic) struct CGRect visibleRect;
- (struct CGSize)_unscaledContentSize;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) _Bool isInProgrammaticCall;
- (void)zoomToRect:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)setZoomScale:(double)arg1 animated:(_Bool)arg2;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end

