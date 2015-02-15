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

@class GEOUser, NSString;

@interface GEOReview : PBCodable <NSCopying> {

	double _reviewTime;
	double _score;
	GEOUser* _reviewer;
	NSString* _snippet;
	NSString* _uid;
	SCD_Struct_GE5 _has;

}

@property (nonatomic,readonly) char hasSnippet; 
@property (nonatomic,retain) NSString * snippet;              //@synthesize snippet=_snippet - In the implementation block
@property (assign,nonatomic) char hasScore; 
@property (assign,nonatomic) double score;                    //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) char hasReviewTime; 
@property (assign,nonatomic) double reviewTime;               //@synthesize reviewTime=_reviewTime - In the implementation block
@property (nonatomic,readonly) char hasReviewer; 
@property (nonatomic,retain) GEOUser * reviewer;              //@synthesize reviewer=_reviewer - In the implementation block
@property (nonatomic,readonly) char hasUid; 
@property (nonatomic,retain) NSString * uid;                  //@synthesize uid=_uid - In the implementation block
-(double)score;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setScore:(double)arg1 ;
-(void)setHasScore:(char)arg1 ;
-(char)hasScore;
-(void)setSnippet:(NSString *)arg1 ;
-(void)setReviewer:(GEOUser *)arg1 ;
-(char)hasSnippet;
-(void)setReviewTime:(double)arg1 ;
-(void)setHasReviewTime:(char)arg1 ;
-(char)hasReviewTime;
-(char)hasReviewer;
-(char)hasUid;
-(NSString *)snippet;
-(double)reviewTime;
-(GEOUser *)reviewer;
-(id)initWithPlaceDataReview:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)uid;
-(void)setUid:(NSString *)arg1 ;
@end

