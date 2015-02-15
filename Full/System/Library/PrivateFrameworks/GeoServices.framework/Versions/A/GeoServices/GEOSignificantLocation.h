/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSString, GEOLocation;

@interface GEOSignificantLocation : PBCodable <NSCopying> {

	double _confidence;
	NSString* _identifier;
	GEOLocation* _location;
	unsigned _locationIndex;
	unsigned _numberOfVisitsBucket;
	SCD_Struct_GE65 _has;

}

@property (nonatomic,readonly) char hasLocation; 
@property (nonatomic,retain) GEOLocation * location;                     //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) char hasLocationIndex; 
@property (assign,nonatomic) unsigned locationIndex;                     //@synthesize locationIndex=_locationIndex - In the implementation block
@property (assign,nonatomic) char hasNumberOfVisitsBucket; 
@property (assign,nonatomic) unsigned numberOfVisitsBucket;              //@synthesize numberOfVisitsBucket=_numberOfVisitsBucket - In the implementation block
@property (nonatomic,readonly) char hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) char hasConfidence; 
@property (assign,nonatomic) double confidence;                          //@synthesize confidence=_confidence - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasLocation;
-(double)confidence;
-(char)hasIdentifier;
-(void)setLocationIndex:(unsigned)arg1 ;
-(void)setHasLocationIndex:(char)arg1 ;
-(char)hasLocationIndex;
-(void)setNumberOfVisitsBucket:(unsigned)arg1 ;
-(void)setHasNumberOfVisitsBucket:(char)arg1 ;
-(char)hasNumberOfVisitsBucket;
-(void)setConfidence:(double)arg1 ;
-(void)setHasConfidence:(char)arg1 ;
-(char)hasConfidence;
-(unsigned)locationIndex;
-(unsigned)numberOfVisitsBucket;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(GEOLocation *)location;
-(void)setLocation:(GEOLocation *)arg1 ;
@end

