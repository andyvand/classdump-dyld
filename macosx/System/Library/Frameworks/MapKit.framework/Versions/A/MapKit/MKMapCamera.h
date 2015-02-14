/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/NSSecureCoding.h>
#import <MapKit/NSCopying.h>

@class MKMapView;

@interface MKMapCamera : NSObject <NSSecureCoding, NSCopying> {

	CGPoint _centerCoordinate;
	double _heading;
	double _pitch;
	double _altitude;
	MKMapView* _mapView;

}

@property (assign,nonatomic) CGPoint centerCoordinate;                                                       //@synthesize centerCoordinate=_centerCoordinate - In the implementation block
@property (assign,nonatomic) double heading;                                                                 //@synthesize heading=_heading - In the implementation block
@property (assign,nonatomic) double pitch; 
@property (assign,nonatomic) double altitude;                                                                //@synthesize altitude=_altitude - In the implementation block
@property (assign,setter=_setPrecisePitch:,getter=_precisePitch,nonatomic) double precisePitch;              //@synthesize pitch=_pitch - In the implementation block
+(id)_cameraLookingAtGEOMapRect:(const SCD_Struct_MK4*)arg1 aspectRatio:(float)arg2 ;
+(id)cameraLookingAtCenterCoordinate:(CGPoint)arg1 fromEyeCoordinate:(CGPoint)arg2 eyeAltitude:(double)arg3 ;
+(id)_cameraLookingAtMapRect:(SCD_Struct_MK4)arg1 forViewSize:(CGSize)arg2 ;
+(id)camera;
+(char)supportsSecureCoding;
-(void)_setMapView:(id)arg1 ;
-(id)_mapView;
-(void)_updateState;
-(double)_precisePitch;
-(void)_setPrecisePitch:(double)arg1 ;
-(SCD_Struct_MK4)_enclosingGEOMapRectForAspectRatio:(float)arg1 ;
-(double)pitch;
-(double)altitude;
-(CGPoint)centerCoordinate;
-(void)setCenterCoordinate:(CGPoint)arg1 ;
-(void)setPitch:(double)arg1 ;
-(double)heading;
-(void)setAltitude:(double)arg1 ;
-(void)setHeading:(double)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)_validate;
@end

