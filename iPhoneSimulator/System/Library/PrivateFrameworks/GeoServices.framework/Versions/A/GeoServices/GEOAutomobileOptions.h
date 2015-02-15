/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:51 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@interface GEOAutomobileOptions : PBCodable <NSCopying> {

	char _includeHistoricTravelTime;
	SCD_Struct_GE4 _has;

}

@property (assign,nonatomic) char hasIncludeHistoricTravelTime; 
@property (assign,nonatomic) char includeHistoricTravelTime;                 //@synthesize includeHistoricTravelTime=_includeHistoricTravelTime - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setIncludeHistoricTravelTime:(char)arg1 ;
-(void)setHasIncludeHistoricTravelTime:(char)arg1 ;
-(char)hasIncludeHistoricTravelTime;
-(char)includeHistoricTravelTime;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

