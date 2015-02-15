/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:07 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/NSCopying.h>

@interface GEOFeatureStyleAttributes : NSObject <NSCopying> {

	SCD_Struct_GE141* v;
	GEOFeatureStyleAttributes* _sharedAttributes;
	SCD_Struct_GE142* extAttrs;
	unsigned char countExtAttrs;
	unsigned char countAttrs;
	char featureType;

}
-(char)featureType;
-(char)shouldSuppress3DBuildingStrokes;
-(char)isDrivable;
-(char)isWalkable;
-(char)isFreeway;
-(char)isRamp;
-(int)drivingSide;
-(void)replaceAttributes:(SCD_Struct_GE141*)arg1 count:(unsigned)arg2 ;
-(char)hasDrivingSide;
-(char)isTunnel;
-(void)sort;
-(id)initWithPlaceDataStyleAttributes:(id)arg1 ;
-(void)setExtAttributes:(SCD_Struct_GE142*)arg1 count:(unsigned)arg2 ;
-(id)initWithSharedStyleAttributes:(id)arg1 extAttributes:(SCD_Struct_GE142*)arg2 extAttributeCount:(unsigned char)arg3 ;
-(id)initWithStyleAttributes:(id)arg1 ;
-(int)rampType;
-(int)rampDirection;
-(char)isRailway;
-(id)init;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAttributes:(unsigned)arg1 ;
@end
