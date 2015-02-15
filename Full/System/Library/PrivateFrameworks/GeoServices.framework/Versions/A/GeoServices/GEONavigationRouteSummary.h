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

@class GEOComposedWaypoint, NSString;

@interface GEONavigationRouteSummary : PBCodable <NSCopying> {

	GEOComposedWaypoint* _destination;
	NSString* _destinationName;
	GEOComposedWaypoint* _origin;
	int _transportType;
	SCD_Struct_GE4 _has;

}

@property (assign,nonatomic) char hasTransportType; 
@property (assign,nonatomic) int transportType;                              //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) char hasOrigin; 
@property (nonatomic,retain) GEOComposedWaypoint * origin;                   //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) char hasDestination; 
@property (nonatomic,retain) GEOComposedWaypoint * destination;              //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) char hasDestinationName; 
@property (nonatomic,retain) NSString * destinationName;                     //@synthesize destinationName=_destinationName - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRoute:(id)arg1 ;
-(int)transportType;
-(NSString *)destinationName;
-(id)initWithRoute:(id)arg1 destinationName:(id)arg2 ;
-(void)setTransportType:(int)arg1 ;
-(char)hasTransportType;
-(void)setHasTransportType:(char)arg1 ;
-(char)hasOrigin;
-(char)hasDestination;
-(void)setDestinationName:(NSString *)arg1 ;
-(char)hasDestinationName;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(GEOComposedWaypoint *)origin;
-(void)setOrigin:(GEOComposedWaypoint *)arg1 ;
-(GEOComposedWaypoint *)destination;
-(void)setDestination:(GEOComposedWaypoint *)arg1 ;
@end

