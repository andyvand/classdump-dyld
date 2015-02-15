/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/NSCopying.h>

@class MKMapCamera;

@interface MKMapSnapshotOptions : NSObject <NSCopying> {

	MKMapCamera* _camera;
	SCD_Struct_MK4 _mapRect;
	SCD_Struct_MK4 _region;
	unsigned long long _mapType;
	int _mode;
	char _showsPointsOfInterest;
	char _showsBuildings;
	CGSize _size;
	char _usingRect;

}

@property (nonatomic,copy) MKMapCamera * camera;                      //@synthesize camera=_camera - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK4 mapRect;                  //@synthesize mapRect=_mapRect - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK4 region;                   //@synthesize region=_region - In the implementation block
@property (assign,nonatomic) unsigned long long mapType;              //@synthesize mapType=_mapType - In the implementation block
@property (assign,nonatomic) char showsPointsOfInterest;              //@synthesize showsPointsOfInterest=_showsPointsOfInterest - In the implementation block
@property (assign,nonatomic) char showsBuildings;                     //@synthesize showsBuildings=_showsBuildings - In the implementation block
@property (assign,nonatomic) CGSize size;                             //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) char usingRect;                        //@synthesize usingRect=_usingRect - In the implementation block
-(SCD_Struct_MK4)mapRect;
-(char)usingRect;
-(unsigned long long)mapType;
-(void)setMapType:(unsigned long long)arg1 ;
-(char)showsPointsOfInterest;
-(void)setShowsPointsOfInterest:(char)arg1 ;
-(char)showsBuildings;
-(void)setShowsBuildings:(char)arg1 ;
-(MKMapCamera *)camera;
-(void)setCamera:(MKMapCamera *)arg1 ;
-(SCD_Struct_MK4)region;
-(void)setMapRect:(SCD_Struct_MK4)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(void)setRegion:(SCD_Struct_MK4)arg1 ;
@end

