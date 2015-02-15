/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSString, GEORPCorrectedCoordinate, NSMutableArray, GEORPCorrectedLabel, GEORPMapLocation, GEORPCorrectedSearch, GEORPDirectionsProblem, GEORPPlaceProblem;

@interface GEORPProblemCorrections : PBCodable <NSCopying> {

	NSString* _comments;
	GEORPCorrectedCoordinate* _correctedCoordinate;
	NSMutableArray* _correctedFields;
	GEORPCorrectedLabel* _correctedLabel;
	GEORPMapLocation* _correctedMapLocation;
	GEORPCorrectedSearch* _correctedSearch;
	GEORPDirectionsProblem* _directionsProblem;
	NSMutableArray* _photos;
	GEORPPlaceProblem* _placeProblem;

}

@property (nonatomic,retain) NSMutableArray * correctedFields;                            //@synthesize correctedFields=_correctedFields - In the implementation block
@property (nonatomic,readonly) char hasCorrectedLabel; 
@property (nonatomic,retain) GEORPCorrectedLabel * correctedLabel;                        //@synthesize correctedLabel=_correctedLabel - In the implementation block
@property (nonatomic,readonly) char hasCorrectedCoordinate; 
@property (nonatomic,retain) GEORPCorrectedCoordinate * correctedCoordinate;              //@synthesize correctedCoordinate=_correctedCoordinate - In the implementation block
@property (nonatomic,readonly) char hasCorrectedSearch; 
@property (nonatomic,retain) GEORPCorrectedSearch * correctedSearch;                      //@synthesize correctedSearch=_correctedSearch - In the implementation block
@property (nonatomic,readonly) char hasCorrectedMapLocation; 
@property (nonatomic,retain) GEORPMapLocation * correctedMapLocation;                     //@synthesize correctedMapLocation=_correctedMapLocation - In the implementation block
@property (nonatomic,readonly) char hasComments; 
@property (nonatomic,retain) NSString * comments;                                         //@synthesize comments=_comments - In the implementation block
@property (nonatomic,retain) NSMutableArray * photos;                                     //@synthesize photos=_photos - In the implementation block
@property (nonatomic,readonly) char hasPlaceProblem; 
@property (nonatomic,retain) GEORPPlaceProblem * placeProblem;                            //@synthesize placeProblem=_placeProblem - In the implementation block
@property (nonatomic,readonly) char hasDirectionsProblem; 
@property (nonatomic,retain) GEORPDirectionsProblem * directionsProblem;                  //@synthesize directionsProblem=_directionsProblem - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setPhotos:(NSMutableArray *)arg1 ;
-(void)addPhoto:(id)arg1 ;
-(unsigned long long)photosCount;
-(void)clearPhotos;
-(id)photoAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)photos;
-(void)setCorrectedFields:(NSMutableArray *)arg1 ;
-(void)setCorrectedLabel:(GEORPCorrectedLabel *)arg1 ;
-(void)setCorrectedCoordinate:(GEORPCorrectedCoordinate *)arg1 ;
-(void)setCorrectedSearch:(GEORPCorrectedSearch *)arg1 ;
-(void)setCorrectedMapLocation:(GEORPMapLocation *)arg1 ;
-(void)setPlaceProblem:(GEORPPlaceProblem *)arg1 ;
-(void)setDirectionsProblem:(GEORPDirectionsProblem *)arg1 ;
-(void)addCorrectedField:(id)arg1 ;
-(unsigned long long)correctedFieldsCount;
-(void)clearCorrectedFields;
-(id)correctedFieldAtIndex:(unsigned long long)arg1 ;
-(char)hasCorrectedLabel;
-(char)hasCorrectedCoordinate;
-(char)hasCorrectedSearch;
-(char)hasCorrectedMapLocation;
-(char)hasComments;
-(char)hasPlaceProblem;
-(char)hasDirectionsProblem;
-(NSMutableArray *)correctedFields;
-(GEORPCorrectedLabel *)correctedLabel;
-(GEORPCorrectedCoordinate *)correctedCoordinate;
-(GEORPCorrectedSearch *)correctedSearch;
-(GEORPMapLocation *)correctedMapLocation;
-(GEORPPlaceProblem *)placeProblem;
-(GEORPDirectionsProblem *)directionsProblem;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)comments;
-(void)setComments:(NSString *)arg1 ;
@end

