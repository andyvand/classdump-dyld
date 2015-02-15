/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/Versions/A/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <MapsSupport/NSCopying.h>

@class PBUnknownFields, MSPDirectionsSearch, NSString, MSPQuerySearch;

@interface MSPSearchRequestStorage : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _position;
	double _timestamp;
	MSPDirectionsSearch* _directionsSearch;
	NSString* _identifier;
	MSPQuerySearch* _querySearch;
	int _searchType;
	SCD_Struct_MS1 _has;

}

@property (assign,nonatomic) char hasSearchType; 
@property (assign,nonatomic) int searchType;                                      //@synthesize searchType=_searchType - In the implementation block
@property (nonatomic,readonly) char hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) double timestamp;                                    //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasPosition; 
@property (assign,nonatomic) double position;                                     //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) char hasQuerySearch; 
@property (nonatomic,retain) MSPQuerySearch * querySearch;                        //@synthesize querySearch=_querySearch - In the implementation block
@property (nonatomic,readonly) char hasDirectionsSearch; 
@property (nonatomic,retain) MSPDirectionsSearch * directionsSearch;              //@synthesize directionsSearch=_directionsSearch - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(int)searchType;
-(void)setSearchType:(int)arg1 ;
-(void)setHasPosition:(char)arg1 ;
-(void)setQuerySearch:(MSPQuerySearch *)arg1 ;
-(void)setDirectionsSearch:(MSPDirectionsSearch *)arg1 ;
-(void)setHasSearchType:(char)arg1 ;
-(char)hasSearchType;
-(char)hasQuerySearch;
-(char)hasDirectionsSearch;
-(MSPQuerySearch *)querySearch;
-(MSPDirectionsSearch *)directionsSearch;
-(void)setTimestamp:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(char)arg1 ;
-(char)hasTimestamp;
-(PBUnknownFields *)unknownFields;
-(char)hasPosition;
-(char)hasIdentifier;
-(void)setPosition:(double)arg1 ;
-(id)description;
-(double)position;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)timestamp;
-(id)dictionaryRepresentation;
@end

