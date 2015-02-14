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

@class GEOCarInfo, GEOMapRegion, GEOPlaceActionDetails;

@interface GEOMapsUsageFeedbackCollection : PBCodable <NSCopying> {

	SCD_Struct_GE2 _sessionID;
	double _sessionRelativeTimestamp;
	double _zoomLevel;
	int _actionType;
	GEOCarInfo* _carInfo;
	GEOMapRegion* _mapRegion;
	GEOPlaceActionDetails* _placeActionDetails;
	int _sequenceNumber;
	SCD_Struct_GE71 _has;

}

@property (assign,nonatomic) char hasSessionID; 
@property (assign,nonatomic) SCD_Struct_GE2 sessionID;                                //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) char hasActionType; 
@property (assign,nonatomic) int actionType;                                          //@synthesize actionType=_actionType - In the implementation block
@property (assign,nonatomic) char hasSessionRelativeTimestamp; 
@property (assign,nonatomic) double sessionRelativeTimestamp;                         //@synthesize sessionRelativeTimestamp=_sessionRelativeTimestamp - In the implementation block
@property (nonatomic,readonly) char hasPlaceActionDetails; 
@property (nonatomic,retain) GEOPlaceActionDetails * placeActionDetails;              //@synthesize placeActionDetails=_placeActionDetails - In the implementation block
@property (nonatomic,readonly) char hasCarInfo; 
@property (nonatomic,retain) GEOCarInfo * carInfo;                                    //@synthesize carInfo=_carInfo - In the implementation block
@property (nonatomic,readonly) char hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion;                                //@synthesize mapRegion=_mapRegion - In the implementation block
@property (assign,nonatomic) char hasZoomLevel; 
@property (assign,nonatomic) double zoomLevel;                                        //@synthesize zoomLevel=_zoomLevel - In the implementation block
@property (assign,nonatomic) char hasSequenceNumber; 
@property (assign,nonatomic) int sequenceNumber;                                      //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
+(id)feedbackCollectionWithTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4 ;
+(id)feedbackCollectionWithTraits:(id)arg1 flyoverAnimationID:(unsigned long long)arg2 timestamp:(double)arg3 resultIndex:(int)arg4 ;
-(GEOMapRegion *)mapRegion;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(void)setZoomLevel:(double)arg1 ;
-(double)zoomLevel;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasMapRegion;
-(void)setHasSessionID:(char)arg1 ;
-(char)hasSessionID;
-(void)setHasSequenceNumber:(char)arg1 ;
-(char)hasSequenceNumber;
-(void)setHasActionType:(char)arg1 ;
-(char)hasActionType;
-(id)initWithTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4 ;
-(void)setPlaceActionDetails:(GEOPlaceActionDetails *)arg1 ;
-(void)setCarInfo:(GEOCarInfo *)arg1 ;
-(void)setSessionRelativeTimestamp:(double)arg1 ;
-(id)initWithTraits:(id)arg1 flyoverAnimationID:(unsigned long long)arg2 timestamp:(double)arg3 resultIndex:(int)arg4 ;
-(void)setHasZoomLevel:(char)arg1 ;
-(char)hasZoomLevel;
-(void)setHasSessionRelativeTimestamp:(char)arg1 ;
-(char)hasSessionRelativeTimestamp;
-(char)hasPlaceActionDetails;
-(char)hasCarInfo;
-(double)sessionRelativeTimestamp;
-(GEOPlaceActionDetails *)placeActionDetails;
-(GEOCarInfo *)carInfo;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)sequenceNumber;
-(int)actionType;
-(SCD_Struct_GE2)sessionID;
-(void)setSessionID:(SCD_Struct_GE2)arg1 ;
-(void)setActionType:(int)arg1 ;
-(void)setSequenceNumber:(int)arg1 ;
@end

