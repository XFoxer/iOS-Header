//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/PXScrollViewControllerObserver-Protocol.h>

@class NSString, NSTimer, PXScrollViewController;

@interface PXScrollViewSpeedometer : PXObservable <PXScrollViewControllerObserver>
{
    _Bool _hasRampedUpForCurrentAnimatedScroll;
    PXScrollViewController *_scrollViewController;
    long long _regime;
    long long _previousRegime;
    double __lastTime;
    NSTimer *__timeoutTimer;
    long long __nextRegime;
    long long __nextRegimeCount;
    struct CGPoint _scrollVelocity;
    struct CGPoint _lastScrollDirection;
    struct CGPoint _scrollAcceleration;
    struct CGRect __lastVisibleRect;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasRampedUpForCurrentAnimatedScroll; // @synthesize hasRampedUpForCurrentAnimatedScroll=_hasRampedUpForCurrentAnimatedScroll;
@property(nonatomic) struct CGPoint scrollAcceleration; // @synthesize scrollAcceleration=_scrollAcceleration;
@property(nonatomic, setter=_setNextRegimeCount:) long long _nextRegimeCount; // @synthesize _nextRegimeCount=__nextRegimeCount;
@property(nonatomic, setter=_setNextRegime:) long long _nextRegime; // @synthesize _nextRegime=__nextRegime;
@property(retain, nonatomic, setter=_setTimeoutTimer:) NSTimer *_timeoutTimer; // @synthesize _timeoutTimer=__timeoutTimer;
@property(nonatomic, setter=_setLastTime:) double _lastTime; // @synthesize _lastTime=__lastTime;
@property(nonatomic, setter=_setLastVisibleRect:) struct CGRect _lastVisibleRect; // @synthesize _lastVisibleRect=__lastVisibleRect;
@property(nonatomic) struct CGPoint lastScrollDirection; // @synthesize lastScrollDirection=_lastScrollDirection;
@property(readonly, nonatomic) long long previousRegime; // @synthesize previousRegime=_previousRegime;
@property(readonly, nonatomic) long long regime; // @synthesize regime=_regime;
@property(nonatomic) struct CGPoint scrollVelocity; // @synthesize scrollVelocity=_scrollVelocity;
@property(readonly, nonatomic) PXScrollViewController *scrollViewController; // @synthesize scrollViewController=_scrollViewController;
- (void)_handleTimeoutTimer:(id)arg1;
- (void)_rescheduleTimeout;
- (void)_handleScrubbingTimeout;
- (void)_scheduleScrubbingTimeout;
- (double)fastUpperThreshold;
- (double)fastLowerThreshold;
- (double)mediumUpperThreshold;
- (double)mediumLowerThreshold;
- (void)_setPreviousRegime:(long long)arg1;
- (void)_setRegime:(long long)arg1;
- (void)_handleScrollEvent:(id)arg1 didScrollingEnd:(_Bool)arg2;
- (void)scrollViewControllerDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewControllerWillBeginScrollingAnimation:(id)arg1 towardsContentEdges:(unsigned long long)arg2;
- (void)scrollViewControllerDidEndScrolling:(id)arg1;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;
- (void)_updateScrollRegime;
- (void)didPerformChanges;
@property(readonly, copy) NSString *description;
- (id)mutableChangeObject;
- (id)init;
- (id)initWithScrollController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

