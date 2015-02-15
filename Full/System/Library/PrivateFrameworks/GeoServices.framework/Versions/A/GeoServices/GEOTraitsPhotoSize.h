/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@interface GEOTraitsPhotoSize : PBCodable <NSCopying> {

	unsigned _height;
	unsigned _width;
	SCD_Struct_GE5 _has;

}

@property (assign,nonatomic) char hasWidth; 
@property (assign,nonatomic) unsigned width;               //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) char hasHeight; 
@property (assign,nonatomic) unsigned height;              //@synthesize height=_height - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasWidth:(char)arg1 ;
-(char)hasWidth;
-(void)setHeight:(unsigned)arg1 ;
-(void)setHasHeight:(char)arg1 ;
-(char)hasHeight;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setWidth:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)width;
-(unsigned)height;
@end

