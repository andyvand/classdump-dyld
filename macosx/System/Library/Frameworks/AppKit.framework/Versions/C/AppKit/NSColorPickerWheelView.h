/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSImage;

@interface NSColorPickerWheelView : NSView {

	NSImage* displayWheelImage;
	CGPoint currentPt;
	char tracking;
	id colorPanel;
	id controllingPicker;
	double brightness;

}
-(void)drawRect:(CGRect)arg1 ;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)_windowChangedKeyState;
-(char)acceptsFirstResponder;
-(void)moveRight:(id)arg1 ;
-(void)moveLeft:(id)arg1 ;
-(char)resignFirstResponder;
-(char)acceptsFirstMouse:(id)arg1 ;
-(char)becomeFirstResponder;
-(char)needsPanelToBecomeKey;
-(void)mouseDown:(id)arg1 ;
-(char)mouseDownCanMoveWindow;
-(void)setColor:(id)arg1 ;
-(id)color;
-(void)viewSizeChanged:(id)arg1 ;
-(id)storeColorPanel:(id)arg1 ;
-(void)setKeyboardFocusRingNeedsDisplayIfNeededInRect:(CGRect)arg1 ;
-(char)_isShowingKeyboardFocus;
-(void)moveUp:(id)arg1 ;
-(void)moveDown:(id)arg1 ;
-(char)_pointInPicker:(CGPoint*)arg1 ;
-(void)moveCurrentPointInDirection:(CGPoint)arg1 ;
-(char)isTracking;
-(void)setBrightness:(double)arg1 ;
-(id)brightColor;
-(CGPoint)_pointFromColor:(id)arg1 ;
-(id)_brightColorFromPoint:(CGPoint)arg1 fullBrightness:(char)arg2 ;
-(void)_compositeImage;
-(id)_resizeView;
-(id)_colorFromPoint:(CGPoint)arg1 ;
@end

