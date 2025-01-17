//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSAssertionSyncManager-Protocol.h>

@class DNDSClientDetailsProvider, NPSDomainAccessor, NPSManager, NSString;
@protocol DNDSAssertionSyncManagerDelegate, DNDSLegacyAssertionSyncManagerDataSource, OS_dispatch_queue;

@interface DNDSLegacyAssertionSyncManager : NSObject <DNDSAssertionSyncManager>
{
    NSObject<OS_dispatch_queue> *_queue;
    NPSManager *_npsManager;
    NPSDomainAccessor *_accessor;
    DNDSClientDetailsProvider *_clientDetailsProvider;
    id <DNDSLegacyAssertionSyncManagerDataSource> _dataSource;
    id <DNDSAssertionSyncManagerDelegate> _delegate;
}

+ (void)cleanupState;
- (void).cxx_destruct;
@property(nonatomic) __weak id <DNDSAssertionSyncManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <DNDSLegacyAssertionSyncManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_queue_updateGizmoAssertionSyncWithModeAssertionUpdateContext:(id)arg1;
- (void)_queue_updateCompanionAssertionMirroringForState:(id)arg1;
- (_Bool)_queue_updateCompanionToggleSyncForGizmoUpdateDate:(id)arg1 modeAssertionUpdateContext:(id)arg2;
- (void)_queue_updateGizmoToggleSyncForState:(id)arg1 companionUpdateDate:(id)arg2 reason:(unsigned long long)arg3;
- (id)_queue_gizmoUpdateDate;
- (void)_queue_updateToggleSyncForReason:(unsigned long long)arg1;
- (void)_endMonitoringForChanges;
- (void)_beginMonitoringForChanges;
- (void)_updateGizmoAssertionSync;
- (void)_updateForReason:(unsigned long long)arg1;
- (void)updateForStateUpdate:(id)arg1;
- (void)resume;
- (void)dealloc;
- (id)initWithClientDetailsProvider:(id)arg1 pairedDevice:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

