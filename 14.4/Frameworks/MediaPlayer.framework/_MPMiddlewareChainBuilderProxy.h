//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class Protocol;

__attribute__((visibility("hidden")))
@interface _MPMiddlewareChainBuilderProxy : NSProxy
{
    Protocol *_protocol;
}

+ (id)allocWithProtocol:(id)arg1;
- (void).cxx_destruct;
- (struct objc_method_description)_methodDescriptionFromProtocolHierarchy:(id)arg1 selector:(SEL)arg2;
- (struct objc_method_description)_methodDescriptionFromProtocol:(id)arg1 selector:(SEL)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;

@end

