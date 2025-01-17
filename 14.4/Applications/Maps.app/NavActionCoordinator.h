//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AudioSettingsViewControllerDelegate-Protocol.h"
#import "DirectionsStepsListDelegate-Protocol.h"
#import "GEOLogContextDelegate-Protocol.h"
#import "MapSelectionManagerDelegate-Protocol.h"
#import "MapViewResponderHandling-Protocol.h"
#import "MapViewZoomControllerDelegate-Protocol.h"
#import "NavActionCoordination-Protocol.h"
#import "NavActionViewModelSource-Protocol.h"
#import "NavTrafficIncidentPresentation-Protocol.h"
#import "PPTTestChromeTrayProtocol-Protocol.h"
#import "PPTTestNavigationProtocol-Protocol.h"
#import "PlaceCardViewControllerDelegate-Protocol.h"
#import "SARSearchResultTableViewCellDelegate-Protocol.h"
#import "SimpleResultsViewControllerDelegate-Protocol.h"

@class AppCoordinator, AudioSettingsViewController, CustomPOIsController, GEOMapServiceTraits, GuidanceObserver, GuidanceSearchCategoriesViewModel, MapSelectionManager, MapViewZoomController, NSString, NavContainerViewController, NavTrafficIncidentContaineeViewController, NavTrafficIncidentCoordinator, NavigationDisplay, NavigationFeaturesViewModel, NavigationTrayContaineeViewController, PlaceCardViewController, RouteAnnotationContaineeViewController, SearchInfo, SimpleResultsViewController, UIScrollView;
@protocol MapViewZoomDelegate, NavTrafficIncidentAlertCoordination, NavigationMapItemDisplaying, NavigationRouteDetouring, NavigationRouteHistoryInfoProviding, NavigationRoutePausing, NavigationTypeControlling;

__attribute__((visibility("hidden")))
@interface NavActionCoordinator : NSObject <PlaceCardViewControllerDelegate, MapSelectionManagerDelegate, SimpleResultsViewControllerDelegate, NavTrafficIncidentPresentation, AudioSettingsViewControllerDelegate, DirectionsStepsListDelegate, PPTTestNavigationProtocol, SARSearchResultTableViewCellDelegate, GEOLogContextDelegate, MapViewZoomControllerDelegate, PPTTestChromeTrayProtocol, NavActionCoordination, NavActionViewModelSource, MapViewResponderHandling>
{
    _Bool _navCameraPanned;
    _Bool _navCameraZoomed;
    _Bool _searchingAlongTheRoute;
    _Bool _displayingTrafficIncident;
    AppCoordinator *_appCoordinator;
    SearchInfo *_currentSearchInfo;
    unsigned long long _defaultContaineeViewControllerType;
    SimpleResultsViewController *_simpleResultsViewController;
    PlaceCardViewController *_placecardViewController;
    NavTrafficIncidentContaineeViewController *_trafficIncidentViewController;
    RouteAnnotationContaineeViewController *_routeAnnotationViewController;
    id <NavigationRouteHistoryInfoProviding> _routeInfoProvider;
    id <NavigationRouteDetouring> _routeDetourer;
    id <NavigationRoutePausing> _routePauser;
    NavContainerViewController *_containerViewController;
    id <MapViewZoomDelegate> _mapViewZoomDelegate;
    NavTrafficIncidentCoordinator *_navTrafficIncidentCoordinator;
    unsigned long long _defaultMapViewZoom;
    id <NavigationMapItemDisplaying> _mapItemDisplayer;
    CustomPOIsController *_customPOIsController;
    NavigationDisplay *_navigationDisplay;
    GuidanceObserver *_guidanceObserver;
    id <NavigationTypeControlling> _navigationTypeController;
    NavigationTrayContaineeViewController *_navigationTrayContaineeViewController;
    AudioSettingsViewController *_audioSettingsViewController;
    MapViewZoomController *_mapViewZoomController;
    NavigationFeaturesViewModel *_navigationFeatureViewModel;
    GuidanceSearchCategoriesViewModel *_searchAlongRouteViewModel;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isDisplayingTrafficIncident) _Bool displayingTrafficIncident; // @synthesize displayingTrafficIncident=_displayingTrafficIncident;
@property(nonatomic, getter=isSearchingAlongTheRoute) _Bool searchingAlongTheRoute; // @synthesize searchingAlongTheRoute=_searchingAlongTheRoute;
@property(retain, nonatomic) GuidanceSearchCategoriesViewModel *searchAlongRouteViewModel; // @synthesize searchAlongRouteViewModel=_searchAlongRouteViewModel;
@property(retain, nonatomic) NavigationFeaturesViewModel *navigationFeatureViewModel; // @synthesize navigationFeatureViewModel=_navigationFeatureViewModel;
@property(retain, nonatomic) MapViewZoomController *mapViewZoomController; // @synthesize mapViewZoomController=_mapViewZoomController;
@property(retain, nonatomic) AudioSettingsViewController *audioSettingsViewController; // @synthesize audioSettingsViewController=_audioSettingsViewController;
@property(retain, nonatomic) NavigationTrayContaineeViewController *navigationTrayContaineeViewController; // @synthesize navigationTrayContaineeViewController=_navigationTrayContaineeViewController;
@property(readonly, nonatomic) __weak id <NavigationTypeControlling> navigationTypeController; // @synthesize navigationTypeController=_navigationTypeController;
@property(readonly, nonatomic) GuidanceObserver *guidanceObserver; // @synthesize guidanceObserver=_guidanceObserver;
@property(readonly, nonatomic) NavigationDisplay *navigationDisplay; // @synthesize navigationDisplay=_navigationDisplay;
@property(retain, nonatomic) CustomPOIsController *customPOIsController; // @synthesize customPOIsController=_customPOIsController;
@property(retain, nonatomic) id <NavigationMapItemDisplaying> mapItemDisplayer; // @synthesize mapItemDisplayer=_mapItemDisplayer;
@property(nonatomic) unsigned long long defaultMapViewZoom; // @synthesize defaultMapViewZoom=_defaultMapViewZoom;
@property(retain, nonatomic) NavTrafficIncidentCoordinator *navTrafficIncidentCoordinator; // @synthesize navTrafficIncidentCoordinator=_navTrafficIncidentCoordinator;
@property(nonatomic) __weak id <MapViewZoomDelegate> mapViewZoomDelegate; // @synthesize mapViewZoomDelegate=_mapViewZoomDelegate;
@property(nonatomic) __weak NavContainerViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(nonatomic) unsigned long long defaultContaineeViewControllerType; // @synthesize defaultContaineeViewControllerType=_defaultContaineeViewControllerType;
@property(readonly, nonatomic, getter=isNavCameraZoomed) _Bool navCameraZoomed; // @synthesize navCameraZoomed=_navCameraZoomed;
@property(readonly, nonatomic, getter=isNavCameraPanned) _Bool navCameraPanned; // @synthesize navCameraPanned=_navCameraPanned;
@property(retain, nonatomic) SearchInfo *currentSearchInfo; // @synthesize currentSearchInfo=_currentSearchInfo;
@property(nonatomic) __weak AppCoordinator *appCoordinator; // @synthesize appCoordinator=_appCoordinator;
@property(readonly, nonatomic) UIScrollView *pptTestScrollView;
- (void)pptTestDismissTrayAnimated:(_Bool)arg1 assertTrayType:(long long)arg2;
- (_Bool)pptTestIsTrayType:(long long)arg1;
- (void)pptTestUpdateTrayLayout:(unsigned long long)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) _Bool pptTestCanUpdateTrayLayout;
- (void)setLowGuidanceUserPreferredHeadingOverride:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long lowGuidanceUserPreferredHeadingOverride;
- (int)currentMapViewTargetForAnalytics;
- (int)currentUITargetForAnalytics;
- (void)pptTestTransitionBetweenFullAndLightGuidance;
- (void)pptTestEndNavigation;
- (void)pptTestStartNavigation;
- (void)mapViewZoomController:(id)arg1 didChangeMapViewZoom:(unsigned long long)arg2;
- (void)audioSettingsViewController:(id)arg1 updatedHFPPreferenceForAudioSetting:(_Bool)arg2;
- (void)audioSettingsViewControllerPickedRouteForAudioSetting:(id)arg1;
- (void)audioSettingsViewController:(id)arg1 hasRoutesToPick:(_Bool)arg2;
- (void)audioSettingsViewControllerSettingsDidDisappear:(id)arg1;
- (void)audioSettingsViewControllerSettingsDidAppear:(id)arg1;
- (void)searchResultTableViewCellDidTapActionButton:(id)arg1;
- (void)dismissTrafficIncidentViewController:(id)arg1;
- (void)presentTrafficIncidentViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didTapMapView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)mapView:(id)arg1 didUpdateYaw:(double)arg2;
- (void)mapViewNavigationCameraDidReturnToDefaultZoom:(id)arg1;
- (void)mapViewNavigationCameraDidLeaveDefaultZoom:(id)arg1;
- (void)mapViewNavigationCameraHasStoppedPanning:(id)arg1;
- (void)mapViewNavigationCameraHasStartedPanning:(id)arg1;
- (void)mapView:(id)arg1 didDeselectLabelMarker:(id)arg2;
- (void)mapView:(id)arg1 didSelectLabelMarker:(id)arg2;
- (_Bool)mapView:(id)arg1 shouldSelectLabelMarker:(id)arg2;
- (void)containeeViewControllerGoToPreviousState:(id)arg1;
- (void)hideJunctionViewIfNeeded;
- (void)showJunctionViewIfNeeded;
- (void)_toggleCameraHeadingIfNeeded;
- (void)viewControllerToggleLowGuidanceNavigationCameraHeadingOverride:(id)arg1;
- (void)dismissTray;
- (void)dismissShareETA;
- (void)dismissModalContainee;
- (void)dismissSearchAlongRoute;
- (void)dismissPlacecard;
@property(readonly, nonatomic) _Bool shouldShowSearchAlongTheRoute;
@property(readonly, nonatomic) _Bool shouldShowNavRecenterButton;
- (void)toggleTemporaryStatusBar;
- (void)repeatGuidanceInstruction;
- (void)updateCameraForTraits:(id)arg1 containerStyle:(unsigned long long)arg2;
- (void)recenterNavigation;
- (void)viewController:(id)arg1 updateMapRect:(CDStruct_02837cd9)arg2;
- (void)detourToMapItem:(id)arg1;
- (void)selectMapItem:(id)arg1;
- (void)viewController:(id)arg1 switchNavigationToRoute:(id)arg2;
- (void)viewController:(id)arg1 endRouteConfirmRequired:(_Bool)arg2;
@property(readonly, nonatomic) unsigned long long navigationType;
- (void)sender:(id)arg1 switchToNavigationType:(unsigned long long)arg2;
- (void)viewController:(id)arg1 switchToMapViewZoom:(unsigned long long)arg2;
- (void)viewController:(id)arg1 doSearchItem:(id)arg2 withUserInfo:(id)arg3;
- (void)pauseNavigation;
- (void)_willDismissNavMode;
- (void)_endNavigation;
- (void)senderEndNavigation:(id)arg1;
- (void)viewControllerOpenSearch:(id)arg1;
- (void)senderOpenAudioSettings:(id)arg1;
- (void)senderOpenListStep:(id)arg1 fullscreen:(_Bool)arg2;
- (void)senderOpenListStep:(id)arg1;
@property(readonly, nonatomic) id <NavTrafficIncidentAlertCoordination> trafficIncidentAlertCoordinator;
- (void)directionsStepsList:(id)arg1 didTapRowForRouteStep:(id)arg2;
- (void)resetMapViewZoomToDefaultAndStartCameraTracking:(_Bool)arg1;
- (void)reloadAlongRouteCategoriesCollection;
- (void)reloadNavigationFeaturesCollection;
- (void)presentSearchAlongTheRouteWithViewModel:(id)arg1;
- (void)presentSimpleResultsViewController;
- (void)presentPlacecardViewController;
- (void)_presentTrayWithDefaultLayout:(_Bool)arg1 animated:(_Bool)arg2;
- (void)presentTray;
@property(readonly, nonatomic) RouteAnnotationContaineeViewController *routeAnnotationViewController; // @synthesize routeAnnotationViewController=_routeAnnotationViewController;
@property(readonly, nonatomic) NavTrafficIncidentContaineeViewController *trafficIncidentViewController; // @synthesize trafficIncidentViewController=_trafficIncidentViewController;
@property(readonly, nonatomic) SimpleResultsViewController *simpleResultsViewController; // @synthesize simpleResultsViewController=_simpleResultsViewController;
@property(readonly, nonatomic) PlaceCardViewController *placecardViewController; // @synthesize placecardViewController=_placecardViewController;
@property(readonly, nonatomic) double mapViewYaw;
@property(readonly, nonatomic) unsigned long long navigationCameraHeadingOverride;
@property(readonly, nonatomic) id <NavigationRoutePausing> routePauser; // @synthesize routePauser=_routePauser;
@property(readonly, nonatomic) id <NavigationRouteDetouring> routeDetourer; // @synthesize routeDetourer=_routeDetourer;
@property(readonly, nonatomic) id <NavigationRouteHistoryInfoProviding> routeInfoProvider; // @synthesize routeInfoProvider=_routeInfoProvider;
@property(readonly, nonatomic) MapSelectionManager *mapSelectionManager;
@property(readonly, nonatomic) unsigned long long currentMapViewZoom;
- (void)viewController:(id)arg1 shareContactValue:(id)arg2;
- (void)openShareETAController;
- (void)senderShareNavigation:(id)arg1;
- (void)viewControllerOpenContactsSearch:(id)arg1;
@property(readonly, nonatomic) unsigned long long activeSharingCount;
- (void)presentWithContainerViewController:(id)arg1;
- (id)initWithMapItemDisplayer:(id)arg1 customPOIsController:(id)arg2 navigationDisplay:(id)arg3 guidanceObserver:(id)arg4 navigationTypeController:(id)arg5;
- (void)placeCardViewController:(id)arg1 requestCopyLinkToClipboard:(id)arg2;
- (void)placeCardViewController:(id)arg1 dismissAnimated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)placeCardViewController:(id)arg1 presentPOIEnrichmentWithCoordinator:(id)arg2;
- (void)placeCardViewController:(id)arg1 seeAllCollections:(id)arg2 usingTitle:(id)arg3 usingCollectionIds:(id)arg4;
- (void)placeCardViewController:(id)arg1 showCuratedCollection:(id)arg2;
- (void)placeCardViewController:(id)arg1 editShortcut:(id)arg2;
- (void)placeCardViewController:(id)arg1 showRelatedMapItems:(id)arg2 withTitle:(id)arg3 originalMapItem:(id)arg4 analyticsDelegate:(id)arg5;
- (void)placeCardViewController:(id)arg1 editCollection:(id)arg2;
- (void)placeCardViewController:(id)arg1 showCollection:(id)arg2;
- (_Bool)placeCardViewController:(id)arg1 shouldShowTransitScheduleForMapItem:(id)arg2 departureSequence:(id)arg3;
- (void)placeCardViewController:(id)arg1 showTransitScheduleForMapItem:(id)arg2 departureSequence:(id)arg3;
- (void)placeCardViewController:(id)arg1 openServicesHours:(id)arg2;
- (void)placeCardViewController:(id)arg1 editNameOfMapItem:(id)arg2 saveHandler:(CDUnknownBlockType)arg3 cancelHandler:(CDUnknownBlockType)arg4;
- (void)placeCardViewController:(id)arg1 pickCollectionWithSession:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4;
- (void)placeCardViewController:(id)arg1 doSearchItem:(id)arg2 withUserInfo:(id)arg3;
- (void)placeCardViewController:(id)arg1 didUpdateLinkedPlacesFromPlaceCardItem:(id)arg2;
- (void)placeCardViewController:(id)arg1 didSelectParent:(id)arg2;
- (void)placeCardViewController:(id)arg1 presentCategoryPlacesListForMapItem:(id)arg2 searchCategory:(id)arg3;
- (void)placeCardViewController:(id)arg1 displayStoreViewControllerForAppWithiTunesIdentifier:(id)arg2;
- (void)placeCardViewController:(id)arg1 enterMuninForMapItem:(id)arg2 muninView:(id)arg3;
- (void)placeCardViewController:(id)arg1 enterFlyoverForMapItem:(id)arg2;
- (void)placeCardViewController:(id)arg1 editLocationOfMarkedLocation:(id)arg2;
- (void)placeCardViewController:(id)arg1 createDroppedPin:(id)arg2;
- (void)placeCardViewController:(id)arg1 removeDroppedPin:(id)arg2;
- (void)placeCardViewController:(id)arg1 selectDisplayedAddressFromPlaceCardItem:(id)arg2;
- (void)placeCardViewController:(id)arg1 showTransitIncidents:(id)arg2;
- (void)placeCardViewController:(id)arg1 selectTransitLineItem:(id)arg2;
- (void)placeCardViewController:(id)arg1 selectMapItem:(id)arg2 address:(id)arg3;
- (void)placeCardViewController:(id)arg1 doDirectionItem:(id)arg2 userInfo:(id)arg3;
@property(readonly, nonatomic) long long displayedViewMode;
@property(readonly, nonatomic) GEOMapServiceTraits *newTraits;
- (id)searchPinsManagerForMapSelectionManager:(id)arg1;
- (void)mapSelectionManagerClearSelection:(id)arg1;
- (void)mapSelectionManager:(id)arg1 selectAnnotationView:(id)arg2;
- (void)mapSelectionManager:(id)arg1 selectVKLabelMarker:(id)arg2;
- (void)simpleResultsViewContoller:(id)arg1 selectClusteredLabelMarker:(id)arg2;
- (void)simpleResultsViewContoller:(id)arg1 selectSearchResult:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

