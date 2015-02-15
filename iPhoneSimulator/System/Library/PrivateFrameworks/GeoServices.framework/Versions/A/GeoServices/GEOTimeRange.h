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

@interface GEOTimeRange : PBCodable <NSCopying> {

	unsigned _from;
	unsigned _to;
	char _allDay;
	SCD_Struct_GE64 _has;

}

@property (assign,nonatomic) char hasFrom; 
@property (assign,nonatomic) unsigned from;               //@synthesize from=_from - In the implementation block
@property (assign,nonatomic) char hasTo; 
@property (assign,nonatomic) unsigned to;                 //@synthesize to=_to - In the implementation block
@property (assign,nonatomic) char hasAllDay; 
@property (assign,nonatomic) char allDay;                 //@synthesize allDay=_allDay - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)to;
-(void)setFrom:(unsigned)arg1 ;
-(void)setTo:(unsigned)arg1 ;
-(id)initWithPlaceDataTimeRange:(SCD_Struct_GE142*)arg1 ;
-(unsigned)from;
-(char)isAdjacentToTimeRange:(id)arg1 ;
-(void)setHasFrom:(char)arg1 ;
-(char)hasFrom;
-(void)setHasTo:(char)arg1 ;
-(char)hasTo;
-(void)setHasAllDay:(char)arg1 ;
-(char)hasAllDay;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(char)allDay;
-(void)setAllDay:(char)arg1 ;
@end

