//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol GEOSystemMonitorSystemSleepObserver, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEOSystemMonitorObserverProxy : NSObject
{
    id <GEOSystemMonitorSystemSleepObserver> _observer;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) __weak id <GEOSystemMonitorSystemSleepObserver> observer; // @synthesize observer=_observer;
- (id)initWithObserver:(id)arg1 queue:(id)arg2;

@end

