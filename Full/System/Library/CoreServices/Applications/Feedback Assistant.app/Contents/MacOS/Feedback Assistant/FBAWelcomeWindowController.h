/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Feedback Assistant.app/Contents/MacOS/Feedback Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Feedback Assistant/Feedback Assistant-Structs.h>
#import <AppKit/NSWindowController.h>

@protocol FBAWindowDelegate;
@class NSButton, WebView;

@interface FBAWelcomeWindowController : NSWindowController {

	char _didProceed;
	id<FBAWindowDelegate> _delegate;
	NSButton* _startButton;
	WebView* _webView;

}

@property (__weak) id<FBAWindowDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (__weak) NSButton * startButton;                      //@synthesize startButton=_startButton - In the implementation block
@property (__weak) WebView * webView;                           //@synthesize webView=_webView - In the implementation block
@property (assign) char didProceed;                             //@synthesize didProceed=_didProceed - In the implementation block
-(void)setDidProceed:(char)arg1 ;
-(char)didProceed;
-(NSButton *)startButton;
-(void)proceed:(id)arg1 ;
-(void)setStartButton:(NSButton *)arg1 ;
-(WebView *)webView;
-(void)setWebView:(WebView *)arg1 ;
-(unsigned long long)webView:(id)arg1 dragDestinationActionMaskForDraggingInfo:(id)arg2 ;
-(id)webView:(id)arg1 contextMenuItemsForElement:(id)arg2 defaultMenuItems:(id)arg3 ;
-(id)init;
-(void)setDelegate:(id<FBAWindowDelegate>)arg1 ;
-(id<FBAWindowDelegate>)delegate;
-(void)close;
-(void)windowDidLoad;
-(char)webView:(id)arg1 shouldChangeSelectedDOMRange:(id)arg2 toDOMRange:(id)arg3 affinity:(unsigned long long)arg4 stillSelecting:(char)arg5 ;
-(unsigned long long)webView:(id)arg1 dragSourceActionMaskForPoint:(CGPoint)arg2 ;
@end

