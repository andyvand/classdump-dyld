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

@interface GEOUIActionCapture : PBCodable <NSCopying> {

	double _duration;
	int _actionType;
	int _sequenceNumber;
	SCD_Struct_GE65 _has;

}

@property (assign,nonatomic) char hasActionType; 
@property (assign,nonatomic) int actionType;                      //@synthesize actionType=_actionType - In the implementation block
@property (assign,nonatomic) char hasDuration; 
@property (assign,nonatomic) double duration;                     //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) char hasSequenceNumber; 
@property (assign,nonatomic) int sequenceNumber;                  //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasSequenceNumber:(char)arg1 ;
-(char)hasSequenceNumber;
-(void)setHasActionType:(char)arg1 ;
-(char)hasActionType;
-(void)setHasDuration:(char)arg1 ;
-(char)hasDuration;
-(void)setDuration:(double)arg1 ;
-(double)duration;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)sequenceNumber;
-(int)actionType;
-(void)setActionType:(int)arg1 ;
-(void)setSequenceNumber:(int)arg1 ;
@end

