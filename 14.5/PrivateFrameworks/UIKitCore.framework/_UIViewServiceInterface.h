//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSXPCConnectionDelegate-Protocol.h>

@class BKSProcessAssertion, NSError, NSString, NSXPCConnection, _UIAsyncInvocation, _UIRemoteViewService;

__attribute__((visibility("hidden")))
@interface _UIViewServiceInterface : NSObject <NSXPCConnectionDelegate>
{
    struct os_unfair_lock_s _terminationStateLock;
    NSError *_terminationError;
    CDUnknownBlockType _terminationHandler;
    _Atomic _Bool _isTerminated;
    _UIAsyncInvocation *_terminateInvocation;
    NSString *_serviceBundleIdentifier;
    _UIRemoteViewService *_service;
    BKSProcessAssertion *_serviceProcessAssertion;
    NSXPCConnection *_serviceConnection;
    int __automatic_invalidation_retainCount;
    _Bool __automatic_invalidation_invalidated;
}

+ (id)connectToViewService:(id)arg1 deputyInterfaces:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;
+ (id)connectToViewServiceWithBundleIdentifier:(id)arg1 deputyInterfaces:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) CDStruct_4c969caf serviceAuditToken;
@property(readonly, nonatomic) int servicePID;
- (void)dealloc;
- (id)disconnect;
- (void)setTerminationHandler:(CDUnknownBlockType)arg1;
- (void)_terminateUnconditionallyThen:(CDUnknownBlockType)arg1;
- (id)_terminateWithError:(id)arg1;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;
- (id)connectToDeputyWithInterface:(id)arg1 fromExportedHostingObject:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;
- (id)_initWithConnectionInfo:(CDStruct_d58a15aa)arg1 service:(id)arg2 deputyInterfaces:(id)arg3;
- (id)_initWithConnectionInfo:(CDStruct_d58a15aa)arg1 serviceBundleIdentifier:(id)arg2 deputyInterfaces:(id)arg3;
- (id)_initWithConnectionInfo:(CDStruct_d58a15aa)arg1 serviceBundleIdentifier:(id)arg2 service:(id)arg3 deputyInterfaces:(id)arg4;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (int)__automatic_invalidation_logic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

