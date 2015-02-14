/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSCGSContext.h>

@class _NSWindowGraphicsContextAux;

@interface NSWindowGraphicsContext : NSCGSContext {

	unsigned _cgsWindowID;
	unsigned _displayPostingDisableCount;
	unsigned _flushDisableCount;
	_NSWindowGraphicsContextAux* _auxiliary;

}
-(void)_WebKitSystemInterface_setGraphicsPort:(CGContextRef)arg1 ;
-(void)_WebKitSystemInterface_setGraphicsPort:(CGContextRef)arg1 ;
-(void)dealloc;
-(id)initWithWindow:(id)arg1 ;
-(id)focusStack;
-(unsigned)windowID;
-(char)_shouldEnforcePixelAlignment;
-(void)_setShouldEnforcePixelAlignment:(char)arg1 ;
-(double)_scaleFactor;
-(char)isDrawingToScreen;
-(id)attributes;
-(void)setFocusStack:(id)arg1 ;
-(id)_initWithWindowNumber:(long long)arg1 ;
-(void)resetFlushDisableCount;
-(void)disableFlush;
-(void)reenableFlush;
-(char)isFlushDisabled;
-(void)resetDisplayDisableCount;
-(void)disableDisplayPositing;
-(void)reenableDisplayPosting;
-(char)isDisplayPostingDisabled;
-(id)_initWithWindowNumber:(long long)arg1 scaleFactor:(double)arg2 useCoreAnimation:(char)arg3 ;
-(long long)_threadSequence;
-(void)_setThreadSequence:(long long)arg1 ;
-(id)_initWithWindowNumber:(long long)arg1 scaleFactor:(double)arg2 ;
@end

