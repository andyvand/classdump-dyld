/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@interface GEOPDETA : PBCodable <NSCopying> {

	unsigned _distance;
	unsigned _time;
	int _transportType;
	SCD_Struct_GE64 _has;

}

@property (assign,nonatomic) char hasTime; 
@property (assign,nonatomic) unsigned time;                      //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) char hasDistance; 
@property (assign,nonatomic) unsigned distance;                  //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) char hasTransportType; 
@property (assign,nonatomic) int transportType;                  //@synthesize transportType=_transportType - In the implementation block
+(id)etaForPlaceData:(id)arg1 transportType:(int)arg2 ;
+(int)recommendedTransportTypeForPlaceData:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)transportType;
-(unsigned)time;
-(unsigned)distance;
-(void)setTransportType:(int)arg1 ;
-(char)hasTransportType;
-(void)setHasTransportType:(char)arg1 ;
-(void)setDistance:(unsigned)arg1 ;
-(void)setHasDistance:(char)arg1 ;
-(char)hasDistance;
-(char)hasTime;
-(void)setHasTime:(char)arg1 ;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setTime:(unsigned)arg1 ;
@end

