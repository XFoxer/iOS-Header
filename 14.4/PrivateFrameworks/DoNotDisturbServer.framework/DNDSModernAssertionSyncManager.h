//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSAssertionSyncManager-Protocol.h>
#import <DoNotDisturbServer/DNDSSyncServiceDelegate-Protocol.h>

@class DNDSClientDetailsProvider, NSDate, NSString;
@protocol DNDSAssertionSyncManagerDataSource, DNDSAssertionSyncManagerDelegate, DNDSSyncService, OS_dispatch_queue;

@interface DNDSModernAssertionSyncManager : NSObject <DNDSSyncServiceDelegate, DNDSAssertionSyncManager>
{
    NSObject<OS_dispatch_queue> *_queue;
    id <DNDSSyncService> _syncService;
    DNDSClientDetailsProvider *_clientDetailsProvider;
    NSDate *_lastReceivedStoreDate;
    NSDate *_lastSentStoreDate;
    id <DNDSAssertionSyncManagerDataSource> _dataSource;
    id <DNDSAssertionSyncManagerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <DNDSAssertionSyncManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <DNDSAssertionSyncManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_queue_sendStateSnapshotToPairedDevice:(id)arg1 force:(_Bool)arg2;
- (void)_queue_handleMessage:(id)arg1 withVersionNumber:(unsigned long long)arg2;
- (void)syncService:(id)arg1 didReceiveMessage:(id)arg2 withVersionNumber:(unsigned long long)arg3 fromDeviceIdentifier:(id)arg4;
- (_Bool)syncService:(id)arg1 shouldAcceptIncomingMessage:(id)arg2 withVersionNumber:(unsigned long long)arg3 fromDeviceIdentifier:(id)arg4;
- (void)updateForModeAssertionUpdateResult:(id)arg1;
- (void)resume;
- (id)initWithClientDetailsProvider:(id)arg1 syncService:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

