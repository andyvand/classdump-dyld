/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GEOETAUpdaterDelegate;
@class GEOETATrafficUpdateRequest, GEOLocation, GEORouteMatch, GEOComposedRoute, GEOComposedWaypoint, GEORouteAttributes, NSTimer, NSData;

@interface GEOETAUpdater : NSObject {

	id<GEOETAUpdaterDelegate> _delegate;
	GEOETATrafficUpdateRequest* _currentETARequest;
	GEOLocation* _userLocation;
	GEORouteMatch* _routeMatch;
	GEOComposedRoute* _route;
	GEOComposedWaypoint* _destination;
	GEORouteAttributes* _routeAttributes;
	long long _etaState;
	char _allowRequests;
	char _shouldUseConditionalRequest;
	double _requestInterval;
	NSTimer* _etaIdleTimer;
	double _lastETARequestTime;
	double _debugTimeWindowDuration;
	NSData* _directionsResponseID;

}

@property (assign,nonatomic) id<GEOETAUpdaterDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GEOComposedRoute * route;                          //@synthesize route=_route - In the implementation block
@property (nonatomic,retain) GEORouteMatch * routeMatch;                        //@synthesize routeMatch=_routeMatch - In the implementation block
@property (nonatomic,retain) GEOLocation * userLocation;                        //@synthesize userLocation=_userLocation - In the implementation block
@property (nonatomic,retain) GEOComposedWaypoint * destination;                 //@synthesize destination=_destination - In the implementation block
@property (nonatomic,retain) GEORouteAttributes * routeAttributes;              //@synthesize routeAttributes=_routeAttributes - In the implementation block
@property (nonatomic,retain) NSData * directionsResponseID;                     //@synthesize directionsResponseID=_directionsResponseID - In the implementation block
@property (assign,nonatomic) char allowRequests;                                //@synthesize allowRequests=_allowRequests - In the implementation block
@property (assign,nonatomic) char shouldUseConditionalRequest;                  //@synthesize shouldUseConditionalRequest=_shouldUseConditionalRequest - In the implementation block
@property (assign,nonatomic) double requestInterval;                            //@synthesize requestInterval=_requestInterval - In the implementation block
@property (assign,nonatomic) double debugTimeWindowDuration;                    //@synthesize debugTimeWindowDuration=_debugTimeWindowDuration - In the implementation block
-(void)setRoute:(GEOComposedRoute *)arg1 ;
-(GEOComposedRoute *)route;
-(GEORouteMatch *)routeMatch;
-(void)setRouteMatch:(GEORouteMatch *)arg1 ;
-(void)setDirectionsResponseID:(NSData *)arg1 ;
-(NSData *)directionsResponseID;
-(void)setUserLocation:(GEOLocation *)arg1 ;
-(GEOLocation *)userLocation;
-(void)setRouteAttributes:(GEORouteAttributes *)arg1 ;
-(GEORouteAttributes *)routeAttributes;
-(void)requestUpdate;
-(void)_clearTimer;
-(void)_clearCurrentETARequest;
-(void)_continueUpdateRequests;
-(void)_createETARequest;
-(char)_sendETARequest:(id)arg1 isUpdate:(char)arg2 ;
-(void)_updateCurrentETARequest;
-(char)_shouldStartConditionalETARequest;
-(void)_startConditionalConnectionETARequest;
-(id)currentStep;
-(double)percentageOfCurrentStepRemaining;
-(id)routesForETAUpdateRequest;
-(char)_updateETAResponse:(id)arg1 withRemainingDistanceFromRequest:(id)arg2 ;
-(char)updateRouteWithETATrafficUpdateResponse:(id)arg1 step:(id)arg2 percentOfStepRemaining:(double)arg3 ;
-(double)_calculateNextTransitionTime;
-(void)_startStateWaitingForBestTimeStart:(id)arg1 ;
-(char)_updateRouteWithETATrafficUpdateResponse:(id)arg1 ;
-(id)initWithRoute:(id)arg1 destination:(id)arg2 routeAttributes:(id)arg3 ;
-(void)startUpdateRequests;
-(void)stopUpdateRequests;
-(char)allowRequests;
-(void)setAllowRequests:(char)arg1 ;
-(char)shouldUseConditionalRequest;
-(void)setShouldUseConditionalRequest:(char)arg1 ;
-(double)requestInterval;
-(void)setRequestInterval:(double)arg1 ;
-(double)debugTimeWindowDuration;
-(void)setDebugTimeWindowDuration:(double)arg1 ;
-(id)init;
-(void)setDelegate:(id<GEOETAUpdaterDelegate>)arg1 ;
-(void)dealloc;
-(id<GEOETAUpdaterDelegate>)delegate;
-(void)reset;
-(GEOComposedWaypoint *)destination;
-(void)setDestination:(GEOComposedWaypoint *)arg1 ;
@end

