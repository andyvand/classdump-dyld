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

@class GEOMapRegion, NSMutableArray, NSData;

@interface GEOPlaceSearchResponse : PBCodable <NSCopying> {

	double _turnaroundTime;
	GEOMapRegion* _mapRegion;
	NSMutableArray* _namedFeatures;
	NSMutableArray* _placeResults;
	int _status;
	int _statusCodeInfo;
	NSMutableArray* _suggestionEntryLists;
	NSData* _suggestionMetadata;
	SCD_Struct_GE5 _has;

}

@property (assign,nonatomic) int status;                                         //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSMutableArray * placeResults;                      //@synthesize placeResults=_placeResults - In the implementation block
@property (nonatomic,readonly) char hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion;                           //@synthesize mapRegion=_mapRegion - In the implementation block
@property (nonatomic,retain) NSMutableArray * suggestionEntryLists;              //@synthesize suggestionEntryLists=_suggestionEntryLists - In the implementation block
@property (nonatomic,readonly) char hasSuggestionMetadata; 
@property (nonatomic,retain) NSData * suggestionMetadata;                        //@synthesize suggestionMetadata=_suggestionMetadata - In the implementation block
@property (nonatomic,retain) NSMutableArray * namedFeatures;                     //@synthesize namedFeatures=_namedFeatures - In the implementation block
@property (assign,nonatomic) char hasStatusCodeInfo; 
@property (assign,nonatomic) int statusCodeInfo;                                 //@synthesize statusCodeInfo=_statusCodeInfo - In the implementation block
@property (assign,nonatomic) char hasTurnaroundTime; 
@property (assign,nonatomic) double turnaroundTime;                              //@synthesize turnaroundTime=_turnaroundTime - In the implementation block
-(GEOMapRegion *)mapRegion;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasMapRegion;
-(void)setNamedFeatures:(NSMutableArray *)arg1 ;
-(unsigned long long)namedFeaturesCount;
-(void)clearNamedFeatures;
-(NSMutableArray *)namedFeatures;
-(void)setPlaceResults:(NSMutableArray *)arg1 ;
-(void)setSuggestionEntryLists:(NSMutableArray *)arg1 ;
-(void)setSuggestionMetadata:(NSData *)arg1 ;
-(void)addPlaceResult:(id)arg1 ;
-(void)addSuggestionEntryLists:(id)arg1 ;
-(void)addNamedFeatures:(id)arg1 ;
-(unsigned long long)placeResultsCount;
-(void)clearPlaceResults;
-(id)placeResultAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)suggestionEntryListsCount;
-(void)clearSuggestionEntryLists;
-(id)suggestionEntryListsAtIndex:(unsigned long long)arg1 ;
-(id)namedFeaturesAtIndex:(unsigned long long)arg1 ;
-(char)hasSuggestionMetadata;
-(void)setStatusCodeInfo:(int)arg1 ;
-(void)setHasStatusCodeInfo:(char)arg1 ;
-(char)hasStatusCodeInfo;
-(void)setTurnaroundTime:(double)arg1 ;
-(void)setHasTurnaroundTime:(char)arg1 ;
-(char)hasTurnaroundTime;
-(NSMutableArray *)placeResults;
-(NSMutableArray *)suggestionEntryLists;
-(NSData *)suggestionMetadata;
-(int)statusCodeInfo;
-(double)turnaroundTime;
-(void)_geoMapItemsWithTraits:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)status;
-(id)dictionaryRepresentation;
-(void)setStatus:(int)arg1 ;
@end

