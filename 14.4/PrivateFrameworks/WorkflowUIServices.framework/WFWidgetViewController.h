//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <WorkflowUIServices/WFObservableResultObserver-Protocol.h>
#import <WorkflowUIServices/WFWidgetGridViewDelegate-Protocol.h>
#import <WorkflowUIServices/WFWorkflowRunnerClientDelegate-Protocol.h>

@class NSObject, NSString, WFObservableResult, WFWidgetGridView, WFWidgetOptions, WFWidgetWorkflowRunnerClient;
@protocol OS_os_log;

@interface WFWidgetViewController : UIViewController <WFWidgetGridViewDelegate, WFWorkflowRunnerClientDelegate, WFObservableResultObserver>
{
    _Bool _running;
    _Bool _needsLayout;
    WFObservableResult *_observedResult;
    WFWidgetGridView *_gridView;
    double _cornerRadius;
    WFWidgetOptions *_options;
    WFWidgetWorkflowRunnerClient *_client;
    NSObject<OS_os_log> *_log;
}

+ (id)progressSubscribers;
+ (id)runningStates;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(nonatomic) _Bool needsLayout; // @synthesize needsLayout=_needsLayout;
@property(nonatomic) _Bool running; // @synthesize running=_running;
@property(retain, nonatomic) WFWidgetWorkflowRunnerClient *client; // @synthesize client=_client;
@property(readonly, nonatomic) WFWidgetOptions *options; // @synthesize options=_options;
@property(readonly, nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(readonly, nonatomic) WFWidgetGridView *gridView; // @synthesize gridView=_gridView;
@property(retain, nonatomic) WFObservableResult *observedResult; // @synthesize observedResult=_observedResult;
- (void)workflowRunnerClient:(id)arg1 didFinishRunningWorkflowWithError:(id)arg2 cancelled:(_Bool)arg3;
- (void)gridView:(id)arg1 cellDidTransitionToRunningState:(long long)arg2;
- (void)gridViewDidFinishLayout:(id)arg1;
- (void)gridView:(id)arg1 didTapCell:(id)arg2;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)stopObservingContentSizeCategoryNotifications;
- (void)startObservingContentSizeCategoryNotifications;
- (void)observableResultDidChange:(id)arg1;
- (id)runningContextForWorkflowIdentifier:(id)arg1;
- (CDUnknownBlockType)publishingHandlerForCell:(id)arg1;
- (void)restoreRunningStateIfNecessary;
- (void)removeStaleRunningContexts;
- (void)resumeRunningWithCell:(id)arg1;
- (void)stopRunningWithCell:(id)arg1;
- (void)showRunningUIForCell:(id)arg1;
- (_Bool)_canShowWhileLocked;
- (void)viewWillAppear:(_Bool)arg1;
- (void)addDefaultShortcutsIfNecessaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)refreshWorkflows;
- (void)layoutWithObservableResult:(id)arg1;
- (void)performInitialFetch;
- (void)loadView;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

