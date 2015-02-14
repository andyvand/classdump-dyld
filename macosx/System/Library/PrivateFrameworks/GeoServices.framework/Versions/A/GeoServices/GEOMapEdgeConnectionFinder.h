/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequest.h>

@class GEOMapAccess, GEOMapTileFinder, NSMutableArray, GEOVectorTile;

@interface GEOMapEdgeConnectionFinder : GEOMapRequest {

	GEOMapAccess* _map;
	GEOMapTileFinder* _tileFinder;
	NSMutableArray* _builders;
	GEOVectorTile* _tile;
	SCD_Struct_GE109* _junction;
	SCD_Struct_GE15 _coordinate;

}
-(id)initWithMap:(id)arg1 tile:(id)arg2 junction:(SCD_Struct_GE109*)arg3 coordinate:(SCD_Struct_GE15)arg4 ;
-(void)findConnectionsOut:(/*^block*/id)arg1 ;
-(void)findConnectionsIn:(/*^block*/id)arg1 ;
-(void)_findConnections:(/*^block*/id)arg1 incoming:(char)arg2 ;
-(void)dealloc;
-(void)cancel;
@end

