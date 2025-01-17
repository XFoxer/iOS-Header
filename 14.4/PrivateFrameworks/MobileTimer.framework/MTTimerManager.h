//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTTimerManagerIntentSupport-Protocol.h>
#import <MobileTimer/MTTimerManagerProviding-Protocol.h>
#import <MobileTimer/MTUserDefaultNotificationObserver-Protocol.h>

@class MTMetrics, MTTimerCache, MTTimerManagerExportedObject, MTXPCConnectionProvider, NSNotificationCenter, NSString;
@protocol MTTimerManagerIntentSupport;

@interface MTTimerManager : NSObject <MTTimerManagerIntentSupport, MTTimerManagerProviding, MTUserDefaultNotificationObserver>
{
    MTTimerManagerExportedObject *_exportedObject;
    MTXPCConnectionProvider *_connectionProvider;
    MTMetrics *_metrics;
    MTTimerCache *_cache;
    NSNotificationCenter *_notificationCenter;
}

+ (void)setDefaultDuration:(double)arg1;
+ (double)defaultDuration;
+ (void)warmUp;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) MTTimerCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) MTMetrics *metrics; // @synthesize metrics=_metrics;
@property(readonly, nonatomic) MTXPCConnectionProvider *connectionProvider; // @synthesize connectionProvider=_connectionProvider;
@property(retain, nonatomic) MTTimerManagerExportedObject *exportedObject; // @synthesize exportedObject=_exportedObject;
- (_Bool)resumeCurrentTimerSync;
- (_Bool)pauseCurrentTimerSync;
- (_Bool)stopCurrentTimerSync;
- (_Bool)_updateCurrentTimerWithStateSync:(unsigned long long)arg1;
- (_Bool)startCurrentTimerWithDurationSync:(double)arg1;
- (id)getCurrentTimerSync;
- (id)startCurrentTimerWithDuration:(double)arg1;
- (id)_runningTimerFromCurrentTimer:(id)arg1 withDuration:(double)arg2;
- (id)_validateCanStartTimer:(id)arg1;
- (id)resumeCurrentTimer;
- (id)pauseCurrentTimer;
- (id)stopCurrentTimer;
- (id)_updateCurrentTimerWithState:(unsigned long long)arg1;
- (id)currentTimer;
- (id)repeatTimerWithIdentifier:(id)arg1;
- (id)dismissTimerWithIdentifier:(id)arg1;
- (id)removeTimer:(id)arg1;
- (id)updateTimer:(id)arg1;
- (id)_updateTimer:(id)arg1 doSynchronous:(_Bool)arg2;
- (id)addTimer:(id)arg1;
- (id)nextTimersForDate:(id)arg1 maxCount:(unsigned long long)arg2;
- (id)timersSync;
- (id)nextTimer;
- (id)timers;
- (void)_getCachedTimersWithFuture:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)reconnect;
- (void)checkIn;
- (void)dealloc;
- (id)_initWithConnectionProvidingBlock:(CDUnknownBlockType)arg1 metrics:(id)arg2 notificationCenter:(id)arg3;
- (id)_initWithConnectionProvidingBlock:(CDUnknownBlockType)arg1 metrics:(id)arg2;
- (id)initWithConnectionProvider:(id)arg1 metrics:(id)arg2 notificationCenter:(id)arg3;
- (id)initWithConnectionProvider:(id)arg1 metrics:(id)arg2;
- (id)initWithMetrics:(id)arg1;
- (id)init;
@property(readonly, nonatomic) id notificationObject;
@property(readonly, nonatomic) id <MTTimerManagerIntentSupport> timerManager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

