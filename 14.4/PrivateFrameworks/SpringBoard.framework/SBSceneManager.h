//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/BSInvalidatable-Protocol.h>
#import <SpringBoard/FBSceneDelegate-Protocol.h>
#import <SpringBoard/FBSceneManagerDelegate_Private-Protocol.h>
#import <SpringBoard/FBSceneManagerObserver-Protocol.h>
#import <SpringBoard/SBApplicationSceneHandleProviding-Protocol.h>
#import <SpringBoard/SBSceneLayoutSlaveTransactionProviding-Protocol.h>
#import <SpringBoard/SBSceneLayoutViewControllerDelegate-Protocol.h>

@class BSCopyingCacheSet, FBSDisplayIdentity, FBSceneManager, NSCountedSet, NSHashTable, NSMapTable, NSMutableSet, NSString, SBLayoutState, SBLayoutStateManager, SBLayoutStateTransitionCoordinator, SBPolicyAggregator, SBSceneLayoutViewController, SBSceneLayoutWindow, SBSceneManagerReference, UIRootWindowScenePresentationBinder;

@interface SBSceneManager : NSObject <SBSceneLayoutViewControllerDelegate, FBSceneManagerObserver, FBSceneDelegate, FBSceneManagerDelegate_Private, BSDescriptionProviding, BSInvalidatable, SBApplicationSceneHandleProviding, SBSceneLayoutSlaveTransactionProviding>
{
    long long _state;
    UIRootWindowScenePresentationBinder *_rootWindowScenePresentationBinder;
    FBSceneManager *_sceneManager;
    SBSceneManagerReference *_selfReference;
    _Bool _hidden;
    SBSceneLayoutWindow *_window;
    SBSceneLayoutViewController *_sceneLayoutViewController;
    _Bool _layoutControllerHasVisibleElements;
    SBPolicyAggregator *_policyAggregator;
    SBLayoutStateManager *_layoutStateManager;
    SBLayoutStateTransitionCoordinator *_layoutStateTransitionCoordinator;
    NSMapTable *_persistentMapSceneIdentityToSceneHandle;
    NSMapTable *_transientMapSceneIdentityToSceneHandle;
    BSCopyingCacheSet *_allScenes;
    BSCopyingCacheSet *_daemonScenes;
    BSCopyingCacheSet *_workspaceScenes;
    BSCopyingCacheSet *_externalApplicationSceneHandles;
    BSCopyingCacheSet *_externalForegroundApplicationSceneHandles;
    BSCopyingCacheSet *_reportedExternalForegroundApplicationSceneHandles;
    NSCountedSet *_assertedBackgroundScenes;
    NSMutableSet *_outgoingSnapshots;
    NSMutableSet *_incomingSnapshots;
    NSHashTable *_observers;
    _Bool _layoutControllerCreationReentrancyGuard;
    NSMutableSet *_slaveTransactionProviders;
    SBLayoutState *_currentLayoutState;
}

+ (Class)_sceneLayoutWindowClass;
+ (Class)_applicationSceneHandleClass;
+ (Class)_layoutStateManagerClass;
- (void).cxx_destruct;
@property(retain, nonatomic) SBLayoutState *currentLayoutState; // @synthesize currentLayoutState=_currentLayoutState;
- (void)sceneManager:(id)arg1 interceptUpdateForScene:(id)arg2 withNewSettings:(id)arg3;
- (id)sceneManager:(id)arg1 createDefaultTransitionContextForScene:(id)arg2;
- (void)scene:(id)arg1 didCompleteUpdateWithContext:(id)arg2 error:(id)arg3;
- (void)scene:(id)arg1 didApplyUpdateWithContext:(id)arg2;
- (void)scene:(id)arg1 didPrepareUpdateWithContext:(id)arg2;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2;
- (void)sceneLayoutController:(id)arg1 noteHasVisibleElements:(_Bool)arg2;
- (id)fetchOrCreateApplicationSceneHandleForRequest:(id)arg1;
- (id)_sceneIdentifierForBundleIdentifier:(id)arg1;
- (id)sceneIdentityForApplication:(id)arg1 uniqueIdentifier:(id)arg2 targetContentIdentifier:(id)arg3;
- (id)sceneIdentityForApplication:(id)arg1 excludingIdentifiers:(id)arg2;
- (id)sceneIdentityForApplication:(id)arg1 targetContentIdentifier:(id)arg2;
- (id)sceneIdentityForApplication:(id)arg1 uniqueIdentifier:(id)arg2;
- (id)sceneIdentityForApplication:(id)arg1;
- (id)newSceneIdentityForApplication:(id)arg1;
- (id)slaveTransactionsForTransitionRequest:(id)arg1;
- (void)_doObserverCalloutWithBlock:(CDUnknownBlockType)arg1;
- (void)_noteObserversDidInvalidate;
- (void)_removeReportedForegroundExternalApplicationSceneHandle:(id)arg1;
- (void)_addReportedForegroundExternalApplicationSceneHandle:(id)arg1;
- (void)_updateStateForScene:(id)arg1 withSettings:(id)arg2;
- (_Bool)_windowShouldBeHidden;
- (_Bool)_shouldRequestSnapshotActionsForScene:(id)arg1;
- (void)_noteDidCommitUpdateForScene:(id)arg1;
- (void)_noteDidChangeToVisibility:(unsigned long long)arg1 previouslyExisted:(_Bool)arg2 forScene:(id)arg3;
- (id)_sceneWindowLayoutStrategy;
- (void)_setupLayoutStateTransitionCoordinator:(id)arg1;
- (id)_newSceneLayoutViewController;
- (_Bool)_shouldFenceTransitionForScene:(id)arg1 updatedClientSettingsDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (id)_snapshotRequestsForSceneHandle:(id)arg1 settings:(id)arg2;
- (void)_scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)_scene:(id)arg1 willUpdateWithSettings:(id)arg2 transitionContext:(id)arg3;
- (void)_scene:(id)arg1 interceptUpdateWithNewSettings:(id)arg2;
- (void)_reconnectSceneRemnant:(id)arg1 forProcess:(id)arg2 sceneManager:(id)arg3;
- (_Bool)_handleAction:(id)arg1 forScene:(id)arg2;
- (_Bool)_shouldTrackScenesForDeactivation;
- (_Bool)_shouldAutoHostScene:(id)arg1;
- (id)_createRootWindowScenePresentationBinder;
@property(nonatomic, getter=isHidden) _Bool hidden;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)transientApplicationSceneHandlesForApplication:(id)arg1;
@property(readonly, nonatomic) SBLayoutStateTransitionCoordinator *_layoutStateTransitionCoordinator;
@property(readonly, nonatomic) SBLayoutStateManager *_layoutStateManager;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)removeSlaveTransactionProvider:(id)arg1;
- (void)addSlaveTransactionProvider:(id)arg1;
- (id)assertBackgroundedStatusForScenes:(id)arg1;
- (id)existingSceneHandleForPersistenceIdentifier:(id)arg1;
- (id)existingSceneHandleForSceneIdentity:(id)arg1;
- (id)existingSceneHandleForScene:(id)arg1;
- (id)scenesForWorkspaceWithID:(id)arg1;
- (id)daemonScenes;
- (id)externalForegroundApplicationSceneHandles;
- (id)externalApplicationSceneHandles;
- (id)allScenes;
@property(readonly, nonatomic) SBPolicyAggregator *policyAggregator;
@property(readonly, nonatomic) SBSceneLayoutViewController *sceneLayoutViewController;
@property(readonly, nonatomic) SBSceneLayoutWindow *window;
@property(readonly, nonatomic) FBSDisplayIdentity *displayIdentity;
- (void)invalidate;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)dealloc;
- (id)init;
- (id)initWithReference:(id)arg1;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

