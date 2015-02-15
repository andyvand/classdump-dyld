/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Internet Plug-Ins/JavaAppletPlugin.plugin/Contents/Home/lib/libglass.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libglass.dylib/libglass.dylib-Structs.h>
#import <libglass.dylib/GlassDragSourceDelegate.h>

@class NSView, GlassHostView, NSWindow, GlassBackgroundWindow, NSEvent, GlassFullscreenWindow;

@interface GlassViewDelegate : NSObject <GlassDragSourceDelegate> {

	NSView* nsView;
	jobjectRef jView;
	long long trackingRect;
	GlassHostView* parentHost;
	NSWindow* parentWindow;
	double parentWindowAlpha;
	GlassHostView* fullscreenHost;
	GlassBackgroundWindow* backgroundWindow;
	NSWindow* nativeFullScreenModeWindow;
	char mouseIsDown;
	char mouseIsOver;
	int mouseDownMask;
	char gestureInProgress;
	NSEvent* lastEvent;
	unsigned long long dragOperation;
	long long lastTrackingNumber;
	GlassFullscreenWindow* fullscreenWindow;

}
-(void)startDrag:(unsigned long long)arg1 ;
-(jobjectRef)jView;
-(void)exitFullscreenWithAnimate:(char)arg1 ;
-(unsigned long long)sendJavaDndEvent:(id)arg1 type:(int)arg2 ;
-(void)sendJavaGestureEvent:(id)arg1 type:(int)arg2 ;
-(void)notifyInputMethod:(id)arg1 attr:(int)arg2 length:(int)arg3 cursor:(int)arg4 ;
-(void)sendJavaKeyEvent:(id)arg1 isDown:(char)arg2 ;
-(id)initWithView:(id)arg1 withJview:(jobjectRef)arg2 ;
-(void)sendJavaFullScreenEvent:(char)arg1 withNativeWidget:(char)arg2 ;
-(void)synthesizeMouseUp:(unsigned long long)arg1 ;
-(void)sendJavaMenuEvent:(id)arg1 ;
-(void)sendJavaMouseEvent:(id)arg1 ;
-(char)suppressMouseEnterExitOnMouseDown;
-(void)draggingEnded;
-(id)getAccessible;
-(void)enterFullscreenWithAnimate:(char)arg1 withKeepRatio:(char)arg2 withHideCursor:(char)arg3 ;
-(CGRect)getInputMethodCandidatePosRequest:(int)arg1 ;
-(void)sendJavaGestureEndEvent:(id)arg1 ;
-(void)sendJavaGestureBeginEvent:(id)arg1 ;
-(void)sendJavaModifierKeyEvent:(id)arg1 ;
-(void)resetMouseTracking;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFrameOrigin:(CGPoint)arg1 ;
-(void)setFrameSize:(CGSize)arg1 ;
-(unsigned long long)draggingSourceOperationMaskForLocal:(char)arg1 ;
-(void)viewDidMoveToWindow;
-(void)updateTrackingAreas;
@end
