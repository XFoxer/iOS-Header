//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitEventRouter/HMERouterServer.h>

@class NSObject;
@protocol HMEPersistentConnectionServerDataSource, HMEPersistentConnectionServerDelegate, OS_os_log;

@interface HMEPersistentConnectionServer : HMERouterServer
{
    NSObject<OS_os_log> *_logger;
    id <HMEPersistentConnectionServerDelegate> _delegate;
    id <HMEPersistentConnectionServerDataSource> _dataSource;
}

- (void).cxx_destruct;
@property __weak id <HMEPersistentConnectionServerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property __weak id <HMEPersistentConnectionServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)changeRegistrationsForConnection:(id)arg1 topicFilterAdditions:(id)arg2 topicFilterRemovals:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)didInvalidateConnection:(id)arg1;
- (void)disconnectConnection:(id)arg1;
- (void)connectWithConnection:(id)arg1 connectEvent:(id)arg2 unregisterEvent:(id)arg3;
- (void)handleEvent:(id)arg1 topic:(id)arg2;
- (id)initWithQueue:(id)arg1 provider:(id)arg2 registrationEventRouter:(id)arg3 requireACLEnforcementForTypes:(id)arg4;

@end

