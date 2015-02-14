/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSView.h>

@class NSString, NSTrackingArea;

@interface CoreAnimationView : NSView {

	RefPtr<Safari::CoreAnimationLayer>* _coreAnimationLayer;
	NSString* _toolTip;
	long long _lastToolTipTag;
	id _trackingRectOwner;
	void* _trackingRectUserData;
	NSTrackingArea* _trackingArea;

}

@property (nonatomic,retain) NSTrackingArea * trackingArea;              //@synthesize trackingArea=_trackingArea - In the implementation block
-(CoreAnimationLayer*)coreAnimationLayer;
-(void)_updateContentsScale;
-(EventSendingLayer*)eventSendingLayer;
-(CGPoint)_coreAnimationPointForEventPoint:(CGPoint)arg1 inEventWindow:(id)arg2 ;
-(void)_didChangeBackingScale:(id)arg1 ;
-(CGPoint)_pointForEvent:(id)arg1 ;
-(void)_startTrackingMouseMovement;
-(void)_stopTrackingMouseMovement;
-(void)_setToolTip:(id)arg1 ;
-(void)_sendToolTipMouseExited;
-(void)_sendToolTipMouseEntered;
-(void)setCoreAnimationLayer:(PassRefPtr<Safari::CoreAnimationLayer>*)arg1 ;
-(void)setTrackingArea:(NSTrackingArea *)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSTrackingArea *)trackingArea;
-(char)isOpaque;
-(char)acceptsFirstResponder;
-(void)keyDown:(id)arg1 ;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(unsigned long long)draggingUpdated:(id)arg1 ;
-(void)draggingExited:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(void)scrollWheel:(id)arg1 ;
-(void)viewDidMoveToWindow;
-(void)mouseDown:(id)arg1 ;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)keyUp:(id)arg1 ;
-(void)otherMouseDown:(id)arg1 ;
-(void)otherMouseDragged:(id)arg1 ;
-(void)otherMouseUp:(id)arg1 ;
-(char)prepareForDragOperation:(id)arg1 ;
-(long long)addTrackingRect:(CGRect)arg1 owner:(id)arg2 userData:(void*)arg3 assumeInside:(char)arg4 ;
-(void)removeTrackingRect:(long long)arg1 ;
-(void)mouseMoved:(id)arg1 ;
-(id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(CGPoint)arg3 userData:(void*)arg4 ;
-(long long)_addTrackingRect:(CGRect)arg1 owner:(id)arg2 userData:(void*)arg3 assumeInside:(char)arg4 useTrackingNum:(int)arg5 ;
-(void)_addTrackingRects:(CGRect*)arg1 owner:(id)arg2 userDataList:(void*)arg3 assumeInsideList:(char*)arg4 trackingNums:(long long*)arg5 count:(int)arg6 ;
-(void)_removeTrackingRects:(long long*)arg1 count:(int)arg2 ;
@end

