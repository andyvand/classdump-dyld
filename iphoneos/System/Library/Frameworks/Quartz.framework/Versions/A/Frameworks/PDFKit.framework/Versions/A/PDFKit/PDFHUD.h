/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:34 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <PDFKit/NSAnimationDelegate.h>

@class NSTrackingArea, PDFHUDView, NSWindow, NSAnimation, NSTimer, NSView, NSString;

@interface PDFHUD : NSObject <NSAnimationDelegate> {

	NSTrackingArea* _trackingArea;
	PDFHUDView* _hudView;
	NSWindow* _hudWindow;
	NSAnimation* _animation;
	int _fadeState;
	NSTimer* _fadeInTimer;
	NSTimer* _fadeTimer;
	float _fadeValue;
	char _sidebarOpen;
	NSView* _trackingView;
	id _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fadeHUDIn;
-(void)setDelegate:(id)arg1 ;
-(id)window;
-(id)delegate;
-(void)animationDidEnd:(id)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)pdfViewResized:(id)arg1 ;
-(void)displayModeChanged:(id)arg1 ;
-(void)documentChanged:(id)arg1 ;
-(void)repositionHUDWindow;
-(CGRect)getProposedHUDFrame;
-(void)hudFadeInTimerElapsed:(id)arg1 ;
-(void)resetHUDFadeTimer;
-(void)hudFadeTimerElapsed:(id)arg1 ;
-(void)fadeHUDOut;
-(id)initForView:(id)arg1 ;
-(void)killHUD;
-(id)trackingView;
-(void)setSidebarIsOpen:(char)arg1 ;
-(void)hideHUDNow:(id)arg1 ;
-(void)handleAnimationProgress:(id)arg1 ;
@end

