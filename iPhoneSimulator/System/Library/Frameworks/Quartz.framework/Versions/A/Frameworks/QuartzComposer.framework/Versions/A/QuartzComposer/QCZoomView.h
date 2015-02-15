/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:16 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <AppKit/NSView.h>

@interface QCZoomView : NSView {

	CGPoint _cachedCenter;
	double _cachedZoomFactorX;
	double _cachedZoomFactorY;
	double _zoomFactorX;
	double _zoomFactorY;
	void** _unused[4];

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)scrollWheel:(id)arg1 ;
-(void)viewDidMoveToSuperview;
-(char)autoscroll:(id)arg1 ;
-(void)_adjustFrame;
-(CGPoint)_centerPoint;
-(CGRect)maxBounds;
-(void)__frameChanged:(id)arg1 ;
-(void)_zoomToFitRect:(CGRect)arg1 ;
-(void)_setCenterPoint:(CGPoint)arg1 ;
-(void)zoomToFitSelection;
-(void)zoomToFitAll;
-(char)allowsNonSquareZooming;
-(void)_zoomWithSpeedFactorForX:(double)arg1 speedFactorForY:(double)arg2 ;
-(double)zoomFactorY;
-(void)_setZoomFactorX:(double)arg1 factorY:(double)arg2 centerPoint:(CGPoint)arg3 ;
-(double)zoomFactorX;
-(CGRect)selectionBounds;
-(char)zoomStateCached;
-(double)resizeHotzoneWidth;
-(double)incrementalZoomAmount;
-(double)minX;
-(double)maxX;
-(double)minY;
-(double)maxY;
-(void)setZoomFactorX:(double)arg1 ;
-(void)setZoomFactorY:(double)arg1 ;
-(void)cacheZoomState;
-(void)restoreZoomState;
-(void)zoomInX;
-(void)zoomInY;
-(void)zoomOutX;
-(void)zoomOutY;
@end

