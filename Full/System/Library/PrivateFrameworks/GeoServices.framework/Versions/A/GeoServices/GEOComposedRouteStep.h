/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOComposedRoute, GEOStep;

@interface GEOComposedRouteStep : NSObject {

	GEOComposedRoute* _composedRoute;
	GEOStep* _geoStep;
	unsigned long long _stepIndex;
	NSRange _pointRange;
	NSRange _maneuverPointRange;
	long long _routeLegType;

}

@property (assign,nonatomic) GEOComposedRoute * composedRoute;                                          //@synthesize composedRoute=_composedRoute - In the implementation block
@property (getter=getPreviousStep,nonatomic,readonly) GEOComposedRouteStep * previousStep; 
@property (getter=getNextStep,nonatomic,readonly) GEOComposedRouteStep * nextStep; 
@property (nonatomic,readonly) long long routeLegType;                                                  //@synthesize routeLegType=_routeLegType - In the implementation block
@property (nonatomic,readonly) int transportType; 
@property (nonatomic,readonly) NSRange pointRange;                                                      //@synthesize pointRange=_pointRange - In the implementation block
@property (nonatomic,readonly) unsigned startPointIndex; 
@property (nonatomic,readonly) unsigned endPointIndex; 
@property (nonatomic,readonly) unsigned pointCount; 
@property (nonatomic,readonly) NSRange maneuverPointRange;                                              //@synthesize maneuverPointRange=_maneuverPointRange - In the implementation block
@property (nonatomic,readonly) unsigned maneuverStartPointIndex; 
@property (nonatomic,readonly) unsigned maneuverEndPointIndex; 
@property (nonatomic,readonly) unsigned long long stepIndex;                                            //@synthesize stepIndex=_stepIndex - In the implementation block
@property (nonatomic,readonly) char isUncertainArrival; 
@property (nonatomic,readonly) SCD_Struct_GE15 startGeoCoordinate; 
@property (nonatomic,readonly) SCD_Struct_GE15 endGeoCoordinate; 
@property (nonatomic,readonly) GEOStep * geoStep;                                                       //@synthesize geoStep=_geoStep - In the implementation block
@property (nonatomic,readonly) char hasDuration; 
@property (nonatomic,readonly) unsigned duration; 
@property (nonatomic,readonly) unsigned distance; 
-(unsigned)startPointIndex;
-(unsigned)pointCount;
-(GEOComposedRoute *)composedRoute;
-(unsigned)endPointIndex;
-(int)transportType;
-(GEOStep *)geoStep;
-(unsigned long long)stepIndex;
-(unsigned)maneuverEndPointIndex;
-(unsigned)maneuverStartPointIndex;
-(unsigned)distance;
-(id)initWithComposedRoute:(id)arg1 GEOStep:(id)arg2 routeLegType:(long long)arg3 stepIndex:(unsigned long long)arg4 pointRange:(NSRange)arg5 maneuverPointRange:(NSRange)arg6 ;
-(long long)routeLegType;
-(void)setComposedRoute:(GEOComposedRoute *)arg1 ;
-(NSRange)pointRange;
-(char)hasDuration;
-(id)initWithComposedRoute:(id)arg1 routeLegType:(long long)arg2 stepIndex:(unsigned long long)arg3 pointRange:(NSRange)arg4 ;
-(char)isUncertainArrival;
-(SCD_Struct_GE15)startGeoCoordinate;
-(SCD_Struct_GE15)endGeoCoordinate;
-(id)getPreviousStep;
-(id)getNextStep;
-(id)firstNameOrBranch;
-(NSRange)maneuverPointRange;
-(void)dealloc;
-(unsigned)duration;
-(id)description;
@end

