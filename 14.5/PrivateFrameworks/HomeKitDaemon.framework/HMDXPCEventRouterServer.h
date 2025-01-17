//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMEAccessControlEnforcer-Protocol.h>
#import <HomeKitDaemon/HMEPersistentConnectionServerDataSource-Protocol.h>
#import <HomeKitDaemon/HMEPersistentConnectionServerDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>

@class HMEPersistentConnectionServer, HMFMessageDispatcher, NSNotificationCenter, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDXPCEventRouterServer : NSObject <HMFMessageReceiver, HMEAccessControlEnforcer, HMEPersistentConnectionServerDelegate, HMEPersistentConnectionServerDataSource, HMFLogging>
{
    HMEPersistentConnectionServer *_persistentConnectionServer;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSUUID *_messageUUID;
    NSString *_changeRegistrationsMessageName;
    NSString *_updateEventsMessageName;
    HMFMessageDispatcher *_messageDispatcher;
    NSNotificationCenter *_notificationCenter;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly, copy) NSString *updateEventsMessageName; // @synthesize updateEventsMessageName=_updateEventsMessageName;
@property(readonly, copy) NSString *changeRegistrationsMessageName; // @synthesize changeRegistrationsMessageName=_changeRegistrationsMessageName;
@property(readonly, copy) NSUUID *messageUUID; // @synthesize messageUUID=_messageUUID;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) HMEPersistentConnectionServer *persistentConnectionServer; // @synthesize persistentConnectionServer=_persistentConnectionServer;
- (id)dumpStateDescription;
- (void)configure;
- (_Bool)shouldAllowEvent:(id)arg1 accessControl:(id)arg2 connection:(id)arg3;
- (unsigned long long)debounceTimeForConnection:(id)arg1;
- (id)accessControlEnforcerForType:(id)arg1;
- (void)sendUpdatedEvents:(id)arg1 toConnection:(id)arg2;
- (void)handleXPCConnectionInvalidated:(id)arg1;
- (void)_handleChangeRegistrationsRequest:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)registerForMessages;
- (id)logIdentifier;
- (id)initWithMessageUUID:(id)arg1 changeRegistrationsMessageName:(id)arg2 updateEventsMessageName:(id)arg3 messageDispatcher:(id)arg4 queue:(id)arg5 notificationCenter:(id)arg6 persistentConnectionServerFactory:(CDUnknownBlockType)arg7;
- (id)initWithMessageUUID:(id)arg1 changeRegistrationsMessageName:(id)arg2 updateEventsMessageName:(id)arg3 messageDispatcher:(id)arg4 queue:(id)arg5 notificationCenter:(id)arg6 subscriptionProvider:(id)arg7 registrationEventRouter:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

