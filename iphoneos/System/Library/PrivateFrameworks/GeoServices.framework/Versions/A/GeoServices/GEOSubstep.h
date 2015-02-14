/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:40 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class GEONameInfo, NSMutableArray;

@interface GEOSubstep : PBCodable <NSCopying> {

	int _maneuverType;
	GEONameInfo* _name;
	NSMutableArray* _signposts;
	int _zilchIndex;
	SCD_Struct_GE5 _has;

}

@property (assign,nonatomic) char hasManeuverType; 
@property (assign,nonatomic) int maneuverType;                        //@synthesize maneuverType=_maneuverType - In the implementation block
@property (assign,nonatomic) char hasZilchIndex; 
@property (assign,nonatomic) int zilchIndex;                          //@synthesize zilchIndex=_zilchIndex - In the implementation block
@property (nonatomic,readonly) char hasName; 
@property (nonatomic,retain) GEONameInfo * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSMutableArray * signposts;              //@synthesize signposts=_signposts - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasName;
-(void)setSignposts:(NSMutableArray *)arg1 ;
-(void)addSignpost:(id)arg1 ;
-(unsigned long long)signpostsCount;
-(void)clearSignposts;
-(id)signpostAtIndex:(unsigned long long)arg1 ;
-(void)setManeuverType:(int)arg1 ;
-(void)setHasManeuverType:(char)arg1 ;
-(char)hasManeuverType;
-(int)maneuverType;
-(NSMutableArray *)signposts;
-(int)zilchIndex;
-(void)setZilchIndex:(int)arg1 ;
-(void)setHasZilchIndex:(char)arg1 ;
-(char)hasZilchIndex;
-(void)dealloc;
-(id)description;
-(void)setName:(GEONameInfo *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(GEONameInfo *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

