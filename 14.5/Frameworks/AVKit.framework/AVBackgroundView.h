//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVLayoutView;

@interface AVBackgroundView : UIView
{
    _Bool _automaticallyDrawsRoundedCorners;
    _Bool _prefersLowQualityEffects;
    _Bool _circular;
    AVLayoutView *_layoutView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVLayoutView *layoutView; // @synthesize layoutView=_layoutView;
@property(nonatomic, getter=isCircular) _Bool circular; // @synthesize circular=_circular;
@property(nonatomic) _Bool prefersLowQualityEffects; // @synthesize prefersLowQualityEffects=_prefersLowQualityEffects;
@property(nonatomic) _Bool automaticallyDrawsRoundedCorners; // @synthesize automaticallyDrawsRoundedCorners=_automaticallyDrawsRoundedCorners;
- (_Bool)_isContainedInOverlappingBackgroundView;
- (void)_ensureOrRemoveLayoutView;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)_updateBackdropShape;
- (void)addSubview:(id)arg1 applyingMaterialStyle:(long long)arg2 tintEffectStyle:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

