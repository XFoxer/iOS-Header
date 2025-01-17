//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface AdQueue : NSObject
{
    NSMutableArray *_array;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue; // @synthesize concurrentQueue=_concurrentQueue;
@property(retain, nonatomic) NSMutableArray *array; // @synthesize array=_array;
- (void)enqueue:(id)arg1;
- (id)dequeue;
- (unsigned long long)count;
- (id)init;

@end

