//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString;
@protocol OS_dispatch_queue, SBSRemoteAlertHandleClient;

@interface SBSRemoteAlertHandle : NSObject
{
    struct os_unfair_lock_s _lock;
    _Bool _lock_active;
    _Bool _lock_valid;
    NSHashTable *_lock_observers;
    NSObject<OS_dispatch_queue> *_calloutSerialQueue;
    id <SBSRemoteAlertHandleClient> _handleClient;
    NSString *_handleID;
}

+ (id)handleWithConfiguration:(id)arg1;
+ (id)lookupHandlesForConfiguration:(id)arg1 creatingIfNone:(_Bool)arg2;
+ (void)setDefaultHandleClient:(id)arg1;
+ (id)defaultHandleClient;
+ (id)newHandleWithDefinition:(id)arg1 configurationContext:(id)arg2;
+ (id)lookupHandlesForDefinition:(id)arg1 creatingIfNone:(_Bool)arg2 configurationContext:(id)arg3;
+ (id)lookupHandlesForDefinition:(id)arg1 creatingIfNone:(_Bool)arg2;
+ (id)lookupHandlesForDefinition:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *handleID; // @synthesize handleID=_handleID;
- (void)_invalidateWithError:(id)arg1 shouldInvalidateHandleClient:(_Bool)arg2;
- (void)_receivedInvalidationWithError:(id)arg1;
- (void)_didDeactivate;
- (void)_didActivate;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)invalidate;
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (void)activateWithContext:(id)arg1;
- (void)activateWithOptions:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)_initWithHandleID:(id)arg1 handleClient:(id)arg2;

@end

