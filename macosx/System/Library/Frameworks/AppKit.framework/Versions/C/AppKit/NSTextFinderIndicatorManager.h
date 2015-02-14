/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSMapTable, _NSTextFinderImpl, NSView, NSWindow, _NSFindIndicatorOverlayView, NSMutableArray;

@interface NSTextFinderIndicatorManager : NSObject {

	NSMapTable* _findIndicators;
	_NSTextFinderImpl* _textFinderImpl;
	char _isVisible;
	char _updating;
	NSView* _contentView;
	NSWindow* _overlayWindow;
	_NSFindIndicatorOverlayView* _overlayView;
	unsigned long long _disabledScreenUpdatesToken;
	char* _updateCancel;
	char* _pulseCancel;
	NSMutableArray* _indicatorsToPulse;

}
+(id)_textRects:(id)arg1 inWebViewCoordinateSpace:(id)arg2 ;
-(void)finalize;
-(void)dealloc;
-(void)cancel;
-(char)isVisible;
-(id)_parentWindow;
-(id)_contentView;
-(void)_containerDidChange;
-(id)initWithTextFinderImpl:(id)arg1 ;
-(void)pulse;
-(void)setNeedsUpdate:(char)arg1 ;
-(char)needsUpdate;
-(void)setIsVisible:(char)arg1 animate:(char)arg2 ;
-(void)_flushUpdate;
-(void)_enumerateViewsAndRectsForRange:(NSRange)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_delayedUpdate;
-(void)_scheduleDelayedUpdate;
-(void)_showAnimate:(char)arg1 ;
-(void)_hideAnimate:(char)arg1 ;
-(id)_textFinderImpl;
@end

