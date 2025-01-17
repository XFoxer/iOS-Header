//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CarChromeModeController-Protocol.h"
#import "CarCollectionListCardViewControllerDelegate-Protocol.h"
#import "CollectionManagerObserver-Protocol.h"
#import "PassThroughViewControllerDelegate-Protocol.h"

@class CarChromeViewController, CarCollectionListCardViewController, CarMapTrackingController, NSArray, NSString, PassThroughViewController, UIView, UIViewController;
@protocol MapSelectionManagerDelegate;

__attribute__((visibility("hidden")))
@interface CarCollectionListModeController : NSObject <PassThroughViewControllerDelegate, CarCollectionListCardViewControllerDelegate, CollectionManagerObserver, CarChromeModeController>
{
    PassThroughViewController *_viewController;
    CarChromeViewController *_chromeViewController;
    CarCollectionListCardViewController *_collectionListCard;
    NSArray *_collections;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *collections; // @synthesize collections=_collections;
@property(retain, nonatomic) CarCollectionListCardViewController *collectionListCard; // @synthesize collectionListCard=_collectionListCard;
@property(nonatomic) __weak CarChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
@property(readonly, nonatomic) int currentUsageTarget;
@property(readonly, nonatomic) NSArray *carFocusOrderSequences;
@property(readonly, nonatomic) NSArray *preferredCarFocusEnvironments;
@property(readonly, nonatomic) _Bool shouldAllowKnobFocusMovement;
- (void)collectionListCard:(id)arg1 didSelectCollection:(id)arg2;
- (void)collectionManager:(id)arg1 contentDidChange:(id)arg2;
- (void)_updateCollections:(id)arg1;
- (void)configureCard:(id)arg1 forKey:(id)arg2;
- (id)desiredCards;
- (void)resignCurrentModeAnimated:(_Bool)arg1 toMode:(id)arg2;
- (void)becomeCurrentModeAnimated:(_Bool)arg1 fromMode:(id)arg2;
@property(readonly, nonatomic) _Bool allowKnobNudgeMapPanning;
@property(readonly, nonatomic) _Bool shouldTimeoutAfterDisconnect;
@property(readonly, nonatomic) _Bool shouldAccessoriesModifyMapInsets;
@property(readonly, nonatomic) long long autohideBehavior;
@property(readonly, nonatomic) UIView *passThroughView;
@property(readonly, nonatomic) UIViewController *viewController;
@property(readonly, nonatomic) _Bool showsMapView;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) long long accessoriesHidingBehavior;
@property(readonly, nonatomic) _Bool allowMapZoomAndRecentering;
@property(readonly, nonatomic) double autohideIdlenessInterval;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool invalidAfterDisconnect;
@property(readonly, nonatomic) id <MapSelectionManagerDelegate> mapSelectionManagerDelegate;
@property(readonly, nonatomic) id mapViewDelegate;
@property(readonly, nonatomic) _Bool navigationTransitionShouldOccurImmediately;
@property(readonly, nonatomic) _Bool shouldTimeoutDuringNavigation;
@property(readonly, nonatomic) _Bool showsCameraToggleButton;
@property(readonly, nonatomic) _Bool showsExplicitPanButton;
@property(readonly, nonatomic) _Bool showsFloatingControls;
@property(readonly, nonatomic) _Bool showsHeadingIndicator;
@property(readonly, nonatomic) _Bool showsMapViewForTransitions;
@property(readonly, nonatomic) _Bool showsNavPanRecenterButton;
@property(readonly, nonatomic) _Bool showsNavigationBar;
@property(readonly, nonatomic) _Bool showsReportIncidentButton;
@property(readonly, nonatomic) _Bool showsSpeedLimit;
@property(readonly, nonatomic) _Bool showsZoomControls;
@property(readonly) Class superclass;
@property(readonly, nonatomic) CarMapTrackingController *trackingController;
@property(readonly, nonatomic) _Bool usesDefaultTransitions;
@property(readonly, nonatomic) id visuallySelectedItem;
@property(readonly, nonatomic) _Bool zoomInButtonPressed;
@property(readonly, nonatomic) _Bool zoomOutButtonPressed;

@end

