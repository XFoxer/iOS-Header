//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionView.h>

@class MISSING_TYPE;

@interface _TtC5TeaUI25SwipeActionCollectionView : UICollectionView
{
    MISSING_TYPE *swipeActionManager;
    MISSING_TYPE *dependencyCleanupBlocks;
    MISSING_TYPE *coordinatingResetBlocks;
    MISSING_TYPE *coordinatingCancelBlocks;
    MISSING_TYPE *updateGroup;
    MISSING_TYPE *isBottomRubberBanding;
}

- (void).cxx_destruct;
- (void)handleFromCoordinatingGestureWithGestureRecognizer:(id)arg1;
- (void)handlePanGestureWithGestureRecognizer:(id)arg1;
- (void)didMoveToWindow;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
@property(nonatomic) struct CGPoint contentOffset;
@property(nonatomic) _Bool allowsSelection;

@end

