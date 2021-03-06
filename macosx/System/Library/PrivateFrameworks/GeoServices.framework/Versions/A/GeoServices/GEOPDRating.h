/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@interface GEOPDRating : PBCodable <NSCopying> {

	double _maxScore;
	double _score;
	int _numRatingsUsedForScore;
	int _ratingType;
	SCD_Struct_GE53 _has;

}

@property (assign,nonatomic) char hasRatingType; 
@property (assign,nonatomic) int ratingType;                              //@synthesize ratingType=_ratingType - In the implementation block
@property (assign,nonatomic) char hasScore; 
@property (assign,nonatomic) double score;                                //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) char hasMaxScore; 
@property (assign,nonatomic) double maxScore;                             //@synthesize maxScore=_maxScore - In the implementation block
@property (assign,nonatomic) char hasNumRatingsUsedForScore; 
@property (assign,nonatomic) int numRatingsUsedForScore;                  //@synthesize numRatingsUsedForScore=_numRatingsUsedForScore - In the implementation block
+(id)ratingForPlaceData:(id)arg1 type:(int)arg2 ;
-(double)score;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setScore:(double)arg1 ;
-(void)setHasScore:(char)arg1 ;
-(char)hasScore;
-(double)maxScore;
-(void)setMaxScore:(double)arg1 ;
-(void)setHasMaxScore:(char)arg1 ;
-(char)hasMaxScore;
-(char)hasNumRatingsUsedForScore;
-(int)numRatingsUsedForScore;
-(int)ratingType;
-(void)setRatingType:(int)arg1 ;
-(void)setHasRatingType:(char)arg1 ;
-(char)hasRatingType;
-(void)setNumRatingsUsedForScore:(int)arg1 ;
-(void)setHasNumRatingsUsedForScore:(char)arg1 ;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

