/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKOverlayPathRenderer.h>

@class MKPolygon;

@interface MKPolygonRenderer : MKOverlayPathRenderer

@property (nonatomic,readonly) MKPolygon * polygon; 
-(void)createPath;
-(void)fillPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(id)initWithPolygon:(id)arg1 ;
-(MKPolygon *)polygon;
@end

