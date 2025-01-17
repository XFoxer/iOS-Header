//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DataSource.h"

#import "CollectionHandlerObserver-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CollectionEditSession, CollectionHandler, NSArray, NSString;
@protocol CollectionHandlerInfo, DeleteDelegate, ShareDelegate;

__attribute__((visibility("hidden")))
@interface CollectionDataSource : DataSource <CollectionHandlerObserver, UITableViewDelegate, UITableViewDataSource>
{
    CollectionHandler *_collectionHandler;
    CollectionEditSession *_inputCollectionSession;
    NSArray *_contentAfterDeletion;
    _Bool _editing;
    _Bool _showsHeader;
    id <ShareDelegate> _shareDelegate;
    id <DeleteDelegate> _deleteDelegate;
    unsigned long long _sortType;
    CollectionEditSession *_editSession;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CollectionEditSession *editSession; // @synthesize editSession=_editSession;
@property(nonatomic) _Bool showsHeader; // @synthesize showsHeader=_showsHeader;
@property(nonatomic) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) unsigned long long sortType; // @synthesize sortType=_sortType;
@property(nonatomic) __weak id <DeleteDelegate> deleteDelegate; // @synthesize deleteDelegate=_deleteDelegate;
@property(nonatomic) __weak id <ShareDelegate> shareDelegate; // @synthesize shareDelegate=_shareDelegate;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 wantsHeaderForSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)_cellForTransitLine:(id)arg1 inTableView:(id)arg2 atIndexPath:(id)arg3;
- (id)_cellForMapItem:(id)arg1 inTableView:(id)arg2 atIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)editNameContextualActionAtIndexPath:(id)arg1;
- (id)shareContextualActionAtIndexPath:(id)arg1;
- (id)deleteContextualActionAtIndexPath:(id)arg1;
- (int)targetForDragAnalytics;
- (id)objectsForAnalytics;
- (id)objectAtIndexPath:(id)arg1;
- (id)currentContent;
@property(readonly, nonatomic) id <CollectionHandlerInfo> collectionInfo;
- (void)selectAll;
- (void)collectionHandlerInfoUpdated:(id)arg1;
- (void)collectionHandlerContentUpdated:(id)arg1;
- (void)editNameRowAtIndexPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)shareRowAtIndexPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteRowAtIndexPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_contentSizeCategoryDidChange;
- (void)setActive:(_Bool)arg1;
- (void)dealloc;
- (void)_commonInitWithTableView:(id)arg1;
- (id)initWithTableView:(id)arg1 collection:(id)arg2;
- (id)initWithTableView:(id)arg1 collectionEditSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

