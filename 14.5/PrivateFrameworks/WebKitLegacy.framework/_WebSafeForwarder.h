//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _WebSafeAsyncForwarder;

__attribute__((visibility("hidden")))
@interface _WebSafeForwarder : NSObject
{
    id _target;
    id _defaultTarget;
    _WebSafeAsyncForwarder *_asyncForwarder;
}

@property(readonly, nonatomic) id asyncForwarder; // @synthesize asyncForwarder=_asyncForwarder;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)clearTarget;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 defaultTarget:(id)arg2;

@end

