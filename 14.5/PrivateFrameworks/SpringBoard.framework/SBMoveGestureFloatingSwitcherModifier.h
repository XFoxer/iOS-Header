//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBGestureSwitcherModifier.h>

@interface SBMoveGestureFloatingSwitcherModifier : SBGestureSwitcherModifier
{
    long long _initialFloatingConfiguration;
    long long _interfaceOrientation;
    struct CGPoint _translation;
}

@property(nonatomic) struct CGPoint translation; // @synthesize translation=_translation;
@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(nonatomic) long long initialFloatingConfiguration; // @synthesize initialFloatingConfiguration=_initialFloatingConfiguration;
- (id)topMostLayoutElements;
- (id)appLayoutsToCacheSnapshots;
- (double)shadowOffsetForIndex:(unsigned long long)arg1;
- (double)shadowOpacityForIndex:(unsigned long long)arg1;
- (double)opacityForIndex:(unsigned long long)arg1;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)visibleAppLayouts;
- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (struct CGRect)containerViewBounds;
- (id)_updateForGestureDidEndWithEvent:(id)arg1;
- (id)_updateForGestureDidChangeWithEvent:(id)arg1;
- (id)_updateForGestureDidBeginWithEvent:(id)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)initWithGestureID:(id)arg1 initialFloatingConfiguration:(long long)arg2 interfaceOrientation:(long long)arg3;

@end

