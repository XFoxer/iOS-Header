//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PXAssetEditOperationManager;
@protocol PXDisplayAsset;

@protocol PXAssetEditOperationManagerObserver <NSObject>

@optional
- (void)assetEditOperationManager:(PXAssetEditOperationManager *)arg1 didChangeEditOperationStatusForAsset:(id <PXDisplayAsset>)arg2 context:(void *)arg3;
- (void)assetEditOperationManager:(PXAssetEditOperationManager *)arg1 didChangeEditOperationsPerformedOnAsset:(id <PXDisplayAsset>)arg2 context:(void *)arg3;
@end

