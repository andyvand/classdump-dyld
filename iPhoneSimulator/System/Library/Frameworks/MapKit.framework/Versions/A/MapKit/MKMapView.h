/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:05 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <AppKit/NSView.h>
#import <MapKit/GEOResourceManifestTileGroupObserver.h>
#import <MapKit/MKScaleViewDelegate.h>
#import <MapKit/VKMapViewDelegate.h>
#import <MapKit/VKPuckAnimatorDelegate.h>
#import <MapKit/MKLocationManagerObserver.h>
#import <MapKit/MKAnnotationMarkerContainer.h>
#import <MapKit/MKAnnotationManagerDelegate.h>
#import <MapKit/MKAnnotationContainerViewDelegate.h>
#import <MapKit/MKOverlayContainerViewDelegate.h>
#import <MapKit/MKCompassViewDelegate.h>
#import <MapKit/NSCoding.h>

@protocol MKMapViewDelegate;
@class VKMapView, MKUserLocation, VKPuckAnimator, MKAnnotationManager, MKAnnotationContainerView, MKOverlayContainerView, NSView, VKAnimation, NSOrderedSet, MKAccessibilityItem, MKLabelMarker, MKMapCamera, NSSegmentedControl, NSTimer, _MKEnvironmentLabel, MKCompassView, MKScaleView, NSArray, NSString;

@interface MKMapView : NSView <GEOResourceManifestTileGroupObserver, MKScaleViewDelegate, VKMapViewDelegate, VKPuckAnimatorDelegate, MKLocationManagerObserver, MKAnnotationMarkerContainer, MKAnnotationManagerDelegate, MKAnnotationContainerViewDelegate, MKOverlayContainerViewDelegate, MKCompassViewDelegate, NSCoding> {

	VKMapView* _mapLayer;
	double _rotationInGesture;
	double _lastRotationInGestureDelta;
	double _lastRotationInGestureTimestamp;
	double _pinchFactorInGesture;
	double _pinchFactorAverageInGestureTimestamp;
	double _pinchFactorAverageInGesture;
	CGPoint _lastDragPanTranslation;
	CGPoint _lastDragPanDelta;
	double _lastDragPanTranslationTimestamp;
	CGPoint _pointInMapWhenStartingGesture;
	CGPoint _pointInMapOnMouseDown;
	CGPoint _scrollTranslation;
	double _mouseDownDelay;
	double _pitchInDragging;
	char _userIsDragging;
	char _userIsGesturing;
	char _userIsZooming;
	char _userIsRotating;
	char _userIsPanning;
	char _userIsPitching;
	char _userStartedLongPressAction;
	char _userIsDraggingAnnotation;
	char _userIsZoomingWithArrows;
	char _userIsRotatingWithArrows;
	double _startZoomingTimeStamp;
	double _startRotatingTimeStamp;
	char _userStartedDraggingAnnotation;
	char _userCanceledDraggingAnnotation;
	char _userDraggedMouseSinceMouseDown;
	char _userGesturedSinceMouseDown;
	char _mouseIsDown;
	char _usedAnnotationOnMouseDown;
	char _cursorInView;
	char _altKeyPressedOnMouseDown;
	char _shiftKeyPressedOnMouseDown;
	CGPoint _cursorPositionOnMouseDown;
	CGPoint _cursorPositionOnMouseDownRelativeToMapView;
	char _shouldHideCursor;
	double _zoomingSpeed;
	long long _arrowsMask;
	CGPoint _translationDirection;
	double _arrowNavigationStartTimestamp;
	char _showsUserLocation;
	MKUserLocation* _userLocation;
	VKPuckAnimator* _userLocationAnimator;
	MKAnnotationManager* _annotationManager;
	/*^block*/id _annotationRectTest;
	/*^block*/id _annotationCoordinateTest;
	MKAnnotationContainerView* _annotationContainer;
	MKOverlayContainerView* _overlayContainer;
	id<MKMapViewDelegate> _safeDelegate;
	id<MKMapViewDelegate> _unsafeDelegate;
	unsigned long long _mapType;
	char _zoomEnabled;
	char _scrollEnabled;
	char _rotateEnabled;
	char _pitchEnabled;
	char _isMapRasterized;
	char _showsCompass;
	char _showsZoomControls;
	long long _overlaysWritingDirection;
	int _attributionCorner;
	char _isAnimating;
	char _isInitializing;
	SCD_Struct_MK4 _previousVisibleMapRect;
	long long _remainingAttemptToLocateUser;
	NSView* _attributionView;
	CGPoint _smartAimingCachedCoordinate;
	VKAnimation* _animation;
	NSOrderedSet* _storedAccessibilityItems;
	char _willUpdateAccessibilityItems;
	char _wantsAccessibilityUpdates;
	MKAccessibilityItem* _focusedAccessibilityItem;
	MKLabelMarker* _selectedLabelMarker;
	long long _notifyMapRegionUpdateCounter;
	MKMapCamera* _camera;
	NSSegmentedControl* _zoomButtons;
	NSTimer* _compassHideTimer;
	char _showsAttribution;
	char _showsAttributionBadge;
	char _showsAboutMapInContextualMenu;
	char _showsScale;
	/*^block*/id _selectAnnotationViewAfterRedrawBlock;
	char _hasPendingCameraChange;
	double _mapModeStartTime;
	char _continueToRenderWhenOccluded;
	unsigned long long _suspendedEffectsCount;
	/*^block*/id _regionSetterWhenSized;
	double _verticalYawOverride;
	char _userRotatedAwayFromVerticalYaw;
	char _showsCurrentEnvironmentName;
	_MKEnvironmentLabel* _debugCurrentEnvironmentLabel;
	char _edgeInsetsAreExplicit;
	char _observingContentLayoutRect;
	char _canChangeZoomingSpeed;
	char _canSelectAllLabels;
	char willUpdateAccessibilityItems;
	char wantsAccessibilityUpdates;
	MKCompassView* _compass;
	MKScaleView* _scaleView;
	NSView* _settingsView;
	MKAccessibilityItem* focusedAccessibilityItem;
	unsigned long long _currentFlyoverAnimationID;

}

@property (getter=_visibleTileSets,nonatomic,readonly) NSArray * visibleTileSets; 
@property (getter=_detailedDescription,nonatomic,readonly) NSString * detailedDescription; 
@property (retain,readonly) NSOrderedSet * accessibilityItems; 
@property (retain) NSOrderedSet * storedAccessibilityItems; 
@property (nonatomic,retain) MKAccessibilityItem * focusedAccessibilityItem; 
@property (assign) char willUpdateAccessibilityItems; 
@property (assign) char wantsAccessibilityUpdates; 
@property (assign,nonatomic,__weak) id<MKMapViewDelegate> delegate; 
@property (assign,nonatomic) unsigned long long mapType; 
@property (assign,nonatomic) SCD_Struct_MK4 region; 
@property (assign,nonatomic) CGPoint centerCoordinate; 
@property (assign,nonatomic) SCD_Struct_MK4 visibleMapRect; 
@property (nonatomic,copy) MKMapCamera * camera; 
@property (assign,getter=isZoomEnabled,nonatomic) char zoomEnabled;                                                                                             //@synthesize zoomEnabled=_zoomEnabled - In the implementation block
@property (assign,getter=isScrollEnabled,nonatomic) char scrollEnabled;                                                                                         //@synthesize scrollEnabled=_scrollEnabled - In the implementation block
@property (assign,getter=isRotateEnabled,nonatomic) char rotateEnabled;                                                                                         //@synthesize rotateEnabled=_rotateEnabled - In the implementation block
@property (assign,getter=isPitchEnabled,nonatomic) char pitchEnabled;                                                                                           //@synthesize pitchEnabled=_pitchEnabled - In the implementation block
@property (assign,nonatomic) char showsCompass;                                                                                                                 //@synthesize showsCompass=_showsCompass - In the implementation block
@property (assign,nonatomic) char showsZoomControls;                                                                                                            //@synthesize showsZoomControls=_showsZoomControls - In the implementation block
@property (assign,nonatomic) char showsScale; 
@property (assign,nonatomic) char showsPointsOfInterest; 
@property (assign,nonatomic) char showsBuildings; 
@property (assign,nonatomic) char showsUserLocation; 
@property (nonatomic,readonly) MKUserLocation * userLocation; 
@property (getter=isUserLocationVisible,nonatomic,readonly) char userLocationVisible; 
@property (nonatomic,readonly) NSArray * annotations; 
@property (nonatomic,copy) NSArray * selectedAnnotations; 
@property (nonatomic,readonly) CGRect annotationVisibleRect; 
@property (assign,setter=_setCurrentFlyoverAnimationID:,getter=_currentFlyoverAnimationID,nonatomic) unsigned long long currentFlyoverAnimationID;              //@synthesize currentFlyoverAnimationID=_currentFlyoverAnimationID - In the implementation block
@property (nonatomic,readonly) char allowsRotation; 
@property (nonatomic,readonly) char allowsTilt; 
@property (retain) NSOrderedSet * storedAccessibilityItems;                                                                                                     //@synthesize storedAccessibilityItems=_storedAccessibilityItems - In the implementation block
@property (assign,nonatomic) char canSelectAllLabels;                                                                                                           //@synthesize canSelectAllLabels=_canSelectAllLabels - In the implementation block
@property (assign,nonatomic) char animating;                                                                                                                    //@synthesize isAnimating=_isAnimating - In the implementation block
@property (nonatomic,retain) MKCompassView * compass;                                                                                                           //@synthesize compass=_compass - In the implementation block
@property (nonatomic,retain) NSSegmentedControl * zoomButtons;                                                                                                  //@synthesize zoomButtons=_zoomButtons - In the implementation block
@property (assign,nonatomic) long long overlaysWritingDirection;                                                                                                //@synthesize overlaysWritingDirection=_overlaysWritingDirection - In the implementation block
@property (assign,nonatomic) int attributionCorner;                                                                                                             //@synthesize attributionCorner=_attributionCorner - In the implementation block
@property (assign,nonatomic) char showsAttribution;                                                                                                             //@synthesize showsAttribution=_showsAttribution - In the implementation block
@property (assign,nonatomic) char showsAttributionBadge;                                                                                                        //@synthesize showsAttributionBadge=_showsAttributionBadge - In the implementation block
@property (assign,nonatomic) char showsAboutMapInContextualMenu;                                                                                                //@synthesize showsAboutMapInContextualMenu=_showsAboutMapInContextualMenu - In the implementation block
@property (assign,nonatomic) char continueToRenderWhenOccluded;                                                                                                 //@synthesize continueToRenderWhenOccluded=_continueToRenderWhenOccluded - In the implementation block
@property (nonatomic,readonly) char effectsEnabled; 
@property (retain) MKScaleView * scaleView;                                                                                                                     //@synthesize scaleView=_scaleView - In the implementation block
@property (retain) NSView * settingsView;                                                                                                                       //@synthesize settingsView=_settingsView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)minZoomLevelForMapType:(unsigned long long)arg1 viewSize:(CGSize)arg2 ;
+(SCD_Struct_MK4)_regionThatFitsMapType:(unsigned long long)arg1 viewSize:(CGSize)arg2 viewInsets:(NSEdgeInsets)arg3 edgePadding:(NSEdgeInsets)arg4 region:(SCD_Struct_MK4)arg5 minZoomLevel:(double)arg6 maxZoomLevel:(double)arg7 snapToZoomLevel:(char)arg8 ;
+(SCD_Struct_MK4)_mapRectThatFitsViewBounds:(CGRect)arg1 mapRect:(SCD_Struct_MK4)arg2 viewInsets:(NSEdgeInsets)arg3 edgePadding:(NSEdgeInsets)arg4 minZoomLevel:(double)arg5 maxZoomLevel:(double)arg6 snapToZoomLevel:(char)arg7 ;
+(SCD_Struct_MK4)regionThatFitsMapType:(unsigned long long)arg1 viewSize:(CGSize)arg2 edgeInsets:(NSEdgeInsets)arg3 region:(SCD_Struct_MK4)arg4 ;
+(SCD_Struct_MK4)mapRectWithCenterCoordinate:(CGPoint)arg1 zoomScale:(double)arg2 size:(CGSize)arg3 ;
-(void)zoomOut:(id)arg1 ;
-(void)zoomIn:(id)arg1 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(void)prepareForMenu:(id)arg1 withEvent:(id)arg2 ;
-(id)vk_mapLayer;
-(void)updateAttribution;
-(id)commonInitFromIB:(char)arg1 ;
-(void)disableAndRearmEnableMarkerPixelAlignment;
-(char)_mustWaitUntilSized;
-(void)_updateInsets;
-(void)_layoutBottomViews;
-(void)_fireDelayedRegionChangeIfNecessary;
-(NSEdgeInsets)_edgeInsets;
-(char)showsZoomControls;
-(char)showsCompass;
-(char)showsScale;
-(void)_updateScaleVisibility;
-(void)setPitchEnabled:(char)arg1 ;
-(void)setRotateEnabled:(char)arg1 ;
-(void)setShowsCompass:(char)arg1 ;
-(void)setShowsZoomControls:(char)arg1 ;
-(void)setShowsScale:(char)arg1 ;
-(char)isZoomEnabled;
-(char)isScrollEnabled;
-(char)isPitchEnabled;
-(char)isRotateEnabled;
-(char)showsUserLocation;
-(void)displayDefaultMapRegionWithCompletion:(/*^block*/id)arg1 ;
-(id)annotationManager;
-(void)_updatePitchAllowed;
-(void)applicationDidResignActiveOrWillTerminate:(id)arg1 ;
-(void)showCalloutForCurrentAnnotationIfNeeded;
-(void)stopCurrentAnimation;
-(void)_logTimeSpentInCurrentMapMode;
-(void)_updateBackgroundStateSoon;
-(void)_updateBackgroundStateNow;
-(void)zoomControlSegmentPressed:(id)arg1 ;
-(void)setZoomButtons:(NSSegmentedControl *)arg1 ;
-(void)setCompass:(MKCompassView *)arg1 ;
-(char)allowsRotation;
-(void)_updateZoomControlsVisiblility;
-(void)_updateCompassVisiblility;
-(char)allowsTilt;
-(id)makeCompassIfNeeded;
-(MKCompassView *)compass;
-(id)makeZoomButtonsIfNeeded;
-(NSSegmentedControl *)zoomButtons;
-(void)snapToNorth:(id)arg1 ;
-(CGPoint)zoomPointInMapViewFromEvent:(id)arg1 smartAiming:(char)arg2 lockOnPreviousTarget:(char)arg3 ;
-(id)_mapRegion;
-(char)_isUsingDevResourceStyleSheet;
-(void)_updateEnvironmentLabelText;
-(char)userCanRotate;
-(CGPoint)centerPointInMapView;
-(void)disableMarkerPixelAlignment;
-(void)rotationDidEnd;
-(void)runAnimationWithDuration:(double)arg1 animationHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)userCanZoom;
-(void)userWillStartZooming;
-(CGPoint)zoomPointInMapViewFromPoint:(CGPoint)arg1 smartAiming:(char)arg2 lockOnPreviousTarget:(char)arg3 ;
-(void)triggerRotationInertia;
-(void)triggerZoomingInertia;
-(void)userDidStopZooming;
-(void)enableMarkerPixelAlignment;
-(void)simulateInertiaRotationUpdatesWithFocusPoint:(CGPoint)arg1 duration:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)simulateInertiaPinchUpdatesWithFocusPoint:(CGPoint)arg1 duration:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_updateMapType;
-(void)checkIfMapIsRasterized;
-(char)isMapRasterized;
-(void)snapToNorthAndExit3DMode:(id)arg1 ;
-(char)showsAttributionBadge;
-(char)showsAttribution;
-(id)_mapAttribution;
-(MKScaleView *)scaleView;
-(char)drawsBlackOnWhiteScale;
-(void)deselectAllMarkersAndAnnotationViews;
-(SCD_Struct_MK4)visibleMapRect;
-(void)_forceMapViewLayout;
-(void)_setRegion:(SCD_Struct_MK4)arg1 snapToZoomLevel:(char)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)_addSetRegionBlockWhenSized:(/*^block*/id)arg1 ;
-(SCD_Struct_MK4)_regionThatFits:(SCD_Struct_MK4)arg1 edgePadding:(NSEdgeInsets)arg2 snapToZoomLevel:(char)arg3 ;
-(SCD_Struct_MK4)mapRectThatFits:(SCD_Struct_MK4)arg1 edgePadding:(NSEdgeInsets)arg2 ;
-(SCD_Struct_MK4)_mapRectThatFits:(SCD_Struct_MK4)arg1 edgePadding:(NSEdgeInsets)arg2 viewInsets:(NSEdgeInsets)arg3 snapToZoomLevel:(char)arg4 ;
-(void)setCenterCoordinate:(CGPoint)arg1 zoomLevel:(double)arg2 animated:(char)arg3 ;
-(id)_mapRegionWithCenterCoordinate:(CGPoint)arg1 zoomScale:(double)arg2 ;
-(void)_setEdgeInsets:(NSEdgeInsets)arg1 explicit:(char)arg2 ;
-(id)_mapLayer;
-(void)setVisibleMapRect:(SCD_Struct_MK4)arg1 edgePadding:(NSEdgeInsets)arg2 animated:(char)arg3 ;
-(SCD_Struct_MK4)regionThatFits:(SCD_Struct_MK4)arg1 edgePadding:(NSEdgeInsets)arg2 ;
-(CGPoint)_convertPoint:(CGPoint)arg1 toCoordinateFromView:(id)arg2 ;
-(CGPoint)_convertCoordinate:(CGPoint)arg1 toPointToView:(id)arg2 ;
-(CGRect)_convertRegion:(SCD_Struct_MK4)arg1 toRectToView:(id)arg2 ;
-(SCD_Struct_MK4)_convertRect:(CGRect)arg1 toRegionFromView:(id)arg2 ;
-(SCD_Struct_MK4)_convertRect:(CGRect)arg1 toMapRectFromView:(id)arg2 ;
-(CGRect)_convertMapRect:(SCD_Struct_MK4)arg1 toRectToView:(id)arg2 ;
-(void)_prepareFlyoverAnimation:(id)arg1 inBackground:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)_performFlyoverAnimation:(id)arg1 animateToStart:(char)arg2 ;
-(void)_startFlyoverTourAnimation:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_stopFlyoverAnimation;
-(void)_pauseFlyoverAnimation;
-(void)_resumeFlyoverAnimation;
-(void)setVisibleMapRect:(SCD_Struct_MK4)arg1 animated:(char)arg2 ;
-(void)_notifyDelegateUsingSelector:(SEL)arg1 ;
-(void)_startUpdatingUserLocation;
-(void)_locationManagerApprovalDidChange:(id)arg1 ;
-(void)_hideUserLocation;
-(void)_stopUpdatingUserLocation;
-(CGPoint)convertCoordinate:(CGPoint)arg1 toPointToView:(id)arg2 ;
-(id)userLocationView;
-(char)isCalloutLeftAnchored;
-(id)calloutView;
-(void)_notifyDelegateUsingSelector:(SEL)arg1 withObject:(id)arg2 ;
-(void)removeAnnotation:(id)arg1 ;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(void)_addAnnotation:(id)arg1 allowAnimation:(char)arg2 ;
-(void)_addAnnotations:(id)arg1 allowAnimation:(char)arg2 ;
-(void)addAnnotations:(id)arg1 ;
-(void)replaceAnnotation:(id)arg1 withAnnotation:(id)arg2 ;
-(id)annotationsInMapRect:(SCD_Struct_MK4)arg1 ;
-(void)selectAnnotation:(id)arg1 animated:(char)arg2 ;
-(void)selectAnnotation:(id)arg1 animated:(char)arg2 avoid:(CGRect)arg3 ;
-(void)deselectAnnotation:(id)arg1 animated:(char)arg2 ;
-(void)deselectLabelMarkerAnimated:(char)arg1 ;
-(CGPoint)pointInMapViewFromEvent:(id)arg1 ;
-(NSArray *)selectedAnnotations;
-(SCD_Struct_MK4)convertRect:(CGRect)arg1 toMapRectFromView:(id)arg2 ;
-(char)userIsGesturing;
-(char)altKeyPressed;
-(char)shiftKeyPressed;
-(void)handleSimpleClickInMapView;
-(void)_checkIfMouseStillDownAfterLongDelayAndNotify;
-(void)_checkIfMouseStillDownAfterShortDelayAndNotify;
-(char)controlKeyPressed;
-(void)_commonMouseDown:(id)arg1 otherButton:(char)arg2 ;
-(void)_annotationViewDragStateChanged:(id)arg1 ;
-(void)handleNewArrowMask:(long long)arg1 oldMask:(long long)arg2 ;
-(void)_moveCursorNearPointInView:(CGPoint)arg1 ;
-(char)_annotationTipIsInsideViewForMousePosition:(CGPoint)arg1 ;
-(CGPoint)adjustedPositionDuringDrag:(CGPoint)arg1 ;
-(char)_tryDraggingAnnotationAt:(CGPoint)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toCoordinateFromView:(id)arg2 ;
-(char)userCanScroll;
-(void)userWillStartUserInteraction;
-(void)userDidStopUserInteraction;
-(char)userCanTilt;
-(void)userWillStartPitching;
-(void)userWillStartRotating;
-(void)userWillStartPanning;
-(void)updateYawAndPitchWithDragEvent:(id)arg1 focusPoint:(CGPoint)arg2 ;
-(void)updateZoomWithDragDelta:(double)arg1 focusPoint:(CGPoint)arg2 ;
-(void)_dragAnnotationWithEvent:(id)arg1 ;
-(void)_scrollMapWithMouseEvent:(id)arg1 ;
-(void)cancelHighlights;
-(void)_commonMouseDragged:(id)arg1 otherButton:(char)arg2 ;
-(void)rotateByDragging:(double)arg1 focusPoint:(CGPoint)arg2 ;
-(void)pitchByDragging:(double)arg1 focusPoint:(CGPoint)arg2 ;
-(char)markersEnabled;
-(char)canSelectAllLabels;
-(void)selectLabelMarker:(id)arg1 animated:(char)arg2 ;
-(char)userPausedPanning;
-(void)simulateInertiaPanUpdatesWithDuration:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)userDidStopPanning;
-(void)_stopDraggingAnnotationAtPoint:(CGPoint)arg1 cancel:(char)arg2 ;
-(void)_commonMouseUp:(id)arg1 otherButton:(char)arg2 ;
-(char)userPausedPinching;
-(void)userDidStopPitching;
-(char)userPausedRotating;
-(void)userDidStopRotating;
-(void)_contextualMenuAboutMaps;
-(char)commandKeyPressed;
-(void)rotateMapWithFocusPoint:(CGPoint)arg1 angle:(double)arg2 duration:(double)arg3 ;
-(void)startLinearRotationRight:(char)arg1 slowMotion:(char)arg2 ;
-(void)startLinearZoomIn:(char)arg1 withEvent:(id)arg2 ;
-(char)wantsAccessibilityUpdates;
-(void)focusNextAccessibilityItem;
-(void)focusPreviousAccessibilityItem;
-(void)handleArrowEvent:(id)arg1 keyDown:(char)arg2 ;
-(void)stopZoomingWithInertia;
-(void)stopRotationWithInertia;
-(CGPoint)translationFromArrowMask:(long long)arg1 ;
-(double)translationSpeedForArrowNavigationWithTimestamp:(double)arg1 ;
-(void)mapView:(id)arg1 willSelectLabelMarker:(id)arg2 ;
-(void)selectLabelMarker:(id)arg1 animated:(char)arg2 avoid:(CGRect)arg3 ;
-(unsigned long long)_currentFlyoverAnimationID;
-(void)_setCurrentFlyoverAnimationID:(unsigned long long)arg1 ;
-(id)overlayContainer;
-(void)addOverlays:(id)arg1 ;
-(id)overlaysInLevel:(long long)arg1 ;
-(void)addOverlay:(id)arg1 level:(long long)arg2 ;
-(void)addOverlays:(id)arg1 level:(long long)arg2 ;
-(void)removeOverlays:(id)arg1 ;
-(void)insertOverlay:(id)arg1 atIndex:(unsigned long long)arg2 level:(long long)arg3 ;
-(void)exchangeOverlay:(id)arg1 withOverlay:(id)arg2 ;
-(void)_updateCameraState;
-(void)setNeedsUpdateAccessibilityItems:(char)arg1 ;
-(void)notifyMapRegionWillChangeAnimated:(char)arg1 ;
-(void)notifyMapRegionDidChangeAnimated:(char)arg1 ;
-(void)_snapToNorthIfNecessary;
-(void)selectAnnotationRepresentation:(id)arg1 animated:(char)arg2 avoid:(CGRect)arg3 ;
-(void)_updateShouldDisplayEffects;
-(void)updateYawWithDragEvent:(id)arg1 focusPoint:(CGPoint)arg2 ;
-(double)_zoomScaleForMapRegion:(id)arg1 ;
-(void)setZoomLevel:(double)arg1 animated:(char)arg2 ;
-(void)setScaleView:(MKScaleView *)arg1 ;
-(id)_camera;
-(void)_setCamera:(id)arg1 animated:(char)arg2 ;
-(void)startEffects;
-(void)stopEffects;
-(char)effectsEnabled;
-(void)scaleView:(id)arg1 didDragWithEvent:(id)arg2 ;
-(void)scaleView:(id)arg1 didFinishDraggingWithEvent:(id)arg2 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(char)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)addAnnotationRepresentation:(id)arg1 allowAnimation:(char)arg2 ;
-(void)removeAnnotationRepresentation:(id)arg1 ;
-(void)deselectAnnotationRepresentation:(id)arg1 animated:(char)arg2 ;
-(void)moveAnnotationRepresentation:(id)arg1 fromCoordinate:(CGPoint)arg2 animated:(char)arg3 duration:(double)arg4 ;
-(void)annotationManager:(id)arg1 didAddAnnotationRepresentations:(id)arg2 ;
-(id)annotationManager:(id)arg1 representationForAnnotation:(id)arg2 ;
-(void)annotationManager:(id)arg1 didSelectAnnotationRepresentation:(id)arg2 ;
-(void)annotationManager:(id)arg1 didDeselectAnnotationRepresentation:(id)arg2 ;
-(char)annotationContainerShouldAlignToPixels:(id)arg1 ;
-(char)annotationContainerIsRotated:(id)arg1 ;
-(void)annotationContainer:(id)arg1 scrollToRevealCalloutWithOffset:(CGPoint)arg2 annotationCoordinate:(CGPoint)arg3 completionHandler:(/*^block*/id)arg4 ;
-(double)annotationContainer:(id)arg1 pinDropDistanceForCoordinate:(CGPoint)arg2 maxDistance:(double*)arg3 startPoint:(CGPoint*)arg4 shadowStartPoint:(CGPoint*)arg5 ;
-(void)annotationContainerWillAnimateBubble:(id)arg1 ;
-(void)annotationContainerDidAnimateBubble:(id)arg1 ;
-(void)annotationContainerWillDropPins:(id)arg1 ;
-(void)annotationContainerDidDropPins:(id)arg1 ;
-(CGRect)visibleCenteringRectInView:(id)arg1 ;
-(CGRect)visibleRectInView:(id)arg1 ;
-(double)_zoomScale;
-(CGRect)annotationContainerVisibleRect:(id)arg1 ;
-(void)overlayContainerAddedDrawables:(id)arg1 ;
-(id)createDrawableForOverlay:(id)arg1 ;
-(void)compassView:(id)arg1 didDragWithEvent:(id)arg2 ;
-(void)compassView:(id)arg1 didDragWithEvent:(id)arg2 fromInnerClick:(char)arg3 ;
-(void)compassView:(id)arg1 didFinishDraggingWithEvent:(id)arg2 ;
-(void)compassViewClicked:(id)arg1 ;
-(void)setShowsAttributionBadge:(char)arg1 ;
-(void)setLabelTextSize:(long long)arg1 ;
-(long long)labelTextSize;
-(NSView *)settingsView;
-(void)setSettingsView:(NSView *)arg1 ;
-(void)_setSafeDelegate:(id)arg1 ;
-(void)setAttributionCorner:(int)arg1 ;
-(void)setContinueToRenderWhenOccluded:(char)arg1 ;
-(char)_showsCurrentEnvironmentName;
-(void)_setShowsCurrentEnvironmentName:(char)arg1 ;
-(SCD_Struct_MK4)regionThatFits:(SCD_Struct_MK4)arg1 ;
-(SCD_Struct_MK4)mapRectThatFits:(SCD_Struct_MK4)arg1 ;
-(void)_setEdgeInsets:(NSEdgeInsets)arg1 ;
-(NSEdgeInsets)_labelEdgeInsets;
-(void)_setLabelEdgeInsets:(NSEdgeInsets)arg1 ;
-(SCD_Struct_MK4)visibleMapRectOfInterest;
-(CGRect)convertRegion:(SCD_Struct_MK4)arg1 toRectToView:(id)arg2 ;
-(SCD_Struct_MK4)convertRect:(CGRect)arg1 toRegionFromView:(id)arg2 ;
-(id)viewportDictionary;
-(char)restoreViewportFromDictionary:(id)arg1 ;
-(id)_representationForCoordinateRegion:(SCD_Struct_MK4)arg1 ;
-(SCD_Struct_MK4)_coordinateRegionFromRepresentation:(id)arg1 ;
-(CGRect)convertMapRect:(SCD_Struct_MK4)arg1 toRectToView:(id)arg2 ;
-(void)_performFlyoverAnimation:(id)arg1 ;
-(void)presentRegion:(SCD_Struct_MK4)arg1 ;
-(char)isUserLocationVisible;
-(char)isCalloutVisible;
-(CGRect)annotationVisibleRect;
-(id)viewForAnnotation:(id)arg1 ;
-(id)dequeueReusableAnnotationViewWithIdentifier:(id)arg1 ;
-(void)setSelectedAnnotations:(NSArray *)arg1 ;
-(void)showAnnotations:(id)arg1 animated:(char)arg2 ;
-(char)_draggableAnnotationAtPoint:(CGPoint)arg1 ;
-(CGPoint)pointInMapOnMouseDown;
-(id)annotationForSelectionAtPoint:(CGPoint)arg1 avoidCurrent:(char)arg2 ;
-(void)handleSimpleClickInMapViewAtCoordinate:(CGPoint)arg1 ;
-(id)_labelMarkerAtPoint:(CGPoint)arg1 ;
-(id)rendererForOverlay:(id)arg1 ;
-(void)mapView:(id)arg1 didAnimateInAnnotationMarkers:(id)arg2 ;
-(char)isZooming;
-(char)isRegionChanging;
-(id)annotationsContainerLayer;
-(char)annotationContainerEffectsEnabled:(id)arg1 ;
-(void)setCamera:(id)arg1 animated:(char)arg2 ;
-(NSOrderedSet *)storedAccessibilityItems;
-(void)setStoredAccessibilityItems:(NSOrderedSet *)arg1 ;
-(void)setCanSelectAllLabels:(char)arg1 ;
-(char)showsAboutMapInContextualMenu;
-(long long)overlaysWritingDirection;
-(void)setOverlaysWritingDirection:(long long)arg1 ;
-(int)attributionCorner;
-(char)continueToRenderWhenOccluded;
-(char)willUpdateAccessibilityItems;
-(void)setWillUpdateAccessibilityItems:(char)arg1 ;
-(void)setWantsAccessibilityUpdates:(char)arg1 ;
-(MKAccessibilityItem *)focusedAccessibilityItem;
-(void)setFocusedAccessibilityItem:(MKAccessibilityItem *)arg1 ;
-(void)_setCamera:(id)arg1 duration:(double)arg2 timingFunction:(id)arg3 ;
-(void)_setCamera:(id)arg1 duration:(double)arg2 timing:(/*^block*/id)arg3 ;
-(void)_updateFromCamera:(id)arg1 duration:(double)arg2 timing:(/*^block*/id)arg3 ;
-(void)_updateFromCamera:(id)arg1 ;
-(id)_visibleTileSets;
-(id)_detailedDescription;
-(id)accessibilityItemAtPoint:(CGPoint)arg1 ;
-(void)_checkIfNeedToUpdateAccessibilityItems;
-(void)_updateAccessibilityItemsNow;
-(NSOrderedSet *)accessibilityItems;
-(void)_focusAccessibilityItemWithDelta:(long long)arg1 ;
-(CGPoint)_convertPoint:(CGPoint)arg1 toMapPointFromView:(id)arg2 ;
-(CGPoint)_convertMapPoint:(CGPoint)arg1 toPointToView:(id)arg2 ;
-(/*^block*/id)annotationRectTest;
-(/*^block*/id)annotationCoordinateTest;
-(double)pitch;
-(double)yaw;
-(char)allowDatelineWraparound;
-(void)setAllowDatelineWraparound:(char)arg1 ;
-(unsigned long long)mapType;
-(char)isShowingNoDataPlaceholders;
-(char)trafficEnabled;
-(void)setTrafficEnabled:(char)arg1 ;
-(char)localizeLabels;
-(void)setLocalizeLabels:(char)arg1 ;
-(void)setMapType:(unsigned long long)arg1 ;
-(double)minimumZoomLevel;
-(double)maximumZoomLevel;
-(double)currentZoomLevel;
-(char)showsPointsOfInterest;
-(void)setShowsPointsOfInterest:(char)arg1 ;
-(char)showsBuildings;
-(void)setShowsBuildings:(char)arg1 ;
-(char)isShowingFlyover;
-(id)overlays;
-(void)removeOverlay:(id)arg1 ;
-(void)addOverlay:(id)arg1 ;
-(MKMapCamera *)camera;
-(void)mapLayer:(id)arg1 canEnter3DModeDidChange:(char)arg2 ;
-(void)mapLayer:(id)arg1 willChangeRegionAnimated:(char)arg2 ;
-(void)mapLayerDidChangeVisibleRegion:(id)arg1 ;
-(void)mapLayer:(id)arg1 didChangeRegionAnimated:(char)arg2 ;
-(double)presentationYaw;
-(void)setCenterCoordinate:(CGPoint)arg1 animated:(char)arg2 ;
-(CGPoint)centerCoordinate;
-(void)mapLayer:(id)arg1 didStopFlyoverTourCompleted:(char)arg2 ;
-(void)mapLayer:(id)arg1 flyoverTourLabelDidChange:(id)arg2 ;
-(void)mapLayerWillStartFlyoverTour:(id)arg1 ;
-(void)enter3DMode;
-(void)exit3DMode;
-(char)shouldHideOffscreenSelectedAnnotation;
-(id)selectedLabelMarker;
-(void)mapLayerDidStartLoadingTiles:(id)arg1 ;
-(void)mapLayerDidFinishLoadingTiles:(id)arg1 ;
-(void)mapLayerDidFailLoadingTiles:(id)arg1 withError:(id)arg2 ;
-(id)mapLayer:(id)arg1 painterForOverlay:(id)arg2 ;
-(void)mapLayerDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(char)arg2 ;
-(void)mapLayerDidBecomePartiallyDrawn:(id)arg1 ;
-(void)mapLayer:(id)arg1 didFinishChangingMapDisplayStyle:(unsigned long long)arg2 ;
-(void)mapLayer:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2 ;
-(void)mapLayerDidDraw:(id)arg1 ;
-(void)puckAnimatorDidStop:(id)arg1 ;
-(void)puckAnimator:(id)arg1 updatedTargetPosition:(SCD_Struct_MK2)arg2 ;
-(void)mapLayer:(id)arg1 didUpdateVerticalYawTo:(double)arg2 ;
-(void)setCenterCoordinate:(CGPoint)arg1 ;
-(void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2 ;
-(void)insertOverlay:(id)arg1 belowOverlay:(id)arg2 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(void)setCamera:(MKMapCamera *)arg1 ;
-(double)zoomLevel;
-(double)zoomScale;
-(void)puckAnimator:(id)arg1 runAnimation:(id)arg2 ;
-(void)puckAnimator:(id)arg1 updatedPosition:(SCD_Struct_MK2)arg2 course:(double)arg3 ;
-(SCD_Struct_MK4)region;
-(void)insertOverlay:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)exchangeOverlayAtIndex:(unsigned long long)arg1 withOverlayAtIndex:(unsigned long long)arg2 ;
-(void)setMarkersEnabled:(char)arg1 ;
-(void)setVisibleMapRect:(SCD_Struct_MK4)arg1 ;
-(void)setShowsAttribution:(char)arg1 ;
-(void)setShowsAboutMapInContextualMenu:(char)arg1 ;
-(void)setRegion:(SCD_Struct_MK4)arg1 animated:(char)arg2 ;
-(char)hasUserLocation;
-(MKUserLocation *)userLocation;
-(void)setAnimating:(char)arg1 ;
-(char)animating;
-(void)setRegion:(SCD_Struct_MK4)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)setZoomEnabled:(char)arg1 ;
-(void)setScrollEnabled:(char)arg1 ;
-(void)setShowsUserLocation:(char)arg1 ;
-(NSArray *)annotations;
-(void)removeAnnotations:(id)arg1 ;
-(void)addAnnotation:(id)arg1 ;
-(id)seamlessOpeningURLForMapItems:(id)arg1 launchOptions:(id)arg2 ;
-(void)setDelegate:(id<MKMapViewDelegate>)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)accessibilityFocusedUIElement;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)accessibilityIsIgnored;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(void)setFrameOrigin:(CGPoint)arg1 ;
-(id<MKMapViewDelegate>)delegate;
-(id)accessibilityVisibleChildren;
-(id)accessibilityChildren;
-(char)isFlipped;
-(char)isOpaque;
-(char)allowsVibrancy;
-(void)keyDown:(id)arg1 ;
-(char)acceptsFirstMouse:(id)arg1 ;
-(void)scrollWheel:(id)arg1 ;
-(id)menuForEvent:(id)arg1 ;
-(void)viewDidMoveToWindow;
-(void)mouseDown:(id)arg1 ;
-(char)mouseDownCanMoveWindow;
-(void)mouseDragged:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)cancelOperation:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)magnifyWithEvent:(id)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)keyUp:(id)arg1 ;
-(void)otherMouseDown:(id)arg1 ;
-(void)otherMouseDragged:(id)arg1 ;
-(void)otherMouseUp:(id)arg1 ;
-(void)windowDidChangeOcclusionState:(id)arg1 ;
-(void)resizeSubviewsWithOldSize:(CGSize)arg1 ;
-(void)rotateWithEvent:(id)arg1 ;
-(void)setRegion:(SCD_Struct_MK4)arg1 ;
-(void)cursorUpdate:(id)arg1 ;
-(void)smartMagnifyWithEvent:(id)arg1 ;
-(void)beginGestureWithEvent:(id)arg1 ;
-(void)endGestureWithEvent:(id)arg1 ;
-(char)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)_setCamera:(id)arg1 ;
@end

