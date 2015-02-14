/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSMutableArray;

@interface GEOVConnectivity : PBCodable <NSCopying> {

	NSMutableArray* _junctions;

}

@property (nonatomic,retain) NSMutableArray * junctions;              //@synthesize junctions=_junctions - In the implementation block
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)junctionsCount;
-(NSMutableArray *)junctions;
-(void)addJunction:(id)arg1 ;
-(void)setJunctions:(NSMutableArray *)arg1 ;
-(void)clearJunctions;
-(id)junctionAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

