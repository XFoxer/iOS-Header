//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, UIViewPropertyAnimator;
@protocol _UIDataSourceSnapshotTranslating;

@protocol _UICollectionViewUpdateItemApplying <NSObject>
- (void)_willPerformDiff:(_Bool)arg1;
- (void)_reloadData;
- (void)_deleteAllItems;
- (void)_performUpdateWithCollectionViewUpdateItems:(NSArray *)arg1 dataSourceSnapshot:(id <_UIDataSourceSnapshotTranslating>)arg2 updateHandler:(void (^)(void))arg3 completion:(void (^)(void))arg4 viewPropertyAnimator:(UIViewPropertyAnimator *)arg5 customAnimationsProvider:(void (^)(id <_UICollectionViewAnimationContext>))arg6;
@end

