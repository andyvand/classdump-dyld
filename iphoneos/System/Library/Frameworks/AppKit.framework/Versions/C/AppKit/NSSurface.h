/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSCGLDrawable.h>

@class NSView, NSWindow, NSWindowGraphicsContext;

@interface NSSurface : NSObject <NSCGLDrawable> {

	NSView* _view;
	NSWindow* _window;
	CGRect _frame;
	unsigned _surfaceID;
	unsigned _backingStore;
	int _saveWeighting;
	NSWindowGraphicsContext* _graphicsContext;
	int _focused;
	NSMouseTrackerDelegateRespondTo _sFlags;
	int _lastScreenNumber;
	double _lastResolution;
	double _alphaValue;
	double _backgroundBlurRadius;

}

@property (readonly) CGSize size; 
-(void)finalize;
-(void)dealloc;
-(void)setNeedsDisplay;
-(void)flush;
-(void)setFrame:(CGRect)arg1 ;
-(id)description;
-(CGRect)frame;
-(id)window;
-(id)view;
-(CGSize)size;
-(char)isVisible;
-(id)screen;
-(void)lockFocus;
-(void)unlockFocus;
-(void)setOpaque:(char)arg1 ;
-(char)isOpaque;
-(void)setView:(id)arg1 ;
-(void)displayIfNeeded;
-(char)lockFocusIfCanDraw;
-(double)alphaValue;
-(void)attachCGLContext:(CGLContextObjectRef)arg1 ;
-(void)detachCGLContext:(CGLContextObjectRef)arg1 ;
-(char)isCGLContextAttached:(CGLContextObjectRef)arg1 ;
-(id)initWithView:(id)arg1 ;
-(void)setAlphaValue:(double)arg1 ;
-(void)_windowWillClose:(id)arg1 ;
-(void)setWindow:(id)arg1 ;
-(char)needsDisplay;
-(void)orderOut;
-(unsigned)surfaceID;
-(void)orderFront;
-(void)setDeferSync:(char)arg1 ;
-(void)syncToViewUnconditionally;
-(void)syncToView:(char)arg1 ;
-(char)isFocused;
-(char)isOrderedIn;
-(void)setSaveWeighting:(int)arg1 ;
-(double)_cgScaleFactor;
-(void)syncBackingStoreResolution;
-(void)updateColorSpace;
-(CGSRegionObjectRef)_createRoundedBottomRegionForRect:(CGRect)arg1 ;
-(void)_configureAutoFlattening;
-(void)_updateLastScreenNumber;
-(void)_disposeBackingStore;
-(void)syncSurfaceResolution;
-(CGRect)_currentSurfaceFrame;
-(void)orderSurface:(long long)arg1 relativeTo:(id)arg2 ;
-(void)_createSurface;
-(void)_disposeSurface;
-(void)_windowDidComeBack:(id)arg1 ;
-(void)_windowWillGoAway:(id)arg1 ;
-(void)_windowDidMove:(id)arg1 ;
-(void)_windowDidChangeScreens:(id)arg1 ;
-(void)_windowDidChangeWindowNumber:(id)arg1 ;
-(void)_surfaceDidChangeScreen;
-(void)clearBackingStore;
-(void)updateOrderingForAlphaValue;
-(char)hasBackingStore;
-(void)_createBackingStore;
-(void)flushWithOptions:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 inWindow:(id)arg2 ;
-(void)orderBack;
-(char)deferSync;
-(char)ordersOutWhileAlphaValueIsZero;
-(void)setOrdersOutWhileAlphaValueIsZero:(char)arg1 ;
-(double)backgroundBlurRadius;
-(void)setBackgroundBlurRadius:(double)arg1 ;
-(int)saveWeighting;
@end

