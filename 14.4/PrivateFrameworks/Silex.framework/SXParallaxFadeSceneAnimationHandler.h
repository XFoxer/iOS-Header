//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXSceneComponentAnimationHandler.h>

@class SXComponentView, UIView;

@interface SXParallaxFadeSceneAnimationHandler : SXSceneComponentAnimationHandler
{
    UIView *_overlayView;
    SXComponentView *_headerComponentView;
    double _scrollDistance;
    double _alphaDistance;
    unsigned long long _attachmentType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long attachmentType; // @synthesize attachmentType=_attachmentType;
@property(nonatomic) double alphaDistance; // @synthesize alphaDistance=_alphaDistance;
@property(nonatomic) double scrollDistance; // @synthesize scrollDistance=_scrollDistance;
@property(retain, nonatomic) SXComponentView *headerComponentView; // @synthesize headerComponentView=_headerComponentView;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
- (_Bool)shouldFinishAtEndOfScrollView;
- (id)componentViewToAnimate;
- (double)factorForVisibileBounds:(struct CGRect)arg1 andAbsoluteComponentRect:(struct CGRect)arg2;
- (void)finishAnimation;
- (void)updateAnimationWithFactor:(double)arg1;
- (void)startAnimation;
- (void)prepareAnimation;

@end

