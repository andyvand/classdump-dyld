/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:28:29 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>
#import <MapKit/VKPuckAnimatorDelegate.h>
#import <MapKit/MKOverlayContainerViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <MapKit/MKVariableDelayTapRecognizerDelegate.h>
#import <MapKit/MKAnnotationContainerViewDelegate.h>
#import <MapKit/VKMapViewDelegate.h>
#import <MapKit/MKMapGestureControllerDelegate.h>
#import <MapKit/MKAnnotationMarkerContainer.h>
#import <MapKit/MKAnnotationManagerDelegate.h>
#import <GeoServices/GEOResourceManifestTileGroupObserver.h>
#import <CoreFoundation/NSCoding.h>

@protocol MKMapViewDelegateMKMapViewDelegatePrivate;
@class MKMapViewInternal, UIView, MKMapAnnotationManager, MKAnnotationContainerView, MKAttributionLabel, UIImageView, NSTimer, , UILabel, UILongPressGestureRecognizer, UITapGestureRecognizer, MKVariableDelayTapRecognizer, UIGestureRecognizer, MKMapGestureController, MKOverlayContainerView, MKBasicMapView, VKMapView, MKScaleView, MKCompassView, MKUserLocation, VKPuckAnimator, MKMapCamera, CLLocation, MKAnnotationView, NSArray;

@interface MKMapView : UIView <VKPuckAnimatorDelegate, MKOverlayContainerViewDelegate, UIGestureRecognizerDelegate, MKVariableDelayTapRecognizerDelegate, MKAnnotationContainerViewDelegate, VKMapViewDelegate, MKMapGestureControllerDelegate, MKAnnotationMarkerContainer, MKAnnotationManagerDelegate, GEOResourceManifestTileGroupObserver, NSCoding> {

	MKMapViewInternal* _internal;
	UIView* _contentView;
	MKMapAnnotationManager* _annotationManager;
	MKAnnotationContainerView* _annotationContainer;
	MKAttributionLabel* _attributionLabel;
	/*^block*/ id _annotationRectTest;
	/*^block*/ id _annotationCoordinateTest;
	UIImageView* _attributionBadgeView;
	NSTimer* _startEffectsTimer;
	<MKMapViewDelegate><MKMapViewDelegatePrivate>* _delegate;
	int _animationType;
	unsigned _suspendedEffectsCount;
	unsigned _eventMode;
	unsigned _eventModeHistory;
	unsigned _mapType;
	NSTimer* _defaultLocationTimer;
	UILabel* _debugView;
	NSTimer* _debugTimer;
	double _heading;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UITapGestureRecognizer* _immediateTapGesture;
	MKVariableDelayTapRecognizer* _doubleTapGestureRecognizer;
	UITapGestureRecognizer* _twoFingerTapGestureRecognizer;
	UIGestureRecognizer* _locationConsoleGesture;
	MKMapGestureController* _gestureController;
	MKOverlayContainerView* _overlayContainer;
	int _rotationState;
	float _angularVelocity;
	int _userTrackingMode;
	MKBasicMapView* _basicMapView;
	VKMapView* _mapView;
	MKScaleView* _scaleView;
	MKCompassView* _compassView;
	BOOL _scaleVisible;
	BOOL _compassVisible;
	BOOL _suppressCompassDisplay;
	BOOL _scaleEnabled;
	BOOL _compassEnabled;
	UIView* _scrollContainerView;
	/*^block*/ id _regionSetterWhenSized;
	MKUserLocation* _userLocation;
	VKPuckAnimator* _userLocationAnimator;
	MKMapCamera* _camera;
	id _topLayoutGuide;
	id _bottomLayoutGuide;
	/*^block*/ id _showCalloutAfterRegionChangeBlock;
	/*^block*/ id _showCalloutAfterPanBlock;
	/*^block*/ id _selectAnnotationViewAfterRedrawBlock;
	struct {
		unsigned callsDelegateForAllRegionChanges : 1;
		unsigned changingRegion : 1;
		unsigned debugViewHeading : 1;
		unsigned didStartDragging : 1;
		unsigned draggingInterrupted : 1;
		unsigned didStartSmoothScrolling : 1;
		unsigned hasRenderedSomething : 1;
		unsigned ignoreHeadingUpdates : 1;
		unsigned ignoreLocationUpdates : 1;
		unsigned isSuspended : 1;
		unsigned liveTrackingAutoSelectZoomLevel : 1;
		unsigned longPressing : 1;
		unsigned persistFixedUserLocation : 1;
		unsigned regionChangeIsAnimated : 1;
		unsigned regionChangeIsUserInitiated : 1;
		unsigned rotationSupported : 1;
		unsigned scrollEnabled : 1;
		unsigned scrolling : 1;
		unsigned scrollIsAnimated : 1;
		unsigned shouldRotateForHeading : 1;
		unsigned showsUserLocation : 1;
		unsigned zoomEnabled : 1;
		unsigned zoomIsAnimated : 1;
		unsigned zooming : 1;
		unsigned wasZooming : 1;
		unsigned isChangingViewSize : 1;
		unsigned shouldSetRegionOnSizeChange : 1;
		unsigned showsAttribution : 1;
		unsigned showsAttributionBadge : 1;
		unsigned locationUpdatesPausedForRegionChange : 1;
		unsigned useOld2DAnnotationContainer : 1;
		unsigned rotating : 1;
		unsigned pitching : 1;
		unsigned rotateEnabled : 1;
		unsigned pitchEnabled : 1;
		unsigned hasPendingCameraChange : 1;
		unsigned backdropViewQualityChangingDisabled : 1;
		unsigned delegateShouldReceiveTouch : 1;
		unsigned delegateShouldDelayTapResponse : 1;
		unsigned delegateWillChangeRotation : 1;
		unsigned delegateDidUpdateUserLocation : 1;
		unsigned delegateDidFailToLocateUser : 1;
		unsigned delegateWillChangeRegion : 1;
		unsigned delegateDidChangeRegion : 1;
		unsigned delegateDidStartMapRendering : 1;
		unsigned delegateDidFinishMapRendering : 1;
		unsigned delegateDidChangeUserTrackingMode : 1;
		unsigned delegateDidChangeUserTrackingModeButton : 1;
		unsigned delegateDidChangeMapType : 1;
	}  _flags;

}

@property (nonatomic,retain) CLLocation * predictedUserLocation; 
@property (assign,nonatomic) int userLocationSource; 
@property (assign,nonatomic) BOOL ignoreLocationUpdates; 
@property (nonatomic,readonly) MKAnnotationView * userLocationView; 
@property (nonatomic,readonly) NSArray * overlays; 
@property (assign,nonatomic) <MKMapViewDelegate> * delegate; 
@property (assign,nonatomic) unsigned mapType; 
@property (assign,nonatomic) SCD_Struct_MK2 region; 
@property (assign,nonatomic) SCD_Struct_MK1 centerCoordinate; 
@property (assign,nonatomic) SCD_Struct_MK2 visibleMapRect; 
@property (nonatomic,copy) MKMapCamera * camera; 
@property (assign,getter=isZoomEnabled,nonatomic) BOOL zoomEnabled; 
@property (assign,getter=isScrollEnabled,nonatomic) BOOL scrollEnabled; 
@property (assign,getter=isRotateEnabled,nonatomic) BOOL rotateEnabled; 
@property (assign,getter=isPitchEnabled,nonatomic) BOOL pitchEnabled; 
@property (assign,nonatomic) BOOL showsPointsOfInterest; 
@property (assign,nonatomic) BOOL showsBuildings; 
@property (assign,nonatomic) BOOL showsUserLocation; 
@property (nonatomic,readonly) MKUserLocation * userLocation; 
@property (assign,nonatomic) int userTrackingMode; 
@property (getter=isUserLocationVisible,nonatomic,readonly) BOOL userLocationVisible; 
@property (nonatomic,readonly) NSArray * annotations; 
@property (nonatomic,copy) NSArray * selectedAnnotations; 
@property (nonatomic,readonly) CGRect annotationVisibleRect; 
@property (readonly) float minZoomLevel; 
+(SCD_Struct_MK2)_regionThatFitsMapType:(unsigned)arg1 viewSize:(CGSize)arg2 edgeInsets:(UIEdgeInsets)arg3 region:(SCD_Struct_MK2)arg4 minZoomLevel:(float)arg5 maxZoomLevel:(float)arg6 ;
+(unsigned)minZoomLevelForMapType:(unsigned)arg1 viewSize:(CGSize)arg2 ;
+(SCD_Struct_MK2)regionThatFitsMapType:(unsigned)arg1 viewSize:(CGSize)arg2 edgeInsets:(UIEdgeInsets)arg3 region:(SCD_Struct_MK2)arg4 ;
+(SCD_Struct_MK2)_mapRectThatFitsViewBounds:(CGRect)arg1 mapRect:(SCD_Struct_MK2)arg2 viewInsets:(UIEdgeInsets)arg3 edgePadding:(UIEdgeInsets)arg4 minZoomLevel:(float)arg5 maxZoomLevel:(float)arg6 ;
+(SCD_Struct_MK2)regionThatFitsMapType:(unsigned)arg1 viewSize:(CGSize)arg2 region:(SCD_Struct_MK2)arg3 ;
+(void)setRendersInBackgroundByDefault:(BOOL)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(CGRect)attributionFrame;
-(void)setVisibleMapRect:(SCD_Struct_MK2)arg1 ;
-(void)setLoadingEnabled:(BOOL)arg1 ;
-(void)_insertSubview:(id)arg1 ;
-(void)_setMapType:(unsigned)arg1 onInit:(BOOL)arg2 ;
-(void)geoDefaultsDidChange:(id)arg1 ;
-(void)deviceOrientationDidChange:(id)arg1 ;
-(void)_willChangeStatusBarFrame:(id)arg1 ;
-(void)_updatePitchAllowed;
-(void)_displayWorld;
-(void)goToDefaultLocation;
-(void)set_defaultLocationTimer:(id)arg1 ;
-(void)_configureGestureRecognizers;
-(void)_updateAttribution;
-(id)_commonInitAndEnableLoading:(BOOL)arg1 fromIB:(BOOL)arg2 ;
-(BOOL)showsUserLocation;
-(BOOL)isPitchEnabled;
-(BOOL)isRotateEnabled;
-(void)set_startEffectsTimer:(id)arg1 ;
-(void)_clearLayoutGuides;
-(void)_layoutAttribution;
-(void)_updateHeadingOrientation;
-(BOOL)_animationTypeIgnoresEvents:(int)arg1 ;
-(void)_updateScrollingAndGestures;
-(void)stopEffects;
-(void)startEffects;
-(void)_updateCompassVisibility;
-(BOOL)_isChangingRegionForGesture;
-(void)_setScrolling:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_willStartScroll:(BOOL)arg1 ;
-(void)_didEndScroll;
-(CGPoint)_centerPoint;
-(float)_boundedZoomLevel:(float)arg1 ;
-(int)_roundedZoomLevel;
-(CGRect)_debugViewFrame;
-(float)_zoomScaleForMapRegion:(id)arg1 ;
-(void)_setZoomScale:(float)arg1 centerCoordinate:(SCD_Struct_MK1)arg2 duration:(double)arg3 animationType:(int)arg4 resetHeading:(BOOL)arg5 ;
-(void)_sizeWillChange;
-(void)_sizeDidChangeWithCenterCoordinate:(SCD_Struct_MK1)arg1 ;
-(void)startUpdatingUserLocation;
-(void)stopUpdatingUserLocation;
-(BOOL)_isUserLocationInView:(BOOL)arg1 ;
-(void)_setUserTrackingMode:(int)arg1 animated:(BOOL)arg2 fromTrackingButton:(BOOL)arg3 ;
-(void)_startTrackingHeading;
-(id)userLocationView;
-(void)_stopTrackingHeading;
-(void)_updateIconsShouldAlignToPixels;
-(void)toggleLocationConsole:(id)arg1 ;
-(void)handleTap:(id)arg1 ;
-(void)handleLongPress:(id)arg1 ;
-(void)_addDebugGesture;
-(BOOL)calloutViewContainsPoint:(CGPoint)arg1 ;
-(void)_clearEventMode:(int)arg1 ;
-(void)_dropDraggingAnnotationView:(BOOL)arg1 ;
-(void)_handleLongPressDidEnd;
-(void)_annotationViewDragStateChanged:(id)arg1 ;
-(void)_setEventMode:(int)arg1 ;
-(id)mapAttributionWithStringAttributes:(id)arg1 ;
-(BOOL)calloutViewIsExpanded;
-(BOOL)isLocationConsoleEnabled;
-(void)setLocationConsoleEnabled:(BOOL)arg1 ;
-(BOOL)_isHandlingUserEvent;
-(BOOL)_iconsShouldAlignToPixels;
-(void)_updateAccessories;
-(void)_cancelAccessoriesAndDoubleTap;
-(void)_updateCameraState;
-(void)_updateScrollContainerView:(BOOL)arg1 ;
-(void)_updateRotationAttributes;
-(void)_updateEffects;
-(void)resumeUserLocationUpdates;
-(void)_updateScaleVisibility;
-(BOOL)isTrackingUserLocation;
-(CGPoint)userPosition;
-(void)setUserTrackingMode:(int)arg1 ;
-(void)disableHeadingTracking:(BOOL)arg1 ;
-(void)_willChangeRegionAnimated:(BOOL)arg1 userInitiated:(BOOL)arg2 ;
-(void)setLiveTrackingAutoSelectZoomLevel:(BOOL)arg1 ;
-(void)_setScaleVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_pauseUserLocationUpdates;
-(void)_setAnimationType:(int)arg1 ;
-(void)_resumeUserLocationUpdates:(BOOL)arg1 ;
-(void)pauseUserLocationUpdates;
-(void)_cancelAccessories;
-(float)minZoomLevel;
-(float)_maxZoomLevelForCoordinate:(SCD_Struct_MK1)arg1 ;
-(SCD_Struct_MK1)_centerMapPoint;
-(BOOL)effectsEnabled;
-(void)_updateShouldDisplayEffects;
-(void)_setZoomScale:(float)arg1 centerMapPoint:(SCD_Struct_MK1)arg2 duration:(double)arg3 animationType:(int)arg4 resetHeading:(BOOL)arg5 ;
-(SCD_Struct_MK1)_centerMapPointForMapRegion:(id)arg1 ;
-(void)_didChangeRegionMidstream:(BOOL)arg1 ;
-(void)_updateDebugViewFrameWithEdgeInsets;
-(void)_addSetRegionBlockWhenSized:(/*^block*/ id)arg1 ;
-(id)_mapRegionWithCenterCoordinate:(SCD_Struct_MK1)arg1 zoomScale:(float)arg2 ;
-(void)_goToMapRegion:(id)arg1 duration:(double)arg2 animationType:(int)arg3 resetHeading:(BOOL)arg4 ;
-(BOOL)shouldRotateForHeading;
-(void)_cancelDoubleTap;
-(void)disableLiveTracking;
-(SCD_Struct_MK1)convertPoint:(CGPoint)arg1 toCoordinateFromView:(id)arg2 ;
-(int)_viewIndexForSubview:(id)arg1 ;
-(SCD_Struct_MK4)_zoomRegionForMapRect:(SCD_Struct_MK2)arg1 edgePadding:(UIEdgeInsets)arg2 maxZoomLevel:(int)arg3 minZoomLevel:(int)arg4 ;
-(float)_zoomLevelForMapRect:(SCD_Struct_MK2)arg1 includeAccessoryPadding:(BOOL)arg2 ;
-(double)_goToCenterCoordinate:(SCD_Struct_MK1)arg1 zoomLevel:(float)arg2 animationType:(int)arg3 cancelDefaultLocationTimer:(BOOL)arg4 ;
-(float)_zoomLevelForRegion:(SCD_Struct_MK2)arg1 includeAccessoryPadding:(BOOL)arg2 ;
-(BOOL)goToCenterCoordinate:(SCD_Struct_MK1)arg1 zoomLevel:(float)arg2 animationType:(int)arg3 ;
-(float)_boundedZoomLevel:(float)arg1 coordinate:(SCD_Struct_MK1)arg2 ;
-(void)_selectUserLocationTypeWithDeltaZoomLevel:(float)arg1 ;
-(double)_panDurationFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
-(BOOL)isRegionChanging;
-(SCD_Struct_MK1)_convertDoublePoint:(CADoublePoint)arg1 toMapPointFromView:(id)arg2 ;
-(void)_fixUserLocationFromPresentationValue;
-(void)_clearFixedUserLocation;
-(void)_setScrolling:(BOOL)arg1 ;
-(void)_updateContentBounds;
-(BOOL)_updateRotationSupported;
-(void)enableMapRotationIfNeeded;
-(void)_updateCenteredAttributesWithCoordinate:(SCD_Struct_MK1)arg1 ;
-(id)scaleView;
-(void)_updateScalePosition;
-(id)scaleVisibilityAnimation;
-(void)snapToNorth:(id)arg1 ;
-(int)userTrackingMode;
-(BOOL)isCompassEnabled;
-(BOOL)_roomForCompass;
-(void)_setCompassVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)compassView;
-(void)_updateCompassPosition;
-(id)compassVisibilityAnimation;
-(void)_willStartUserInteraction;
-(void)_didEndUserInteraction;
-(void)_userScrollingEnded;
-(void)_willStartZoom:(BOOL)arg1 ;
-(void)_didEndZoom;
-(BOOL)ignoreLocationUpdates;
-(void)scrollWithOffset:(CGPoint)arg1 annotationCoordinate:(SCD_Struct_MK1)arg2 andAnimationType:(int)arg3 ;
-(CGRect)annotationVisibleRect;
-(void)setRegion:(SCD_Struct_MK2)arg1 animated:(BOOL)arg2 ;
-(void)setCamera:(id)arg1 animated:(BOOL)arg2 ;
-(SCD_Struct_MK2)visibleMapRect;
-(BOOL)goToRegion:(SCD_Struct_MK2)arg1 animationType:(int)arg2 ;
-(id)annotationsInMapRect:(SCD_Struct_MK2)arg1 ;
-(SCD_Struct_MK1)_convertDoublePoint:(CADoublePoint)arg1 toCoordinateFromView:(id)arg2 ;
-(CADoubleRect)_convertMapRect:(SCD_Struct_MK2)arg1 toDoubleRectToView:(id)arg2 ;
-(SCD_Struct_MK2)_convertDoubleRect:(CADoubleRect)arg1 toMapRectFromView:(id)arg2 ;
-(CADoublePoint)_convertMapPoint:(SCD_Struct_MK1)arg1 toDoublePointToView:(id)arg2 ;
-(void)_addAnnotation:(id)arg1 allowAnimation:(BOOL)arg2 ;
-(id)_findLayoutGuideVC;
-(void)_updateInsets;
-(void)updateLayoutGuides;
-(double)_goToCenterCoordinate:(SCD_Struct_MK1)arg1 zoomLevel:(float)arg2 animationType:(int)arg3 ;
-(id)vk_mapLayer;
-(void)selectAnnotationRepresentation:(id)arg1 animated:(BOOL)arg2 avoid:(CGRect)arg3 ;
-(SCD_Struct_MK2)_mapRectWithFraction:(double)arg1 ofVisible:(SCD_Struct_MK2)arg2 ;
-(id)_camera;
-(void)_setCamera:(id)arg1 ;
-(void)_setCamera:(id)arg1 animated:(BOOL)arg2 ;
-(double)variableDelayTapRecognizer:(id)arg1 shouldWaitForNextTapForDuration:(double)arg2 afterTouch:(id)arg3 ;
-(BOOL)annotationContainerShouldAlignToPixels:(id)arg1 ;
-(BOOL)annotationContainerIsRotated:(id)arg1 ;
-(void)annotationContainer:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3 ;
-(void)annotationContainer:(id)arg1 scrollToRevealCalloutWithOffset:(CGPoint)arg2 annotationCoordinate:(SCD_Struct_MK1)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(float)annotationContainer:(id)arg1 pinDropDistanceForCoordinate:(SCD_Struct_MK1)arg2 maxDistance:(float*)arg3 startPoint:(CGPoint*)arg4 shadowStartPoint:(CGPoint*)arg5 ;
-(void)annotationContainerWillAnimateBubble:(id)arg1 ;
-(void)annotationContainerDidAnimateBubble:(id)arg1 ;
-(void)annotationContainerWillDropPins:(id)arg1 ;
-(void)annotationContainerDidDropPins:(id)arg1 ;
-(CGRect)visibleCenteringRectInView:(id)arg1 ;
-(CGRect)visibleRectInView:(id)arg1 ;
-(CGRect)annotationContainerVisibleRect:(id)arg1 ;
-(void)gestureControllerWillStartUserInteraction:(id)arg1 ;
-(void)gestureControllerDidStopUserInteraction:(id)arg1 ;
-(void)gestureControllerWillStartPanning:(id)arg1 ;
-(void)gestureControllerDidStopPanning:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)gestureControllerDidStopPanningDecelerating:(id)arg1 ;
-(void)gestureControllerWillStartZooming:(id)arg1 animated:(BOOL)arg2 ;
-(void)gestureControllerDidStopZooming:(id)arg1 direction:(int)arg2 willDecelerate:(BOOL)arg3 ;
-(void)gestureControllerDidStopZoomingDecelerating:(id)arg1 direction:(int)arg2 ;
-(void)gestureControllerWillStartTwoFingerLongPress:(id)arg1 ;
-(void)gestureControllerDidStopTwoFingerLongPress:(id)arg1 ;
-(void)gestureControllerWillStartRotating:(id)arg1 ;
-(void)gestureControllerDidStopRotating:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)gestureControllerDidStopRotatingDecelerating:(id)arg1 ;
-(void)gestureControllerWillStartTilting:(id)arg1 ;
-(void)gestureControllerDidStopTilting:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)gestureControllerDidStopTiltingDecelerating:(id)arg1 ;
-(void)addAnnotationRepresentation:(id)arg1 allowAnimation:(BOOL)arg2 ;
-(void)removeAnnotationRepresentation:(id)arg1 ;
-(void)showCalloutIfNecessaryForAnnotationRepresentation:(id)arg1 animated:(BOOL)arg2 avoid:(CGRect)arg3 ;
-(void)deselectAnnotationRepresentation:(id)arg1 animated:(BOOL)arg2 ;
-(void)moveAnnotationRepresentation:(id)arg1 fromCoordinate:(SCD_Struct_MK1)arg2 animated:(BOOL)arg3 duration:(double)arg4 ;
-(void)annotationManager:(id)arg1 didAddAnnotationRepresentations:(id)arg2 ;
-(id)annotationManager:(id)arg1 representationForAnnotation:(id)arg2 ;
-(void)annotationManager:(id)arg1 didSelectAnnotationRepresentation:(id)arg2 ;
-(void)annotationManager:(id)arg1 didDeselectAnnotationRepresentation:(id)arg2 ;
-(SCD_Struct_MK2)regionThatFits:(SCD_Struct_MK2)arg1 ;
-(id)initFromIBWithFrame:(CGRect)arg1 ;
-(void)setBackdropViewQualityChangingDisabled:(BOOL)arg1 ;
-(BOOL)showsAttribution;
-(void)setShowsAttribution:(BOOL)arg1 ;
-(BOOL)showsAttributionBadge;
-(void)setShowsAttributionBadge:(BOOL)arg1 ;
-(BOOL)showsPOIIcons;
-(void)setShowsPOIIcons:(BOOL)arg1 ;
-(BOOL)_annotationViewsAreAddedImmediately;
-(void)_setCalloutViewClass:(Class)arg1 ;
-(Class)_calloutViewClass;
-(id)_defaultLocationTimer;
-(int)animationType;
-(id)_startEffectsTimer;
-(BOOL)isLoadingEnabled;
-(void)setScaleEnabled:(BOOL)arg1 ;
-(BOOL)isScaleEnabled;
-(void)setCompassEnabled:(BOOL)arg1 ;
-(BOOL)shouldReloadSynchronously;
-(void)setShouldReloadSynchronously:(BOOL)arg1 ;
-(BOOL)isGoingToDefaultLocation;
-(BOOL)_wasScrolling;
-(BOOL)_isScrollingAnimation;
-(CGPoint)_centerPointOffset;
-(CGPoint)centerLongLat;
-(int)mapRegionZoomLevel;
-(id)debugView;
-(void)set_rotationState:(int)arg1 ;
-(void)set_zoomScale:(float)arg1 ;
-(BOOL)isUserLocationVisible;
-(BOOL)hasRenderedSomething;
-(BOOL)canRotateForHeading;
-(id)annotationContainer;
-(id)scrollContainerView;
-(void)showAnnotations:(id)arg1 animated:(BOOL)arg2 ;
-(id)_stringWithEventMode:(int)arg1 ;
-(BOOL)callsDelegateForAllRegionChanges;
-(void)setCallsDelegateForAllRegionChanges:(BOOL)arg1 ;
-(BOOL)_shouldConservePowerAnimationType:(int)arg1 ;
-(float)pointDistanceFromCoordinate:(SCD_Struct_MK1)arg1 toCoordinate:(SCD_Struct_MK1)arg2 ;
-(BOOL)goToCenterCoordinate:(SCD_Struct_MK1)arg1 longLatSpan:(CGSize)arg2 animationType:(int)arg3 ;
-(SCD_Struct_MK1)_zoomCenterPointWithAnchor:(int)arg1 point:(CGPoint)arg2 zoomScale:(float)arg3 ;
-(void)updateTiling;
-(BOOL)compassVisible;
-(void)annotationContainerDidShowUserLocationView;
-(void)annotationContainerDidHideUserLocationView;
-(void)setSelectedAnnotations:(id)arg1 ;
-(CADoublePoint)_convertCoordinate:(SCD_Struct_MK1)arg1 toDoublePointToView:(id)arg2 ;
-(CGRect)convertRegion:(SCD_Struct_MK2)arg1 toRectToView:(id)arg2 ;
-(SCD_Struct_MK2)_visibleUnderRotationMapRect;
-(void)removeUserLocation;
-(void)_updateLocationConsole;
-(id)descriptionForLocation:(id)arg1 compact:(BOOL)arg2 ;
-(void)disableMapRotation:(BOOL)arg1 ;
-(id)predictedUserLocation;
-(void)setIgnoreLocationUpdates:(BOOL)arg1 ;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(BOOL)liveTrackingAutoSelectZoomLevel;
-(void)_ensureLiveTrackingResourcesInitialized;
-(BOOL)isUserLocationViewCentered;
-(void)setPredictedUserLocation:(id)arg1 ;
-(int)userLocationSource;
-(void)setUserLocationSource:(int)arg1 ;
-(void)resetUserLocation;
-(BOOL)_haveNewPendingLocation;
-(BOOL)_deviceIsPluggedIn;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)_updateHeading:(id)arg1 rotationType:(int)arg2 animated:(BOOL)arg3 ;
-(void)setShouldRotateForHeading:(BOOL)arg1 ;
-(BOOL)_rotationPossible;
-(CGRect)contentBounds;
-(void)pauseUserHeadingUpdates;
-(void)resumeUserHeadingUpdates;
-(BOOL)isHeadingTrackingEnabled;
-(void)setHeadingTrackingEnabled:(BOOL)arg1 ;
-(void)_considerMovingToThrottledHeading;
-(void)locationManagerUpdatedHeading:(id)arg1 ;
-(void)locationManagerFailedToUpdateHeading:(id)arg1 withError:(id)arg2 ;
-(void)_setCamera:(id)arg1 duration:(double)arg2 timingCurve:(int)arg3 ;
-(void)_setCamera:(id)arg1 duration:(double)arg2 timing:(/*^block*/ id)arg3 ;
-(void)_updateFromCamera:(id)arg1 duration:(double)arg2 timing:(/*^block*/ id)arg3 ;
-(void)_updateFromCamera:(id)arg1 ;
-(id)overlayContainer;
-(id)createDrawableForOverlay:(id)arg1 ;
-(void)overlayContainerAddedDrawables:(id)arg1 ;
-(void)addOverlay:(id)arg1 level:(int)arg2 ;
-(void)addOverlays:(id)arg1 level:(int)arg2 ;
-(void)insertOverlay:(id)arg1 atIndex:(unsigned)arg2 level:(int)arg3 ;
-(void)exchangeOverlay:(id)arg1 withOverlay:(id)arg2 ;
-(id)overlaysInLevel:(int)arg1 ;
-(id)viewForOverlay:(id)arg1 ;
-(id)rendererForOverlay:(id)arg1 ;
-(int)_interfaceOrientation;
-(void)setUserTrackingMode:(int)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(id)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(BOOL)isSuspended;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)_clearGestureRecognizers;
-(UIEdgeInsets)edgeInsets;
-(BOOL)isScrollEnabled;
-(void)willMoveToWindow:(id)arg1 ;
-(void)didMoveToSuperview;
-(BOOL)isZooming;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(void)setZoomEnabled:(BOOL)arg1 ;
-(BOOL)isZoomEnabled;
-(float)_zoomScale;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isScrolling;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)drawRect:(CGRect)arg1 forViewPrintFormatter:(id)arg2 ;
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)_isVisible;
-(id)camera;
-(void)setCamera:(id)arg1 ;
-(BOOL)hasUserLocation;
-(void)addAnnotation:(id)arg1 ;
-(void)setRegion:(SCD_Struct_MK2)arg1 ;
-(SCD_Struct_MK2)region;
-(float)_zoomLevel;
-(void)deselectAnnotation:(id)arg1 animated:(BOOL)arg2 ;
-(void)setVisibleMapRect:(SCD_Struct_MK2)arg1 edgePadding:(UIEdgeInsets)arg2 animated:(BOOL)arg3 ;
-(CGPoint)convertCoordinate:(SCD_Struct_MK1)arg1 toPointToView:(id)arg2 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(id)viewForAnnotation:(id)arg1 ;
-(id)annotations;
-(id)selectedAnnotations;
-(void)setRotateEnabled:(BOOL)arg1 ;
-(void)setPitchEnabled:(BOOL)arg1 ;
-(void)setShowsUserLocation:(BOOL)arg1 ;
-(void)selectAnnotation:(id)arg1 animated:(BOOL)arg2 ;
-(id)userLocation;
-(id)dequeueReusableAnnotationViewWithIdentifier:(id)arg1 ;
-(SCD_Struct_MK2)mapRectThatFits:(SCD_Struct_MK2)arg1 ;
-(SCD_Struct_MK2)mapRectThatFits:(SCD_Struct_MK2)arg1 edgePadding:(UIEdgeInsets)arg2 ;
-(void)setVisibleMapRect:(SCD_Struct_MK2)arg1 animated:(BOOL)arg2 ;
-(void)set_annotationViewsAreAddedImmediately:(BOOL)arg1 ;
-(void)removeAnnotations:(id)arg1 ;
-(void)removeOverlays:(id)arg1 ;
-(void)addAnnotations:(id)arg1 ;
-(void)removeAnnotation:(id)arg1 ;
-(SCD_Struct_MK2)convertRect:(CGRect)arg1 toRegionFromView:(id)arg2 ;
-(void)addOverlays:(id)arg1 ;
-(int)_rotationState;
-(unsigned)mapType;
-(BOOL)isShowingNoDataPlaceholders;
-(BOOL)showsPointsOfInterest;
-(void)setShowsPointsOfInterest:(BOOL)arg1 ;
-(BOOL)showsBuildings;
-(void)setShowsBuildings:(BOOL)arg1 ;
-(void)setRendersInBackground:(BOOL)arg1 ;
-(id)overlays;
-(void)removeOverlay:(id)arg1 ;
-(void)addOverlay:(id)arg1 ;
-(void)setMapType:(unsigned)arg1 ;
-(id)mapRegion;
-(void)setCenterCoordinate:(SCD_Struct_MK1)arg1 animated:(BOOL)arg2 ;
-(SCD_Struct_MK1)centerCoordinate;
-(/*^block*/ id)annotationRectTest;
-(/*^block*/ id)annotationCoordinateTest;
-(BOOL)shouldHideOffscreenSelectedAnnotation;
-(void)mapViewDidStartLoadingTiles:(id)arg1 ;
-(void)mapViewDidFinishLoadingTiles:(id)arg1 ;
-(void)mapViewDidFailLoadingTiles:(id)arg1 withError:(id)arg2 ;
-(void)mapViewDidChangeVisibleRegion:(id)arg1 ;
-(void)mapViewDidDraw:(id)arg1 ;
-(void)mapViewWillStartRegionAnimation:(id)arg1 ;
-(void)mapViewDidStopRegionAnimation:(id)arg1 completed:(BOOL)arg2 ;
-(id)mapView:(id)arg1 presentationForAnnotation:(id)arg2 ;
-(void)mapViewDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(BOOL)arg2 ;
-(void)mapViewDidBecomePartiallyDrawn:(id)arg1 ;
-(void)puckAnimatorDidStop:(id)arg1 ;
-(void)puckAnimator:(id)arg1 updatedTargetPosition:(SCD_Struct_MK3)arg2 ;
-(void)setCenterCoordinate:(SCD_Struct_MK1)arg1 ;
-(void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2 ;
-(void)insertOverlay:(id)arg1 belowOverlay:(id)arg2 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(void)puckAnimator:(id)arg1 runAnimation:(id)arg2 ;
-(void)puckAnimator:(id)arg1 updatedPosition:(SCD_Struct_MK3)arg2 course:(double)arg3 ;
-(void)insertOverlay:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)exchangeOverlayAtIndex:(unsigned)arg1 withOverlayAtIndex:(unsigned)arg2 ;
@end
