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

@class NSData;

@interface GEORPDirectionsProblem : PBCodable <NSCopying> {

	NSData* _directionsResponseId;
	NSData* _overviewScreenshotImageData;
	unsigned _problematicStepIndex;
	SCD_Struct_GE4 _has;

}

@property (nonatomic,readonly) char hasDirectionsResponseId; 
@property (nonatomic,retain) NSData * directionsResponseId;                      //@synthesize directionsResponseId=_directionsResponseId - In the implementation block
@property (nonatomic,readonly) char hasOverviewScreenshotImageData; 
@property (nonatomic,retain) NSData * overviewScreenshotImageData;               //@synthesize overviewScreenshotImageData=_overviewScreenshotImageData - In the implementation block
@property (assign,nonatomic) char hasProblematicStepIndex; 
@property (assign,nonatomic) unsigned problematicStepIndex;                      //@synthesize problematicStepIndex=_problematicStepIndex - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDirectionsResponseId:(NSData *)arg1 ;
-(void)setOverviewScreenshotImageData:(NSData *)arg1 ;
-(char)hasDirectionsResponseId;
-(char)hasOverviewScreenshotImageData;
-(void)setProblematicStepIndex:(unsigned)arg1 ;
-(void)setHasProblematicStepIndex:(char)arg1 ;
-(char)hasProblematicStepIndex;
-(NSData *)directionsResponseId;
-(NSData *)overviewScreenshotImageData;
-(unsigned)problematicStepIndex;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

