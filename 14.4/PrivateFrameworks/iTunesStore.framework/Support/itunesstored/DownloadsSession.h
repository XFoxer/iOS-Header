//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DownloadPipeline, DownloadPolicyManager, ExternalDownloadState, NSOrderedSet, SSSQLiteDatabase;

@interface DownloadsSession : NSObject
{
    DownloadPipeline *_pipeline;
    SSSQLiteDatabase *_database;
    ExternalDownloadState *_externalState;
    DownloadPolicyManager *_policyManager;
}

@property(readonly, nonatomic) DownloadPolicyManager *policyManager; // @synthesize policyManager=_policyManager;
@property(readonly, nonatomic) DownloadPipeline *pipeline; // @synthesize pipeline=_pipeline;
@property(readonly, nonatomic) SSSQLiteDatabase *database; // @synthesize database=_database;
- (id)valueForExternalProperty:(id)arg1 ofDownloadID:(long long)arg2;
- (id)valueForExternalProperty:(id)arg1 ofAssetID:(long long)arg2;
- (id)placeholderDownloadForPurchaseIdentifier:(long long)arg1;
- (id)placeholderDownloadForPurchase:(id)arg1;
- (_Bool)placeholderDownloadCanceledForPurchaseIdentifier:(long long)arg1;
- (id)newEventDictionaryWithDownloadIdentifier:(long long)arg1 assetIdentifier:(long long)arg2;
- (id)externalValuesForDownloadID:(long long)arg1;
- (id)downloadForStoreDownload:(id)arg1;
@property(readonly, nonatomic) NSOrderedSet *activeDownloadIdentifiers;
- (void)dealloc;
- (id)initWithSessionDescriptor:(id)arg1;
- (id)init;

@end

