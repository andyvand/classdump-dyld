/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <PDFKit/NSAnimationDelegate.h>

@class NSWindow, NSAnimation, NSTimer, NSString;

@interface PDFCoachMark : NSObject <NSAnimationDelegate> {

	NSWindow* _coachMarkWindow;
	CGAffineTransform _prePulseTransform;
	NSAnimation* _pulseAnimation;
	NSTimer* _startFadeOutTimer;
	NSAnimation* _fadeOutAnimation;
	char _expired;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)animationDidEnd:(id)arg1 ;
-(void)_targetViewDidMoveOrChangeSize:(id)arg1 ;
-(void)_startPulse;
-(void)_startFadeOut:(id)arg1 ;
-(void)expire;
-(id)initWithContentRect:(CGRect)arg1 contentImage:(id)arg2 forView:(id)arg3 selfDestruct:(char)arg4 ;
-(CGRect)rectOnScreen;
-(void)_animateFadeOut;
-(void)_animatePulse;
@end

