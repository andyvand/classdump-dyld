/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PassKit.framework/Versions/A/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <AppKit/NSWindowController.h>
#import <PassKit/PKPassViewerDelegate.h>

@class NSWindow, NSTextField, NSButton, PKPassViewerViewController, PKPass, NSString;

@interface PKPassWindowController : NSWindowController <PKPassViewerDelegate> {

	NSWindow* _clientWindow;
	NSWindow* _backgroundMaskWindow;
	NSWindow* _passChildWindow;
	char _clientWindowIsResizable;
	char _active;
	char _attachedToParentWindow;
	char _hasFocus;
	CGRect _serviceWindowFrameBeforeAnimation;
	CGRect _serviceWindowFrameAfterAnimation;
	NSTextField* _titleTextField;
	NSTextField* _moreInfoTextField;
	NSButton* _cancelButton;
	NSButton* _addToPassbookButton;
	double _slideUpYDelta;
	char _attachToHostWindow;
	PKPassViewerViewController* _passViewController;
	PKPass* _pass;
	NSButton* _closeButton;
	long long _openAnimationStyle;
	long long _closeAnimationStyle;
	CGRect _positionRelativeToRect;

}

@property (readonly) PKPassViewerViewController * passViewController;              //@synthesize passViewController=_passViewController - In the implementation block
@property (readonly) PKPass * pass;                                                //@synthesize pass=_pass - In the implementation block
@property (readonly) NSButton * closeButton;                                       //@synthesize closeButton=_closeButton - In the implementation block
@property (getter=isActive) char active;                                           //@synthesize active=_active - In the implementation block
@property (retain) NSWindow * clientWindow;                                        //@synthesize clientWindow=_clientWindow - In the implementation block
@property (assign) CGRect positionRelativeToRect;                                  //@synthesize positionRelativeToRect=_positionRelativeToRect - In the implementation block
@property (assign) long long openAnimationStyle;                                   //@synthesize openAnimationStyle=_openAnimationStyle - In the implementation block
@property (assign) long long closeAnimationStyle;                                  //@synthesize closeAnimationStyle=_closeAnimationStyle - In the implementation block
@property (assign) char attachToHostWindow;                                        //@synthesize attachToHostWindow=_attachToHostWindow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PKPass *)pass;
-(void)setClientWindow:(NSWindow *)arg1 ;
-(NSWindow *)clientWindow;
-(id)initWithPass:(id)arg1 ;
-(void)setAttachToHostWindow:(char)arg1 ;
-(void)setOpenAnimationStyle:(long long)arg1 ;
-(void)setCloseAnimationStyle:(long long)arg1 ;
-(void)performShowAnimation;
-(char)attachToHostWindow;
-(CGRect)_centeredRectWithSize:(CGSize)arg1 inRect:(CGRect)arg2 ;
-(CGRect)clientWindowFrame;
-(char)clientWindowAvailable;
-(void)_synchronizeBackgroundWindowFrame;
-(void)giveFocusToServiceUIAndNotifyHelper:(char)arg1 ;
-(void)clientWindowDidBecomeKey:(id)arg1 ;
-(void)clientWindowDidResize:(id)arg1 ;
-(void)clientWindowWillClose:(id)arg1 ;
-(void)clientWindowWillMiniaturize:(id)arg1 ;
-(CGRect)_hostFrame;
-(CGRect)positionRelativeToRect;
-(long long)openAnimationStyle;
-(CGRect)_windowFrameAfterAnimation;
-(CGRect)_zoomedOutRectWithFrame:(CGRect)arg1 ;
-(void)_addChildWindows;
-(id)_windowShowAnimation;
-(void)_removeChildWindows;
-(id)_closeWindowAninationWithStyle:(long long)arg1 ;
-(void)relinquishFocusFromServiceUI;
-(long long)closeAnimationStyle;
-(void)endWithAnimationStyle:(long long)arg1 ;
-(void)passViewer:(id)arg1 didAddToPassbook:(id)arg2 ;
-(void)passViewer:(id)arg1 closeClicked:(id)arg2 ;
-(PKPassViewerViewController *)passViewController;
-(void)setPositionRelativeToRect:(CGRect)arg1 ;
-(char)isActive;
-(char)validateMenuItem:(id)arg1 ;
-(NSButton *)closeButton;
-(void)setActive:(char)arg1 ;
-(void)windowDidLoad;
@end

