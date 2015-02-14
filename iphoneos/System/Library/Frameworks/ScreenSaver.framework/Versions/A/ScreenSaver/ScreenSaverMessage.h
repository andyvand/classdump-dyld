/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:36 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/ScreenSaver.framework/Versions/A/ScreenSaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSPanel, NSTextField, NSTimer, NSDate, NSScreen, NSString;

@interface ScreenSaverMessage : NSObject {

	NSPanel* _panel;
	NSTextField* _textField;
	NSTimer* _fadeTimer;
	NSDate* _fadeStartTime;
	NSDate* _startTime;
	NSScreen* _screen;
	NSString* _placement;
	double _duration;
	double _finalAlpha;

}
+(void)displayMessage:(id)arg1 onScreen:(id)arg2 duration:(double)arg3 ;
+(void)displayMessage:(id)arg1 onScreen:(id)arg2 duration:(double)arg3 alpha:(double)arg4 placement:(id)arg5 ;
+(void)displayMessage:(id)arg1 inLayer:(id)arg2 fontSize:(double)arg3 ;
+(void)clearMessages;
+(id)currentMessage;
-(void)_setFinalAlpha:(double)arg1 ;
-(void)_setPlacement:(id)arg1 ;
-(void)_displayMessage:(id)arg1 ;
-(void)_updateWindowLayout;
-(void)_fadeIn;
-(double)finalAlpha;
-(void)_fadeOut;
-(void)_animateFadeWindowIn;
-(void)_animateFadeWindowOut;
-(void)dealloc;
-(id)_panel;
-(void)_setDuration:(double)arg1 ;
-(id)initWithScreen:(id)arg1 ;
@end

