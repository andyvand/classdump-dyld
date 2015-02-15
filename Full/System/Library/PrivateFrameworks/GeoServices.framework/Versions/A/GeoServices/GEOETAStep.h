/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class GEOTimeCheckpoints;

@interface GEOETAStep : PBCodable <NSCopying> {

	unsigned _distanceRemaining;
	unsigned _expectedTime;
	unsigned _stepID;
	GEOTimeCheckpoints* _timeCheckpoints;
	int _zilchPointIndex;
	SCD_Struct_GE53 _has;

}

@property (assign,nonatomic) char hasDistanceRemaining; 
@property (assign,nonatomic) unsigned distanceRemaining; 
@property (assign,nonatomic) char hasStepID; 
@property (assign,nonatomic) unsigned stepID;                                   //@synthesize stepID=_stepID - In the implementation block
@property (assign,nonatomic) char hasExpectedTime; 
@property (assign,nonatomic) unsigned expectedTime;                             //@synthesize expectedTime=_expectedTime - In the implementation block
@property (assign,nonatomic) char hasZilchPointIndex; 
@property (assign,nonatomic) int zilchPointIndex;                               //@synthesize zilchPointIndex=_zilchPointIndex - In the implementation block
@property (nonatomic,readonly) char hasTimeCheckpoints; 
@property (nonatomic,retain) GEOTimeCheckpoints * timeCheckpoints;              //@synthesize timeCheckpoints=_timeCheckpoints - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)expectedTime;
-(unsigned)stepID;
-(void)setExpectedTime:(unsigned)arg1 ;
-(void)setHasExpectedTime:(char)arg1 ;
-(char)hasExpectedTime;
-(void)setTimeCheckpoints:(GEOTimeCheckpoints *)arg1 ;
-(void)setStepID:(unsigned)arg1 ;
-(void)setHasStepID:(char)arg1 ;
-(char)hasStepID;
-(char)hasTimeCheckpoints;
-(GEOTimeCheckpoints *)timeCheckpoints;
-(int)zilchPointIndex;
-(void)setZilchPointIndex:(int)arg1 ;
-(void)setHasZilchPointIndex:(char)arg1 ;
-(char)hasZilchPointIndex;
-(unsigned)distanceRemaining;
-(void)setDistanceRemaining:(unsigned)arg1 ;
-(void)setHasDistanceRemaining:(char)arg1 ;
-(char)hasDistanceRemaining;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

