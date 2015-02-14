/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class GEOLatLng;

@interface GEORPCorrectedCoordinate : PBCodable <NSCopying> {

	GEOLatLng* _correctedCoordinate;
	GEOLatLng* _originalCoordinate;

}

@property (nonatomic,readonly) char hasOriginalCoordinate; 
@property (nonatomic,retain) GEOLatLng * originalCoordinate;               //@synthesize originalCoordinate=_originalCoordinate - In the implementation block
@property (nonatomic,readonly) char hasCorrectedCoordinate; 
@property (nonatomic,retain) GEOLatLng * correctedCoordinate;              //@synthesize correctedCoordinate=_correctedCoordinate - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCorrectedCoordinate:(GEOLatLng *)arg1 ;
-(char)hasCorrectedCoordinate;
-(GEOLatLng *)correctedCoordinate;
-(GEOLatLng *)originalCoordinate;
-(void)setOriginalCoordinate:(GEOLatLng *)arg1 ;
-(char)hasOriginalCoordinate;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

