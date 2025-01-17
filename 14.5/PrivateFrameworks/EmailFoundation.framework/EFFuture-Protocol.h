//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailFoundation/EFCancelable-Protocol.h>

@class NSDate;
@protocol EFFuture, EFFutureDelegate, EFScheduler;

@protocol EFFuture <EFCancelable>
@property(readonly, getter=isCancelled) _Bool cancelled;
@property(readonly, getter=isFinished) _Bool finished;
@property __weak id <EFFutureDelegate> delegate;
@property(readonly, nonatomic) id resultIfAvailable;
@property(readonly, nonatomic) id result;
- (id <EFFuture>)onScheduler:(id <EFScheduler>)arg1 map:(id (^)(id))arg2;
- (id <EFFuture>)map:(id (^)(id))arg1;
- (id <EFFuture>)onScheduler:(id <EFScheduler>)arg1 recover:(id <EFFuture> (^)(NSError *))arg2;
- (id <EFFuture>)recover:(id <EFFuture> (^)(NSError *))arg1;
- (id <EFFuture>)onScheduler:(id <EFScheduler>)arg1 then:(id <EFFuture> (^)(id))arg2;
- (id <EFFuture>)then:(id <EFFuture> (^)(id))arg1;
- (void)onScheduler:(id <EFScheduler>)arg1 always:(void (^)(void))arg2;
- (void)always:(void (^)(void))arg1;
- (void)onScheduler:(id <EFScheduler>)arg1 addFailureBlock:(void (^)(NSError *))arg2;
- (void)addFailureBlock:(void (^)(NSError *))arg1;
- (void)onScheduler:(id <EFScheduler>)arg1 addSuccessBlock:(void (^)(id))arg2;
- (void)addSuccessBlock:(void (^)(id))arg1;
- (_Bool)tryCancel;
- (id)resultIfAvailable:(id *)arg1;
- (id)resultBeforeDate:(NSDate *)arg1 error:(id *)arg2;
- (id)resultWithTimeout:(double)arg1 error:(id *)arg2;
- (id)result:(id *)arg1;
@end

