//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IMTimingCollection : NSObject
{
    NSMutableDictionary *_timings;
    struct os_unfair_lock_s _lock;
}

- (void).cxx_destruct;
- (_Bool)hasKey:(id)arg1;
- (id)description;
- (void)removeTimingForKey:(id)arg1;
- (double)totalTimeForKey:(id)arg1;
- (void)stopTimingForKey:(id)arg1;
- (void)startTimingForKey:(id)arg1;
- (id)init;

@end

