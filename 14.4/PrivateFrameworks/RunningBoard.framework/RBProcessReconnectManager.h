//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, RBProcess;
@protocol OS_dispatch_queue, RBAssertionManaging, RBAssertionOriginatorPidPersisting, RBDomainAttributeManaging;

@interface RBProcessReconnectManager : NSObject
{
    id <RBAssertionManaging> _assertionManager;
    id <RBDomainAttributeManaging> _domainAttributeManager;
    id <RBAssertionOriginatorPidPersisting> _assertionOriginatorPidStore;
    RBProcess *_originatorProcess;
    NSMutableSet *_currentAssertionIdentifiers;
    NSMutableSet *_pendingProcesses;
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s _lock;
}

- (void).cxx_destruct;
- (void)didInvalidateAssertion:(id)arg1;
- (void)reconnectProcesses:(id)arg1;
- (id)initWithAssertionManager:(id)arg1 domainAttributeManager:(id)arg2 assertionOriginatorPidStore:(id)arg3 originatorProcess:(id)arg4;
- (id)init;

@end

