/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:08 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSMutableArray;

@interface GEORegionalResourceTile : PBCodable <NSCopying> {

	NSMutableArray* _attributions;
	NSMutableArray* _childrens;
	NSMutableArray* _iconChecksums;
	NSMutableArray* _icons;
	unsigned _x;
	unsigned _y;
	unsigned _z;

}

@property (assign,x,nonatomic) unsigned x;                                //@synthesize x=_x - In the implementation block
@property (assign,y,nonatomic) unsigned y;                                //@synthesize y=_y - In the implementation block
@property (assign,z,nonatomic) unsigned z;                                //@synthesize z=_z - In the implementation block
@property (nonatomic,retain) NSMutableArray * childrens;                  //@synthesize childrens=_childrens - In the implementation block
@property (nonatomic,retain) NSMutableArray * icons;                      //@synthesize icons=_icons - In the implementation block
@property (nonatomic,retain) NSMutableArray * attributions;               //@synthesize attributions=_attributions - In the implementation block
@property (nonatomic,retain) NSMutableArray * iconChecksums;              //@synthesize iconChecksums=_iconChecksums - In the implementation block
-(NSMutableArray *)attributions;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)icons;
-(void)setIcons:(NSMutableArray *)arg1 ;
-(unsigned long long)iconsCount;
-(void)clearIcons;
-(unsigned long long)attributionsCount;
-(void)setAttributions:(NSMutableArray *)arg1 ;
-(void)addAttribution:(id)arg1 ;
-(void)clearAttributions;
-(id)attributionAtIndex:(unsigned long long)arg1 ;
-(void)setIconChecksums:(NSMutableArray *)arg1 ;
-(void)addIcon:(id)arg1 ;
-(void)addIconChecksum:(id)arg1 ;
-(id)iconAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)iconChecksumsCount;
-(void)clearIconChecksums;
-(id)iconChecksumAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)iconChecksums;
-(char)containsTileKey:(const GEOTileKey*)arg1 ;
-(unsigned)z;
-(NSMutableArray *)childrens;
-(void)setX:(unsigned)arg1 ;
-(void)setY:(unsigned)arg1 ;
-(void)setZ:(unsigned)arg1 ;
-(unsigned long long)childrensCount;
-(void)setChildrens:(NSMutableArray *)arg1 ;
-(void)clearChildrens;
-(id)childrenAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)addChildren:(id)arg1 ;
-(unsigned)x;
-(unsigned)y;
@end
