/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:36 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/Versions/A/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <MapsSupport/NSCopying.h>

@class PBUnknownFields, GEOMapRegion, NSString;

@interface MSPRegionBookmark : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOMapRegion* _region;
	NSString* _title;

}

@property (nonatomic,readonly) char hasRegion; 
@property (nonatomic,retain) GEOMapRegion * region;                          //@synthesize region=_region - In the implementation block
@property (nonatomic,readonly) char hasTitle; 
@property (nonatomic,retain) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(char)hasRegion;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(GEOMapRegion *)region;
-(PBUnknownFields *)unknownFields;
-(char)hasTitle;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)dictionaryRepresentation;
-(void)setRegion:(GEOMapRegion *)arg1 ;
@end
