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

@interface GEOTrafficSegment : PBCodable <NSCopying> {

	int _speed;
	int _vertexCount;
	int _vertexOffset;
	int _width;
	SCD_Struct_GE5 _has;

}

@property (assign,nonatomic) int vertexOffset;              //@synthesize vertexOffset=_vertexOffset - In the implementation block
@property (assign,nonatomic) int vertexCount;               //@synthesize vertexCount=_vertexCount - In the implementation block
@property (assign,nonatomic) char hasSpeed; 
@property (assign,nonatomic) int speed;                     //@synthesize speed=_speed - In the implementation block
@property (assign,nonatomic) char hasWidth; 
@property (assign,nonatomic) int width;                     //@synthesize width=_width - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasWidth:(char)arg1 ;
-(char)hasWidth;
-(int)vertexCount;
-(int)vertexOffset;
-(void)setHasSpeed:(char)arg1 ;
-(char)hasSpeed;
-(void)setVertexOffset:(int)arg1 ;
-(void)setVertexCount:(int)arg1 ;
-(void)setSpeed:(int)arg1 ;
-(int)speed;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setWidth:(int)arg1 ;
-(id)dictionaryRepresentation;
-(int)width;
@end

