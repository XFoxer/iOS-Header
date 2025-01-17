//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ClientConnection, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CADOperationProxy : NSObject
{
    ClientConnection *_conn;
    NSMutableDictionary *_operationGroups;
}

+ (Class)_operationGroupClassFromSelector:(SEL)arg1;
+ (Class)operationProxyClassForClientWithConnection:(id)arg1;
+ (id)allOperationGroupClasses;
- (void)_callReplyHandler:(id)arg1 ofInvocation:(id)arg2 withError:(int)arg3;
- (id)_copyReplyBlockFromInvocation:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)_emptyMethod;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)_operationGroupForClass:(Class)arg1;
- (void)dealloc;
- (id)initWithClientConnection:(id)arg1;

@end

