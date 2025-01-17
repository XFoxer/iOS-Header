//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SIPostingsIterator : NSObject
{
    int _fd;
    unsigned long long _base;
    CDUnknownBlockType _offsetBlock;
    CDUnknownBlockType _docBlock;
}

+ (id)iteratorWithFileDescriptor:(int)arg1 base:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType docBlock; // @synthesize docBlock=_docBlock;
@property(copy, nonatomic) CDUnknownBlockType offsetBlock; // @synthesize offsetBlock=_offsetBlock;
@property(readonly, nonatomic) unsigned long long base; // @synthesize base=_base;
@property(readonly, nonatomic) int fd; // @synthesize fd=_fd;
- (void)iterate:(unsigned long long)arg1;
- (id)initWithFileDescriptor:(int)arg1 base:(unsigned long long)arg2;

@end

