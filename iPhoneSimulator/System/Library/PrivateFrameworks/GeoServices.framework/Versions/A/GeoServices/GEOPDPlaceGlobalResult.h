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

@class GEOPDCanonicalLocationSearchResult, GEOPDGeocodingResult, GEOPDLocationDirectedSearchResult, GEOPDMerchantLookupResult, GEOPDPlaceLookupResult, GEOPDPlaceRefinementResult, GEOPDReverseGeocodingResult, GEOPDSearchResult, GEOPDSiriSearchResult;

@interface GEOPDPlaceGlobalResult : PBCodable <NSCopying> {

	GEOPDCanonicalLocationSearchResult* _canonicalSearchResult;
	GEOPDGeocodingResult* _geocodingResult;
	GEOPDLocationDirectedSearchResult* _locationDirectedSearchResult;
	GEOPDMerchantLookupResult* _merchantLookupResult;
	GEOPDPlaceLookupResult* _placeLookupResult;
	GEOPDPlaceRefinementResult* _placeRefinementResult;
	GEOPDReverseGeocodingResult* _reverseGeocodingResult;
	GEOPDSearchResult* _searchResult;
	GEOPDSiriSearchResult* _siriSearchResult;

}

@property (nonatomic,readonly) char hasSearchResult; 
@property (nonatomic,retain) GEOPDSearchResult * searchResult;                                              //@synthesize searchResult=_searchResult - In the implementation block
@property (nonatomic,readonly) char hasGeocodingResult; 
@property (nonatomic,retain) GEOPDGeocodingResult * geocodingResult;                                        //@synthesize geocodingResult=_geocodingResult - In the implementation block
@property (nonatomic,readonly) char hasCanonicalSearchResult; 
@property (nonatomic,retain) GEOPDCanonicalLocationSearchResult * canonicalSearchResult;                    //@synthesize canonicalSearchResult=_canonicalSearchResult - In the implementation block
@property (nonatomic,readonly) char hasReverseGeocodingResult; 
@property (nonatomic,retain) GEOPDReverseGeocodingResult * reverseGeocodingResult;                          //@synthesize reverseGeocodingResult=_reverseGeocodingResult - In the implementation block
@property (nonatomic,readonly) char hasPlaceLookupResult; 
@property (nonatomic,retain) GEOPDPlaceLookupResult * placeLookupResult;                                    //@synthesize placeLookupResult=_placeLookupResult - In the implementation block
@property (nonatomic,readonly) char hasMerchantLookupResult; 
@property (nonatomic,retain) GEOPDMerchantLookupResult * merchantLookupResult;                              //@synthesize merchantLookupResult=_merchantLookupResult - In the implementation block
@property (nonatomic,readonly) char hasPlaceRefinementResult; 
@property (nonatomic,retain) GEOPDPlaceRefinementResult * placeRefinementResult;                            //@synthesize placeRefinementResult=_placeRefinementResult - In the implementation block
@property (nonatomic,readonly) char hasSiriSearchResult; 
@property (nonatomic,retain) GEOPDSiriSearchResult * siriSearchResult;                                      //@synthesize siriSearchResult=_siriSearchResult - In the implementation block
@property (nonatomic,readonly) char hasLocationDirectedSearchResult; 
@property (nonatomic,retain) GEOPDLocationDirectedSearchResult * locationDirectedSearchResult;              //@synthesize locationDirectedSearchResult=_locationDirectedSearchResult - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setSearchResult:(GEOPDSearchResult *)arg1 ;
-(void)setGeocodingResult:(GEOPDGeocodingResult *)arg1 ;
-(void)setCanonicalSearchResult:(GEOPDCanonicalLocationSearchResult *)arg1 ;
-(void)setReverseGeocodingResult:(GEOPDReverseGeocodingResult *)arg1 ;
-(void)setPlaceLookupResult:(GEOPDPlaceLookupResult *)arg1 ;
-(void)setMerchantLookupResult:(GEOPDMerchantLookupResult *)arg1 ;
-(void)setPlaceRefinementResult:(GEOPDPlaceRefinementResult *)arg1 ;
-(void)setSiriSearchResult:(GEOPDSiriSearchResult *)arg1 ;
-(void)setLocationDirectedSearchResult:(GEOPDLocationDirectedSearchResult *)arg1 ;
-(char)hasSearchResult;
-(char)hasGeocodingResult;
-(char)hasCanonicalSearchResult;
-(char)hasReverseGeocodingResult;
-(char)hasPlaceLookupResult;
-(char)hasMerchantLookupResult;
-(char)hasPlaceRefinementResult;
-(char)hasSiriSearchResult;
-(char)hasLocationDirectedSearchResult;
-(GEOPDSearchResult *)searchResult;
-(GEOPDGeocodingResult *)geocodingResult;
-(GEOPDCanonicalLocationSearchResult *)canonicalSearchResult;
-(GEOPDReverseGeocodingResult *)reverseGeocodingResult;
-(GEOPDPlaceLookupResult *)placeLookupResult;
-(GEOPDMerchantLookupResult *)merchantLookupResult;
-(GEOPDPlaceRefinementResult *)placeRefinementResult;
-(GEOPDSiriSearchResult *)siriSearchResult;
-(GEOPDLocationDirectedSearchResult *)locationDirectedSearchResult;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

