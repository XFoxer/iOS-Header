//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSProgress, NSString, NSURL, PLDelayedSaveActionsDetail, PLPhotoLibraryOptions, PLXPCDictionary;

@protocol PLAssetsdLibraryServiceProtocol <NSObject>
- (void)pendingEventsForRequest:(PLXPCDictionary *)arg1 reply:(void (^)(PLXPCDictionary *))arg2;
- (void)publishRemoteChangeEvent:(PLXPCDictionary *)arg1 delayedSaveActionsDetail:(PLDelayedSaveActionsDetail *)arg2 reply:(void (^)(NSError *))arg3;
- (void)automaticallyDeleteEmptyAlbumWithObjectURI:(NSURL *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)updateThumbnailsForPhotos:(NSArray *)arg1 assignNewIndex:(_Bool)arg2 forceRefresh:(_Bool)arg3 reply:(void (^)(void))arg4;
- (void)repairSingletonObjectsWithReply:(void (^)(void))arg1;
- (void)recoverFromCrashIfNeeded;
- (NSProgress *)importFileSystemAssetsWithReason:(NSString *)arg1 force:(_Bool)arg2 reply:(void (^)(void))arg3;
- (void)getPhotoLibraryStoreXPCListenerEndpointWithReply:(void (^)(NSXPCListenerEndpoint *))arg1;
- (NSProgress *)postOpenProgressWithReply:(void (^)(NSError *))arg1;
- (NSProgress *)upgradePhotoLibraryDatabaseWithOptions:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)openPhotoLibraryDatabaseWithOptions:(PLPhotoLibraryOptions *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)createPhotoLibraryDatabaseWithOptions:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)getCurrentModelVersionWithReply:(void (^)(unsigned long long))arg1;
- (void)launchAssetsd;
@end

