/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:51 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSString, NSMutableArray, GEOLatLng, NSData;

@interface GEOSuggestionEntry : PBCodable <NSCopying> {

	SCD_Struct_GE215* _textHighlights;
	unsigned long long _textHighlightsCount;
	unsigned long long _textHighlightsSpace;
	NSString* _calloutTitle;
	NSMutableArray* _displayLines;
	NSString* _iconID;
	GEOLatLng* _latlng;
	NSMutableArray* _namedFeatures;
	NSString* _searchQueryDisplayString;
	NSData* _suggestionEntryMetadata;

}

@property (nonatomic,retain) NSMutableArray * displayLines;                         //@synthesize displayLines=_displayLines - In the implementation block
@property (nonatomic,readonly) unsigned long long textHighlightsCount; 
@property (nonatomic,readonly) SCD_Struct_GE215* textHighlights; 
@property (nonatomic,readonly) char hasIconID; 
@property (nonatomic,retain) NSString * iconID;                                     //@synthesize iconID=_iconID - In the implementation block
@property (nonatomic,readonly) char hasLatlng; 
@property (nonatomic,retain) GEOLatLng * latlng;                                    //@synthesize latlng=_latlng - In the implementation block
@property (nonatomic,readonly) char hasSuggestionEntryMetadata; 
@property (nonatomic,retain) NSData * suggestionEntryMetadata;                      //@synthesize suggestionEntryMetadata=_suggestionEntryMetadata - In the implementation block
@property (nonatomic,readonly) char hasSearchQueryDisplayString; 
@property (nonatomic,retain) NSString * searchQueryDisplayString;                   //@synthesize searchQueryDisplayString=_searchQueryDisplayString - In the implementation block
@property (nonatomic,readonly) char hasCalloutTitle; 
@property (nonatomic,retain) NSString * calloutTitle;                               //@synthesize calloutTitle=_calloutTitle - In the implementation block
@property (nonatomic,retain) NSMutableArray * namedFeatures;                        //@synthesize namedFeatures=_namedFeatures - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setNamedFeatures:(NSMutableArray *)arg1 ;
-(void)addNamedFeature:(id)arg1 ;
-(unsigned long long)namedFeaturesCount;
-(void)clearNamedFeatures;
-(id)namedFeatureAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)namedFeatures;
-(void)setSuggestionEntryMetadata:(NSData *)arg1 ;
-(char)hasSuggestionEntryMetadata;
-(NSData *)suggestionEntryMetadata;
-(NSMutableArray *)displayLines;
-(unsigned long long)textHighlightsCount;
-(SCD_Struct_GE215*)textHighlights;
-(char)hasSearchQueryDisplayString;
-(NSString *)searchQueryDisplayString;
-(char)hasCalloutTitle;
-(NSString *)calloutTitle;
-(char)hasLatlng;
-(GEOLatLng *)latlng;
-(void)setDisplayLines:(NSMutableArray *)arg1 ;
-(void)clearTextHighlights;
-(void)setIconID:(NSString *)arg1 ;
-(void)setLatlng:(GEOLatLng *)arg1 ;
-(void)setSearchQueryDisplayString:(NSString *)arg1 ;
-(void)setCalloutTitle:(NSString *)arg1 ;
-(void)addDisplayLine:(id)arg1 ;
-(unsigned long long)displayLinesCount;
-(void)clearDisplayLines;
-(id)displayLineAtIndex:(unsigned long long)arg1 ;
-(SCD_Struct_GE215)textHighlightsAtIndex:(unsigned long long)arg1 ;
-(void)addTextHighlights:(SCD_Struct_GE215)arg1 ;
-(void)setTextHighlights:(SCD_Struct_GE215*)arg1 count:(unsigned long long)arg2 ;
-(char)hasIconID;
-(NSString *)iconID;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

