/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:58 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/Versions/A/FMFUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FMFUI/FMFUI-Structs.h>
#import <AppKit/NSViewController.h>
#import <FMFUI/FMFSessionDelegateInternal.h>
#import <FMFUI/FMFMapViewDelegateInternalDelegate.h>
#import <FMFUI/FMF3HiddenMapTrackingHandlerDelegate.h>
#import <FMFUI/FMFNoLocationViewDelegate.h>
#import <FMFUI/FMFMapOptionsViewControllerDelegate.h>

@protocol FMFMapViewControllerDelegate;
@class MKMapView, NSColor, FMFSession, FMFMapViewDelegateInternal, NSSet, FMFNoLocationView, FMFTitleViewMac, NSString;

@interface FMFMapViewController : NSViewController <FMFSessionDelegateInternal, FMFMapViewDelegateInternalDelegate, FMF3HiddenMapTrackingHandlerDelegate, FMFNoLocationViewDelegate, FMFMapOptionsViewControllerDelegate> {

	char _shouldZoomToFitNewLocations;
	char _shouldZoomToFitMeAndLocations;
	char _showFloatingMapLocationButton;
	char _isSimpleMap;
	char _canShowNoLocation;
	char __refreshingIsPaused;
	char __blockDidReceiveAnimation;
	char __isRenderingInitialMap;
	char _viewWillAppearCalled;
	id<FMFMapViewControllerDelegate> _delegate;
	MKMapView* _mapView;
	NSColor* _annotationTintColor;
	FMFSession* _fmfSession;
	FMFMapViewDelegateInternal* _mapViewDelegate;
	NSSet* __preloadedHandles;
	FMFNoLocationView* _noLocationView;
	NSSet* __internalHandlesShowingLocations;
	FMFTitleViewMac* _titleView;
	NSEdgeInsets _edgeInsets;

}

@property (__weak) id<FMFMapViewControllerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign) char shouldZoomToFitNewLocations;                                    //@synthesize shouldZoomToFitNewLocations=_shouldZoomToFitNewLocations - In the implementation block
@property (assign) char shouldZoomToFitMeAndLocations;                                  //@synthesize shouldZoomToFitMeAndLocations=_shouldZoomToFitMeAndLocations - In the implementation block
@property (assign) char showFloatingMapLocationButton;                                  //@synthesize showFloatingMapLocationButton=_showFloatingMapLocationButton - In the implementation block
@property (assign) NSEdgeInsets edgeInsets;                                             //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (copy) NSSet * handlesShowingLocations; 
@property (retain) MKMapView * mapView;                                                 //@synthesize mapView=_mapView - In the implementation block
@property (copy) NSColor * annotationTintColor;                                         //@synthesize annotationTintColor=_annotationTintColor - In the implementation block
@property (nonatomic,retain) FMFSession * fmfSession;                                   //@synthesize fmfSession=_fmfSession - In the implementation block
@property (nonatomic,retain) FMFMapViewDelegateInternal * mapViewDelegate;              //@synthesize mapViewDelegate=_mapViewDelegate - In the implementation block
@property (nonatomic,retain) NSSet * _preloadedHandles;                                 //@synthesize _preloadedHandles=__preloadedHandles - In the implementation block
@property (assign,nonatomic) char isSimpleMap;                                          //@synthesize isSimpleMap=_isSimpleMap - In the implementation block
@property (assign,nonatomic) char canShowNoLocation;                                    //@synthesize canShowNoLocation=_canShowNoLocation - In the implementation block
@property (nonatomic,retain) FMFNoLocationView * noLocationView;                        //@synthesize noLocationView=_noLocationView - In the implementation block
@property (nonatomic,retain) NSSet * _internalHandlesShowingLocations;                  //@synthesize _internalHandlesShowingLocations=__internalHandlesShowingLocations - In the implementation block
@property (assign,nonatomic) char _refreshingIsPaused;                                  //@synthesize _refreshingIsPaused=__refreshingIsPaused - In the implementation block
@property (assign,nonatomic) char _blockDidReceiveAnimation;                            //@synthesize _blockDidReceiveAnimation=__blockDidReceiveAnimation - In the implementation block
@property (assign,nonatomic) char _isRenderingInitialMap;                               //@synthesize _isRenderingInitialMap=__isRenderingInitialMap - In the implementation block
@property (assign,nonatomic) char viewWillAppearCalled;                                 //@synthesize viewWillAppearCalled=_viewWillAppearCalled - In the implementation block
@property (nonatomic,retain) FMFTitleViewMac * titleView;                               //@synthesize titleView=_titleView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)smallAnnotationViewImageWithTintColor:(id)arg1 ;
+(id)smallAnnotationViewImage;
+(CGSize)annotationImageSize;
-(void)removeAllFriendLocationsFromMap;
-(FMFTitleViewMac *)titleView;
-(void)initializeDefaults;
-(void)set_preloadedHandles:(NSSet *)arg1 ;
-(void)setIsSimpleMap:(char)arg1 ;
-(void)_authorizeMonitoringLocation;
-(void)updateAllAnnotationsDueToAddressBookUpdate;
-(void)set_isRenderingInitialMap:(char)arg1 ;
-(char)isSimpleMap;
-(void)enablePreloadedHandles;
-(void)setNoLocationView:(FMFNoLocationView *)arg1 ;
-(void)viewWillAppearWillMoveToWindowSetup;
-(void)addHandlesToSession;
-(void)loadCachedLocationsForHandles;
-(FMFMapViewDelegateInternal *)mapViewDelegate;
-(char)shouldZoomToFitMeAndLocations;
-(void)setCanShowNoLocation:(char)arg1 ;
-(void)updateNoLocationView:(char)arg1 ;
-(void)setViewWillAppearCalled:(char)arg1 ;
-(void)set_blockDidReceiveAnimation:(char)arg1 ;
-(void)removeHandlesFromSession;
-(void)destroySession;
-(char)_refreshingIsPaused;
-(FMFSession *)fmfSession;
-(NSSet *)_internalHandlesShowingLocations;
-(void)setMapViewDelegate:(FMFMapViewDelegateInternal *)arg1 ;
-(NSSet *)_preloadedHandles;
-(void)startShowingLocationsForHandles:(id)arg1 ;
-(void)set_internalHandlesShowingLocations:(NSSet *)arg1 ;
-(NSSet *)handlesShowingLocations;
-(void)updateMapWithNewLocation:(id)arg1 animated:(char)arg2 ;
-(void)_updateTitleViewLocation:(id)arg1 ;
-(char)canShowNoLocation;
-(FMFNoLocationView *)noLocationView;
-(char)mapHasUserLocations;
-(id)locationOnMapForHandle:(id)arg1 enforceServerId:(char)arg2 ;
-(void)selectAnnotationIfSingleFriend:(id)arg1 ;
-(char)singleAnnotationOnMap;
-(void)set_refreshingIsPaused:(char)arg1 ;
-(void)deselectAllAnnotations;
-(void)selectAnnotationIfSingleForMac;
-(void)stopShowingLocationsForHandles:(id)arg1 ;
-(void)removeAnnotationsFromMapForHandle:(id)arg1 ;
-(void)setFmfSession:(FMFSession *)arg1 ;
-(char)sessionContainsHandle:(id)arg1 ;
-(char)shouldZoomToFitNewLocations;
-(char)_blockDidReceiveAnimation;
-(void)didReceiveLocationForDelegateCallback:(id)arg1 ;
-(id)_selectedHandleAnnotation;
-(NSColor *)annotationTintColor;
-(void)didSelectLocation:(id)arg1 ;
-(void)didDeselectLocation:(id)arg1 ;
-(void)regionWillChangeAnimated:(char)arg1 ;
-(void)regionDidChangeAnimated:(char)arg1 ;
-(void)reZoomToFit;
-(void)didUpdateUserLocation:(id)arg1 ;
-(void)mapViewDidFinishRenderingMap;
-(char)viewWillAppearCalled;
-(id)_internalAnnotationTintColor;
-(void)hiddenMapTrackerDidUpdateMapToTrackingType:(long long)arg1 ;
-(id)personImageForNoLocationView;
-(void)openInMapsButtonTapped:(id)arg1 ;
-(void)_dismiss:(id)arg1 ;
-(void)mapTypeChanged:(unsigned long long)arg1 ;
-(id)initSimpleMapWithDelegate:(id)arg1 handles:(id)arg2 ;
-(void)zoomToFit;
-(void)setShouldZoomToFitMeAndLocations:(char)arg1 ;
-(char)showFloatingMapLocationButton;
-(void)setShowFloatingMapLocationButton:(char)arg1 ;
-(char)_isRenderingInitialMap;
-(void)setTitleView:(FMFTitleViewMac *)arg1 ;
-(void)didReceiveLocation:(id)arg1 ;
-(void)didStopAbilityToGetLocationForHandle:(id)arg1 ;
-(void)setHandlesShowingLocations:(NSSet *)arg1 ;
-(id)initWithDelegate:(id)arg1 handles:(id)arg2 ;
-(void)setAnnotationTintColor:(NSColor *)arg1 ;
-(void)setShouldZoomToFitNewLocations:(char)arg1 ;
-(void)zoomAndSelectHandle:(id)arg1 ;
-(void)zoomToFit:(char)arg1 ;
-(void)resumeRefreshingLocations;
-(void)stopRefreshingLocations;
-(id)annotationImageForHandle:(id)arg1 ;
-(id)titleViewForSelectedHandle;
-(void)loadDelegate;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
-(id)init;
-(void)setDelegate:(id<FMFMapViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)setEdgeInsets:(NSEdgeInsets)arg1 ;
-(id<FMFMapViewControllerDelegate>)delegate;
-(void)loadView;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear;
-(void)viewWillDisappear;
-(void)viewDidAppear;
-(void)viewDidDisappear;
-(NSEdgeInsets)edgeInsets;
@end

