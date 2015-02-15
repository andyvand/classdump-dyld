/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class GEOMapItemStorage, GEOPlace;

@interface GEOURLItem : PBCodable <NSCopying> {

	GEOMapItemStorage* _mapItemStorage;
	GEOPlace* _place;
	char _currentLocation;
	SCD_Struct_GE4 _has;

}

@property (nonatomic,readonly) char hasPlace; 
@property (nonatomic,retain) GEOPlace * place;                                //@synthesize place=_place - In the implementation block
@property (assign,nonatomic) char hasCurrentLocation; 
@property (assign,nonatomic) char currentLocation;                            //@synthesize currentLocation=_currentLocation - In the implementation block
@property (nonatomic,readonly) char hasMapItemStorage; 
@property (nonatomic,retain) GEOMapItemStorage * mapItemStorage;              //@synthesize mapItemStorage=_mapItemStorage - In the implementation block
-(id)mapItem;
-(void)setMapItem:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)currentLocation;
-(void)setCurrentLocation:(char)arg1 ;
-(GEOMapItemStorage *)mapItemStorage;
-(void)setMapItemStorage:(GEOMapItemStorage *)arg1 ;
-(void)setPlace:(GEOPlace *)arg1 ;
-(GEOPlace *)place;
-(char)hasPlace;
-(char)hasMapItemStorage;
-(void)setHasCurrentLocation:(char)arg1 ;
-(char)hasCurrentLocation;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

