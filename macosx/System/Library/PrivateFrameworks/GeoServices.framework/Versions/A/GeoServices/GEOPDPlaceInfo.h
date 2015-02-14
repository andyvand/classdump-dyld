/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class GEOLatLng, GEOTimezone;

@interface GEOPDPlaceInfo : PBCodable <NSCopying> {

	double _area;
	GEOLatLng* _center;
	GEOTimezone* _timezone;
	char _isApproximateCenter;
	SCD_Struct_GE5 _has;

}

@property (nonatomic,readonly) char hasCenter; 
@property (nonatomic,retain) GEOLatLng * center;                       //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) char hasArea; 
@property (assign,nonatomic) double area;                              //@synthesize area=_area - In the implementation block
@property (nonatomic,readonly) char hasTimezone; 
@property (nonatomic,retain) GEOTimezone * timezone;                   //@synthesize timezone=_timezone - In the implementation block
@property (assign,nonatomic) char hasIsApproximateCenter; 
@property (assign,nonatomic) char isApproximateCenter;                 //@synthesize isApproximateCenter=_isApproximateCenter - In the implementation block
+(id)placeInfoForPlaceData:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setArea:(double)arg1 ;
-(char)hasCenter;
-(void)setTimezone:(GEOTimezone *)arg1 ;
-(void)setHasArea:(char)arg1 ;
-(char)hasArea;
-(char)hasTimezone;
-(void)setIsApproximateCenter:(char)arg1 ;
-(void)setHasIsApproximateCenter:(char)arg1 ;
-(char)hasIsApproximateCenter;
-(double)area;
-(GEOTimezone *)timezone;
-(char)isApproximateCenter;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOLatLng *)center;
-(id)dictionaryRepresentation;
-(void)setCenter:(GEOLatLng *)arg1 ;
@end

