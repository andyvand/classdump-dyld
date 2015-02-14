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

@class NSMutableArray, GEOMapRegion;

@interface GEOPDSearchResult : PBCodable <NSCopying> {

	NSMutableArray* _disambiguationLabels;
	GEOMapRegion* _displayMapRegion;

}

@property (nonatomic,readonly) char hasDisplayMapRegion; 
@property (nonatomic,retain) GEOMapRegion * displayMapRegion;                    //@synthesize displayMapRegion=_displayMapRegion - In the implementation block
@property (nonatomic,retain) NSMutableArray * disambiguationLabels;              //@synthesize disambiguationLabels=_disambiguationLabels - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDisplayMapRegion:(GEOMapRegion *)arg1 ;
-(void)setDisambiguationLabels:(NSMutableArray *)arg1 ;
-(void)addDisambiguationLabel:(id)arg1 ;
-(unsigned long long)disambiguationLabelsCount;
-(void)clearDisambiguationLabels;
-(id)disambiguationLabelAtIndex:(unsigned long long)arg1 ;
-(char)hasDisplayMapRegion;
-(GEOMapRegion *)displayMapRegion;
-(NSMutableArray *)disambiguationLabels;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

