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

@class NSString, GEORPResolution;

@interface GEORPProblemStatus : PBCodable <NSCopying> {

	double _creationDate;
	NSString* _problemId;
	GEORPResolution* _problemResolution;
	int _problemState;
	SCD_Struct_GE5 _has;

}

@property (nonatomic,readonly) char hasProblemId; 
@property (nonatomic,retain) NSString * problemId;                             //@synthesize problemId=_problemId - In the implementation block
@property (assign,nonatomic) char hasCreationDate; 
@property (assign,nonatomic) double creationDate;                              //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,nonatomic) char hasProblemState; 
@property (assign,nonatomic) int problemState;                                 //@synthesize problemState=_problemState - In the implementation block
@property (nonatomic,readonly) char hasProblemResolution; 
@property (nonatomic,retain) GEORPResolution * problemResolution;              //@synthesize problemResolution=_problemResolution - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)problemId;
-(void)setProblemId:(NSString *)arg1 ;
-(char)hasProblemId;
-(void)setProblemResolution:(GEORPResolution *)arg1 ;
-(void)setHasCreationDate:(char)arg1 ;
-(char)hasCreationDate;
-(void)setProblemState:(int)arg1 ;
-(void)setHasProblemState:(char)arg1 ;
-(char)hasProblemState;
-(char)hasProblemResolution;
-(int)problemState;
-(GEORPResolution *)problemResolution;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(double)creationDate;
-(void)setCreationDate:(double)arg1 ;
@end

