//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMediaStream/NSURLConnectionDelegate-Protocol.h>

@class MSASPConnectionGate, NSString, NSURL;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface MSASProtocol : NSObject <NSURLConnectionDelegate>
{
    _Bool _isShuttingDown;
    MSASPConnectionGate *_gate;
    NSObject<OS_dispatch_queue> *_pendingConnectionsQueue;
    NSObject<OS_dispatch_group> *_pendingConnectionsGroup;
    NSString *_personID;
    NSURL *_baseURL;
    NSString *_serverSideConfigVersion;
    NSString *_headerVersion;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_memberQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // @synthesize memberQueue=_memberQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSString *headerVersion; // @synthesize headerVersion=_headerVersion;
@property(nonatomic) _Bool isShuttingDown; // @synthesize isShuttingDown=_isShuttingDown;
@property(retain, nonatomic) NSString *serverSideConfigVersion; // @synthesize serverSideConfigVersion=_serverSideConfigVersion;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(readonly, retain, nonatomic) NSString *personID; // @synthesize personID=_personID;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *pendingConnectionsGroup; // @synthesize pendingConnectionsGroup=_pendingConnectionsGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pendingConnectionsQueue; // @synthesize pendingConnectionsQueue=_pendingConnectionsQueue;
@property(retain, nonatomic) MSASPConnectionGate *gate; // @synthesize gate=_gate;
- (void)getAlbumURLForAlbumWithGUID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getServerSideConfigCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setAlbumSyncedState:(id)arg1 forAlbum:(id)arg2 albumStateCtag:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)setAssetCollectionSyncedState:(id)arg1 forAssetCollection:(id)arg2 inAlbum:(id)arg3 assetCollectionStateCtag:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)getAlbumSyncedStateForAlbum:(id)arg1 assetCollectionStateBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)getCommentChanges:(id)arg1 inAlbumWithGUID:(id)arg2 albumURLString:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)validateInvitationToken:(id)arg1 albumName:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)acceptInvitationWithToken:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)markAsSpamInvitationForToken:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)markAsSpamInvitationForAlbum:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)unsubscribeFromAlbum:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)subscribeToAlbum:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getTokensForAssets:(id)arg1 inAlbum:(id)arg2 albumURLString:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)_couldNotReauthorizeError;
- (void)getAssetCollections:(id)arg1 inAlbum:(id)arg2 albumURLString:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)albumSummaryAlbum:(id)arg1 albumURLString:(id)arg2 resetSync:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)getSharingInfoForAlbum:(id)arg1 albumURLString:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)getChangesRootCtag:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)deleteComment:(id)arg1 fromAssetCollection:(id)arg2 inAlbum:(id)arg3 albumURLString:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)deleteAssetCollections:(id)arg1 inAlbum:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)deleteAlbum:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)setMultipleContributorsEnabled:(_Bool)arg1 forAlbum:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setPublicAccessEnabled:(_Bool)arg1 forAlbum:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)addComment:(id)arg1 toAssetCollection:(id)arg2 inAlbum:(id)arg3 albumURLString:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)removeSharingRelationships:(id)arg1 fromAlbum:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)addSharingRelationships:(id)arg1 toAlbum:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)sendUploadCompleteSuccessfulAssetCollections:(id)arg1 failedAssetCollections:(id)arg2 album:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (_Bool)responseDict:(id)arg1 containsLimitErrorCode:(id)arg2 outMaxAllowed:(id *)arg3;
- (void)getVideoURL:(id)arg1 forAssetCollectionWithGUID:(id)arg2 inAlbumWithGUID:(id)arg3 albumURLString:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)getUploadTokens:(id)arg1 forAssetCollectionWithGUID:(id)arg2 inAlbumWithGUID:(id)arg3 albumURLString:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)putAssetCollections:(id)arg1 intoAlbum:(id)arg2 albumURLString:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)updateAlbum:(id)arg1 albumURLString:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)createAlbum:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)_getAlbumURL;
- (id)_serverSideConfigURL;
- (id)_setAlbumStateURL;
- (id)_setAssetStateURL;
- (id)_albumStateURL;
- (id)_setCommentPositionURL;
- (id)_getCommentsURLWithBaseURL:(id)arg1;
- (id)_reportSpamURL;
- (id)_unsubscribeURL;
- (id)_subscribeURL;
- (id)_validateInvitationURL;
- (id)_getTokensURLWithBaseURL:(id)arg1;
- (id)_getAssetsURLWithBaseURL:(id)arg1;
- (id)_albumSummaryURLWithBaseURL:(id)arg1;
- (id)_sharingInfoURLWithBaseURL:(id)arg1;
- (id)_getChangesURL;
- (id)_deleteCommentURLWithBaseURL:(id)arg1;
- (id)_deleteAssetsURLWithBaseURL:(id)arg1;
- (id)_deleteURLWithBaseURL:(id)arg1;
- (id)_enableMultipleContributorsURLWithBaseURL:(id)arg1;
- (id)_enablePublicAccessURLWithBaseURL:(id)arg1;
- (id)_addCommentURLWithBaseURL:(id)arg1;
- (id)_unshareURL;
- (id)_shareURL;
- (id)_uploadCompleteURLWithBaseURL:(id)arg1;
- (id)_getVideoURLWithBaseURL:(id)arg1;
- (id)_getUploadTokensURLWithBaseURL:(id)arg1;
- (id)_putAssetsURLWithBaseURL:(id)arg1;
- (id)_updateAlbumURLWithBaseURL:(id)arg1;
- (id)_createAlbumURL;
- (id)errorFromStandardProcessingOnResponse:(id)arg1 responseObject:(id)arg2 checkServerSideConfigVersion:(_Bool)arg3 error:(id)arg4 body:(id)arg5;
- (id)HTTPErrorWithStatusCode:(long long)arg1;
- (void)_prepareHeadersForRequest:(id)arg1;
- (void)_sendOneURLRequest:(id)arg1 checkServerSideConfigVersion:(_Bool)arg2 retryCount:(unsigned long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)sendURLRequest:(id)arg1 method:(id)arg2 bodyObj:(id)arg3 checkServerSideConfigVersion:(_Bool)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)sendURLRequest:(id)arg1 bodyObj:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (CDUnknownBlockType)stopHandlerBlock;
- (void)stopCompletionBlock:(CDUnknownBlockType)arg1;
- (void)shutDownCompletionBlock:(CDUnknownBlockType)arg1;
- (id)stoppingError;
- (id)shutDownError;
- (id)initWithPersonID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

