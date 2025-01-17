//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/FPItemCollectionMinimalDelegate-Protocol.h>

@class FPItemCollection, NSArray, NSDictionary;

@protocol FPItemCollectionIndexPathBasedDelegate <FPItemCollectionMinimalDelegate>
- (void)collection:(FPItemCollection *)arg1 didPerformBatchUpdateWithReplayBlock:(void (^)(void))arg2;
- (void)collection:(FPItemCollection *)arg1 didUpdateItemsAtIndexPaths:(NSArray *)arg2 changes:(NSDictionary *)arg3;
- (void)collection:(FPItemCollection *)arg1 didDeleteItemsAtIndexPaths:(NSArray *)arg2;
- (void)collection:(FPItemCollection *)arg1 didMoveItemsFromIndexPaths:(NSArray *)arg2 toIndexPaths:(NSArray *)arg3;
- (void)collection:(FPItemCollection *)arg1 didInsertItemsAtIndexPaths:(NSArray *)arg2;
@end

