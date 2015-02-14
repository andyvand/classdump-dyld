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

@class GEOMapRegion;

@interface GEOPDBounds : PBCodable <NSCopying> {

	GEOMapRegion* _displayMapRegion;
	GEOMapRegion* _mapRegion;

}

@property (nonatomic,readonly) char hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion;                     //@synthesize mapRegion=_mapRegion - In the implementation block
@property (nonatomic,readonly) char hasDisplayMapRegion; 
@property (nonatomic,retain) GEOMapRegion * displayMapRegion;              //@synthesize displayMapRegion=_displayMapRegion - In the implementation block
+(id)boundsInfoForPlaceData:(id)arg1 ;
-(GEOMapRegion *)mapRegion;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasMapRegion;
-(void)setDisplayMapRegion:(GEOMapRegion *)arg1 ;
-(char)hasDisplayMapRegion;
-(GEOMapRegion *)displayMapRegion;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

