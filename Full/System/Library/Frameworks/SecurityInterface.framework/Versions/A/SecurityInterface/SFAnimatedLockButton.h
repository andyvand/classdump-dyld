/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:13 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SecurityInterface.framework/Versions/A/SecurityInterface
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SecurityInterface/SecurityInterface-Structs.h>
#import <AppKit/NSButton.h>

@class NSMutableArray, NSTimer, NSTrackingArea, NSSound;

@interface SFAnimatedLockButton : NSButton {

	NSMutableArray* _animationArray;
	int _animationIndex;
	NSTimer* _timer;
	char _locked;
	char _mouseEntered;
	NSTrackingArea* _trackingArea;
	NSSound* _sfUnlockSound;
	NSSound* _sfLockSound;

}
-(void)startRollOverTracking:(float)arg1 forRTL:(char)arg2 ;
-(void)lock:(char)arg1 ;
-(void)unlock:(char)arg1 ;
-(void)stopRollOverTracking;
-(void)startRollOverTracking:(float)arg1 ;
-(void)_animate:(char)arg1 ;
-(void)_setupImages;
-(void)startRollOverTracking;
-(void)_drawRollOver:(char)arg1 ;
-(void)_setPressedStateImage;
-(void)_loadAnimation;
-(void)_animatorTimerProc:(id)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(id)_imageNamed:(id)arg1 ;
@end

