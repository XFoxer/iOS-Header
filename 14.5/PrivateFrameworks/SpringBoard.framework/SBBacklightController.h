//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, SBHIDUILockAssertion, SBIdleTimerDefaults;

@interface SBBacklightController : NSObject
{
    SBIdleTimerDefaults *_idleTimerDefaults;
    _Bool _isPendingScreenUnblankAfterCACommit;
    NSHashTable *_observers;
    NSHashTable *_informers;
    long long _lastBacklightChangeSource;
    SBHIDUILockAssertion *_currentHIDUILockAssertion;
}

+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
+ (id)_sharedInstanceCreateIfNeeded:(_Bool)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) SBHIDUILockAssertion *currentHIDUILockAssertion; // @synthesize currentHIDUILockAssertion=_currentHIDUILockAssertion;
@property(readonly, nonatomic) long long lastBacklightChangeSource; // @synthesize lastBacklightChangeSource=_lastBacklightChangeSource;
@property(readonly, nonatomic) _Bool isPendingScreenUnblankAfterCACommit; // @synthesize isPendingScreenUnblankAfterCACommit=_isPendingScreenUnblankAfterCACommit;
- (double)defaultLockScreenDimIntervalWhenNotificationsPresent;
- (double)defaultLockScreenDimInterval;
- (void)preventIdleSleepForNumberOfSeconds:(float)arg1;
- (void)preventIdleSleep;
- (void)allowIdleSleep;
- (void)unregisterInformer:(id)arg1;
- (void)registerInformer:(id)arg1;
- (void)_notifyObserversDidAnimateToFactor:(float)arg1 source:(long long)arg2;
- (void)_notifyObserversWillAnimateToFactor:(float)arg1 source:(long long)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_startFadeOutAnimationFromLockSource:(int)arg1;
- (void)reloadDefaults;
- (void)_animateBacklightToFactor:(float)arg1 duration:(double)arg2 source:(long long)arg3 silently:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_suspendProxAndMultitouch:(_Bool)arg1 source:(long long)arg2;
- (void)animateBacklightToFactor:(float)arg1 duration:(double)arg2 source:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setBacklightFactor:(float)arg1 source:(long long)arg2;
- (_Bool)shouldTurnOnScreenForBacklightSource:(long long)arg1;
- (void)setBacklightFactorPending:(float)arg1;
@property(readonly, nonatomic) _Bool screenIsDim;
@property(readonly, nonatomic) _Bool screenIsOn;
- (void)_deferredScreenUnblankDone;
- (void)turnOnScreenFullyWithBacklightSource:(long long)arg1;
- (void)_performDeferredBacklightRampWorkWithInfo:(id)arg1;
@property(readonly, nonatomic) double backlightFactor;
- (void)_undimFromSource:(long long)arg1;
- (id)init;

@end

