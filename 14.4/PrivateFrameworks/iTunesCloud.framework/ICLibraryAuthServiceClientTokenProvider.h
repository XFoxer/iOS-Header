//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/ICLibraryAuthServiceClientTokenProviderProtocol-Protocol.h>
#import <iTunesCloud/NSXPCListenerDelegate-Protocol.h>

@class AFMultiUserConnection, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString, NSXPCConnection, NSXPCListener;
@protocol OS_dispatch_queue;

@interface ICLibraryAuthServiceClientTokenProvider : NSObject <ICLibraryAuthServiceClientTokenProviderProtocol, NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSOperationQueue *_operationQueue;
    NSMutableDictionary *_tokenCache;
    _Bool _isService;
    NSXPCListener *_xpcServiceListener;
    NSMutableSet *_xpcConnections;
    NSXPCConnection *_xpcClientConnection;
    AFMultiUserConnection *_siriConnection;
}

+ (id)sharedProvider;
- (void).cxx_destruct;
- (void)_removeConnection:(id)arg1;
- (void)_addConnection:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;
- (_Bool)_updateEntriesForAccountsChanges;
- (_Bool)_isPrivacyAcknowledgementRequired;
- (void)_updateTokenCacheEntryForDSID:(id)arg1 tokenResult:(id)arg2 error:(id)arg3;
- (_Bool)_shouldStopBackgroundRefreshForError:(id)arg1;
- (void)_updateRefreshTimer;
- (void)_commitCache;
- (void)_loadCache;
- (id)_clientConnection;
- (void)_handleLibraryAuthServiceClientTokenDidChangeDistributedNotification:(id)arg1;
- (void)_refreshTokensForDSIDs:(id)arg1 forExternalRequest:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_refreshTokenForDSID:(id)arg1 forExternalRequest:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getAllTokenStatusForAssistantForcingRefresh:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getTokenStatusForcingRefresh:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getTokenStatusForDSIDs:(id)arg1 forcingRefresh:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addTokenResult:(id)arg1 forDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)cachedTokenAndResetCache:(_Bool)arg1;
- (void)getTokenResultsForDSIDs:(id)arg1 forceRefresh:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getTokenResultForDSID:(id)arg1 forceRefresh:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getTokenForDSID:(id)arg1 forceRefresh:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getAllTokensForAssistantForcingRefresh:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getTokenForcingRefresh:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopService;
- (void)startService;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

