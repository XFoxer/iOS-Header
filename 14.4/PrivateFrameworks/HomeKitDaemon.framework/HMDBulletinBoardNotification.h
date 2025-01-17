//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDBulletinBoardNotificationServiceGroup, HMDService, HMFMessageDispatcher, NSObject, NSPredicate, NSString, NSUUID;
@protocol HMFLocking, OS_dispatch_queue;

@interface HMDBulletinBoardNotification : HMFObject <NSSecureCoding, HMFMessageReceiver, HMFLogging, HMFDumpState>
{
    id <HMFLocking> _lock;
    _Bool _enabled;
    NSPredicate *_condition;
    HMDBulletinBoardNotificationServiceGroup *_notificationServiceGroup;
    NSUUID *_messageTargetUUID;
    NSObject<OS_dispatch_queue> *_messageReceiveQueue;
    HMDService *_service;
    HMFMessageDispatcher *_msgDispatcher;
}

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
+ (_Bool)supportsBulletinNotificationGroup:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(readonly, nonatomic) __weak HMDService *service; // @synthesize service=_service;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue; // @synthesize messageReceiveQueue=_messageReceiveQueue;
@property(retain, nonatomic) NSPredicate *condition; // @synthesize condition=_condition;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)attributeDescriptions;
@property(readonly, nonatomic) NSUUID *messageTargetUUID; // @synthesize messageTargetUUID=_messageTargetUUID;
- (id)logIdentifier;
- (void)registerForCharacteristicNotifications;
- (id)dumpState;
- (void)_handleBulletinBoardNotificationCommitRequest:(id)arg1;
- (void)configureBulletinNotification;
@property(retain, nonatomic) HMDBulletinBoardNotificationServiceGroup *notificationServiceGroup; // @synthesize notificationServiceGroup=_notificationServiceGroup;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void)registerNotificationHandlers;
- (void)configureMsgDispatcher:(id)arg1;
- (void)dealloc;
- (id)initWithService:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

