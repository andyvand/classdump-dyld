/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:39:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Maps.app/Contents/MacOS/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <GeoServices/GEOComposedRoute.h>

@class NSMutableArray, NSString, NVPlace, NSAttributedString, NSArray;

@interface NVRoute : GEOComposedRoute {

	unsigned long long _mode;
	SCD_Struct_NV5* _mapPoints;
	double* _distancesFromStart;
	double* _distancesFromEnd;
	double _distanceFromRequestToStart;
	NSMutableArray* _allSteps;
	NSMutableArray* _listViewSteps;
	char _displaysDistanceInMetric;
	char _displaysYardsForShortDistances;
	SCD_Struct_NV6 _boundingMapRect;
	SCD_Struct_NV5 _coordinate;
	SCD_Struct_NV5 _preferredCoordinate;
	double _coordinateOffset;
	NSRange _uniqueRange;
	NSString* _key;
	long long _orientation;
	long long _preferredOrientation;
	NSRange _uniquePointRange;
	int _signsColor;
	NVPlace* _start;
	NVPlace* _end;
	NSMutableArray* _distancesFromStartInMeters;
	NSString* _title;

}

@property (nonatomic,readonly) NSAttributedString * routeSummary; 
@property (nonatomic,readonly) NSAttributedString * shortRouteSummary; 
@property (nonatomic,readonly) NSString * routeDistanceDuration; 
@property (nonatomic,readonly) NSString * startString; 
@property (nonatomic,readonly) NSString * endString; 
@property (nonatomic,readonly) double meanCourseDegsForCompleteRoute; 
@property (nonatomic,readonly) double meanCourseDegsForUniqueRoute; 
@property (nonatomic,readonly) unsigned long long mode;                             //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) SCD_Struct_NV5* mapPoints;                           //@synthesize mapPoints=_mapPoints - In the implementation block
@property (nonatomic,readonly) SCD_Struct_NV5 startCoordinate; 
@property (nonatomic,readonly) SCD_Struct_NV5 endCoordinate; 
@property (nonatomic,readonly) SCD_Struct_NV5 midPoint; 
@property (nonatomic,readonly) char displaysDistanceInMetric;                       //@synthesize displaysDistanceInMetric=_displaysDistanceInMetric - In the implementation block
@property (nonatomic,readonly) char displaysYardsForShortDistances;                 //@synthesize displaysYardsForShortDistances=_displaysYardsForShortDistances - In the implementation block
@property (nonatomic,readonly) NSArray * listViewStepsWithHeader; 
@property (nonatomic,readonly) NSArray * listViewSteps; 
@property (nonatomic,readonly) NSString * expandedDistance; 
@property (nonatomic,readonly) unsigned long long durationSeconds; 
@property (nonatomic,readonly) NSString * expandedTravelTime; 
@property (nonatomic,readonly) NSString * abbreviatedTravelTime; 
@property (nonatomic,readonly) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) SCD_Struct_NV6 boundingMapRect; 
@property (nonatomic,retain) NVPlace * start;                                       //@synthesize start=_start - In the implementation block
@property (nonatomic,retain) NVPlace * end;                                         //@synthesize end=_end - In the implementation block
@property (assign,nonatomic) SCD_Struct_NV5 coordinate;                             //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) SCD_Struct_NV5 preferredCoordinate;                    //@synthesize preferredCoordinate=_preferredCoordinate - In the implementation block
@property (assign,nonatomic) double coordinateOffset;                               //@synthesize coordinateOffset=_coordinateOffset - In the implementation block
@property (assign,nonatomic) NSRange uniqueRange;                                   //@synthesize uniqueRange=_uniqueRange - In the implementation block
@property (assign,nonatomic) long long orientation;                                 //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) long long preferredOrientation;                        //@synthesize preferredOrientation=_preferredOrientation - In the implementation block
@property (nonatomic,readonly) double* distancesFromStart;                          //@synthesize distancesFromStart=_distancesFromStart - In the implementation block
@property (nonatomic,readonly) double* distancesFromEnd;                            //@synthesize distancesFromEnd=_distancesFromEnd - In the implementation block
@property (nonatomic,readonly) NSArray * distancesFromStartInMeters; 
@property (nonatomic,readonly) NSString * key;                                      //@synthesize key=_key - In the implementation block
+(void)updateLocationAndOrientationOfAlternateRouteAnnotationRepresentations:(id)arg1 forRoutes:(id)arg2 ;
+(void)_getIndexesOfSeparationPointOfRouteA:(id)arg1 fromRouteB:(id)arg2 indexA:(unsigned long long*)arg3 indexB:(unsigned long long*)arg4 threshold:(double)arg5 reversed:(char)arg6 ;
+(id)_uniqueRangesFor2Routes:(id)arg1 ;
+(id)_uniqueRangesFor3Routes:(id)arg1 ;
+(void)_setUniqueRangesForRoutes:(id)arg1 ;
+(void)_setMidCoordinateForRoute:(id)arg1 ;
+(void)_setOrientationsForRoutes:(id)arg1 ;
-(unsigned long long)directionsMode;
-(NSArray *)listViewSteps;
-(SCD_Struct_NV5*)mapPoints;
-(id)initWithRoute:(id)arg1 requestLocation:(id)arg2 origin:(id)arg3 destination:(id)arg4 signsColor:(int)arg5 ;
-(void)commonInitWithRequestLocation:(id)arg1 origin:(id)arg2 destination:(id)arg3 signsColor:(int)arg4 ;
-(void)updateDistanceDisplayPrefs;
-(void)computeStepsWithOrigin:(id)arg1 destination:(id)arg2 requestLocation:(id)arg3 ;
-(int)signsColorForTransportType:(int)arg1 ;
-(SCD_Struct_NV5)_mkCoordAt:(unsigned)arg1 ;
-(int)signsColorForStep:(id)arg1 ;
-(NSString *)abbreviatedTravelTime;
-(NSString *)expandedDistance;
-(id)advisoryNoticeMessage;
-(id)_timeForSeconds:(unsigned long long)arg1 withTraffic:(char)arg2 abbreviated:(char)arg3 ;
-(char)hasListViewStepsHeader;
-(NSArray *)distancesFromStartInMeters;
-(unsigned long long)durationSeconds;
-(NSString *)expandedTravelTime;
-(id)abbreviatedTravelTimeForInterval:(long long)arg1 ;
-(SCD_Struct_NV5)startCoordinate;
-(SCD_Struct_NV5)endCoordinate;
-(SCD_Struct_NV5)midPoint;
-(SCD_Struct_NV5)closestMapPointToMapPoint:(SCD_Struct_NV5)arg1 ;
-(NSArray *)listViewStepsWithHeader;
-(char)displaysDistanceInMetric;
-(char)displaysYardsForShortDistances;
-(NSRange)uniqueRange;
-(void)setUniqueRange:(NSRange)arg1 ;
-(double*)distancesFromStart;
-(double*)distancesFromEnd;
-(SCD_Struct_NV5)preferredCoordinate;
-(void)setPreferredCoordinate:(SCD_Struct_NV5)arg1 ;
-(long long)preferredOrientation;
-(void)setPreferredOrientation:(long long)arg1 ;
-(double)coordinateOffset;
-(void)setCoordinateOffset:(double)arg1 ;
-(NSString *)startString;
-(NSString *)endString;
-(NSAttributedString *)shortRouteSummary;
-(NSString *)routeDistanceDuration;
-(id)departureDateForContext:(long long)arg1 ;
-(id)mainStreet;
-(double)meanCourseDegsForRange:(NSRange)arg1 ;
-(double)meanCourseDegsForUniqueRoute;
-(double)meanCourseDegsForCompleteRoute;
-(SCD_Struct_NV6)boundingMapRect;
-(SCD_Struct_NV5)coordinate;
-(void)setCoordinate:(SCD_Struct_NV5)arg1 ;
-(void)setStart:(NVPlace *)arg1 ;
-(NSAttributedString *)routeSummary;
-(id)initWithRoute:(id)arg1 ;
-(id)arrivalDate;
-(void)dealloc;
-(NVPlace *)start;
-(char)isEqual:(id)arg1 ;
-(id)name;
-(NSString *)key;
-(NSString *)title;
-(unsigned long long)mode;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(NVPlace *)end;
-(void)setEnd:(NVPlace *)arg1 ;
@end
