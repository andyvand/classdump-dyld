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

@class GEOPDPlaceGlobalResult, NSMutableArray;

@interface GEOPDPlaceResponse : PBCodable <NSCopying> {

	GEOPDPlaceGlobalResult* _globalResult;
	NSMutableArray* _placeResults;
	int _requestType;
	int _status;
	SCD_Struct_GE5 _has;

}

@property (assign,nonatomic) char hasStatus; 
@property (assign,nonatomic) int status;                                         //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) char hasRequestType; 
@property (assign,nonatomic) int requestType;                                    //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,readonly) char hasGlobalResult; 
@property (nonatomic,retain) GEOPDPlaceGlobalResult * globalResult;              //@synthesize globalResult=_globalResult - In the implementation block
@property (nonatomic,retain) NSMutableArray * placeResults;                      //@synthesize placeResults=_placeResults - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)requestType;
-(void)setRequestType:(int)arg1 ;
-(void)setHasRequestType:(char)arg1 ;
-(char)hasRequestType;
-(id)_disambiguationLabels;
-(void)setHasStatus:(char)arg1 ;
-(char)hasStatus;
-(void)setPlaceResults:(NSMutableArray *)arg1 ;
-(void)addPlaceResult:(id)arg1 ;
-(unsigned long long)placeResultsCount;
-(void)clearPlaceResults;
-(id)placeResultAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)placeResults;
-(id)initWithGeocoderPlace:(id)arg1 ;
-(char)hasGlobalResult;
-(GEOPDPlaceGlobalResult *)globalResult;
-(void)setGlobalResult:(GEOPDPlaceGlobalResult *)arg1 ;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)status;
-(id)dictionaryRepresentation;
-(void)setStatus:(int)arg1 ;
@end

