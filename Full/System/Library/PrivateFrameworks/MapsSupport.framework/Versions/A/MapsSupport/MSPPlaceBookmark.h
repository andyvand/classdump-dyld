/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/Versions/A/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <MapsSupport/NSCopying.h>

@class PBUnknownFields, GEOLatLng, GEOMapItemStorage, NSString;

@interface MSPPlaceBookmark : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOLatLng* _droppedPinCoordinate;
	GEOMapItemStorage* _mapItemStorage;
	int _origin;
	NSString* _title;
	SCD_Struct_MS2 _has;

}

@property (nonatomic,readonly) char hasMapItemStorage; 
@property (nonatomic,retain) GEOMapItemStorage * mapItemStorage;              //@synthesize mapItemStorage=_mapItemStorage - In the implementation block
@property (assign,nonatomic) char hasOrigin; 
@property (assign,nonatomic) int origin;                                      //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) char hasTitle; 
@property (nonatomic,retain) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) char hasDroppedPinCoordinate; 
@property (nonatomic,retain) GEOLatLng * droppedPinCoordinate;                //@synthesize droppedPinCoordinate=_droppedPinCoordinate - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(void)setDroppedPinCoordinate:(GEOLatLng *)arg1 ;
-(void)setHasOrigin:(char)arg1 ;
-(char)hasDroppedPinCoordinate;
-(GEOLatLng *)droppedPinCoordinate;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(GEOMapItemStorage *)mapItemStorage;
-(void)setMapItemStorage:(GEOMapItemStorage *)arg1 ;
-(char)hasMapItemStorage;
-(PBUnknownFields *)unknownFields;
-(char)hasOrigin;
-(char)hasTitle;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)dictionaryRepresentation;
-(int)origin;
-(void)setOrigin:(int)arg1 ;
@end

