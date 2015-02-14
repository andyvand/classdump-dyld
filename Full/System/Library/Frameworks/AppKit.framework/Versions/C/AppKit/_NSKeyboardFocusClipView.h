/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSClipView.h>

@class NSView;

@interface _NSKeyboardFocusClipView : NSClipView {

	NSView* _representedView;
	CGRect _adjustment;
	CGRect _lastFocusRingRect;
	char _drawFocus;
	char _bezelStyle;

}
-(void)dealloc;
-(void)removeFromSuperview;
-(void)setFrameOrigin:(CGPoint)arg1 ;
-(char)_drawRectIfEmpty;
-(void)_clearFocusForView;
-(char)_shouldDoLayerPerformanceUpdates;
-(CGRect)_getFocusRingFrame;
-(void)_drawKeyboardFocusRingWithFrame:(CGRect)arg1 forCell:(id)arg2 ;
-(void)_setKeyboardFocusRingNeedsDisplay;
-(void)_setKeyboardFocusRingNeedsDisplayDuringLiveResize;
-(void)_drawKeyboardFocusRingWithFrame:(CGRect)arg1 ;
-(void)_setFocusForCell:(id)arg1 forView:(id)arg2 withFrame:(CGRect)arg3 withFocusRingFrame:(CGRect)arg4 withInset:(double)arg5 ;
-(void)_adjustFocusRingSize:(CGSize)arg1 ;
-(void)_adjustFocusRingLocation:(CGPoint)arg1 ;
-(char)canBecomeKeyView;
-(unsigned long long)_backgroundFillOperation;
@end

