/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKShape.h>
#import <MapKit/MKOverlay.h>

@class NSString;

@interface MKCircle : MKShape <MKOverlay> {

	CGPoint _coordinate;
	double _radius;
	SCD_Struct_MK4 _boundingMapRect;

}

@property (nonatomic,readonly) CGPoint coordinate;                          //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) double radius;                               //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MK4 boundingMapRect;              //@synthesize boundingMapRect=_boundingMapRect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
+(id)circleWithCenterCoordinate:(CGPoint)arg1 radius:(double)arg2 ;
+(id)circleWithMapRect:(SCD_Struct_MK4)arg1 ;
-(id)_initWithCenterCoordinate:(CGPoint)arg1 radius:(double)arg2 ;
-(char)intersectsMapRect:(SCD_Struct_MK4)arg1 ;
-(SCD_Struct_MK4)boundingMapRect;
-(CGPoint)coordinate;
-(double)radius;
@end

