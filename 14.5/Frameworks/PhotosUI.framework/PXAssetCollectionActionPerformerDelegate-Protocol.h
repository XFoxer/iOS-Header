//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PXActionPerformerDelegate-Protocol.h>

@class PXAssetCollectionActionPerformer;
@protocol PXDisplayAssetCollection, PXDisplayAssetFetchResult;

@protocol PXAssetCollectionActionPerformerDelegate <PXActionPerformerDelegate>

@optional
- (void)assetCollectionActionPerformer:(PXAssetCollectionActionPerformer *)arg1 showMapWithAssetsFetchResult:(id <PXDisplayAssetFetchResult>)arg2;
- (void)assetCollectionActionPerformer:(PXAssetCollectionActionPerformer *)arg1 playMovieForAssetCollection:(id <PXDisplayAssetCollection>)arg2;
@end

