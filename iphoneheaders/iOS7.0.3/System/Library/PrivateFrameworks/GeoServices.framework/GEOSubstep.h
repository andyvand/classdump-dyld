/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:30:53 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class GEONameInfo, NSMutableArray;

@interface GEOSubstep : PBCodable <NSCopying> {

	int _maneuverType;
	GEONameInfo* _name;
	NSMutableArray* _signposts;
	int _zilchIndex;
	SCD_Struct_GE55 _has;

}

@property (assign,nonatomic) BOOL hasManeuverType; 
@property (assign,nonatomic) int maneuverType;                        //@synthesize maneuverType=_maneuverType - In the implementation block
@property (assign,nonatomic) BOOL hasZilchIndex; 
@property (assign,nonatomic) int zilchIndex;                          //@synthesize zilchIndex=_zilchIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) GEONameInfo * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSMutableArray * signposts;              //@synthesize signposts=_signposts - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)dictionaryRepresentation;
-(void)setSignposts:(id)arg1 ;
-(void)addSignpost:(id)arg1 ;
-(BOOL)hasManeuverType;
-(int)maneuverType;
-(void)setManeuverType:(int)arg1 ;
-(unsigned)signpostsCount;
-(void)clearSignposts;
-(id)signpostAtIndex:(unsigned)arg1 ;
-(void)setHasManeuverType:(BOOL)arg1 ;
-(id)signposts;
-(BOOL)hasZilchIndex;
-(int)zilchIndex;
-(void)setZilchIndex:(int)arg1 ;
-(void)setHasZilchIndex:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
@end
