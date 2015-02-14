/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:38 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@interface GEOLatLng : PBCodable <NSCopying> {

	double _lat;
	double _lng;

}

@property (nonatomic,readonly) SCD_Struct_GE15 coordinate; 
@property (assign,nonatomic) double lat;                                //@synthesize lat=_lat - In the implementation block
@property (assign,nonatomic) double lng;                                //@synthesize lng=_lng - In the implementation block
-(void)setLat:(double)arg1 ;
-(void)setLng:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(SCD_Struct_GE15)coordinate;
-(double)lat;
-(double)lng;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

