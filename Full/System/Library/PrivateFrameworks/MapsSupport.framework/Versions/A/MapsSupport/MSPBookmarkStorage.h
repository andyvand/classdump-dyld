/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/Versions/A/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <MapsSupport/NSCopying.h>

@class PBUnknownFields, NSString, MSPPlaceBookmark, MSPRegionBookmark, MSPRouteBookmark;

@interface MSPBookmarkStorage : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _position;
	double _timestamp;
	NSString* _identifier;
	MSPPlaceBookmark* _placeBookmark;
	MSPRegionBookmark* _regionBookmark;
	MSPRouteBookmark* _routeBookmark;
	int _type;
	SCD_Struct_MS1 _has;

}

@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) char hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) char hasPosition; 
@property (assign,nonatomic) double position;                                 //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) double timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) char hasPlaceBookmark; 
@property (nonatomic,retain) MSPPlaceBookmark * placeBookmark;                //@synthesize placeBookmark=_placeBookmark - In the implementation block
@property (nonatomic,readonly) char hasRouteBookmark; 
@property (nonatomic,retain) MSPRouteBookmark * routeBookmark;                //@synthesize routeBookmark=_routeBookmark - In the implementation block
@property (nonatomic,readonly) char hasRegionBookmark; 
@property (nonatomic,retain) MSPRegionBookmark * regionBookmark;              //@synthesize regionBookmark=_regionBookmark - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(void)setHasPosition:(char)arg1 ;
-(void)setPlaceBookmark:(MSPPlaceBookmark *)arg1 ;
-(void)setRouteBookmark:(MSPRouteBookmark *)arg1 ;
-(void)setRegionBookmark:(MSPRegionBookmark *)arg1 ;
-(char)hasPlaceBookmark;
-(char)hasRouteBookmark;
-(char)hasRegionBookmark;
-(MSPPlaceBookmark *)placeBookmark;
-(MSPRouteBookmark *)routeBookmark;
-(MSPRegionBookmark *)regionBookmark;
-(void)setTimestamp:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasType;
-(void)setHasType:(char)arg1 ;
-(void)setHasTimestamp:(char)arg1 ;
-(char)hasTimestamp;
-(PBUnknownFields *)unknownFields;
-(char)hasPosition;
-(char)hasIdentifier;
-(void)setPosition:(double)arg1 ;
-(id)description;
-(double)position;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)timestamp;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
@end

