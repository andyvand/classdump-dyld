/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:40 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSMutableArray;

@interface GEOVJunction : PBCodable <NSCopying> {

	NSMutableArray* _connectingRoads;
	NSMutableArray* _laneConnections;

}

@property (nonatomic,retain) NSMutableArray * connectingRoads;              //@synthesize connectingRoads=_connectingRoads - In the implementation block
@property (nonatomic,retain) NSMutableArray * laneConnections;              //@synthesize laneConnections=_laneConnections - In the implementation block
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)laneConnections;
-(unsigned long long)laneConnectionsCount;
-(void)setConnectingRoads:(NSMutableArray *)arg1 ;
-(void)setLaneConnections:(NSMutableArray *)arg1 ;
-(void)addConnectingRoad:(id)arg1 ;
-(void)addLaneConnections:(id)arg1 ;
-(unsigned long long)connectingRoadsCount;
-(void)clearConnectingRoads;
-(id)connectingRoadAtIndex:(unsigned long long)arg1 ;
-(void)clearLaneConnections;
-(id)laneConnectionsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)connectingRoads;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end
