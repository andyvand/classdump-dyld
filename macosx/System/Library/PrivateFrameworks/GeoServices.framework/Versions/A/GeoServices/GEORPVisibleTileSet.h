/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@interface GEORPVisibleTileSet : PBCodable <NSCopying> {

	SCD_Struct_GE215* _tileKeys;
	unsigned long long _tileKeysCount;
	unsigned long long _tileKeysSpace;
	unsigned _identifier;
	int _style;
	SCD_Struct_GE5 _has;

}

@property (assign,nonatomic) char hasStyle; 
@property (assign,nonatomic) int style;                                       //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) char hasIdentifier; 
@property (assign,nonatomic) unsigned identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long tileKeysCount; 
@property (nonatomic,readonly) SCD_Struct_GE215* tileKeys; 
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)tileKeysCount;
-(SCD_Struct_GE215)tileKeyAtIndex:(unsigned long long)arg1 ;
-(void)addTileKey:(SCD_Struct_GE215)arg1 ;
-(void)setHasStyle:(char)arg1 ;
-(char)hasStyle;
-(void)clearTileKeys;
-(void)setHasIdentifier:(char)arg1 ;
-(char)hasIdentifier;
-(SCD_Struct_GE215*)tileKeys;
-(void)setTileKeys:(SCD_Struct_GE215*)arg1 count:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(int)style;
-(unsigned)identifier;
-(void)setIdentifier:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setStyle:(int)arg1 ;
@end

