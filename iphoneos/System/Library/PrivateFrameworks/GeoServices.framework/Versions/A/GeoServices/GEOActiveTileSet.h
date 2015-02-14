/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:39 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEOActiveTileSet : PBCodable <NSCopying> {

	SCD_Struct_GE73* _availableTiles;
	unsigned long long _availableTilesCount;
	unsigned long long _availableTilesSpace;
	NSString* _baseURL;
	NSString* _localizationURL;
	NSString* _multiTileURL;
	int _scale;
	NSMutableArray* _sentinelTiles;
	int _size;
	int _style;
	NSMutableArray* _supportedLanguages;
	unsigned _timeToLiveSeconds;
	int _updateBehavior;
	unsigned _version;
	char _multiTileURLUsesStatusCodes;
	SCD_Struct_GE64 _has;

}

@property (nonatomic,readonly) char hasBaseURL; 
@property (nonatomic,retain) NSString * baseURL;                                    //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,readonly) char hasMultiTileURL; 
@property (nonatomic,retain) NSString * multiTileURL;                               //@synthesize multiTileURL=_multiTileURL - In the implementation block
@property (assign,nonatomic) int style;                                             //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) int scale;                                             //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) int size;                                              //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned version;                                      //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) char hasTimeToLiveSeconds; 
@property (assign,nonatomic) unsigned timeToLiveSeconds;                            //@synthesize timeToLiveSeconds=_timeToLiveSeconds - In the implementation block
@property (nonatomic,readonly) unsigned long long availableTilesCount; 
@property (nonatomic,readonly) SCD_Struct_GE73* availableTiles; 
@property (nonatomic,retain) NSMutableArray * sentinelTiles;                        //@synthesize sentinelTiles=_sentinelTiles - In the implementation block
@property (nonatomic,readonly) char hasLocalizationURL; 
@property (nonatomic,retain) NSString * localizationURL;                            //@synthesize localizationURL=_localizationURL - In the implementation block
@property (nonatomic,retain) NSMutableArray * supportedLanguages;                   //@synthesize supportedLanguages=_supportedLanguages - In the implementation block
@property (assign,nonatomic) char hasMultiTileURLUsesStatusCodes; 
@property (assign,nonatomic) char multiTileURLUsesStatusCodes;                      //@synthesize multiTileURLUsesStatusCodes=_multiTileURLUsesStatusCodes - In the implementation block
@property (assign,nonatomic) char hasUpdateBehavior; 
@property (assign,nonatomic) int updateBehavior;                                    //@synthesize updateBehavior=_updateBehavior - In the implementation block
-(char)isAvailableForTileKey:(const GEOTileKey*)arg1 ;
-(unsigned)maximumZoomLevelInRect:(SCD_Struct_GE54)arg1 ;
-(char)isEquivalentTileSet:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)scale;
-(id)dataForGenericTileType:(int)arg1 tileGroupIdentifier:(unsigned)arg2 ;
-(unsigned)minimumZoomLevelInRect:(SCD_Struct_GE54)arg1 ;
-(unsigned)timeToLiveSeconds;
-(unsigned)largestZoomLevelLEQ:(unsigned)arg1 inRect:(SCD_Struct_GE54)arg2 ;
-(void)setBaseURL:(NSString *)arg1 ;
-(void)setMultiTileURL:(NSString *)arg1 ;
-(void)setLocalizationURL:(NSString *)arg1 ;
-(void)setSupportedLanguages:(NSMutableArray *)arg1 ;
-(void)addSupportedLanguage:(id)arg1 ;
-(unsigned long long)supportedLanguagesCount;
-(void)clearSupportedLanguages;
-(id)supportedLanguageAtIndex:(unsigned long long)arg1 ;
-(char)hasBaseURL;
-(char)hasMultiTileURL;
-(char)hasLocalizationURL;
-(void)setMultiTileURLUsesStatusCodes:(char)arg1 ;
-(void)setHasMultiTileURLUsesStatusCodes:(char)arg1 ;
-(char)hasMultiTileURLUsesStatusCodes;
-(int)updateBehavior;
-(void)setUpdateBehavior:(int)arg1 ;
-(void)setHasUpdateBehavior:(char)arg1 ;
-(char)hasUpdateBehavior;
-(NSString *)multiTileURL;
-(NSString *)localizationURL;
-(NSMutableArray *)supportedLanguages;
-(char)multiTileURLUsesStatusCodes;
-(void)clearAvailableTiles;
-(unsigned long long)availableTilesCount;
-(SCD_Struct_GE73)availableTilesAtIndex:(unsigned long long)arg1 ;
-(void)addAvailableTiles:(SCD_Struct_GE73)arg1 ;
-(SCD_Struct_GE73*)availableTiles;
-(void)setAvailableTiles:(SCD_Struct_GE73*)arg1 count:(unsigned long long)arg2 ;
-(void)setTimeToLiveSeconds:(unsigned)arg1 ;
-(void)setHasTimeToLiveSeconds:(char)arg1 ;
-(char)hasTimeToLiveSeconds;
-(id)_bestLanguageWithOverrideLocale:(id)arg1 ;
-(void)_resetBestLanguage;
-(NSMutableArray *)sentinelTiles;
-(void)addSentinelTile:(id)arg1 ;
-(void)setSentinelTiles:(NSMutableArray *)arg1 ;
-(unsigned long long)sentinelTilesCount;
-(void)clearSentinelTiles;
-(id)sentinelTileAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(int)style;
-(void)setVersion:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)size;
-(void)setSize:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)setStyle:(int)arg1 ;
-(unsigned)version;
-(void)setScale:(int)arg1 ;
-(NSString *)baseURL;
@end

