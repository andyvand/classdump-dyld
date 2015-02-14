/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GEOComposedWaypoint, NSDate, GEOLocation, GEOAutomobileOptions, GEOWalkingOptions, NSArray;

@interface GEOQuickETARequest : NSObject {

	GEOComposedWaypoint* _sourceWaypoint;
	GEOComposedWaypoint* _destinationWaypoint;
	NSDate* _departureDate;
	NSDate* _arrivalDate;
	int _transportType;
	GEOLocation* _currentLocation;
	char _includeDistance;
	GEOAutomobileOptions* _automobileOptions;
	GEOWalkingOptions* _walkingOptions;
	NSArray* _additionalTransportTypesRequested;

}

@property (nonatomic,readonly) GEOComposedWaypoint * sourceWaypoint;                     //@synthesize sourceWaypoint=_sourceWaypoint - In the implementation block
@property (nonatomic,readonly) GEOComposedWaypoint * destinationWaypoint;                //@synthesize destinationWaypoint=_destinationWaypoint - In the implementation block
@property (nonatomic,readonly) NSDate * departureDate;                                   //@synthesize departureDate=_departureDate - In the implementation block
@property (nonatomic,readonly) NSDate * arrivalDate;                                     //@synthesize arrivalDate=_arrivalDate - In the implementation block
@property (nonatomic,readonly) int transportType;                                        //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) GEOLocation * currentLocation;                            //@synthesize currentLocation=_currentLocation - In the implementation block
@property (nonatomic,readonly) char includeDistance;                                     //@synthesize includeDistance=_includeDistance - In the implementation block
@property (nonatomic,readonly) GEOAutomobileOptions * automobileOptions;                 //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (nonatomic,readonly) GEOWalkingOptions * walkingOptions;                       //@synthesize walkingOptions=_walkingOptions - In the implementation block
@property (nonatomic,readonly) NSArray * additionalTransportTypesRequested;              //@synthesize additionalTransportTypesRequested=_additionalTransportTypesRequested - In the implementation block
-(int)transportType;
-(GEOLocation *)currentLocation;
-(char)includeDistance;
-(GEOAutomobileOptions *)automobileOptions;
-(GEOWalkingOptions *)walkingOptions;
-(NSDate *)departureDate;
-(NSDate *)arrivalDate;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 departureDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 includeDistance:(char)arg6 ;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 arrivalDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 includeDistance:(char)arg6 ;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 departureDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 ;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 arrivalDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 ;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 departureDate:(id)arg3 currentLocation:(id)arg4 includeDistance:(char)arg5 automobileOptions:(id)arg6 walkingOptions:(id)arg7 ;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 arrivalDate:(id)arg3 currentLocation:(id)arg4 includeDistance:(char)arg5 automobileOptions:(id)arg6 walkingOptions:(id)arg7 ;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 departureDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 includeDistance:(char)arg6 additionalTransportTypesRequested:(id)arg7 ;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 arrivalDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 includeDistance:(char)arg6 additionalTransportTypesRequested:(id)arg7 ;
-(GEOComposedWaypoint *)sourceWaypoint;
-(GEOComposedWaypoint *)destinationWaypoint;
-(NSArray *)additionalTransportTypesRequested;
-(void)dealloc;
-(id)description;
@end

