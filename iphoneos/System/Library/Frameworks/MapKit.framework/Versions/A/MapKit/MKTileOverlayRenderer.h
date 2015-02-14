/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKOverlayRenderer.h>

@interface MKTileOverlayRenderer : MKOverlayRenderer
-(void)drawMapRect:(SCD_Struct_MK4)arg1 zoomScale:(double)arg2 inContext:(CGContextRef)arg3 ;
-(char)canDrawMapRect:(SCD_Struct_MK4)arg1 zoomScale:(double)arg2 ;
-(id)initWithTileOverlay:(id)arg1 ;
-(id)initWithOverlay:(id)arg1 ;
-(void)reloadData;
@end

