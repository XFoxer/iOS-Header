//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HomeCellProviderDelegate-Protocol.h"
#import "HomeUpdateDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class HomeCellProvider, HomeOutlineRootController, NSString, SearchResultQuickActionMenuPresenter, SuggestionsItemSource, UICollectionView, UIScrollView, UITableView, UITableViewDiffableDataSource;
@protocol HomeActionDelegate;

__attribute__((visibility("hidden")))
@interface HomeViewController : UIViewController <HomeCellProviderDelegate, UIScrollViewDelegate, HomeUpdateDelegate>
{
    HomeCellProvider *_homeCellProvider;
    UITableView *_tableView;
    UITableViewDiffableDataSource *_diffableDataSource;
    SearchResultQuickActionMenuPresenter *_quickActionMenuPresenter;
    HomeOutlineRootController *_outlineController;
    UICollectionView *_collectionView;
    _Bool _active;
    id <HomeActionDelegate> _homeActionDelegate;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) __weak id <HomeActionDelegate> homeActionDelegate; // @synthesize homeActionDelegate=_homeActionDelegate;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)newTraits;
- (void)dataSource:(id)arg1 sectionHeaderTapped:(id)arg2;
- (void)dataSource:(id)arg1 itemTapped:(id)arg2;
- (void)dataSource:(id)arg1 applySnapshot:(id)arg2 animatingDifferences:(_Bool)arg3;
- (void)dataSourceUpdated:(id)arg1;
- (int)listForDataSource:(id)arg1;
- (void)homeSetNeedsUpdate;
- (void)keyboardProxyViewCreated:(id)arg1;
- (void)_configureForceTouchIfNeeded;
- (void)clearSelectionWithReason:(id)arg1;
- (void)editCollection:(id)arg1;
- (void)showCollection:(id)arg1;
- (void)handleVenueSearchResultsWithSelectedSearchResult:(id)arg1 searchFieldItem:(id)arg2 browseCategories:(id)arg3;
- (void)presentVenueWithVenueCardItem:(id)arg1;
- (void)scrollContentToOriginalPosition;
@property(readonly, nonatomic) double mediumContentHeight;
@property(readonly, nonatomic) _Bool shouldShowTopHairline;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(readonly, nonatomic) SuggestionsItemSource *suggestionsItemSource;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)preferredFocusEnvironments;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

