//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAAnimationGroup;

@interface CAMTorchPattern : NSObject
{
    float _torchLevel;
    long long __type;
    CAAnimationGroup *__animationGroup;
    double __lastUpdateTime;
    double _startTime;
}

- (void).cxx_destruct;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) double _lastUpdateTime; // @synthesize _lastUpdateTime=__lastUpdateTime;
@property(readonly, nonatomic) CAAnimationGroup *_animationGroup; // @synthesize _animationGroup=__animationGroup;
@property(readonly, nonatomic) long long _type; // @synthesize _type=__type;
@property(readonly, nonatomic) float torchLevel; // @synthesize torchLevel=_torchLevel;
- (void)updateAtTime:(double)arg1;
- (void)_updateAnimationGroup;
- (id)_doubleBlinkAnimationGroup;
- (id)_blinkAnimationGroup;
- (id)_blinkAnimationWithBeginTime:(double)arg1 duration:(double)arg2 repeatCount:(long long)arg3;
- (id)_longPatternAnimationGroup;
- (id)_shortPatternAnimationGroup;
- (id)_patternAnimationWithBeginTime:(double)arg1 duration:(double)arg2 repeatCount:(long long)arg3;
- (id)initWithType:(long long)arg1;
- (id)init;

@end

