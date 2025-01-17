//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RESingleton.h>

@class NSDate, NSMutableDictionary, NSObject, REUpNextTimer;
@protocol OS_dispatch_queue;

@interface RERelevanceSignalUpdateScheduler : RESingleton
{
    NSMutableDictionary *_updateBlocks;
    NSObject<OS_dispatch_queue> *_queue;
    REUpNextTimer *_timer;
    NSDate *_lastFireDate;
    _Bool _alreadyScheduled;
}

- (void).cxx_destruct;
- (void)_queue_updateBlocks;
- (void)_updateBlocks;
- (void)_rescheduleTimer;
- (void)unscheduleEventWithIdentifier:(id)arg1;
- (void)scheduleEventWithIdentifier:(id)arg1 updateFrequency:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)_init;

@end

