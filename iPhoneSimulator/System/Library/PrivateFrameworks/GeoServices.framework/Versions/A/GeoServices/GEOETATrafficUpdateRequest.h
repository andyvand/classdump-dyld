/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:51 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <GeoServices/NSCopying.h>

@class GEOClientCapabilities, GEOLocation, NSMutableArray, NSData, GEORouteAttributes;

@interface GEOETATrafficUpdateRequest : PBRequest <NSCopying> {

	SCD_Struct_GE2 _sessionID;
	GEOClientCapabilities* _clientCapabilities;
	GEOLocation* _currentUserLocation;
	NSMutableArray* _destinationWaypointTypeds;
	NSData* _directionsResponseID;
	GEORouteAttributes* _routeAttributes;
	NSMutableArray* _routes;
	NSMutableArray* _serviceTags;
	char _includeBetterRouteSuggestion;
	SCD_Struct_GE5 _has;

}

@property (nonatomic,readonly) char hasCurrentUserLocation; 
@property (nonatomic,retain) GEOLocation * currentUserLocation;                       //@synthesize currentUserLocation=_currentUserLocation - In the implementation block
@property (nonatomic,readonly) char hasRouteAttributes; 
@property (nonatomic,retain) GEORouteAttributes * routeAttributes;                    //@synthesize routeAttributes=_routeAttributes - In the implementation block
@property (assign,nonatomic) char hasIncludeBetterRouteSuggestion; 
@property (assign,nonatomic) char includeBetterRouteSuggestion;                       //@synthesize includeBetterRouteSuggestion=_includeBetterRouteSuggestion - In the implementation block
@property (nonatomic,retain) NSMutableArray * routes;                                 //@synthesize routes=_routes - In the implementation block
@property (nonatomic,readonly) char hasClientCapabilities; 
@property (nonatomic,retain) GEOClientCapabilities * clientCapabilities;              //@synthesize clientCapabilities=_clientCapabilities - In the implementation block
@property (nonatomic,readonly) char hasDirectionsResponseID; 
@property (nonatomic,retain) NSData * directionsResponseID;                           //@synthesize directionsResponseID=_directionsResponseID - In the implementation block
@property (assign,nonatomic) char hasSessionID; 
@property (assign,nonatomic) SCD_Struct_GE2 sessionID;                                //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) NSMutableArray * destinationWaypointTypeds;              //@synthesize destinationWaypointTypeds=_destinationWaypointTypeds - In the implementation block
@property (nonatomic,retain) NSMutableArray * serviceTags;                            //@synthesize serviceTags=_serviceTags - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDirectionsResponseID:(NSData *)arg1 ;
-(char)hasDirectionsResponseID;
-(NSData *)directionsResponseID;
-(void)setHasSessionID:(char)arg1 ;
-(char)hasSessionID;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setRouteAttributes:(GEORouteAttributes *)arg1 ;
-(void)setCurrentUserLocation:(GEOLocation *)arg1 ;
-(void)setClientCapabilities:(GEOClientCapabilities *)arg1 ;
-(void)setServiceTags:(NSMutableArray *)arg1 ;
-(void)addServiceTag:(id)arg1 ;
-(unsigned long long)serviceTagsCount;
-(void)clearServiceTags;
-(id)serviceTagAtIndex:(unsigned long long)arg1 ;
-(char)hasRouteAttributes;
-(char)hasCurrentUserLocation;
-(char)hasClientCapabilities;
-(GEORouteAttributes *)routeAttributes;
-(GEOLocation *)currentUserLocation;
-(GEOClientCapabilities *)clientCapabilities;
-(NSMutableArray *)serviceTags;
-(void)setRoutes:(NSMutableArray *)arg1 ;
-(void)addRoute:(id)arg1 ;
-(unsigned long long)routesCount;
-(void)clearRoutes;
-(id)routeAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)routes;
-(void)setDestinationWaypointTypeds:(NSMutableArray *)arg1 ;
-(void)addDestinationWaypointTyped:(id)arg1 ;
-(unsigned long long)destinationWaypointTypedsCount;
-(void)clearDestinationWaypointTypeds;
-(id)destinationWaypointTypedAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)destinationWaypointTypeds;
-(char)includeBetterRouteSuggestion;
-(void)setIncludeBetterRouteSuggestion:(char)arg1 ;
-(void)setHasIncludeBetterRouteSuggestion:(char)arg1 ;
-(char)hasIncludeBetterRouteSuggestion;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(SCD_Struct_GE2)sessionID;
-(void)setSessionID:(SCD_Struct_GE2)arg1 ;
@end

