//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCImageConverterBase : NSObject
{
    struct __CVPixelBufferPool *_bufferPool;
    NSMutableDictionary *_bufferPoolDictionary;
}

- (_Bool)ensureBufferPoolSupportsOutputWidth:(unsigned long long)arg1 outputHeight:(unsigned long long)arg2;
- (_Bool)setUpBufferPoolForOutputWidth:(unsigned long long)arg1 outputHeight:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithFormatType:(unsigned int)arg1;

@end

