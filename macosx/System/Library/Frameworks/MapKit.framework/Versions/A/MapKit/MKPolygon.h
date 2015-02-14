/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKMultiPoint.h>
#import <MapKit/MKOverlay.h>

@class NSArray, NSString;

@interface MKPolygon : MKMultiPoint <MKOverlay> {

	CGPoint _centroid;
	NSArray* _interiorPolygons;
	char _isDefinitelyConvex;

}

@property (readonly) NSArray * interiorPolygons;                            //@synthesize interiorPolygons=_interiorPolygons - In the implementation block
@property (assign,nonatomic) char _isDefinitelyConvex;                      //@synthesize isDefinitelyConvex=_isDefinitelyConvex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGPoint coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,readonly) SCD_Struct_MK4 boundingMapRect; 
+(id)polygonWithPoints:(CGPoint*)arg1 count:(unsigned long long)arg2 interiorPolygons:(id)arg3 ;
+(id)polygonWithCoordinates:(CGPoint*)arg1 count:(unsigned long long)arg2 interiorPolygons:(id)arg3 ;
+(id)polygonWithPoints:(CGPoint*)arg1 count:(unsigned long long)arg2 ;
+(id)polygonWithCoordinates:(CGPoint*)arg1 count:(unsigned long long)arg2 ;
+(id)polygonEnclosingMapPoints:(CGPoint*)arg1 count:(unsigned long long)arg2 ;
+(id)_polygonWithMapRect:(SCD_Struct_MK4)arg1 ;
-(char)intersectsMapRect:(SCD_Struct_MK4)arg1 ;
-(SCD_Struct_MK4)boundingMapRect;
-(void)set_isDefinitelyConvex:(char)arg1 ;
-(char)_isDefinitelyConvex;
-(NSArray *)interiorPolygons;
-(CGPoint)coordinate;
@end

