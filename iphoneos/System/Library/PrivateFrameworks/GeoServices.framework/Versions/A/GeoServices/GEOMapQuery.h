/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:38 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class GEOMapRegion, GEOPlaceSearchRequest, NSString, GEOLocation;

@interface GEOMapQuery : PBCodable <NSCopying> {

	SCD_Struct_GE2 _sessionID;
	int _clientImgFmt;
	int _clientImgMaxHeight;
	int _clientImgMaxWidth;
	int _mapCenterX;
	int _mapCenterY;
	GEOMapRegion* _mapRegion;
	int _mapSpanX;
	int _mapSpanY;
	GEOPlaceSearchRequest* _placeSearchRequest;
	NSString* _query;
	int _requestType;
	int _tilesizeX;
	int _tilesizeY;
	GEOLocation* _userLocation;
	int _zoomlevel;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,readonly) char hasQuery; 
@property (nonatomic,retain) NSString * query;                                        //@synthesize query=_query - In the implementation block
@property (assign,nonatomic) char hasRequestType; 
@property (assign,nonatomic) int requestType;                                         //@synthesize requestType=_requestType - In the implementation block
@property (assign,nonatomic) char hasMapCenterX; 
@property (assign,nonatomic) int mapCenterX;                                          //@synthesize mapCenterX=_mapCenterX - In the implementation block
@property (assign,nonatomic) char hasMapCenterY; 
@property (assign,nonatomic) int mapCenterY;                                          //@synthesize mapCenterY=_mapCenterY - In the implementation block
@property (assign,nonatomic) char hasMapSpanX; 
@property (assign,nonatomic) int mapSpanX;                                            //@synthesize mapSpanX=_mapSpanX - In the implementation block
@property (assign,nonatomic) char hasMapSpanY; 
@property (assign,nonatomic) int mapSpanY;                                            //@synthesize mapSpanY=_mapSpanY - In the implementation block
@property (assign,nonatomic) char hasZoomlevel; 
@property (assign,nonatomic) int zoomlevel;                                           //@synthesize zoomlevel=_zoomlevel - In the implementation block
@property (assign,nonatomic) char hasClientImgFmt; 
@property (assign,nonatomic) int clientImgFmt;                                        //@synthesize clientImgFmt=_clientImgFmt - In the implementation block
@property (assign,nonatomic) char hasTilesizeX; 
@property (assign,nonatomic) int tilesizeX;                                           //@synthesize tilesizeX=_tilesizeX - In the implementation block
@property (assign,nonatomic) char hasTilesizeY; 
@property (assign,nonatomic) int tilesizeY;                                           //@synthesize tilesizeY=_tilesizeY - In the implementation block
@property (assign,nonatomic) char hasClientImgMaxWidth; 
@property (assign,nonatomic) int clientImgMaxWidth;                                   //@synthesize clientImgMaxWidth=_clientImgMaxWidth - In the implementation block
@property (assign,nonatomic) char hasClientImgMaxHeight; 
@property (assign,nonatomic) int clientImgMaxHeight;                                  //@synthesize clientImgMaxHeight=_clientImgMaxHeight - In the implementation block
@property (nonatomic,readonly) char hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion;                                //@synthesize mapRegion=_mapRegion - In the implementation block
@property (nonatomic,readonly) char hasUserLocation; 
@property (nonatomic,retain) GEOLocation * userLocation;                              //@synthesize userLocation=_userLocation - In the implementation block
@property (assign,nonatomic) char hasSessionID; 
@property (assign,nonatomic) SCD_Struct_GE2 sessionID;                                //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) char hasPlaceSearchRequest; 
@property (nonatomic,retain) GEOPlaceSearchRequest * placeSearchRequest;              //@synthesize placeSearchRequest=_placeSearchRequest - In the implementation block
-(GEOMapRegion *)mapRegion;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)query;
-(void)setQuery:(NSString *)arg1 ;
-(int)requestType;
-(void)setUserLocation:(GEOLocation *)arg1 ;
-(void)setPlaceSearchRequest:(GEOPlaceSearchRequest *)arg1 ;
-(char)hasQuery;
-(void)setRequestType:(int)arg1 ;
-(void)setHasRequestType:(char)arg1 ;
-(char)hasRequestType;
-(void)setMapCenterX:(int)arg1 ;
-(void)setHasMapCenterX:(char)arg1 ;
-(char)hasMapCenterX;
-(void)setMapCenterY:(int)arg1 ;
-(void)setHasMapCenterY:(char)arg1 ;
-(char)hasMapCenterY;
-(void)setMapSpanX:(int)arg1 ;
-(void)setHasMapSpanX:(char)arg1 ;
-(char)hasMapSpanX;
-(void)setMapSpanY:(int)arg1 ;
-(void)setHasMapSpanY:(char)arg1 ;
-(char)hasMapSpanY;
-(void)setZoomlevel:(int)arg1 ;
-(void)setHasZoomlevel:(char)arg1 ;
-(char)hasZoomlevel;
-(void)setClientImgFmt:(int)arg1 ;
-(void)setHasClientImgFmt:(char)arg1 ;
-(char)hasClientImgFmt;
-(void)setTilesizeX:(int)arg1 ;
-(void)setHasTilesizeX:(char)arg1 ;
-(char)hasTilesizeX;
-(void)setTilesizeY:(int)arg1 ;
-(void)setHasTilesizeY:(char)arg1 ;
-(char)hasTilesizeY;
-(void)setClientImgMaxWidth:(int)arg1 ;
-(void)setHasClientImgMaxWidth:(char)arg1 ;
-(char)hasClientImgMaxWidth;
-(void)setClientImgMaxHeight:(int)arg1 ;
-(void)setHasClientImgMaxHeight:(char)arg1 ;
-(char)hasClientImgMaxHeight;
-(char)hasMapRegion;
-(char)hasUserLocation;
-(void)setHasSessionID:(char)arg1 ;
-(char)hasSessionID;
-(char)hasPlaceSearchRequest;
-(int)mapCenterX;
-(int)mapCenterY;
-(int)mapSpanX;
-(int)mapSpanY;
-(int)zoomlevel;
-(int)clientImgFmt;
-(int)tilesizeX;
-(int)tilesizeY;
-(int)clientImgMaxWidth;
-(int)clientImgMaxHeight;
-(GEOLocation *)userLocation;
-(GEOPlaceSearchRequest *)placeSearchRequest;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(SCD_Struct_GE2)sessionID;
-(void)setSessionID:(SCD_Struct_GE2)arg1 ;
@end

