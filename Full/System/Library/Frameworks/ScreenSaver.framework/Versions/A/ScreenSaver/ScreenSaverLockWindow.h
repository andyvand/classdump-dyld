/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:10 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/ScreenSaver.framework/Versions/A/ScreenSaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenSaver/ScreenSaver-Structs.h>
#import <AppKit/NSWindow.h>
#import <ScreenSaver/NSWindowDelegate.h>

@class ScreenSaverLockView, NSTimer, NSDate, SFAnimatedLockButton, NSString;

@interface ScreenSaverLockWindow : NSWindow <NSWindowDelegate> {

	ScreenSaverLockView* _lockView;
	NSTimer* _updateTimer;
	NSTimer* _fadeTimer;
	NSDate* _fadeStartTime;
	NSDate* _startTime;
	SFAnimatedLockButton* _lockButton;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)showWithCountdownSeconds:(double)arg1 ;
+(void)dismiss;
-(void)_updateWindow;
-(void)_showWithCountdownSeconds:(double)arg1 ;
-(void)_fadeWindow;
-(void)_dismiss;
-(void)dealloc;
-(id)initWithContentRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(char)arg4 ;
@end

