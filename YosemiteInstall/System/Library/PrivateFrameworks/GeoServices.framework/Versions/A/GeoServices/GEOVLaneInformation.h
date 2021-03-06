/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:56:41 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@interface GEOVLaneInformation : PBCodable <NSCopying> {

	unsigned _style;
	unsigned _validityMask;

}

@property (assign,nonatomic) unsigned style;                     //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned validityMask;              //@synthesize validityMask=_validityMask - In the implementation block
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)validityMask;
-(void)setValidityMask:(unsigned)arg1 ;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned)style;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setStyle:(unsigned)arg1 ;
@end

