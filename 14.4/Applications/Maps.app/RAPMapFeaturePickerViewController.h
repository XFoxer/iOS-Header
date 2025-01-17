//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MKMapViewDelegate-Protocol.h"
#import "MKMapViewDelegatePrivate-Protocol.h"
#import "RAPInstrumentableTarget-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class MKMapCamera, MKMapView, MapViewModeSelector, NSArray, NSString, RAPLocationRefinementViewController, RAPTransitLinesAnnotation, UIBarButtonItem, UIView, VKLabelMarker;
@protocol RAPAddressLocation, RAPMapStateProtocol;

__attribute__((visibility("hidden")))
@interface RAPMapFeaturePickerViewController : UIViewController <MKMapViewDelegate, MKMapViewDelegatePrivate, UIGestureRecognizerDelegate, RAPInstrumentableTarget>
{
    long long _kind;
    CDStruct_02837cd9 _rect;
    MKMapCamera *_mapCamera;
    _Bool _hasPreferredMapType;
    unsigned long long _preferredMapType;
    MKMapView *_mapView;
    NSString *_originalPromptMessage;
    NSString *_prompt;
    CDUnknownBlockType _selection;
    RAPLocationRefinementViewController *_locationPicker;
    UIBarButtonItem *_commitBarItem;
    UIBarButtonItem *_cancelBarItem;
    CDUnknownBlockType _commit;
    CDUnknownBlockType _cancel;
    _Bool _creatingMapViewReportContext;
    struct CLLocationCoordinate2D _initialFeatureCoordinate;
    RAPTransitLinesAnnotation *_transitLinesAnnotation;
    CDUnknownBlockType _textFieldEditBlock;
    NSString *_textFieldTitle;
    NSString *_textFieldText;
    _Bool _mapViewHasFinishedToRenderMap;
    UIView *_floatingControlsView;
    MapViewModeSelector *_modeSelector;
    int _analyticsTarget;
    _Bool _canCommit;
    _Bool _didCommit;
    _Bool _requiresRenderedMapToContinue;
    NSArray *_selectedTransitLineMarkers;
    VKLabelMarker *_selectedLabelMarker;
    id <RAPAddressLocation> _selectedAddressLocation;
    NSArray *_selectedTransitLineIdentifiers;
    id <RAPMapStateProtocol> _mapViewReportContext;
    NSString *_textFieldPlaceholder;
    CDUnknownBlockType _backButtonPressedCallback;
    double _mapViewZoomLevel;
    struct CLLocationCoordinate2D _selectedCoordinate;
    struct CLLocationCoordinate2D _tappedCoordinate;
    CDStruct_02837cd9 _selectedMapRect;
}

- (void).cxx_destruct;
@property(nonatomic) double mapViewZoomLevel; // @synthesize mapViewZoomLevel=_mapViewZoomLevel;
@property(copy, nonatomic) CDUnknownBlockType backButtonPressedCallback; // @synthesize backButtonPressedCallback=_backButtonPressedCallback;
@property(copy, nonatomic) NSString *textFieldPlaceholder; // @synthesize textFieldPlaceholder=_textFieldPlaceholder;
@property(nonatomic) _Bool requiresRenderedMapToContinue; // @synthesize requiresRenderedMapToContinue=_requiresRenderedMapToContinue;
@property(nonatomic) _Bool didCommit; // @synthesize didCommit=_didCommit;
@property(readonly, nonatomic) _Bool canCommit; // @synthesize canCommit=_canCommit;
@property(nonatomic) struct CLLocationCoordinate2D tappedCoordinate; // @synthesize tappedCoordinate=_tappedCoordinate;
@property(retain, nonatomic) NSArray *selectedTransitLineIdentifiers; // @synthesize selectedTransitLineIdentifiers=_selectedTransitLineIdentifiers;
@property(readonly, nonatomic) id <RAPAddressLocation> selectedAddressLocation; // @synthesize selectedAddressLocation=_selectedAddressLocation;
@property(readonly, nonatomic) CDStruct_02837cd9 selectedMapRect; // @synthesize selectedMapRect=_selectedMapRect;
@property(readonly, nonatomic) VKLabelMarker *selectedLabelMarker; // @synthesize selectedLabelMarker=_selectedLabelMarker;
@property(readonly, nonatomic) NSArray *selectedTransitLineMarkers; // @synthesize selectedTransitLineMarkers=_selectedTransitLineMarkers;
- (void)_handleSegmentedControlTap:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)_updateAttributionInsets;
- (void)_showModeSelector;
- (_Bool)_shouldShowModeSelector;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(_Bool)arg2;
- (void)mapViewWillStartRenderingMap:(id)arg1;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapView:(id)arg1 didSelectLabelMarker:(id)arg2;
- (void)mapView:(id)arg1 didDeselectLabelMarker:(id)arg2;
@property(readonly, nonatomic) id <RAPMapStateProtocol> mapViewReportContext; // @synthesize mapViewReportContext=_mapViewReportContext;
- (_Bool)_kindTracksLabelMarkerSelection;
- (void)setSelectedLabelMarker:(id)arg1;
- (_Bool)mapView:(id)arg1 shouldSelectLabelMarker:(id)arg2;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (void)displayAnnotationAtCoordinate:(struct CLLocationCoordinate2D)arg1 withText:(id)arg2;
- (void)_mapTappedForTransitLineSelection:(id)arg1;
@property(readonly, nonatomic) struct CLLocationCoordinate2D selectedCoordinate; // @synthesize selectedCoordinate=_selectedCoordinate;
@property(readonly, nonatomic) int analyticTarget;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_updateCommitBarItem;
- (int)_selectionAction;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_cancel;
- (void)_commit;
- (void)setHandlerBlocksForUserCommittedSelection:(CDUnknownBlockType)arg1 withRightBarButtonItemTitle:(id)arg2;
- (void)setHandlerBlocksForUserCommittedSelection:(CDUnknownBlockType)arg1 cancelled:(CDUnknownBlockType)arg2;
- (void)setPrompt:(id)arg1;
- (void)_selectionDidChange;
- (id)initForPickingFeatureOfKind:(long long)arg1 withPrompt:(id)arg2 title:(id)arg3 initialFeatureCoordinate:(struct CLLocationCoordinate2D)arg4 inMapRect:(CDStruct_02837cd9)arg5 withCamera:(id)arg6 analyticsTarget:(int)arg7 selection:(CDUnknownBlockType)arg8 textFieldTitle:(id)arg9 textFieldText:(id)arg10 textFieldWithEditBlock:(CDUnknownBlockType)arg11;
- (id)initForPickingFeatureOfKind:(long long)arg1 withPrompt:(id)arg2 title:(id)arg3 initialFeatureCoordinate:(struct CLLocationCoordinate2D)arg4 inMapRect:(CDStruct_02837cd9)arg5 withCamera:(id)arg6 analyticsTarget:(int)arg7 selection:(CDUnknownBlockType)arg8;
- (id)initForPickingFeatureOfKind:(long long)arg1 withPrompt:(id)arg2 title:(id)arg3 inMapRect:(CDStruct_02837cd9)arg4 withCamera:(id)arg5 analyticsTarget:(int)arg6 preferredMapType:(unsigned long long)arg7 selection:(CDUnknownBlockType)arg8;
- (id)initForPickingFeatureOfKind:(long long)arg1 withPrompt:(id)arg2 title:(id)arg3 inMapRect:(CDStruct_02837cd9)arg4 withCamera:(id)arg5 analyticsTarget:(int)arg6 selection:(CDUnknownBlockType)arg7;

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

