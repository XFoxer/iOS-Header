//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssetExplorer/NSProgressReporting-Protocol.h>

@protocol PUDisplayAsset;

@protocol PUReviewAssetProviderRequest <NSProgressReporting>
@property(readonly, nonatomic) id <PUDisplayAsset> sourceAsset;
- (void)cancelReviewAssetRequest;
- (void)requestReviewAssetWithCompletionHandler:(void (^)(_Bool, _Bool, NSError *, PUReviewAsset *))arg1;
@end

