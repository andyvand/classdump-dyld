/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:30:50 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>

@interface GEOVLaneConnection : PBCodable {

	unsigned _firstLaneIndex;
	unsigned _firstRoadIndex;
	unsigned _secondLaneIndex;
	unsigned _secondRoadIndex;

}

@property (assign,nonatomic) unsigned firstRoadIndex;               //@synthesize firstRoadIndex=_firstRoadIndex - In the implementation block
@property (assign,nonatomic) unsigned firstLaneIndex;               //@synthesize firstLaneIndex=_firstLaneIndex - In the implementation block
@property (assign,nonatomic) unsigned secondRoadIndex;              //@synthesize secondRoadIndex=_secondRoadIndex - In the implementation block
@property (assign,nonatomic) unsigned secondLaneIndex;              //@synthesize secondLaneIndex=_secondLaneIndex - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned)firstRoadIndex;
-(void)setFirstRoadIndex:(unsigned)arg1 ;
-(unsigned)firstLaneIndex;
-(void)setFirstLaneIndex:(unsigned)arg1 ;
-(unsigned)secondRoadIndex;
-(void)setSecondRoadIndex:(unsigned)arg1 ;
-(unsigned)secondLaneIndex;
-(void)setSecondLaneIndex:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
