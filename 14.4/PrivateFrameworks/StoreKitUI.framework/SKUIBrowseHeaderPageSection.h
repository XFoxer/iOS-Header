//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIStorePageSection.h>

@class SKUIBrowseHeaderPageComponent;

__attribute__((visibility("hidden")))
@interface SKUIBrowseHeaderPageSection : SKUIStorePageSection
{
}

- (_Bool)collectionViewShouldSelectItemAtIndexPath:(id)arg1;
- (_Bool)collectionViewShouldHighlightItemAtIndexPath:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (struct UIEdgeInsets)sectionContentInset;
- (long long)numberOfCells;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (id)initWithPageComponent:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) SKUIBrowseHeaderPageComponent *pageComponent; // @dynamic pageComponent;

@end

