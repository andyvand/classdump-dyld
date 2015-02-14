/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSString;

@interface GEORPProblemCollectionResponse : PBCodable <NSCopying> {

	NSString* _problemId;
	int _statusCode;
	SCD_Struct_GE4 _has;

}

@property (assign,nonatomic) char hasStatusCode; 
@property (assign,nonatomic) int statusCode;                    //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,readonly) char hasProblemId; 
@property (nonatomic,retain) NSString * problemId;              //@synthesize problemId=_problemId - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)problemId;
-(void)setProblemId:(NSString *)arg1 ;
-(void)setHasStatusCode:(char)arg1 ;
-(char)hasStatusCode;
-(char)hasProblemId;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setStatusCode:(int)arg1 ;
-(int)statusCode;
@end

