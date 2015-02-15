/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEONavigationDetails, GEOComposedRoute, NSString, GEOLocation, GEORouteMatch;

@interface GEONavigation : NSObject {

	GEONavigationDetails* _details;
	xpc_connection_sRef _connection;
	int _navigationStartedToken;
	char _hasNavigationStartedToken;

}

@property (nonatomic,readonly) GEOComposedRoute * route; 
@property (nonatomic,readonly) NSString * destinationName; 
@property (nonatomic,readonly) GEOLocation * location; 
@property (nonatomic,readonly) GEORouteMatch * routeMatch; 
@property (nonatomic,readonly) double distanceToManeuverStart; 
@property (nonatomic,readonly) double distanceToManeuverEnd; 
@property (nonatomic,readonly) double distanceToRoute; 
@property (nonatomic,readonly) double distanceRemainingOnRoute; 
@property (nonatomic,readonly) double remainingTime; 
@property (nonatomic,readonly) char isNavigating; 
@property (nonatomic,readonly) char locationUnreliable; 
@property (assign,nonatomic) int navigationTransportType; 
@property (assign,nonatomic) int navigationState; 
@property (assign,nonatomic) unsigned long long announcementStage; 
+(id)sharedInstance;
-(GEOComposedRoute *)route;
-(GEORouteMatch *)routeMatch;
-(void)_closeConnection;
-(NSString *)destinationName;
-(void)_createConnection;
-(void)_sendMessage:(id)arg1 data:(id)arg2 ;
-(void)updateLocation:(id)arg1 routeMatch:(id)arg2 etaRoute:(id)arg3 locationUnreliable:(char)arg4 ;
-(void)setRoute:(id)arg1 toDestinationName:(id)arg2 ;
-(double)distanceToManeuverStart;
-(double)distanceToManeuverEnd;
-(double)distanceToRoute;
-(double)distanceRemainingOnRoute;
-(double)remainingTime;
-(int)navigationState;
-(char)locationUnreliable;
-(void)setNavigationState:(int)arg1 ;
-(int)navigationTransportType;
-(unsigned long long)announcementStage;
-(void)setAnnouncementStage:(unsigned long long)arg1 ;
-(void)recalculatedToRoute:(id)arg1 location:(id)arg2 routeMatch:(id)arg3 ;
-(void)updatedETA:(id)arg1 ;
-(void)clearRoute;
-(char)isNavigating;
-(void)setNavigationTransportType:(int)arg1 ;
-(void)startNavigationForTransportType:(int)arg1 state:(int)arg2 ;
-(void)endNavigation;
-(void)dealloc;
-(GEOLocation *)location;
@end

