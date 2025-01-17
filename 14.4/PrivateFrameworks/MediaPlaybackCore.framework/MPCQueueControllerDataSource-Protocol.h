//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/MPShuffleableSectionedIdentifierListDataSource-Protocol.h>

@class MPAVItem, MPCQueueControllerDataSourceLoadRequest, MPIdentifierSet, MPPlaceholderAVItem, MPPlaybackContext, NSString;

@protocol MPCQueueControllerDataSource <MPShuffleableSectionedIdentifierListDataSource>
@property(readonly, nonatomic) _Bool containsTransportableContent;
@property(readonly, nonatomic) _Bool containsLiveStream;
- (_Bool)supportsAutoPlayForItem:(NSString *)arg1 inSection:(NSString *)arg2;
- (MPAVItem *)itemForItem:(NSString *)arg1 inSection:(NSString *)arg2;
- (void)loadPlaybackContext:(MPPlaybackContext *)arg1 completion:(void (^)(NSString *, NSError *))arg2;

@optional
- (NSString *)firstItemIntersectingIdentifierSet:(MPIdentifierSet *)arg1;
- (MPPlaceholderAVItem *)placeholderItemForLoadingAdditionalItemsInSection:(NSString *)arg1;
- (void)loadAdditionalItemsWithRequest:(MPCQueueControllerDataSourceLoadRequest *)arg1 forSection:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (_Bool)shouldUsePlaceholderForItem:(NSString *)arg1 inSection:(NSString *)arg2;
- (long long)prefetchThresholdForSection:(NSString *)arg1;
- (_Bool)shouldRequestAdditionalItemsWhenReachingTailOfSection:(NSString *)arg1;
- (_Bool)canSkipItem:(NSString *)arg1;
- (void)itemDidBeginPlayback:(MPAVItem *)arg1;
@end

