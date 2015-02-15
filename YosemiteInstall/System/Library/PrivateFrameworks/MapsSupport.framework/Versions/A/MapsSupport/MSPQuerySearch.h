/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:56:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/Versions/A/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <MapsSupport/NSCopying.h>

@class PBUnknownFields, NSString, GEOMapRegion;

@interface MSPQuerySearch : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _language;
	NSString* _locationDisplayString;
	GEOMapRegion* _mapRegion;
	NSString* _query;

}

@property (nonatomic,readonly) char hasQuery; 
@property (nonatomic,retain) NSString * query;                               //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) char hasLocationDisplayString; 
@property (nonatomic,retain) NSString * locationDisplayString;               //@synthesize locationDisplayString=_locationDisplayString - In the implementation block
@property (nonatomic,readonly) char hasLanguage; 
@property (nonatomic,retain) NSString * language;                            //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) char hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion;                       //@synthesize mapRegion=_mapRegion - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(void)setLocationDisplayString:(NSString *)arg1 ;
-(char)hasLocationDisplayString;
-(NSString *)locationDisplayString;
-(GEOMapRegion *)mapRegion;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)query;
-(void)setQuery:(NSString *)arg1 ;
-(char)hasQuery;
-(char)hasMapRegion;
-(PBUnknownFields *)unknownFields;
-(char)hasLanguage;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
@end
