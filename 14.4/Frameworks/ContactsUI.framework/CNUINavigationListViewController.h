//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ContactsUI/CNUINavigationListViewDataSource-Protocol.h>
#import <ContactsUI/CNUINavigationListViewDelegate-Protocol.h>
#import <ContactsUI/UITableViewDataSource-Protocol.h>
#import <ContactsUI/UITableViewDelegate-Protocol.h>

@class CNUINavigationListItem, CNUINavigationListView, CNUINavigationListViewCellHeightEstimator, NSArray, NSString;
@protocol CNUINavigationListStyle, CNUINavigationListViewControllerDelegate;

@interface CNUINavigationListViewController : UIViewController <CNUINavigationListViewDataSource, CNUINavigationListViewDelegate, UITableViewDataSource, UITableViewDelegate>
{
    _Bool _showFirstSectionTopSeparator;
    _Bool _ignoreParentControllerResize;
    CNUINavigationListView *_navigationListView;
    NSArray *_items;
    CNUINavigationListItem *_expandedItem;
    id <CNUINavigationListViewControllerDelegate> _delegate;
    id <CNUINavigationListStyle> _navigationListStyle;
    long long _contentAlignment;
    CNUINavigationListViewCellHeightEstimator *_cellHeightEstimator;
    CNUINavigationListItem *_displayedExpandedItem;
}

+ (_Bool)itemRequiresDetailCell:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool ignoreParentControllerResize; // @synthesize ignoreParentControllerResize=_ignoreParentControllerResize;
@property(retain, nonatomic) CNUINavigationListItem *displayedExpandedItem; // @synthesize displayedExpandedItem=_displayedExpandedItem;
@property(retain, nonatomic) CNUINavigationListViewCellHeightEstimator *cellHeightEstimator; // @synthesize cellHeightEstimator=_cellHeightEstimator;
@property(nonatomic) _Bool showFirstSectionTopSeparator; // @synthesize showFirstSectionTopSeparator=_showFirstSectionTopSeparator;
@property(nonatomic) long long contentAlignment; // @synthesize contentAlignment=_contentAlignment;
@property(retain, nonatomic) id <CNUINavigationListStyle> navigationListStyle; // @synthesize navigationListStyle=_navigationListStyle;
@property(nonatomic) __weak id <CNUINavigationListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CNUINavigationListItem *expandedItem; // @synthesize expandedItem=_expandedItem;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) CNUINavigationListView *navigationListView; // @synthesize navigationListView=_navigationListView;
- (void)navigationListView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)navigationListView:(id)arg1 shouldSelectRowAtIndexPath:(id)arg2;
- (_Bool)navigationListView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)stopTrackingRollover;
- (void)startTrackingRolloverWithGestureRecognizer:(id)arg1;
- (_Bool)canSelectItem:(id)arg1;
- (void)updateNavigationListViewStateAnimated:(_Bool)arg1;
- (void)reloadNavigationListView;
- (void)updateNavigationListViewSeparatorStyle;
- (void)updateNavigationListView;
- (struct CGSize)contentSizeForExpandedItem:(id)arg1;
- (id)itemsForItem:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (id)itemAtIndex:(long long)arg1;
- (id)dequeueReusableDetailCell;
- (id)dequeueReusableStandardCell;
- (void)navigationListView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (_Bool)canExpandItem:(id)arg1;
- (void)toggleItem:(id)arg1;
- (void)expandItem:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (double)cellSeparatorHeight;
- (_Bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (void)loadView;
- (void)styleUpdated;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

