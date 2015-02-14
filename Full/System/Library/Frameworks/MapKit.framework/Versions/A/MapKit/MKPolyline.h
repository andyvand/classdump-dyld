/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKMultiPoint.h>
#import <MapKit/MKOverlay.h>

@class NSString;

@interface MKPolyline : MKMultiPoint <MKOverlay>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGPoint coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,readonly) SCD_Struct_MK4 boundingMapRect; 
+(id)polylineWithCoordinates:(CGPoint*)arg1 count:(unsigned long long)arg2 ;
+(id)polylineWithPoints:(CGPoint*)arg1 count:(unsigned long long)arg2 ;
-(char)intersectsMapRect:(SCD_Struct_MK4)arg1 ;
-(SCD_Struct_MK4)boundingMapRect;
-(void)_calculateBounds;
-(CGPoint)coordinate;
@end

