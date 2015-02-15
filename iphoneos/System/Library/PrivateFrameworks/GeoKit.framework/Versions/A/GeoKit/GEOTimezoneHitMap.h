/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoKit.framework/Versions/A/GeoKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoKit/GeoKit-Structs.h>
@class NSData, NSArray, NSDictionary;

@interface GEOTimezoneHitMap : NSObject {

	char isLoaded;
	NSData* hitMap;
	unsigned width;
	unsigned height;
	NSArray* areas;
	NSDictionary* areasToTimeZones;

}
+(id)sharedTimezoneHitMap;
+(id)fileNameForTimeZone:(id)arg1 ;
-(void)dealloc;
-(char)loadHitMapData;
-(char)loadMetaDictionary;
-(char)loadIfNeeded;
-(id)_areaLabelAtLongitude:(double)arg1 latitude:(double)arg2 ;
-(id)timeZoneNamesAtLongitude:(double)arg1 latitude:(double)arg2 ;
-(CGImageRef)copyTimeZoneForAreaWithName:(id)arg1 ;
-(id)fileNameAtLongitude:(double)arg1 latitude:(double)arg2 ;
@end
