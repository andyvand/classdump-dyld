/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@interface GEOTileSetVersion : PBCodable <NSCopying> {

	SCD_Struct_GE73* _availableTiles;
	unsigned long long _availableTilesCount;
	unsigned long long _availableTilesSpace;
	SCD_Struct_GE74* _genericTiles;
	unsigned long long _genericTilesCount;
	unsigned long long _genericTilesSpace;
	unsigned _identifier;
	unsigned _supportedLanguagesVersion;
	unsigned _timeToLiveSeconds;
	SCD_Struct_GE5 _has;

}

@property (assign,nonatomic) unsigned identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long availableTilesCount; 
@property (nonatomic,readonly) SCD_Struct_GE73* availableTiles; 
@property (assign,nonatomic) char hasTimeToLiveSeconds; 
@property (assign,nonatomic) unsigned timeToLiveSeconds;                            //@synthesize timeToLiveSeconds=_timeToLiveSeconds - In the implementation block
@property (nonatomic,readonly) unsigned long long genericTilesCount; 
@property (nonatomic,readonly) SCD_Struct_GE74* genericTiles; 
@property (assign,nonatomic) char hasSupportedLanguagesVersion; 
@property (assign,nonatomic) unsigned supportedLanguagesVersion;                    //@synthesize supportedLanguagesVersion=_supportedLanguagesVersion - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)timeToLiveSeconds;
-(void)clearAvailableTiles;
-(void)clearGenericTiles;
-(unsigned long long)availableTilesCount;
-(SCD_Struct_GE73)availableTilesAtIndex:(unsigned long long)arg1 ;
-(void)addAvailableTiles:(SCD_Struct_GE73)arg1 ;
-(unsigned long long)genericTilesCount;
-(SCD_Struct_GE74)genericTileAtIndex:(unsigned long long)arg1 ;
-(void)addGenericTile:(SCD_Struct_GE74)arg1 ;
-(SCD_Struct_GE73*)availableTiles;
-(void)setAvailableTiles:(SCD_Struct_GE73*)arg1 count:(unsigned long long)arg2 ;
-(void)setTimeToLiveSeconds:(unsigned)arg1 ;
-(void)setHasTimeToLiveSeconds:(char)arg1 ;
-(char)hasTimeToLiveSeconds;
-(SCD_Struct_GE74*)genericTiles;
-(void)setGenericTiles:(SCD_Struct_GE74*)arg1 count:(unsigned long long)arg2 ;
-(void)setSupportedLanguagesVersion:(unsigned)arg1 ;
-(void)setHasSupportedLanguagesVersion:(char)arg1 ;
-(char)hasSupportedLanguagesVersion;
-(unsigned)supportedLanguagesVersion;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned)identifier;
-(void)setIdentifier:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

