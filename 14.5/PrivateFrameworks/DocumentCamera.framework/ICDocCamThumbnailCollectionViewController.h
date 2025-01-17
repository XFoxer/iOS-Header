//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import <DocumentCamera/ICDocCamThumbnailViewLayoutDelegate-Protocol.h>
#import <DocumentCamera/UICollectionViewDataSource-Protocol.h>
#import <DocumentCamera/UICollectionViewDelegate-Protocol.h>

@class ICDocCamImageCache, ICDocCamThumbnailCollectionViewLayout, NSMutableArray, NSString;
@protocol ICDocCamThumbnailViewDelegate;

__attribute__((visibility("hidden")))
@interface ICDocCamThumbnailCollectionViewController : UICollectionViewController <UICollectionViewDataSource, UICollectionViewDelegate, ICDocCamThumbnailViewLayoutDelegate>
{
    _Bool _isPerformingBatchUpdates;
    _Bool _needReloadAfterBatchUpdates;
    NSMutableArray *_documentInfoArray;
    ICDocCamImageCache *_imageCache;
    id <ICDocCamThumbnailViewDelegate> _delegate;
    ICDocCamThumbnailCollectionViewLayout *_layout;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needReloadAfterBatchUpdates; // @synthesize needReloadAfterBatchUpdates=_needReloadAfterBatchUpdates;
@property(nonatomic) _Bool isPerformingBatchUpdates; // @synthesize isPerformingBatchUpdates=_isPerformingBatchUpdates;
@property(retain, nonatomic) ICDocCamThumbnailCollectionViewLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) __weak id <ICDocCamThumbnailViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ICDocCamImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) NSMutableArray *documentInfoArray; // @synthesize documentInfoArray=_documentInfoArray;
- (_Bool)_canShowWhileLocked;
- (void)animateLayoutChange;
- (void)addNewDocument:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)update;
- (void)reloadDataForCollectionView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)setImageWithUUID:(id)arg1 forCell:(id)arg2 useResizedImage:(_Bool)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)rootView;
- (struct CGRect)targetViewRect;
- (struct CGSize)collectionView:(id)arg1 imageSizeAtIndex:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

