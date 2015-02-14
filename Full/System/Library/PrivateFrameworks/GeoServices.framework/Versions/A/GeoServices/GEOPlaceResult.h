/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSMutableArray, GEOPlace, NSString, GEOPlaceSearchRequest, GEOAddress;

@interface GEOPlaceResult : PBCodable <NSCopying> {

	unsigned long long _flyoverTourMuid;
	NSMutableArray* _additionalPlaces;
	int _cacheControl;
	NSMutableArray* _matchedTokens;
	NSMutableArray* _namedFeatures;
	GEOPlace* _place;
	NSString* _quad;
	GEOPlaceSearchRequest* _revgeoRequestTemplate;
	NSString* _suggestedQuery;
	GEOAddress* _tokenEntity;
	unsigned _travelDistance;
	unsigned _travelTime;
	NSMutableArray* _unmatchedStrings;
	SCD_Struct_GE53 _has;

}

@property (nonatomic,retain) GEOPlace * place;                                           //@synthesize place=_place - In the implementation block
@property (nonatomic,retain) NSMutableArray * additionalPlaces;                          //@synthesize additionalPlaces=_additionalPlaces - In the implementation block
@property (nonatomic,readonly) char hasSuggestedQuery; 
@property (nonatomic,retain) NSString * suggestedQuery;                                  //@synthesize suggestedQuery=_suggestedQuery - In the implementation block
@property (assign,nonatomic) char hasTravelTime; 
@property (assign,nonatomic) unsigned travelTime;                                        //@synthesize travelTime=_travelTime - In the implementation block
@property (assign,nonatomic) char hasTravelDistance; 
@property (assign,nonatomic) unsigned travelDistance;                                    //@synthesize travelDistance=_travelDistance - In the implementation block
@property (nonatomic,readonly) char hasTokenEntity; 
@property (nonatomic,retain) GEOAddress * tokenEntity;                                   //@synthesize tokenEntity=_tokenEntity - In the implementation block
@property (nonatomic,readonly) char hasQuad; 
@property (nonatomic,retain) NSString * quad;                                            //@synthesize quad=_quad - In the implementation block
@property (nonatomic,retain) NSMutableArray * unmatchedStrings;                          //@synthesize unmatchedStrings=_unmatchedStrings - In the implementation block
@property (nonatomic,retain) NSMutableArray * namedFeatures;                             //@synthesize namedFeatures=_namedFeatures - In the implementation block
@property (nonatomic,readonly) char hasRevgeoRequestTemplate; 
@property (nonatomic,retain) GEOPlaceSearchRequest * revgeoRequestTemplate;              //@synthesize revgeoRequestTemplate=_revgeoRequestTemplate - In the implementation block
@property (nonatomic,retain) NSMutableArray * matchedTokens;                             //@synthesize matchedTokens=_matchedTokens - In the implementation block
@property (assign,nonatomic) char hasFlyoverTourMuid; 
@property (assign,nonatomic) unsigned long long flyoverTourMuid;                         //@synthesize flyoverTourMuid=_flyoverTourMuid - In the implementation block
@property (assign,nonatomic) char hasCacheControl; 
@property (assign,nonatomic) int cacheControl;                                           //@synthesize cacheControl=_cacheControl - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setPlace:(GEOPlace *)arg1 ;
-(void)setAdditionalPlaces:(NSMutableArray *)arg1 ;
-(void)setSuggestedQuery:(NSString *)arg1 ;
-(void)setTokenEntity:(GEOAddress *)arg1 ;
-(void)setQuad:(NSString *)arg1 ;
-(void)setUnmatchedStrings:(NSMutableArray *)arg1 ;
-(void)setNamedFeatures:(NSMutableArray *)arg1 ;
-(void)setRevgeoRequestTemplate:(GEOPlaceSearchRequest *)arg1 ;
-(void)setMatchedTokens:(NSMutableArray *)arg1 ;
-(void)addAdditionalPlace:(id)arg1 ;
-(void)addUnmatchedString:(id)arg1 ;
-(void)addNamedFeature:(id)arg1 ;
-(void)addMatchedToken:(id)arg1 ;
-(unsigned long long)additionalPlacesCount;
-(void)clearAdditionalPlaces;
-(id)additionalPlaceAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)unmatchedStringsCount;
-(void)clearUnmatchedStrings;
-(id)unmatchedStringAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)namedFeaturesCount;
-(void)clearNamedFeatures;
-(id)namedFeatureAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)matchedTokensCount;
-(void)clearMatchedTokens;
-(id)matchedTokenAtIndex:(unsigned long long)arg1 ;
-(char)hasSuggestedQuery;
-(void)setTravelTime:(unsigned)arg1 ;
-(void)setHasTravelTime:(char)arg1 ;
-(char)hasTravelTime;
-(void)setTravelDistance:(unsigned)arg1 ;
-(void)setHasTravelDistance:(char)arg1 ;
-(char)hasTravelDistance;
-(char)hasTokenEntity;
-(char)hasQuad;
-(char)hasRevgeoRequestTemplate;
-(void)setFlyoverTourMuid:(unsigned long long)arg1 ;
-(void)setHasFlyoverTourMuid:(char)arg1 ;
-(char)hasFlyoverTourMuid;
-(void)setCacheControl:(int)arg1 ;
-(void)setHasCacheControl:(char)arg1 ;
-(char)hasCacheControl;
-(GEOPlace *)place;
-(NSMutableArray *)additionalPlaces;
-(NSString *)suggestedQuery;
-(unsigned)travelTime;
-(unsigned)travelDistance;
-(GEOAddress *)tokenEntity;
-(NSString *)quad;
-(NSMutableArray *)unmatchedStrings;
-(NSMutableArray *)namedFeatures;
-(GEOPlaceSearchRequest *)revgeoRequestTemplate;
-(NSMutableArray *)matchedTokens;
-(unsigned long long)flyoverTourMuid;
-(int)cacheControl;
-(id)geoMapItem;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

