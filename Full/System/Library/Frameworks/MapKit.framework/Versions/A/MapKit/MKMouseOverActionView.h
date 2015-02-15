/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MKViewWithHairline.h>

@class NSTrackingArea;

@interface MKMouseOverActionView : MKViewWithHairline {

	NSTrackingArea* _trackingArea;
	/*^block*/id _onMouseEnter;
	/*^block*/id _onMouseExit;

}

@property (copy) id onMouseEnter;              //@synthesize onMouseEnter=_onMouseEnter - In the implementation block
@property (copy) id onMouseExit;               //@synthesize onMouseExit=_onMouseExit - In the implementation block
-(id)onMouseEnter;
-(id)onMouseExit;
-(void)setOnMouseEnter:(id)arg1 ;
-(void)setOnMouseExit:(id)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)updateTrackingAreas;
@end

