/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:51 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSMutableArray, GEOVConnectivity, NSData;

@interface GEOVTile : PBCodable <NSCopying> {

	NSMutableArray* _coastlines;
	GEOVConnectivity* _connectivity;
	NSMutableArray* _labelLanguages;
	NSData* _labels;
	NSMutableArray* _lines;
	int _minZ;
	NSMutableArray* _points;
	NSMutableArray* _polygons;
	unsigned _sectionDeltaLengthBits;
	unsigned _vertexBits;
	NSData* _vertices;
	int _zBits;
	SCD_Struct_GE53 _has;

}

@property (nonatomic,retain) NSMutableArray * lines;                       //@synthesize lines=_lines - In the implementation block
@property (nonatomic,retain) NSMutableArray * polygons;                    //@synthesize polygons=_polygons - In the implementation block
@property (nonatomic,retain) NSMutableArray * points;                      //@synthesize points=_points - In the implementation block
@property (nonatomic,readonly) char hasLabels; 
@property (nonatomic,retain) NSData * labels;                              //@synthesize labels=_labels - In the implementation block
@property (nonatomic,readonly) char hasVertices; 
@property (nonatomic,retain) NSData * vertices;                            //@synthesize vertices=_vertices - In the implementation block
@property (nonatomic,readonly) char hasConnectivity; 
@property (nonatomic,retain) GEOVConnectivity * connectivity;              //@synthesize connectivity=_connectivity - In the implementation block
@property (assign,nonatomic) char hasMinZ; 
@property (assign,nonatomic) int minZ;                                     //@synthesize minZ=_minZ - In the implementation block
@property (assign,nonatomic) char hasZBits; 
@property (assign,nonatomic) int zBits;                                    //@synthesize zBits=_zBits - In the implementation block
@property (nonatomic,retain) NSMutableArray * coastlines;                  //@synthesize coastlines=_coastlines - In the implementation block
@property (nonatomic,retain) NSMutableArray * labelLanguages;              //@synthesize labelLanguages=_labelLanguages - In the implementation block
@property (assign,nonatomic) char hasVertexBits; 
@property (assign,nonatomic) unsigned vertexBits;                          //@synthesize vertexBits=_vertexBits - In the implementation block
@property (assign,nonatomic) char hasSectionDeltaLengthBits; 
@property (assign,nonatomic) unsigned sectionDeltaLengthBits;              //@synthesize sectionDeltaLengthBits=_sectionDeltaLengthBits - In the implementation block
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)minZ;
-(void)setMinZ:(int)arg1 ;
-(unsigned long long)linesCount;
-(NSMutableArray *)lines;
-(unsigned long long)polygonsCount;
-(NSMutableArray *)polygons;
-(unsigned long long)coastlinesCount;
-(NSMutableArray *)coastlines;
-(NSMutableArray *)points;
-(NSData *)vertices;
-(void)addLine:(id)arg1 ;
-(NSData *)labels;
-(void)setVertices:(NSData *)arg1 ;
-(char)hasVertices;
-(void)setLines:(NSMutableArray *)arg1 ;
-(void)setPolygons:(NSMutableArray *)arg1 ;
-(void)setPoints:(NSMutableArray *)arg1 ;
-(void)setConnectivity:(GEOVConnectivity *)arg1 ;
-(void)setCoastlines:(NSMutableArray *)arg1 ;
-(void)setLabelLanguages:(NSMutableArray *)arg1 ;
-(void)addPolygon:(id)arg1 ;
-(void)addPoint:(id)arg1 ;
-(void)addCoastlines:(id)arg1 ;
-(void)addLabelLanguage:(id)arg1 ;
-(void)clearLines;
-(id)lineAtIndex:(unsigned long long)arg1 ;
-(void)clearPolygons;
-(id)polygonAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)pointsCount;
-(void)clearPoints;
-(id)pointAtIndex:(unsigned long long)arg1 ;
-(void)clearCoastlines;
-(id)coastlinesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)labelLanguagesCount;
-(void)clearLabelLanguages;
-(id)labelLanguageAtIndex:(unsigned long long)arg1 ;
-(char)hasLabels;
-(char)hasConnectivity;
-(void)setHasMinZ:(char)arg1 ;
-(char)hasMinZ;
-(void)setZBits:(int)arg1 ;
-(void)setHasZBits:(char)arg1 ;
-(char)hasZBits;
-(unsigned)vertexBits;
-(void)setVertexBits:(unsigned)arg1 ;
-(void)setHasVertexBits:(char)arg1 ;
-(char)hasVertexBits;
-(unsigned)sectionDeltaLengthBits;
-(void)setSectionDeltaLengthBits:(unsigned)arg1 ;
-(void)setHasSectionDeltaLengthBits:(char)arg1 ;
-(char)hasSectionDeltaLengthBits;
-(GEOVConnectivity *)connectivity;
-(int)zBits;
-(NSMutableArray *)labelLanguages;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setLabels:(NSData *)arg1 ;
@end

