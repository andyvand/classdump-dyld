/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLookUI/QuickLookUI-Structs.h>
#import <QuartzCore/CALayer.h>

@protocol QLDrawingLayerDelegate;
@interface QLDrawingLayer : CALayer {

	id<QLDrawingLayerDelegate> _drawingDelegate;

}

@property (assign) id<QLDrawingLayerDelegate> drawingDelegate;              //@synthesize drawingDelegate=_drawingDelegate - In the implementation block
-(void)setDrawingDelegate:(id<QLDrawingLayerDelegate>)arg1 ;
-(id<QLDrawingLayerDelegate>)drawingDelegate;
-(void)drawInContext:(CGContextRef)arg1 ;
@end
