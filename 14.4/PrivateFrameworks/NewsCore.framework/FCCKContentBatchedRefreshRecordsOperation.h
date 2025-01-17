//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class CKRecordID, FCCKContentDatabase, NSArray, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface FCCKContentBatchedRefreshRecordsOperation : FCOperation
{
    _Bool _checkForDeletions;
    FCCKContentDatabase *_database;
    NSArray *_recordIDs;
    NSDictionary *_changeTagsByRecordID;
    NSArray *_desiredKeys;
    CKRecordID *_canaryRecordID;
    CDUnknownBlockType _refreshRecordsCompletionBlock;
    NSMutableArray *_remainingRecordIDBatches;
    NSMutableSet *_refreshedRecordIDs;
    NSMutableDictionary *_updatedRecordsByRecordID;
    NSMutableSet *_deletedRecordIDs;
    NSMutableDictionary *_errorsByRecordID;
    NSError *_operationError;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSError *operationError; // @synthesize operationError=_operationError;
@property(retain, nonatomic) NSMutableDictionary *errorsByRecordID; // @synthesize errorsByRecordID=_errorsByRecordID;
@property(retain, nonatomic) NSMutableSet *deletedRecordIDs; // @synthesize deletedRecordIDs=_deletedRecordIDs;
@property(retain, nonatomic) NSMutableDictionary *updatedRecordsByRecordID; // @synthesize updatedRecordsByRecordID=_updatedRecordsByRecordID;
@property(retain, nonatomic) NSMutableSet *refreshedRecordIDs; // @synthesize refreshedRecordIDs=_refreshedRecordIDs;
@property(retain, nonatomic) NSMutableArray *remainingRecordIDBatches; // @synthesize remainingRecordIDBatches=_remainingRecordIDBatches;
@property(copy, nonatomic) CDUnknownBlockType refreshRecordsCompletionBlock; // @synthesize refreshRecordsCompletionBlock=_refreshRecordsCompletionBlock;
@property(copy, nonatomic) CKRecordID *canaryRecordID; // @synthesize canaryRecordID=_canaryRecordID;
@property(nonatomic) _Bool checkForDeletions; // @synthesize checkForDeletions=_checkForDeletions;
@property(copy, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(copy, nonatomic) NSDictionary *changeTagsByRecordID; // @synthesize changeTagsByRecordID=_changeTagsByRecordID;
@property(copy, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
@property(retain, nonatomic) FCCKContentDatabase *database; // @synthesize database=_database;
- (void)_continueRefreshing;
- (void)resetForRetry;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (_Bool)validateOperation;
- (id)init;

@end

