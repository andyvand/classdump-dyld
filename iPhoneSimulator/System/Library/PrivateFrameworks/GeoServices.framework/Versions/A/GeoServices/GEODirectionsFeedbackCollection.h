/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSMutableArray, GEOLocation;

@interface GEODirectionsFeedbackCollection : PBCodable <NSCopying> {

	SCD_Struct_GE116 _navigationAudioFeedback;
	double _endTimeStamp;
	double _startTimeStamp;
	NSMutableArray* _directionsFeedbacks;
	GEOLocation* _finalLocation;
	char _arrivedAtDestination;
	SCD_Struct_GE53 _has;

}

@property (nonatomic,retain) NSMutableArray * directionsFeedbacks;                  //@synthesize directionsFeedbacks=_directionsFeedbacks - In the implementation block
@property (nonatomic,readonly) char hasFinalLocation; 
@property (nonatomic,retain) GEOLocation * finalLocation;                           //@synthesize finalLocation=_finalLocation - In the implementation block
@property (assign,nonatomic) char hasStartTimeStamp; 
@property (assign,nonatomic) double startTimeStamp;                                 //@synthesize startTimeStamp=_startTimeStamp - In the implementation block
@property (assign,nonatomic) char hasEndTimeStamp; 
@property (assign,nonatomic) double endTimeStamp;                                   //@synthesize endTimeStamp=_endTimeStamp - In the implementation block
@property (assign,nonatomic) char hasArrivedAtDestination; 
@property (assign,nonatomic) char arrivedAtDestination;                             //@synthesize arrivedAtDestination=_arrivedAtDestination - In the implementation block
@property (assign,nonatomic) char hasNavigationAudioFeedback; 
@property (assign,nonatomic) SCD_Struct_GE114 navigationAudioFeedback;              //@synthesize navigationAudioFeedback=_navigationAudioFeedback - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setStartTimeStamp:(double)arg1 ;
-(void)addDirectionsFeedback:(id)arg1 ;
-(void)setFinalLocation:(GEOLocation *)arg1 ;
-(void)setArrivedAtDestination:(char)arg1 ;
-(void)setNavigationAudioFeedback:(SCD_Struct_GE114)arg1 ;
-(void)setEndTimeStamp:(double)arg1 ;
-(void)setDirectionsFeedbacks:(NSMutableArray *)arg1 ;
-(unsigned long long)directionsFeedbacksCount;
-(void)clearDirectionsFeedbacks;
-(id)directionsFeedbackAtIndex:(unsigned long long)arg1 ;
-(char)hasFinalLocation;
-(void)setHasStartTimeStamp:(char)arg1 ;
-(char)hasStartTimeStamp;
-(void)setHasEndTimeStamp:(char)arg1 ;
-(char)hasEndTimeStamp;
-(void)setHasArrivedAtDestination:(char)arg1 ;
-(char)hasArrivedAtDestination;
-(void)setHasNavigationAudioFeedback:(char)arg1 ;
-(char)hasNavigationAudioFeedback;
-(NSMutableArray *)directionsFeedbacks;
-(GEOLocation *)finalLocation;
-(double)startTimeStamp;
-(double)endTimeStamp;
-(char)arrivedAtDestination;
-(SCD_Struct_GE114)navigationAudioFeedback;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

