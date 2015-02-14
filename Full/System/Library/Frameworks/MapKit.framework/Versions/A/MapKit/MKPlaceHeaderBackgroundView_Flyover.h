/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceHeaderBackgroundView.h>

@class MKMapView, GEOPDFlyover;

@interface MKPlaceHeaderBackgroundView_Flyover : MKPlaceHeaderBackgroundView {

	char _animationPaused;
	MKMapView* _mapView;
	GEOPDFlyover* _flyover;

}
-(id)initWithFrame:(CGRect)arg1 mapItem:(id)arg2 ;
-(void)prepareForPresentation;
-(void)_pauseTour;
-(void)present;
-(id)flyover;
-(void)setFlyover:(id)arg1 ;
-(void)setMapView:(id)arg1 ;
-(id)mapView;
-(void)setFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 ;
-(void)resume;
-(void)reset;
-(void)pause;
@end

