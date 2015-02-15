/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class GEOLatLng, NSMutableArray;

@interface GEOWaypointPlace : PBCodable <NSCopying> {

	GEOLatLng* _center;
	NSMutableArray* _roadAccessPoints;

}

@property (nonatomic,readonly) char hasCenter; 
@property (nonatomic,retain) GEOLatLng * center;                             //@synthesize center=_center - In the implementation block
@property (nonatomic,retain) NSMutableArray * roadAccessPoints;              //@synthesize roadAccessPoints=_roadAccessPoints - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRoadAccessPoints:(NSMutableArray *)arg1 ;
-(void)addRoadAccessPoint:(id)arg1 ;
-(unsigned long long)roadAccessPointsCount;
-(void)clearRoadAccessPoints;
-(id)roadAccessPointAtIndex:(unsigned long long)arg1 ;
-(char)hasCenter;
-(NSMutableArray *)roadAccessPoints;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOLatLng *)center;
-(id)dictionaryRepresentation;
-(void)setCenter:(GEOLatLng *)arg1 ;
@end

