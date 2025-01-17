//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPStoreDownloadManagerObserver-Protocol.h>
#import <MediaPlayer/SSDownloadHandlerDelegate-Protocol.h>

@class NSMapTable, NSMutableArray, NSString, SSDownloadHandler;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPStorePlayWhileDownloadController : NSObject <MPStoreDownloadManagerObserver, SSDownloadHandlerDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    SSDownloadHandler *_downloadHandler;
    NSMapTable *_downloadToActiveSessions;
    NSMapTable *_downloadToDownloadTokenPendingCompletionHandlers;
    NSMapTable *_downloadToProcessingDownloadHandlerSessions;
    NSMapTable *_downloadToObservationTransactionCount;
    NSMapTable *_downloadToValidStatePendingCompletionHandlers;
    NSMutableArray *_pausedDownloads;
    NSMutableArray *_prioritizedDownloads;
}

+ (id)sharedController;
- (void).cxx_destruct;
- (void)_updateForDownloadTokenRefreshWithDownload:(id)arg1;
- (void)_updateForDownloadStateRefreshWithDownload:(id)arg1;
- (void)_updateActiveSessionsForDownload:(id)arg1;
- (void)_suspendUntilValidDownloadStateForStoreDownload:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_postActiveSessionsDidFinishForStoreDownload:(id)arg1;
- (_Bool)_isStoreDownloadValidForPlayWhileDownload:(id)arg1;
- (void)_handleDownloadPrioritization;
- (void)_getDownloadTokenForStoreDownload:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_getDownloadPropertiesForStoreDownload:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_endPrioritizingDownloadSession:(id)arg1;
- (void)_endPrioritizingDownload:(id)arg1;
- (void)_endDownloadObservationForDownload:(id)arg1;
- (void)_beginPrioritizingDownloadSession:(id)arg1;
- (void)_beginPrioritizingDownload:(id)arg1;
- (void)_beginDownloadObservationForDownload:(id)arg1;
- (void)releasePlayWhileDownloadSession:(id)arg1;
- (void)endPrioritizingDownloadSession:(id)arg1;
- (void)beginPrioritizingDownloadSession:(id)arg1;
- (void)acquirePlayWhileDownloadSessionForDownload:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) long long downloadHandlerIdentifier;
- (void)downloadHandler:(id)arg1 handleSession:(id)arg2;
- (void)downloadHandler:(id)arg1 cancelSession:(id)arg2;
- (void)downloadManager:(id)arg1 downloadPurchaseDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2;
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

