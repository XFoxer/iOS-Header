//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLBuffer;

__attribute__((visibility("hidden")))
@interface SCNMTLBuffer : NSObject
{
    long long _usedCount;
    id <MTLBuffer> _buffer;
    unsigned long long _offset;
    id _dataSource;
}

@property(nonatomic) id dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(retain, nonatomic) id <MTLBuffer> buffer; // @synthesize buffer=_buffer;
@property long long usedCount; // @synthesize usedCount=_usedCount;
- (long long)decrementUsedCount;
- (void)incrementUsedCount;
- (void)dealloc;
@property(readonly, nonatomic) void *contents;

@end

