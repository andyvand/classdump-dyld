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

@class GEOVCharacteristics, NSData, NSMutableArray;

@interface GEOVFeature : PBCodable <NSCopying> {

	SCD_Struct_GE57* _extrusionHeights;
	SCD_Struct_GE57* _labelOffsets;
	SCD_Struct_GE57* _shieldLabelOffsets;
	SCD_Struct_GE57* _shieldLabelTypes;
	unsigned long long _businessID;
	long long _uID;
	unsigned _centerlineCount;
	unsigned _centerlineStart;
	GEOVCharacteristics* _characteristics;
	float _endLaneWidth;
	float _endOffset;
	float _endRoadOffset;
	unsigned _entryPointMask;
	int _formOfWay;
	float _minzoomRank;
	NSData* _oBSOLETECenterlines;
	NSData* _oBSOLETEShieldLabelPositions;
	NSData* _oBSOLETEVertexLabelPositions;
	int _placeType;
	NSData* _pointLabelPosition;
	int _roadClass;
	int _sectionCount;
	int _sectionStart;
	int _speedLimit;
	float _startLaneWidth;
	float _startOffset;
	float _startRoadOffset;
	NSMutableArray* _styleAttributes;
	unsigned _styleGroup;
	int _travelDirection;
	int _type;
	char _polyIsConvex;
	SCD_Struct_GE143 _has;

}

@property (nonatomic,readonly) unsigned long long labelOffsetsCount; 
@property (nonatomic,readonly) int* labelOffsets; 
@property (nonatomic,readonly) unsigned long long shieldLabelOffsetsCount; 
@property (nonatomic,readonly) int* shieldLabelOffsets; 
@property (nonatomic,readonly) unsigned long long shieldLabelTypesCount; 
@property (nonatomic,readonly) int* shieldLabelTypes; 
@property (assign,nonatomic) char hasUID; 
@property (assign,nonatomic) long long uID;                                             //@synthesize uID=_uID - In the implementation block
@property (assign,nonatomic) char hasBusinessID; 
@property (assign,nonatomic) unsigned long long businessID;                             //@synthesize businessID=_businessID - In the implementation block
@property (assign,nonatomic) char hasPlaceType; 
@property (assign,nonatomic) int placeType;                                             //@synthesize placeType=_placeType - In the implementation block
@property (assign,nonatomic) char hasPolyIsConvex; 
@property (assign,nonatomic) char polyIsConvex;                                         //@synthesize polyIsConvex=_polyIsConvex - In the implementation block
@property (assign,nonatomic) char hasRoadClass; 
@property (assign,nonatomic) int roadClass;                                             //@synthesize roadClass=_roadClass - In the implementation block
@property (assign,nonatomic) char hasFormOfWay; 
@property (assign,nonatomic) int formOfWay;                                             //@synthesize formOfWay=_formOfWay - In the implementation block
@property (assign,nonatomic) char hasTravelDirection; 
@property (assign,nonatomic) int travelDirection;                                       //@synthesize travelDirection=_travelDirection - In the implementation block
@property (assign,nonatomic) char hasSectionStart; 
@property (assign,nonatomic) int sectionStart;                                          //@synthesize sectionStart=_sectionStart - In the implementation block
@property (assign,nonatomic) char hasSectionCount; 
@property (assign,nonatomic) int sectionCount;                                          //@synthesize sectionCount=_sectionCount - In the implementation block
@property (nonatomic,readonly) char hasPointLabelPosition; 
@property (nonatomic,retain) NSData * pointLabelPosition;                               //@synthesize pointLabelPosition=_pointLabelPosition - In the implementation block
@property (nonatomic,readonly) char hasOBSOLETEVertexLabelPositions; 
@property (nonatomic,retain) NSData * oBSOLETEVertexLabelPositions;                     //@synthesize oBSOLETEVertexLabelPositions=_oBSOLETEVertexLabelPositions - In the implementation block
@property (nonatomic,readonly) char hasOBSOLETEShieldLabelPositions; 
@property (nonatomic,retain) NSData * oBSOLETEShieldLabelPositions;                     //@synthesize oBSOLETEShieldLabelPositions=_oBSOLETEShieldLabelPositions - In the implementation block
@property (assign,nonatomic) char hasStyleGroup; 
@property (assign,nonatomic) unsigned styleGroup;                                       //@synthesize styleGroup=_styleGroup - In the implementation block
@property (assign,nonatomic) char hasSpeedLimit; 
@property (assign,nonatomic) int speedLimit;                                            //@synthesize speedLimit=_speedLimit - In the implementation block
@property (nonatomic,readonly) unsigned long long extrusionHeightsCount; 
@property (nonatomic,readonly) int* extrusionHeights; 
@property (nonatomic,readonly) char hasCharacteristics; 
@property (nonatomic,retain) GEOVCharacteristics * characteristics;                     //@synthesize characteristics=_characteristics - In the implementation block
@property (assign,nonatomic) char hasStartOffset; 
@property (assign,nonatomic) float startOffset;                                         //@synthesize startOffset=_startOffset - In the implementation block
@property (assign,nonatomic) char hasEndOffset; 
@property (assign,nonatomic) float endOffset;                                           //@synthesize endOffset=_endOffset - In the implementation block
@property (assign,nonatomic) char hasMinzoomRank; 
@property (assign,nonatomic) float minzoomRank;                                         //@synthesize minzoomRank=_minzoomRank - In the implementation block
@property (nonatomic,readonly) char hasOBSOLETECenterlines; 
@property (nonatomic,retain) NSData * oBSOLETECenterlines;                              //@synthesize oBSOLETECenterlines=_oBSOLETECenterlines - In the implementation block
@property (assign,nonatomic) char hasCenterlineCount; 
@property (assign,nonatomic) unsigned centerlineCount;                                  //@synthesize centerlineCount=_centerlineCount - In the implementation block
@property (assign,nonatomic) char hasCenterlineStart; 
@property (assign,nonatomic) unsigned centerlineStart;                                  //@synthesize centerlineStart=_centerlineStart - In the implementation block
@property (nonatomic,retain) NSMutableArray * styleAttributes;                          //@synthesize styleAttributes=_styleAttributes - In the implementation block
@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type;                                                  //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) char hasStartLaneWidth; 
@property (assign,nonatomic) float startLaneWidth;                                      //@synthesize startLaneWidth=_startLaneWidth - In the implementation block
@property (assign,nonatomic) char hasEndLaneWidth; 
@property (assign,nonatomic) float endLaneWidth;                                        //@synthesize endLaneWidth=_endLaneWidth - In the implementation block
@property (assign,nonatomic) char hasStartRoadOffset; 
@property (assign,nonatomic) float startRoadOffset;                                     //@synthesize startRoadOffset=_startRoadOffset - In the implementation block
@property (assign,nonatomic) char hasEndRoadOffset; 
@property (assign,nonatomic) float endRoadOffset;                                       //@synthesize endRoadOffset=_endRoadOffset - In the implementation block
@property (assign,nonatomic) char hasEntryPointMask; 
@property (assign,nonatomic) unsigned entryPointMask;                                   //@synthesize entryPointMask=_entryPointMask - In the implementation block
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)styleAttributes;
-(char)hasBusinessID;
-(unsigned long long)businessID;
-(long long)uID;
-(int)roadClass;
-(float)startOffset;
-(float)endOffset;
-(char)hasType;
-(void)setHasType:(char)arg1 ;
-(void)setHasUID:(char)arg1 ;
-(char)hasUID;
-(void)setBusinessID:(unsigned long long)arg1 ;
-(void)setHasBusinessID:(char)arg1 ;
-(void)setPointLabelPosition:(NSData *)arg1 ;
-(void)setOBSOLETEVertexLabelPositions:(NSData *)arg1 ;
-(void)setOBSOLETEShieldLabelPositions:(NSData *)arg1 ;
-(void)setCharacteristics:(GEOVCharacteristics *)arg1 ;
-(void)setOBSOLETECenterlines:(NSData *)arg1 ;
-(void)setStyleAttributes:(NSMutableArray *)arg1 ;
-(void)addStyleAttributes:(id)arg1 ;
-(unsigned long long)labelOffsetsCount;
-(void)clearLabelOffsets;
-(int)labelOffsetAtIndex:(unsigned long long)arg1 ;
-(void)addLabelOffset:(int)arg1 ;
-(unsigned long long)shieldLabelOffsetsCount;
-(void)clearShieldLabelOffsets;
-(int)shieldLabelOffsetAtIndex:(unsigned long long)arg1 ;
-(void)addShieldLabelOffset:(int)arg1 ;
-(unsigned long long)shieldLabelTypesCount;
-(void)clearShieldLabelTypes;
-(int)shieldLabelTypeAtIndex:(unsigned long long)arg1 ;
-(void)addShieldLabelType:(int)arg1 ;
-(unsigned long long)extrusionHeightsCount;
-(void)clearExtrusionHeights;
-(int)extrusionHeightAtIndex:(unsigned long long)arg1 ;
-(void)addExtrusionHeight:(int)arg1 ;
-(unsigned long long)styleAttributesCount;
-(void)clearStyleAttributes;
-(id)styleAttributesAtIndex:(unsigned long long)arg1 ;
-(int*)labelOffsets;
-(void)setLabelOffsets:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)shieldLabelOffsets;
-(void)setShieldLabelOffsets:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)shieldLabelTypes;
-(void)setShieldLabelTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setPlaceType:(int)arg1 ;
-(void)setHasPlaceType:(char)arg1 ;
-(char)hasPlaceType;
-(void)setPolyIsConvex:(char)arg1 ;
-(void)setHasPolyIsConvex:(char)arg1 ;
-(char)hasPolyIsConvex;
-(void)setRoadClass:(int)arg1 ;
-(void)setHasRoadClass:(char)arg1 ;
-(char)hasRoadClass;
-(void)setFormOfWay:(int)arg1 ;
-(void)setHasFormOfWay:(char)arg1 ;
-(char)hasFormOfWay;
-(void)setTravelDirection:(int)arg1 ;
-(void)setHasTravelDirection:(char)arg1 ;
-(char)hasTravelDirection;
-(void)setSectionStart:(int)arg1 ;
-(void)setHasSectionStart:(char)arg1 ;
-(char)hasSectionStart;
-(void)setSectionCount:(int)arg1 ;
-(void)setHasSectionCount:(char)arg1 ;
-(char)hasSectionCount;
-(char)hasPointLabelPosition;
-(char)hasOBSOLETEVertexLabelPositions;
-(char)hasOBSOLETEShieldLabelPositions;
-(void)setStyleGroup:(unsigned)arg1 ;
-(void)setHasStyleGroup:(char)arg1 ;
-(char)hasStyleGroup;
-(void)setSpeedLimit:(int)arg1 ;
-(void)setHasSpeedLimit:(char)arg1 ;
-(char)hasSpeedLimit;
-(int*)extrusionHeights;
-(void)setExtrusionHeights:(int*)arg1 count:(unsigned long long)arg2 ;
-(char)hasCharacteristics;
-(void)setStartOffset:(float)arg1 ;
-(void)setHasStartOffset:(char)arg1 ;
-(char)hasStartOffset;
-(void)setEndOffset:(float)arg1 ;
-(void)setHasEndOffset:(char)arg1 ;
-(char)hasEndOffset;
-(void)setMinzoomRank:(float)arg1 ;
-(void)setHasMinzoomRank:(char)arg1 ;
-(char)hasMinzoomRank;
-(char)hasOBSOLETECenterlines;
-(void)setCenterlineCount:(unsigned)arg1 ;
-(void)setHasCenterlineCount:(char)arg1 ;
-(char)hasCenterlineCount;
-(void)setCenterlineStart:(unsigned)arg1 ;
-(void)setHasCenterlineStart:(char)arg1 ;
-(char)hasCenterlineStart;
-(void)setStartLaneWidth:(float)arg1 ;
-(void)setHasStartLaneWidth:(char)arg1 ;
-(char)hasStartLaneWidth;
-(void)setEndLaneWidth:(float)arg1 ;
-(void)setHasEndLaneWidth:(char)arg1 ;
-(char)hasEndLaneWidth;
-(void)setStartRoadOffset:(float)arg1 ;
-(void)setHasStartRoadOffset:(char)arg1 ;
-(char)hasStartRoadOffset;
-(void)setEndRoadOffset:(float)arg1 ;
-(void)setHasEndRoadOffset:(char)arg1 ;
-(char)hasEndRoadOffset;
-(void)setEntryPointMask:(unsigned)arg1 ;
-(void)setHasEntryPointMask:(char)arg1 ;
-(char)hasEntryPointMask;
-(int)placeType;
-(char)polyIsConvex;
-(int)formOfWay;
-(int)travelDirection;
-(int)sectionStart;
-(int)sectionCount;
-(NSData *)pointLabelPosition;
-(NSData *)oBSOLETEVertexLabelPositions;
-(NSData *)oBSOLETEShieldLabelPositions;
-(unsigned)styleGroup;
-(int)speedLimit;
-(GEOVCharacteristics *)characteristics;
-(float)minzoomRank;
-(NSData *)oBSOLETECenterlines;
-(unsigned)centerlineCount;
-(unsigned)centerlineStart;
-(float)startLaneWidth;
-(float)endLaneWidth;
-(float)startRoadOffset;
-(float)endRoadOffset;
-(unsigned)entryPointMask;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)setUID:(long long)arg1 ;
@end

