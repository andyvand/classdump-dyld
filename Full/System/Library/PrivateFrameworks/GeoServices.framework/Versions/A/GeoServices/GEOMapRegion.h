/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSMutableArray;

@interface GEOMapRegion : PBCodable <NSCopying> {

	double _eastLng;
	double _northLat;
	double _southLat;
	double _westLng;
	NSMutableArray* _vertexs;
	SCD_Struct_GE53 _has;

}

@property (nonatomic,readonly) double centerLat; 
@property (nonatomic,readonly) double centerLng; 
@property (nonatomic,readonly) double spanLat; 
@property (nonatomic,readonly) double spanLng; 
@property (assign,nonatomic) char hasSouthLat; 
@property (assign,nonatomic) double southLat;                       //@synthesize southLat=_southLat - In the implementation block
@property (assign,nonatomic) char hasWestLng; 
@property (assign,nonatomic) double westLng;                        //@synthesize westLng=_westLng - In the implementation block
@property (assign,nonatomic) char hasNorthLat; 
@property (assign,nonatomic) double northLat;                       //@synthesize northLat=_northLat - In the implementation block
@property (assign,nonatomic) char hasEastLng; 
@property (assign,nonatomic) double eastLng;                        //@synthesize eastLng=_eastLng - In the implementation block
@property (nonatomic,retain) NSMutableArray * vertexs;              //@synthesize vertexs=_vertexs - In the implementation block
-(id)_initWithCLRegion:(id)arg1 ;
-(double)northLat;
-(double)westLng;
-(double)southLat;
-(double)eastLng;
-(void)setNorthLat:(double)arg1 ;
-(void)setSouthLat:(double)arg1 ;
-(void)setEastLng:(double)arg1 ;
-(void)setWestLng:(double)arg1 ;
-(id)initWithMapRect:(SCD_Struct_GE54)arg1 ;
-(void)addVertex:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)initWithCoordinateRegion:(SCD_Struct_GE54)arg1 ;
-(void)setMapRect:(SCD_Struct_GE54)arg1 ;
-(id)initWithRadialPlace:(id)arg1 ;
-(double)centerLat;
-(double)centerLng;
-(double)spanLat;
-(double)spanLng;
-(char)containsCoordinate:(SCD_Struct_GE15)arg1 ;
-(char)containsMapRect:(SCD_Struct_GE54)arg1 ;
-(void)setVertexs:(NSMutableArray *)arg1 ;
-(unsigned long long)vertexsCount;
-(void)clearVertexs;
-(id)vertexAtIndex:(unsigned long long)arg1 ;
-(void)setHasSouthLat:(char)arg1 ;
-(char)hasSouthLat;
-(void)setHasWestLng:(char)arg1 ;
-(char)hasWestLng;
-(void)setHasNorthLat:(char)arg1 ;
-(char)hasNorthLat;
-(void)setHasEastLng:(char)arg1 ;
-(char)hasEastLng;
-(NSMutableArray *)vertexs;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 ;
@end

