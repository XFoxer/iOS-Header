//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, PLPhotoLibrary;

@interface PLCloudBatchUploader : NSObject
{
    PLPhotoLibrary *_photoLibrary;
    NSMutableArray *_uploadBatchArray;
    NSMutableSet *_downloadedDeleteRecords;
    NSMutableSet *_cameraAsset;
    _Bool _initialUpload;
    _Bool _shouldGenerateDerivatives;
    NSMutableDictionary *_recordsToDelete;
    NSString *_recordsToDeletePlistPath;
    NSMutableSet *_momentSharesNeedingForceSync;
}

- (void).cxx_destruct;
@property _Bool shouldGenerateDerivatives; // @synthesize shouldGenerateDerivatives=_shouldGenerateDerivatives;
@property _Bool initialUpload; // @synthesize initialUpload=_initialUpload;
- (void)processMomentSharesNeedingForceSync;
- (void)recordMomentSharesNeedingForceSync:(id)arg1;
- (id)processCommitError:(id)arg1 andFinalizeError:(id)arg2 forUploadBatchContainer:(id)arg3 withUploadTracker:(id)arg4;
- (void)_clearSuccessfullyPushedDeletedRecords:(id)arg1;
- (_Bool)_updateDeletionRecordListForKey:(id)arg1 removingRecordID:(id)arg2;
- (_Bool)_processRepushAlbumError:(id)arg1 inUploadBatch:(id)arg2 forRecords:(id)arg3;
- (void)_processGenerateDerivativesCommitError:(id)arg1 inUploadBatch:(id)arg2 forRecords:(id)arg3;
- (void)tryToFixCommitError:(id)arg1 inUploadBatch:(id)arg2 forRecords:(id)arg3 uploadTracker:(id)arg4;
- (void)_addLocalResourcesToRecord:(id)arg1;
- (void)_processInvalidExpungeableResourceTypesCommitError:(id)arg1 inUploadBatch:(id)arg2 forRecords:(id)arg3;
- (void)_processInvalidResourceCopySourceCommitError:(id)arg1 inUploadBatch:(id)arg2 forRecords:(id)arg3;
- (void)_processInvalidScopeCommitError:(id)arg1 inUploadBatch:(id)arg2 forRecords:(id)arg3;
- (void)_processQuarantineRecordsCommitError:(id)arg1 inUploadBatch:(id)arg2 forRecords:(id)arg3 uploadTracker:(id)arg4;
- (void)_quarantineObject:(id)arg1 uploadTracker:(id)arg2;
- (void)quarantineRecord:(id)arg1 uploadTracker:(id)arg2;
- (void)_processIncludeMasterCommitError:(id)arg1 inUploadBatch:(id)arg2 forRecords:(id)arg3;
- (void)_processChangeToFullRecordCommitError:(id)arg1 inUploadBatch:(id)arg2 forRecords:(id)arg3;
- (id)_getLocalRecordFromCPLRecord:(id)arg1;
- (void)_cleanUploadedResources:(id)arg1;
- (void)uploadFullPhotoLibraryToCloud;
- (void)uploadDeletedRecordsFromPlist:(id)arg1;
- (id)_personsToUploadIncludingReverseOrderedMergeTargetsForPersons:(id)arg1;
- (void)_processPendingObjects:(id)arg1 withBatchManager:(id)arg2;
- (void)_sendAssets:(id)arg1 toBatchManager:(id)arg2;
- (void)_sendAlbums:(id)arg1 toBatchManager:(id)arg2;
- (void)_sendOneBatch:(id)arg1 toBatchManager:(id)arg2;
- (void)_incrementUploadAttemptsAndPushStateForAssets:(id)arg1;
- (id)createBatchesForChanges:(id)arg1 outInsertedPhotoCount:(unsigned long long *)arg2 outInsertedVideoCount:(unsigned long long *)arg3 withUploadTracker:(id)arg4;
- (id)_validateAssets:(id)arg1 fromCloudUuidDeleteList:(id)arg2;
- (void)_processAlbumInserts:(id)arg1 albumChanges:(id)arg2 withBatchManager:(id)arg3;
- (void)handleUploadBatchesFromLocalEvent:(id)arg1 outInsertedPhotoCount:(unsigned long long *)arg2 outInsertedVideoCount:(unsigned long long *)arg3 shouldTriggerPrefetch:(_Bool *)arg4 withUploadTracker:(id)arg5;
- (id)_fetchChangesFromLocalEvent:(id)arg1 shouldTriggerPrefetch:(_Bool *)arg2;
- (void)_promptForNilAssetUUID:(id)arg1 isInsert:(_Bool)arg2;
- (void)_handleInvalidAsset:(id)arg1;
- (void)_addAsset:(id)arg1 toAssetChanges:(id)arg2 isInsert:(_Bool)arg3 seenAssetUuid:(id)arg4;
- (id)_syncDescriptionForObject:(id)arg1;
- (void)_promptToFileRadarWithTitle:(id)arg1 description:(id)arg2;
- (_Bool)_validateAsset:(id)arg1 onRelatedObject:(id)arg2;
- (_Bool)_validateAdditionalAssetAttributes:(id)arg1 onRelatedObject:(id)arg2;
- (void)_sortData:(id)arg1 isInsert:(_Bool)arg2 forUploadChanges:(id)arg3 shouldTriggerPrefetch:(_Bool *)arg4 inManagedObjectContext:(id)arg5;
- (void)_sortRelationshipData:(id)arg1 forUploadChanges:(id)arg2 inManagedObjectContext:(id)arg3;
- (void)recordDeletions:(id)arg1;
- (void)_pushBatches:(id)arg1;
- (void)_push:(id)arg1;
- (id)pop;
- (unsigned long long)numberOfBatchesToUpload;
- (_Bool)hasBatchesToUpload;
- (void)addBatches:(id)arg1;
- (void)clearUploadArray;
- (id)initWithLibrary:(id)arg1;

@end

