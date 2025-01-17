//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKCameraController.h>

#import <VectorKit/VKGesturingCameraController-Protocol.h>
#import <VectorKit/VKNavContextObserver-Protocol.h>
#import <VectorKit/VKNavigationCameraController-Protocol.h>

@class GEOMapRegion, NSString, VKAttachedNavGestureCameraBehavior, VKDetachedNavGestureCameraBehavior, VKGestureCameraBehavior, VKNavContext, VKSceneConfiguration, VKScreenCanvas, VKTimedAnimation;
@protocol VKInteractiveMap, VKNavGestureCameraBehavior;

__attribute__((visibility("hidden")))
@interface VKNavCameraController : VKCameraController <VKNavigationCameraController, VKGesturingCameraController, VKNavContextObserver>
{
    unsigned char _cameraType;
    unsigned char _headingType;
    Unit_3d259e8a _puckCourse;
    Coordinate3D_bc242218 _puckCoordinate;
    Unit_3d259e8a _headingDelta;
    Unit_3d259e8a _headingMinDelta;
    CameraFrame_406dbd31 _lastCalculatedCameraFrame;
    CameraFrame_406dbd31 _cameraFrame;
    _Bool _needsUpdate;
    struct Spring<double, 1, gdc::SpringType::Linear> _pitchSpring;
    struct Spring<double, 1, gdc::SpringType::Angular> _headingSpring;
    struct Spring<double, 1, gdc::SpringType::Linear> _distanceFromTargetSpring;
    struct Spring<double, 2, gdc::SpringType::Linear> _screenPositionSpring;
    struct Unit<MeterUnitDescription, double> _cameraDistanceFromTarget;
    Unit_3d259e8a _cameraPitch;
    double _previousUpdateTime;
    double _maxZoomScale;
    double _minZoomScale;
    VKGestureCameraBehavior<VKNavGestureCameraBehavior> *_gestureBehavior;
    VKAttachedNavGestureCameraBehavior *_attachedGestureBehavior;
    VKDetachedNavGestureCameraBehavior *_detachedGestureBehavior;
    _Bool _isDetached;
    _Bool _panning;
    _Bool _rotating;
    _Bool _pitching;
    _Bool _zooming;
    VKTimedAnimation *_transitionAnimation;
    VKTimedAnimation *_snapPitchAnimation;
    VKTimedAnimation *_snapHeadingAnimation;
    CameraFrame_406dbd31 _transitionFrame;
    basic_string_23d93216 _currentStyleName;
    vector_36073df6 _coordinatesToFrame;
    unsigned char _styleManeuversToFrame;
    unsigned char _maneuversToFrame;
    unsigned char _styleLegsToFrame;
    double _minCameraHeight;
    double _maxCameraHeight;
    Unit_3d259e8a _minCameraPitch;
    Unit_3d259e8a _maxCameraPitch;
    struct VKEdgeInsets _previousMapEdgeInsets;
    struct VKEdgeInsets _framingEdgeInset;
    struct VKEdgeInsets _framingEdgeInsetProportional;
    struct VKEdgeInsets _clientFramingInsets;
    Matrix_8746f91e _puckMovementBoundsMin;
    Matrix_8746f91e _puckMovementBoundsMax;
    Matrix_8746f91e _puckScreenPosition;
    double _minHeightDeltaChangeHorizontal;
    double _maxHeightDeltaChangeHorizontal;
    double _minHeightDeltaChangeVertical;
    double _maxHeightDeltaChangeVertical;
    double _halfPuckSize;
    Box_3d7e3c2c _viewableScreenRect;
    Box_3d7e3c2c _framingScreenRect;
    _Bool _enablePan;
    _Bool _enableZoom;
    _Bool _enablePitch;
    _Bool _enableRotate;
    float _panReturnDelayTime;
    unsigned char _alternateFramingSource;
    double _maxFramingDistance;
    double _framingDistanceAfterManeuver;
    VKNavContext *_navContext;
    CDStruct_2c43369c _locationCoordinate;
    struct PolylineCoordinate _routeCoordinate;
    _Bool _frameAllGroupedManeuvers;
    unsigned char _maxManeuversToFrame;
    _Bool _ignorePointsBehind;
    Coordinate3D_bc242218 _routeFocusCoordinate;
    unsigned long long _lastTargetStyleIdentifier;
    double _desiredZoomScale;
    float _animationTime;
    _Bool _isTracking;
    shared_ptr_e963992e _taskContext;
    double _depthNear;
    _Bool _leftHanded;
    _Bool _sentZoomNotification;
    _Bool _enableDynamicFrameRate;
    Coordinate3D_bc242218 _cornerCoordinates[4];
    struct WindowedSampler<60> _pixelSamples;
    VKScreenCanvas<VKInteractiveMap> *_screenCanvas;
    VKSceneConfiguration *_sceneConfiguration;
    long long _baseDisplayRate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) long long baseDisplayRate; // @synthesize baseDisplayRate=_baseDisplayRate;
@property(nonatomic) struct VKEdgeInsets clientFramingInsets; // @synthesize clientFramingInsets=_clientFramingInsets;
@property(nonatomic) VKSceneConfiguration *sceneConfiguration; // @synthesize sceneConfiguration=_sceneConfiguration;
@property(nonatomic) VKScreenCanvas<VKInteractiveMap> *screenCanvas; // @synthesize screenCanvas=_screenCanvas;
- (float)_currentRoadSignOffset;
- (void)_setNavCameraIsDetached:(_Bool)arg1;
- (unsigned char)cameraHeadingType;
- (void)canvasDidLayout;
- (void)setCamera:(id)arg1;
- (void)stopAnimations;
- (void)setCameraFrame:(CameraFrame_406dbd31)arg1;
- (CameraFrame_406dbd31)cameraFrame;
- (void)_snapHeading;
- (void)_snapPitch;
- (void)setEdgeInsets:(struct VKEdgeInsets)arg1;
- (void)setEdgeInsetsAnimating:(_Bool)arg1;
- (Unit_3d259e8a)maxCameraPitch;
- (Unit_3d259e8a)minCameraPitch;
- (double)maxZoomHeight;
- (double)minZoomHeight;
- (double)maxZoomScale;
- (double)minZoomScale;
@property(nonatomic) double zoomScale;
- (void)_updateZoomScaleLimts;
- (void)_setNeedsUpdate;
- (void)navContextCameraHeadingOverrideDidChange:(id)arg1;
- (void)navContextStateDidChange:(id)arg1;
- (void)_updateForAnimatedEdgeInsets;
- (void)updateSpringsForFramingCamera;
- (void)_addAdditionalRoutePointsToFrameToList:(vector_36073df6 *)arg1;
- (void)updatePointsToFrame;
- (void)updateManeuversToFrame;
- (Coordinate3D_bc242218)routeCoordinateAtDistance:(double)arg1;
- (Coordinate3D_bc242218)routeLocationAtDistance:(double)arg1 fromManeuver:(unsigned long long)arg2;
- (double)distanceToManeuver:(unsigned long long)arg1;
- (void)updateSpringsForTrackingCamera;
- (Box_3d7e3c2c)calculateViewableScreenRect;
- (Box_3d7e3c2c)calculateViewableScreenRectForEdgeInsets:(struct VKEdgeInsets)arg1;
- (Unit_3d259e8a)calculateHeading;
- (void)stop;
- (_Bool)isRotateEnabled;
- (_Bool)isPitchEnabled;
- (void)stopSnappingAnimations;
- (_Bool)_canZoomOut;
- (_Bool)canZoomOutForTileSize:(long long)arg1;
- (_Bool)_canZoomIn;
- (_Bool)canZoomInForTileSize:(long long)arg1;
- (double)topDownMinimumZoomLevel;
- (double)currentZoomLevel;
- (double)maximumZoomLevel;
- (double)minimumZoomLevel;
- (double)_normalizedZoomLevelForDisplayZoomLevel:(double)arg1;
- (_Bool)canEnter3DMode;
- (void)setNavContext:(id)arg1;
- (void)returnToPuck;
- (void)returnToTrackingWithDelay:(double)arg1 resetZoom:(_Bool)arg2;
- (void)animateCameraWithDuration:(float)arg1 fromFrame:(const CameraFrame_406dbd31 *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (CameraFrame_406dbd31)restingCameraFrame;
- (CameraFrame_406dbd31)currentCameraFrame;
@property(nonatomic) double pitch;
@property(nonatomic) double heading;
@property(readonly, nonatomic) double altitude;
@property(nonatomic) double distanceFromCenterCoordinate;
@property(nonatomic) CDStruct_c3b9c2ee centerCoordinate;
- (void)_updateStyles;
- (void)_updateSceneStyles:(_Bool)arg1;
- (void)stylesheetDidReload;
- (void)stylesheetDidChange;
- (_Bool)_updateSprings:(double)arg1;
- (Matrix_2bdd42a3)puckScreenPoint;
- (void)_updateDebugOverlay;
- (void)_updateDebugText;
- (id)_debugText:(_Bool)arg1 showNavCameraDebugConsoleAttributes:(_Bool)arg2;
- (id)detailedDescription;
- (_Bool)_hasRunningAnimation;
- (double)_calculateMaxPixelChangeAndUpdateCorners;
- (void)updateWithTimestamp:(double)arg1;
- (void)resetSpringsToResting;
- (void)updateCameraState;
- (_Bool)wantsTimerTick;
- (void)puckAnimator:(id)arg1 updatedTargetPosition:(const Coordinate3D_bc242218 *)arg2;
- (void)puckAnimatorDidStop:(id)arg1;
- (void)updateLocation:(const Coordinate3D_bc242218 *)arg1 andCourse:(const Unit_3d259e8a *)arg2;
- (void)puckAnimator:(id)arg1 updatedPosition:(const Coordinate3D_bc242218 *)arg2 course:(const Unit_3d259e8a *)arg3;
- (void)puckAnimator:(id)arg1 runAnimation:(id)arg2;
- (_Bool)isGesturing;
- (_Bool)tapAtPoint:(struct CGPoint)arg1;
- (void)transferGestureState:(id)arg1;
- (void)stopPitchingWithFocusPoint:(struct CGPoint)arg1;
- (void)updatePitchWithFocusPoint:(struct CGPoint)arg1 degrees:(double)arg2;
- (void)updatePitchWithFocusPoint:(struct CGPoint)arg1 translation:(double)arg2;
- (void)startPitchingWithFocusPoint:(struct CGPoint)arg1;
- (void)stopRotatingWithFocusPoint:(struct CGPoint)arg1;
- (void)updateRotationWithFocusPoint:(struct CGPoint)arg1 newValue:(double)arg2;
- (void)startRotatingWithFocusPoint:(struct CGPoint)arg1;
- (void)stopPanningAtPoint:(struct CGPoint)arg1;
- (void)updatePanWithTranslation:(struct CGPoint)arg1;
- (void)startPanningAtPoint:(struct CGPoint)arg1 panAtStartPoint:(_Bool)arg2;
- (void)_updateObserverCouldZoomIn:(_Bool)arg1 couldZoomOut:(_Bool)arg2;
- (void)stopPinchingWithFocusPoint:(struct CGPoint)arg1;
- (void)updatePinchWithFocusPoint:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)startPinchingWithFocusPoint:(struct CGPoint)arg1;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_setDetached:(_Bool)arg1;
- (void)startWithPounce:(_Bool)arg1 startLocation:(CDStruct_c3b9c2ee)arg2 startCourse:(double)arg3 pounceCompletionHandler:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithTaskContext:(shared_ptr_e963992e)arg1 device:(struct Device *)arg2 mapDataAccess:(struct MapDataAccess *)arg3 animationRunner:(struct AnimationRunner *)arg4 runLoopController:(struct RunLoopController *)arg5 cameraDelegate:(id)arg6;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) struct AnimationRunner *animationRunner;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isFullyPitched;
@property(readonly, nonatomic) _Bool isPitched;
@property(readonly, nonatomic) _Bool isRotated;
@property(readonly, nonatomic) struct MapDataAccess *mapDataAccess;
@property(readonly, nonatomic) GEOMapRegion *mapRegion;
@property(readonly, nonatomic) double maxPitch;
@property(readonly, nonatomic) double minPitch;
@property(readonly, nonatomic) struct RunLoopController *runLoopController;
@property(readonly) Class superclass;

@end

