//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSUtility/NSObject-Protocol.h>

@class NSObject;
@protocol OS_dispatch_queue;

@protocol TSUStreamReadChannel <NSObject>
- (void)close;
- (void)readWithQueue:(NSObject<OS_dispatch_queue> *)arg1 handler:(void (^)(_Bool, NSObject<OS_dispatch_data> *, NSError *))arg2;
@end

