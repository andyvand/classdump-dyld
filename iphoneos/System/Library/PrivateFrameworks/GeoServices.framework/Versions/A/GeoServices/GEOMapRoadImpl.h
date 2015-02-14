/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:40 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRoad.h>

@class GEOMapAccess, NSString;

@interface GEOMapRoadImpl : NSObject <GEOMapRoad> {

	GEOMapAccess* _map;
	shared_ptr<geo::MapEdgeRoad>* _edge;
	vector<GEOLocationCoordinate2D, std::__1::allocator<GEOLocationCoordinate2D> >* _coords;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long coordinateCount; 
@property (nonatomic,readonly) SCD_Struct_GE15* coordinates; 
@property (nonatomic,readonly) double length; 
@property (nonatomic,readonly) int roadClass; 
@property (nonatomic,readonly) int formOfWay; 
-(int)roadClass;
-(int)formOfWay;
-(id)initWithMap:(id)arg1 edge:(shared_ptr<geo::MapEdgeRoad>*)arg2 ;
-(id)findRoadsFrom:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)coordinateCount;
-(void)dealloc;
-(NSString *)description;
-(double)length;
-(SCD_Struct_GE15*)coordinates;
@end

