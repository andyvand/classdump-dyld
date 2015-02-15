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

@class GEOLatLng, NSString, GEOPDViewportInfo;

@interface GEOPDLocationDirectedSearchParameters : PBCodable <NSCopying> {

	unsigned _maxResults;
	GEOLatLng* _searchLocation;
	NSString* _searchString;
	int _sortOrder;
	GEOPDViewportInfo* _viewportInfo;
	SCD_Struct_GE5 _has;

}

@property (assign,nonatomic) char hasSortOrder; 
@property (assign,nonatomic) int sortOrder;                                 //@synthesize sortOrder=_sortOrder - In the implementation block
@property (assign,nonatomic) char hasMaxResults; 
@property (assign,nonatomic) unsigned maxResults;                           //@synthesize maxResults=_maxResults - In the implementation block
@property (nonatomic,readonly) char hasSearchString; 
@property (nonatomic,retain) NSString * searchString;                       //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,readonly) char hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo;              //@synthesize viewportInfo=_viewportInfo - In the implementation block
@property (nonatomic,readonly) char hasSearchLocation; 
@property (nonatomic,retain) GEOLatLng * searchLocation;                    //@synthesize searchLocation=_searchLocation - In the implementation block
-(GEOPDViewportInfo *)viewportInfo;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setSearchLocation:(GEOLatLng *)arg1 ;
-(unsigned)maxResults;
-(void)setMaxResults:(unsigned)arg1 ;
-(void)setHasMaxResults:(char)arg1 ;
-(char)hasMaxResults;
-(char)hasSearchLocation;
-(GEOLatLng *)searchLocation;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(char)hasViewportInfo;
-(void)setSortOrder:(int)arg1 ;
-(void)setHasSortOrder:(char)arg1 ;
-(char)hasSortOrder;
-(char)hasSearchString;
-(id)initWithSearchURLQuery:(id)arg1 coordinate:(SCD_Struct_GE15)arg2 maxResults:(unsigned)arg3 ;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(int)sortOrder;
@end

