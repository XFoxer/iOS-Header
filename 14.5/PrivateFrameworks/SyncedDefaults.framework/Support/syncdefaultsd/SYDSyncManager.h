//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CKSyncEngineDataSource-Protocol.h"
#import "CKSyncEngineDataSourcePrivate-Protocol.h"

@class CKContainer, CKSyncEngine, NSString, SYDCoreDataStore;
@protocol OS_dispatch_queue, SYDSyncManagerDelegate;

@interface SYDSyncManager : NSObject <CKSyncEngineDataSource, CKSyncEngineDataSourcePrivate>
{
    _Bool _alwaysSaveRecordZones;
    CKContainer *_container;
    SYDCoreDataStore *_coreDataStore;
    long long _storeType;
    NSObject<OS_dispatch_queue> *_queue;
    CKSyncEngine *_engine;
    id <SYDSyncManagerDelegate> _delegate;
}

+ (_Bool)shouldIgnoreFetchError:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SYDSyncManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool alwaysSaveRecordZones; // @synthesize alwaysSaveRecordZones=_alwaysSaveRecordZones;
@property(retain, nonatomic) CKSyncEngine *engine; // @synthesize engine=_engine;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) long long storeType; // @synthesize storeType=_storeType;
@property(retain, nonatomic) SYDCoreDataStore *coreDataStore; // @synthesize coreDataStore=_coreDataStore;
@property(retain, nonatomic) CKContainer *container; // @synthesize container=_container;
- (void)deleteDataFromDisk;
- (_Bool)syncEngine:(id)arg1 shouldFetchChangesForZoneID:(id)arg2;
- (void)syncEngine:(id)arg1 zoneWithIDWasPurged:(id)arg2;
- (void)syncEngine:(id)arg1 failedToDeleteRecordZoneWithID:(id)arg2 error:(id)arg3;
- (void)syncEngine:(id)arg1 didDeleteRecordZoneWithID:(id)arg2;
- (void)syncEngine:(id)arg1 failedToSaveRecordZone:(id)arg2 error:(id)arg3;
- (void)syncEngine:(id)arg1 didSaveRecordZones:(id)arg2;
- (void)syncEngine:(id)arg1 didUpdateMetadata:(id)arg2;
- (void)syncEngine:(id)arg1 recordWithIDWasDeleted:(id)arg2 recordType:(id)arg3;
- (void)deduplicateRecordForKeyValue:(id)arg1 withNewlyFetchedRecord:(id)arg2;
- (void)didFetchKeyValueRecord:(id)arg1;
- (void)saveSyncAnchorSystemFieldsRecord:(id)arg1;
- (void)syncEngine:(id)arg1 didFetchRecord:(id)arg2;
- (void)syncEngine:(id)arg1 failedToDeleteRecordWithID:(id)arg2 error:(id)arg3;
- (void)syncEngine:(id)arg1 didDeleteRecordWithID:(id)arg2;
- (void)failedToSaveKeyValueRecord:(id)arg1 error:(id)arg2;
- (void)syncEngine:(id)arg1 failedToSaveRecord:(id)arg2 error:(id)arg3;
- (void)didSaveKeyValueRecord:(id)arg1;
- (void)syncEngine:(id)arg1 didSaveRecord:(id)arg2;
- (id)syncEngine:(id)arg1 recordToSaveForRecordID:(id)arg2;
- (void)_queue_resetSyncEngine;
- (void)resetSyncEngineWithContainer:(id)arg1;
- (void)resetSyncEngine;
- (void)addSyncAnchorRecordIDToSaveIfNecessaryForStoreIdentifier:(id)arg1;
- (void)addKeyValueRecordIDsToSave:(id)arg1 recordIDsToDelete:(id)arg2;
- (void)markAllKeyValuesAsNeedingToBeUploadedForStoreWithIdentifier:(id)arg1;
- (void)markAllKeyValuesAsNeedingToBeUploaded;
- (id)newRecordNameForKey:(id)arg1;
- (_Bool)hasPendingChangesToUpload;
@property(nonatomic, getter=isAutomaticSyncingEnabled) _Bool automaticSyncingEnabled;
- (id)recordIDForKey:(id)arg1 inStoreWithIdentifier:(id)arg2;
- (void)deleteDataFromCloudWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchChangesFromCloudForStoreIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchChangesFromCloudForAllStoresWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)savePendingChangesToCloudForStoreIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)savePendingChangesToCloudForAllStoresWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)synchronizeAllStoresWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)synchronizeStoreWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)removeObjectForKey:(id)arg1 inStoreWithIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)removeObjectForKey:(id)arg1 inStoreWithIdentifier:(id)arg2 excludeFromChangeTracking:(_Bool)arg3 error:(id *)arg4;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2 inStoreWithIdentifier:(id)arg3 error:(id *)arg4;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2 inStoreWithIdentifier:(id)arg3 excludeFromChangeTracking:(_Bool)arg4 error:(id *)arg5;
- (id)objectForKey:(id)arg1 inStoreWithIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)shouldSyncStoreWithIdentifier:(id)arg1;
@property(readonly, nonatomic) _Bool useSyncAnchor;
- (_Bool)useUUIDRecordNames;
@property(readonly, nonatomic) CKSyncEngine *syncEngine;
- (void)initializeSyncEngine;
@property(readonly, copy) NSString *description;
- (id)initWithContainer:(id)arg1 coreDataStore:(id)arg2 storeType:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

