/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/_NSBorderlessLayerTreeProjectionWindow.h>

@class CALayer;

@interface _NSSlideAndCrossFadeAnimationProjectionWindow : _NSBorderlessLayerTreeProjectionWindow {

	CALayer* beforeLayer;
	CGRect beforeLayerInitialScreenRect;
	CGRect beforeLayerFinalScreenRect;
	CALayer* afterLayer;
	CGRect afterLayerInitialScreenRect;
	CGRect afterLayerFinalScreenRect;

}
-(void)dealloc;
-(void)startAnimationWithDuration:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithBeforeLayer:(id)arg1 initialScreenRect:(CGRect)arg2 finalScreenRect:(CGRect)arg3 afterLayer:(id)arg4 initialScreenRect:(CGRect)arg5 finalScreenRect:(CGRect)arg6 ;
-(CGRect)layerFrameFromScreenRect:(CGRect)arg1 ;
@end

