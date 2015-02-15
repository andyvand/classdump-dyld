/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:07 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class GEOWaypointID, GEOWaypointLocation, GEOWaypointPlace;

@interface GEOWaypointTyped : PBCodable <NSCopying> {

	GEOWaypointID* _waypointId;
	GEOWaypointLocation* _waypointLocation;
	GEOWaypointPlace* _waypointPlace;
	int _waypointType;
	char _isCurrentLocation;
	SCD_Struct_GE5 _has;

}

@property (assign,nonatomic) char hasWaypointType; 
@property (assign,nonatomic) int waypointType;                                    //@synthesize waypointType=_waypointType - In the implementation block
@property (nonatomic,readonly) char hasWaypointId; 
@property (nonatomic,retain) GEOWaypointID * waypointId;                          //@synthesize waypointId=_waypointId - In the implementation block
@property (nonatomic,readonly) char hasWaypointPlace; 
@property (nonatomic,retain) GEOWaypointPlace * waypointPlace;                    //@synthesize waypointPlace=_waypointPlace - In the implementation block
@property (nonatomic,readonly) char hasWaypointLocation; 
@property (nonatomic,retain) GEOWaypointLocation * waypointLocation;              //@synthesize waypointLocation=_waypointLocation - In the implementation block
@property (assign,nonatomic) char hasIsCurrentLocation; 
@property (assign,nonatomic) char isCurrentLocation;                              //@synthesize isCurrentLocation=_isCurrentLocation - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)waypointType;
-(GEOWaypointPlace *)waypointPlace;
-(GEOWaypointLocation *)waypointLocation;
-(id)locationForWaypoint;
-(void)setWaypointId:(GEOWaypointID *)arg1 ;
-(void)setWaypointPlace:(GEOWaypointPlace *)arg1 ;
-(void)setWaypointLocation:(GEOWaypointLocation *)arg1 ;
-(void)setWaypointType:(int)arg1 ;
-(void)setHasWaypointType:(char)arg1 ;
-(char)hasWaypointType;
-(char)hasWaypointId;
-(char)hasWaypointPlace;
-(char)hasWaypointLocation;
-(void)setIsCurrentLocation:(char)arg1 ;
-(void)setHasIsCurrentLocation:(char)arg1 ;
-(char)hasIsCurrentLocation;
-(GEOWaypointID *)waypointId;
-(char)isCurrentLocation;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end
