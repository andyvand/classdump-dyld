/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSMutableArray;

@interface GEOETATrafficUpdateResponse : PBCodable <NSCopying> {

	NSMutableArray* _routes;
	int _status;
	SCD_Struct_GE4 _has;

}

@property (assign,nonatomic) char hasStatus; 
@property (assign,nonatomic) int status;                           //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSMutableArray * routes;              //@synthesize routes=_routes - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRoutes:(NSMutableArray *)arg1 ;
-(void)addRoute:(id)arg1 ;
-(unsigned long long)routesCount;
-(void)clearRoutes;
-(id)routeAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)routes;
-(void)setHasStatus:(char)arg1 ;
-(char)hasStatus;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)status;
-(id)dictionaryRepresentation;
-(void)setStatus:(int)arg1 ;
@end

