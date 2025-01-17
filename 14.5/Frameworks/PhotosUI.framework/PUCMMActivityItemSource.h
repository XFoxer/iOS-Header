//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUI/PUActivityItemSourceOperationDelegate-Protocol.h>
#import <PhotosUI/PXChangeObserver-Protocol.h>
#import <PhotosUI/UIActivityItemDeferredSource-Protocol.h>
#import <PhotosUI/UIActivityItemSource-Protocol.h>
#import <PhotosUI/UIActivityItemsSource-Protocol.h>

@class NSArray, NSError, NSObject, NSString, NSURL, PUActivityItemSourceController, PUActivityItemSourceOperation;
@protocol OS_dispatch_queue, PUCMMActivityItemSourceDelegate;

@interface PUCMMActivityItemSource : PXObservable <PUActivityItemSourceOperationDelegate, PXChangeObserver, UIActivityItemsSource, UIActivityItemDeferredSource, UIActivityItemSource>
{
    PUActivityItemSourceController *_itemSourceController;
    id <PUCMMActivityItemSourceDelegate> _delegate;
    unsigned long long _state;
    NSString *_activityType;
    PUActivityItemSourceOperation *_preparationOperation;
    NSURL *_momentShareLink;
    NSArray *_individuallyPreparedItems;
    NSError *_preparationError;
    NSObject<OS_dispatch_queue> *_externalIsolationQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *externalIsolationQueue; // @synthesize externalIsolationQueue=_externalIsolationQueue;
@property(retain, nonatomic) NSError *preparationError; // @synthesize preparationError=_preparationError;
@property(copy, nonatomic) NSArray *individuallyPreparedItems; // @synthesize individuallyPreparedItems=_individuallyPreparedItems;
@property(copy, nonatomic) NSURL *momentShareLink; // @synthesize momentShareLink=_momentShareLink;
@property(retain, nonatomic) PUActivityItemSourceOperation *preparationOperation; // @synthesize preparationOperation=_preparationOperation;
@property(retain, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <PUCMMActivityItemSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak PUActivityItemSourceController *itemSourceController; // @synthesize itemSourceController=_itemSourceController;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)setState:(unsigned long long)arg1;
- (void)cancel;
- (void)activityItemSourceOperation:(id)arg1 prepareItemForActivityType:(id)arg2;
- (id)activityViewControllerOperation:(id)arg1;
- (id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)preparedItems;
- (id)placeholderItemsForActivityViewController:(id)arg1;
- (id)initWithActivityItemSourceController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

