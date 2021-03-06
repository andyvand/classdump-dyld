/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <GeoServices/NSCopying.h>

@class GEOPDAnalyticMetadata, GEOPDClientMetadata, NSMutableArray, GEOPDPlaceRequestParameters;

@interface GEOPDPlaceRequest : PBRequest <NSCopying> {

	GEOPDAnalyticMetadata* _analyticMetadata;
	GEOPDClientMetadata* _clientMetadata;
	NSMutableArray* _displayLocales;
	GEOPDPlaceRequestParameters* _placeRequestParameters;
	int _requestType;
	NSMutableArray* _requestedComponents;
	NSMutableArray* _spokenLocales;
	char _suppressResultsRequiringAttribution;
	SCD_Struct_GE5 _has;

}

@property (nonatomic,readonly) char hasAnalyticMetadata; 
@property (nonatomic,retain) GEOPDAnalyticMetadata * analyticMetadata;                          //@synthesize analyticMetadata=_analyticMetadata - In the implementation block
@property (nonatomic,readonly) char hasClientMetadata; 
@property (nonatomic,retain) GEOPDClientMetadata * clientMetadata;                              //@synthesize clientMetadata=_clientMetadata - In the implementation block
@property (nonatomic,retain) NSMutableArray * displayLocales;                                   //@synthesize displayLocales=_displayLocales - In the implementation block
@property (nonatomic,retain) NSMutableArray * spokenLocales;                                    //@synthesize spokenLocales=_spokenLocales - In the implementation block
@property (nonatomic,retain) NSMutableArray * requestedComponents;                              //@synthesize requestedComponents=_requestedComponents - In the implementation block
@property (assign,nonatomic) char hasSuppressResultsRequiringAttribution; 
@property (assign,nonatomic) char suppressResultsRequiringAttribution;                          //@synthesize suppressResultsRequiringAttribution=_suppressResultsRequiringAttribution - In the implementation block
@property (assign,nonatomic) char hasRequestType; 
@property (assign,nonatomic) int requestType;                                                   //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,readonly) char hasPlaceRequestParameters; 
@property (nonatomic,retain) GEOPDPlaceRequestParameters * placeRequestParameters;              //@synthesize placeRequestParameters=_placeRequestParameters - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)requestType;
-(void)setRequestType:(int)arg1 ;
-(void)setHasRequestType:(char)arg1 ;
-(char)hasRequestType;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setAnalyticMetadata:(GEOPDAnalyticMetadata *)arg1 ;
-(void)setClientMetadata:(GEOPDClientMetadata *)arg1 ;
-(void)setDisplayLocales:(NSMutableArray *)arg1 ;
-(void)setSpokenLocales:(NSMutableArray *)arg1 ;
-(void)setRequestedComponents:(NSMutableArray *)arg1 ;
-(void)setPlaceRequestParameters:(GEOPDPlaceRequestParameters *)arg1 ;
-(void)addDisplayLocale:(id)arg1 ;
-(void)addSpokenLocale:(id)arg1 ;
-(void)addRequestedComponent:(id)arg1 ;
-(unsigned long long)displayLocalesCount;
-(void)clearDisplayLocales;
-(id)displayLocaleAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)spokenLocalesCount;
-(void)clearSpokenLocales;
-(id)spokenLocaleAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)requestedComponentsCount;
-(void)clearRequestedComponents;
-(id)requestedComponentAtIndex:(unsigned long long)arg1 ;
-(char)hasAnalyticMetadata;
-(char)hasClientMetadata;
-(void)setSuppressResultsRequiringAttribution:(char)arg1 ;
-(void)setHasSuppressResultsRequiringAttribution:(char)arg1 ;
-(char)hasSuppressResultsRequiringAttribution;
-(char)hasPlaceRequestParameters;
-(GEOPDAnalyticMetadata *)analyticMetadata;
-(GEOPDClientMetadata *)clientMetadata;
-(NSMutableArray *)displayLocales;
-(NSMutableArray *)spokenLocales;
-(NSMutableArray *)requestedComponents;
-(char)suppressResultsRequiringAttribution;
-(GEOPDPlaceRequestParameters *)placeRequestParameters;
-(id)initWithMUIDs:(id)arg1 includeETA:(char)arg2 traits:(id)arg3 ;
-(id)initWithMapItemToRefine:(id)arg1 traits:(id)arg2 ;
-(char)isForwardGeocoderRequest;
-(id)initWithForwardGeocodeAddress:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)initWithForwardGeocodeAddressString:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)initWithReverseGeocodeCoordinate:(SCD_Struct_GE15)arg1 includeEntryPoints:(char)arg2 includeETA:(char)arg3 traits:(id)arg4 ;
-(id)initWithMerchantCode:(id)arg1 paymentNetwork:(id)arg2 transactionDate:(id)arg3 transactionLocation:(id)arg4 traits:(id)arg5 ;
-(id)initWithSearchQuery:(id)arg1 entryMetadata:(id)arg2 metadata:(id)arg3 maxResults:(unsigned)arg4 suppressResultsRequiringAttribution:(char)arg5 includeETA:(char)arg6 traits:(id)arg7 ;
-(id)initWithCanonicalLocationSearchQueryString:(id)arg1 traits:(id)arg2 ;
-(id)initWithCoordinateHint:(SCD_Struct_GE15)arg1 addressHint:(id)arg2 placeNameHint:(id)arg3 traits:(id)arg4 ;
-(id)initWithSearchURLQuery:(id)arg1 coordinate:(SCD_Struct_GE15)arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 maxResults:(unsigned)arg5 traits:(id)arg6 ;
-(id)initWithSearchURLQuery:(id)arg1 coordinate:(SCD_Struct_GE15)arg2 maxResults:(unsigned)arg3 traits:(id)arg4 ;
-(id)initWithTraits:(id)arg1 count:(unsigned)arg2 includeETA:(char)arg3 includeEntryPoints:(char)arg4 ;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

