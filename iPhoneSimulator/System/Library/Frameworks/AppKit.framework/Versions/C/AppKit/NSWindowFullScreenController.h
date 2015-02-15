/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:31 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSView, NSTrackingArea, NSTimer, _NSWindowFullScreenTransition, NSString;

@interface NSWindowFullScreenController : NSObject {

	CGRect savedFrame;
	NSView* sidebarContainer;
	NSTrackingArea* sidebarTrackingArea;
	NSTimer* sidebarTrackingTimer;
	_NSWindowFullScreenTransition* fullScreenTransition;
	double sidebarWidth;
	NSString* stringWithSavedFrame;
	int savedStyleMask;
	char toolbarWasHidden;
	CGRect savedScreenFrame;

}

@property (assign) CGRect savedFrame; 
@property (assign) int savedStyleMask; 
@property (retain) NSView * sidebarContainer; 
@property (retain) NSTrackingArea * sidebarTrackingArea; 
@property (retain) NSTimer * sidebarTrackingTimer; 
@property (copy) NSString * stringWithSavedFrame; 
@property (assign) double sidebarWidth; 
@property (assign) char toolbarWasHidden; 
@property (assign) CGRect savedScreenFrame; 
-(void)dealloc;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(id)_fullScreenTransition;
-(void)setToolbarWasHidden:(char)arg1 ;
-(char)toolbarWasHidden;
-(void)setSidebarWidth:(double)arg1 ;
-(double)sidebarWidth;
-(void)setSidebarTrackingTimer:(NSTimer *)arg1 ;
-(NSView *)sidebarContainer;
-(NSTrackingArea *)sidebarTrackingArea;
-(void)setSidebarTrackingArea:(NSTrackingArea *)arg1 ;
-(void)setSavedFrame:(CGRect)arg1 ;
-(void)setStringWithSavedFrame:(NSString *)arg1 ;
-(void)setSavedScreenFrame:(CGRect)arg1 ;
-(CGRect)savedFrame;
-(CGRect)savedScreenFrame;
-(void)setSidebarContainer:(NSView *)arg1 ;
-(NSString *)stringWithSavedFrame;
-(void)sidebarChangedSize:(id)arg1 ;
-(int)savedStyleMask;
-(void)setSavedStyleMask:(int)arg1 ;
-(NSTimer *)sidebarTrackingTimer;
@end

