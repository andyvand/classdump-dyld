/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:08 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <AppKit/NSWindowController.h>

@protocol WebVideoFullscreenControllerDelegate;
@class NSWindow, WebVideoFullscreenHUDWindowController, WebWindowFadeAnimation;

@interface WebVideoFullscreenController : NSWindowController {

	RefPtr<WebCore::HTMLMediaElement>* _mediaElement;
	id<WebVideoFullscreenControllerDelegate> _delegate;
	NSWindow* _backgroundFullscreenWindow;
	WebVideoFullscreenHUDWindowController* _hudController;
	WebWindowFadeAnimation* _fadeAnimation;
	char _isEndingFullscreen;
	char _forceDisableAnimation;
	unique_ptr<WebCore::DisplaySleepDisabler, std::__1::default_delete<WebCore::DisplaySleepDisabler> >* _displaySleepDisabler;

}
-(void)applicationDidResignActive:(id)arg1 ;
-(void)applicationDidChangeScreenParameters:(id)arg1 ;
-(void)rateChanged:(id)arg1 ;
-(id)fullscreenWindow;
-(void)setupVideoOverlay:(id)arg1 ;
-(double)clearFadeAnimation;
-(void)updateMenuAndDockForFullscreen;
-(void)updatePowerAssertions;
-(void)requestExitFullscreenWithAnimation:(char)arg1 ;
-(CGRect)mediaElementRect;
-(void)setupFadeAnimationIfNeededAndFadeIn:(char)arg1 ;
-(void)windowDidEnterFullscreen;
-(void)windowDidExitFullscreen;
-(void)_requestExit;
-(HTMLMediaElement*)mediaElement;
-(void)setMediaElement:(HTMLMediaElement*)arg1 ;
-(void)enterFullscreen:(id)arg1 ;
-(void)exitFullscreen;
-(void)requestExitFullscreen;
-(void)fadeHUDIn;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)delegate;
-(void)windowDidLoad;
@end

