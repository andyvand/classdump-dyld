/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class GEOLatLng, NSData, GEOPDViewportInfo;

@interface GEORPMapLocation : PBCodable <NSCopying> {

	GEOLatLng* _coordinate;
	NSData* _image;
	GEOPDViewportInfo* _viewportInfo;
	float _zoomLevel;
	SCD_Struct_GE4 _has;

}

@property (nonatomic,readonly) char hasImage; 
@property (nonatomic,retain) NSData * image;                                //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) char hasCoordinate; 
@property (nonatomic,retain) GEOLatLng * coordinate;                        //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) char hasZoomLevel; 
@property (assign,nonatomic) float zoomLevel;                               //@synthesize zoomLevel=_zoomLevel - In the implementation block
@property (nonatomic,readonly) char hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo;              //@synthesize viewportInfo=_viewportInfo - In the implementation block
-(GEOPDViewportInfo *)viewportInfo;
-(void)setZoomLevel:(float)arg1 ;
-(float)zoomLevel;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(GEOLatLng *)coordinate;
-(void)setCoordinate:(GEOLatLng *)arg1 ;
-(char)hasImage;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(char)hasViewportInfo;
-(char)hasCoordinate;
-(void)setHasZoomLevel:(char)arg1 ;
-(char)hasZoomLevel;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSData *)image;
-(void)setImage:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

