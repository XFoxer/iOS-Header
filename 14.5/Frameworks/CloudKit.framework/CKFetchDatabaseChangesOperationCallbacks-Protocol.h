//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKOperationCallbacks-Protocol.h>

@class CKRecordZoneID, CKServerChangeToken, NSError;

@protocol CKFetchDatabaseChangesOperationCallbacks <CKOperationCallbacks>
- (void)handleChangeSetCompletionWithServerChangeToken:(CKServerChangeToken *)arg1 databaseChangesStatus:(long long)arg2 error:(NSError *)arg3 reply:(void (^)(NSError *))arg4;
- (void)handlePurgeForRecordZoneID:(CKRecordZoneID *)arg1;
- (void)handleDeleteForRecordZoneID:(CKRecordZoneID *)arg1;
- (void)handleChangeForRecordZoneID:(CKRecordZoneID *)arg1;
@end

