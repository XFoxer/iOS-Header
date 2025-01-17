//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/_TVAppDocumentRequestController.h>

#import <VideosUI/IKUpdateServiceRequestDelegate-Protocol.h>
#import <VideosUI/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <VideosUI/VUIAppDocumentUpdateEventMonitorObserving-Protocol.h>

@class IKAppContext, NSMutableArray, NSMutableOrderedSet, NSString, VUIAppDocumentUpdateEventStore;
@protocol VUIAppDocumentUpdateContext;

@interface VUIAppDocumentServiceViewController : _TVAppDocumentRequestController <IKUpdateServiceRequestDelegate, VUIAppDocumentUpdateEventMonitorObserving, UIPopoverPresentationControllerDelegate>
{
    _Bool _deferDocumentUpdateEventProcessing;
    _Bool _markDocumentDirtyForRefreshUpdate;
    NSString *_viewControllerIdentifier;
    NSString *_viewControllerDocumentIdentifier;
    NSMutableArray *_impressionableSwiftViewControllers;
    IKAppContext *_appContext;
    NSString *_documentRef;
    id <VUIAppDocumentUpdateContext> _documentUpdateContext;
    NSMutableOrderedSet *_documentUpdateViewElements;
    VUIAppDocumentUpdateEventStore *_deferredDocumentUpdateEventStore;
    unsigned long long _viewWillAppearReason;
}

+ (id)_findCollectionListChildElementsInViewElement:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, getter=isDocumentMarkedDirty) _Bool markDocumentDirtyForRefreshUpdate; // @synthesize markDocumentDirtyForRefreshUpdate=_markDocumentDirtyForRefreshUpdate;
@property(nonatomic) unsigned long long viewWillAppearReason; // @synthesize viewWillAppearReason=_viewWillAppearReason;
@property(nonatomic) _Bool deferDocumentUpdateEventProcessing; // @synthesize deferDocumentUpdateEventProcessing=_deferDocumentUpdateEventProcessing;
@property(retain, nonatomic) VUIAppDocumentUpdateEventStore *deferredDocumentUpdateEventStore; // @synthesize deferredDocumentUpdateEventStore=_deferredDocumentUpdateEventStore;
@property(retain, nonatomic) NSMutableOrderedSet *documentUpdateViewElements; // @synthesize documentUpdateViewElements=_documentUpdateViewElements;
@property(retain, nonatomic) id <VUIAppDocumentUpdateContext> documentUpdateContext; // @synthesize documentUpdateContext=_documentUpdateContext;
@property(copy, nonatomic) NSString *documentRef; // @synthesize documentRef=_documentRef;
@property(nonatomic) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
@property(retain, nonatomic) NSMutableArray *impressionableSwiftViewControllers; // @synthesize impressionableSwiftViewControllers=_impressionableSwiftViewControllers;
@property(retain, nonatomic) NSString *viewControllerDocumentIdentifier; // @synthesize viewControllerDocumentIdentifier=_viewControllerDocumentIdentifier;
@property(retain, nonatomic) NSString *viewControllerIdentifier; // @synthesize viewControllerIdentifier=_viewControllerIdentifier;
- (_Bool)isEqualToAppDocumentServiceViewController:(id)arg1;
- (void)_disableFastScrollIfNeeded;
- (void)_removeEventTypes:(id)arg1 receivedEvents:(id)arg2;
- (_Bool)_hasRefreshEvents;
- (void)_removeStoreEvents:(unsigned long long)arg1;
- (id)_receivedEvents;
- (void)_unregisterDocumentUpdateEventDescriptors;
- (void)_registerDocumentUpdateEventDescriptorsWithServiceCompletionStatus:(long long)arg1;
- (void)_startDocumentUpdatesForDeferredEventsIfPossible;
- (void)_performNextDocumentUpdateIfNeeded;
- (void)_startDocumentUpdatesWithContext:(id)arg1;
- (void)_cancelDocumentUpdatesAndPreserveUpdateEvents;
- (void)_cancelDocumentUpdates;
- (void)_cancelDocumentUpdateWithRequest:(id)arg1;
- (void)_startDocumentUpdateWithRequest:(id)arg1;
- (void)documentDidUpdate:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (void)vui_handleEvent:(id)arg1 forElement:(id)arg2 sourceView:(id)arg3;
- (id)interactionPreviewControllerForViewController:(id)arg1 presentingView:(id)arg2 presentingElement:(id)arg3;
- (_Bool)handleEvent:(id)arg1 targetResponder:(id)arg2 viewElement:(id)arg3 extraInfo:(id *)arg4;
- (void)didCompleteDocumentCreationWithStatus:(long long)arg1 errorDictionary:(id)arg2;
- (void)updateServiceRequest:(id)arg1 documentDidChange:(id)arg2;
- (void)serviceRequest:(id)arg1 didCompleteWithStatus:(long long)arg2 errorDictionary:(id)arg3;
- (void)appDocumentHasBecomeActive;
- (void)appDocumentDidReceiveEvent:(id)arg1;
- (void)viewWillAppearAfterTabSwitch;
- (void)recordedImpressions;
- (void)snapshotImpressions;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updateDocumentWithContextDictionary:(id)arg1 element:(id)arg2;
- (void)dealloc;
- (id)initWithAppContext:(id)arg1;
- (id)initWithDocumentServiceRequest:(id)arg1 loadImmediately:(_Bool)arg2 documentRef:(id)arg3 viewControllerIdentifier:(id)arg4 viewControllerDocumentIdentifier:(id)arg5;
- (id)initWithDocumentServiceRequest:(id)arg1 loadImmediately:(_Bool)arg2;
- (id)initWithDocumentServiceRequest:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

