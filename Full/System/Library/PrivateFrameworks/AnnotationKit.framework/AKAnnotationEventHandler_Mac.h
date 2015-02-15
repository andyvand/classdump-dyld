/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKAnnotationEventHandler.h>

@class NSEvent;

@interface AKAnnotationEventHandler_Mac : AKAnnotationEventHandler {

	char _draggingHorizontalOnly;
	char _draggingVerticalOnly;
	NSEvent* _lastDragEvent;
	CGPoint _initialDraggedPoint;
	CGPoint _initialOtherPoint;
	CGPoint _initialCenter;
	CGPoint _lastMousePosition;

}

@property (assign) CGPoint initialDraggedPoint;              //@synthesize initialDraggedPoint=_initialDraggedPoint - In the implementation block
@property (assign) CGPoint initialOtherPoint;                //@synthesize initialOtherPoint=_initialOtherPoint - In the implementation block
@property (assign) CGPoint initialCenter;                    //@synthesize initialCenter=_initialCenter - In the implementation block
@property (assign) char draggingHorizontalOnly;              //@synthesize draggingHorizontalOnly=_draggingHorizontalOnly - In the implementation block
@property (assign) char draggingVerticalOnly;                //@synthesize draggingVerticalOnly=_draggingVerticalOnly - In the implementation block
@property (assign) CGPoint lastMousePosition;                //@synthesize lastMousePosition=_lastMousePosition - In the implementation block
@property (retain) NSEvent * lastDragEvent;                  //@synthesize lastDragEvent=_lastDragEvent - In the implementation block
-(void)getInitialDraggedPoint:(CGPoint*)arg1 otherPoint:(CGPoint*)arg2 center:(CGPoint*)arg3 ;
-(void)updateModelWithCurrentPoint:(CGPoint)arg1 ;
-(char)enterDraggableAreaEventTrackingLoopWithEvent:(id)arg1 withOptionalTouches:(id)arg2 ;
-(char)continueDraggableAreaEventTrackingLoopWithEvent:(id)arg1 withOptionalTouches:(id)arg2 ;
-(void)setInitialDraggedPoint:(CGPoint)arg1 ;
-(void)setInitialOtherPoint:(CGPoint)arg1 ;
-(void)setInitialCenter:(CGPoint)arg1 ;
-(void)setupDraggingConstraints;
-(CGPoint)getModelPointFromEvent:(id)arg1 ;
-(void)setLastMousePosition:(CGPoint)arg1 ;
-(void)setLastDragEvent:(NSEvent *)arg1 ;
-(NSEvent *)lastDragEvent;
-(CGPoint)lastMousePosition;
-(CGPoint)initialDraggedPoint;
-(CGPoint)initialOtherPoint;
-(CGPoint)initialCenter;
-(char)draggingHorizontalOnly;
-(void)setDraggingHorizontalOnly:(char)arg1 ;
-(char)draggingVerticalOnly;
-(void)setDraggingVerticalOnly:(char)arg1 ;
@end
