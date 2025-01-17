//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsToday/NSObject-Protocol.h>

@class FRRingBuffer, NSDictionary, NSString;

@protocol FRRingBufferContainer <NSObject>
- (double)maxForKey:(NSString *)arg1;
- (double)minForKey:(NSString *)arg1;
- (_Bool)hasMaxForKey:(NSString *)arg1;
- (_Bool)hasMinForKey:(NSString *)arg1;
- (void)setRingBuffers:(NSDictionary *)arg1;
- (FRRingBuffer *)ringBufferForKey:(NSString *)arg1 capacity:(unsigned long long)arg2;
- (FRRingBuffer *)ringBufferForKey:(NSString *)arg1;
@end

