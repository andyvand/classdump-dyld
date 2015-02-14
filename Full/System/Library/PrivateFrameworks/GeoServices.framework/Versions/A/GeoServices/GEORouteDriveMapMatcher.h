/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEORouteMapMatcher.h>

@interface GEORouteDriveMapMatcher : GEORouteMapMatcher
-(id)matchToRouteWithLocation:(id)arg1 trackedLocation:(id)arg2 onDate:(id)arg3 maxDistance:(double)arg4 ;
-(SCD_Struct_GE175)_matchToRouteFromLocation:(id)arg1 trackedLocation:(id)arg2 distanceLeftToSearch:(double)arg3 maxDistance:(double)arg4 ;
-(id)_setupRouteMatchWithRawLocation:(id)arg1 trackedLocation:(id)arg2 onDate:(id)arg3 matchParams:(const SCD_Struct_GE175*)arg4 ;
-(double)_maxMatchDistance:(double)arg1 routeIndex:(unsigned)arg2 useStrictMatch:(char)arg3 timeSinceTunnel:(double)arg4 ;
@end

