//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXTilingControllerComposition.h>

#import <PhotosUICore/PXScrollViewControllerObserver-Protocol.h>
#import <PhotosUICore/PXWidgetCompositionElementDelegate-Protocol.h>
#import <PhotosUICore/PXWidgetCompositionElementObserver-Protocol.h>

@class NSArray, NSString, PXScrollViewController, PXTilingController, PXWidgetCompositionSpec;
@protocol PXWidgetCompositionDelegate;

@interface PXWidgetComposition : PXTilingControllerComposition <PXWidgetCompositionElementObserver, PXWidgetCompositionElementDelegate, PXScrollViewControllerObserver>
{
    struct {
        _Bool respondsToHasContentAbove;
        _Bool respondsToShouldUseEdgeToEdgeLayoutForWidget;
        _Bool respondsToLoadingPriorityForWidget;
        _Bool respondsToWidgetTransitionToViewControllerWithTransitionType;
        _Bool respondsToRequestViewControllerDismissalAnimated;
        _Bool respondsToDidUpdateCompositionWithDefaultAnimationOptions;
    } _delegateFlags;
    _Bool _isPerformingWidgetLoadingChange;
    struct {
        _Bool elementsToLoad;
    } _needsUpdateFlags;
    _Bool _shouldLoadVisibleWidgets;
    _Bool _shouldLoadAllWidgets;
    _Bool _shouldUnloadAllWidgets;
    _Bool __didLayoutWidgets;
    NSArray *__elements;
    PXScrollViewController *_scrollViewController;
    id <PXWidgetCompositionDelegate> _delegate;
    NSArray *_widgets;
    PXWidgetCompositionSpec *_spec;
    long long _minimumWidgetLoadingPriority;
    PXTilingController *__focusedTilingController;
    struct CGPoint __lastContentAdjustmentOffset;
}

- (void).cxx_destruct;
@property(nonatomic, setter=_setLastContentAdjustmentOffset:) struct CGPoint _lastContentAdjustmentOffset; // @synthesize _lastContentAdjustmentOffset=__lastContentAdjustmentOffset;
@property(nonatomic, setter=_setDidLayoutWidgets:) _Bool _didLayoutWidgets; // @synthesize _didLayoutWidgets=__didLayoutWidgets;
@property(retain, nonatomic, setter=_setFocusedTilingController:) PXTilingController *_focusedTilingController; // @synthesize _focusedTilingController=__focusedTilingController;
@property(nonatomic) _Bool shouldUnloadAllWidgets; // @synthesize shouldUnloadAllWidgets=_shouldUnloadAllWidgets;
@property(nonatomic) _Bool shouldLoadAllWidgets; // @synthesize shouldLoadAllWidgets=_shouldLoadAllWidgets;
@property(nonatomic) _Bool shouldLoadVisibleWidgets; // @synthesize shouldLoadVisibleWidgets=_shouldLoadVisibleWidgets;
@property(nonatomic) long long minimumWidgetLoadingPriority; // @synthesize minimumWidgetLoadingPriority=_minimumWidgetLoadingPriority;
@property(retain, nonatomic) PXWidgetCompositionSpec *spec; // @synthesize spec=_spec;
@property(copy, nonatomic) NSArray *widgets; // @synthesize widgets=_widgets;
@property(nonatomic) __weak id <PXWidgetCompositionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak PXScrollViewController *scrollViewController; // @synthesize scrollViewController=_scrollViewController;
@property(copy, nonatomic, setter=_setElements:) NSArray *_elements; // @synthesize _elements=__elements;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (_Bool)element:(id)arg1 requestViewControllerDismissalAnimated:(_Bool)arg2;
- (_Bool)element:(id)arg1 transitionToViewController:(id)arg2 withTransitionType:(long long)arg3;
- (id)elementViewController:(id)arg1;
- (void)elementHasLoadedContentDataDidChange:(id)arg1;
- (void)elementNeedsLayout:(id)arg1 preferredAnimationOptions:(id)arg2 originatingTilingController:(id)arg3;
- (id)footerTilingControllerForWidget:(id)arg1;
- (id)headerTilingControllerForWidget:(id)arg1;
- (struct CGRect)frameForWidget:(id)arg1;
- (id)widgetAtLocation:(struct CGPoint)arg1;
- (void)_updateElementsToLoadIfNeeded;
- (void)_invalidateElementsToLoad;
- (void)_setNeedsUpdateWidgetLoading;
- (void)_updateWidgetLoadingIfNeeded;
- (void)performWidgetLoadingChange:(CDUnknownBlockType)arg1;
- (long long)_loadingPriorityForElement:(id)arg1;
- (_Bool)_shouldUseEdgeToEdgeLayoutForWidget:(id)arg1;
- (void)updateComposition;
- (_Bool)_shouldFocusOnTilingController:(id)arg1;
- (void)_updateFocusedTilingController;
- (void)invalidateFocusedTilingController;
- (id)tilingControllers;
- (void)_updateElementsSpec;
- (void)_invalidateElementsSpec;
- (void)_updateElements;
- (void)_invalidateElements;
- (id)initWithScrollViewController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

