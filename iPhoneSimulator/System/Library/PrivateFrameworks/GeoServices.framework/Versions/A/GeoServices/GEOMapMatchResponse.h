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

@class NSData;

@interface GEOMapMatchResponse : PBCodable <NSCopying> {

	int _matchingStatus;
	int _status;
	NSData* _zilchPoints;
	SCD_Struct_GE5 _has;

}

@property (assign,nonatomic) char hasStatus; 
@property (assign,nonatomic) int status;                          //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) char hasMatchingStatus; 
@property (assign,nonatomic) int matchingStatus;                  //@synthesize matchingStatus=_matchingStatus - In the implementation block
@property (nonatomic,readonly) char hasZilchPoints; 
@property (nonatomic,retain) NSData * zilchPoints;                //@synthesize zilchPoints=_zilchPoints - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setZilchPoints:(NSData *)arg1 ;
-(char)hasZilchPoints;
-(NSData *)zilchPoints;
-(void)setHasStatus:(char)arg1 ;
-(char)hasStatus;
-(void)setMatchingStatus:(int)arg1 ;
-(void)setHasMatchingStatus:(char)arg1 ;
-(char)hasMatchingStatus;
-(int)matchingStatus;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)status;
-(id)dictionaryRepresentation;
-(void)setStatus:(int)arg1 ;
@end

