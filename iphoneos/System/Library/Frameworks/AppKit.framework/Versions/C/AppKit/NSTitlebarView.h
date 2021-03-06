/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSVisualEffectView.h>

@class NSTrackingArea;

@interface NSTitlebarView : NSVisualEffectView {

	char _transparent;
	NSTrackingArea* _buttonGroupTrackingArea;

}

@property (assign) char drawsSeparator; 
@property (assign) char transparent;                 //@synthesize transparent=_transparent - In the implementation block
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)rightMouseDown:(id)arg1 ;
-(id)titleFont;
-(void)setTransparent:(char)arg1 ;
-(char)acceptsFirstMouse:(id)arg1 ;
-(id)menuForEvent:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)updateTrackingAreas;
-(id)associatedThemeFrame;
-(void)setDrawsSeparator:(char)arg1 ;
-(char)drawsSeparator;
-(void)_removeTrackingAreaIfNeeded;
-(char)transparent;
@end

