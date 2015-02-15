/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:20 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/RemoteViewServices.framework/Versions/A/RemoteViewServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RemoteViewServices/RemoteViewServices-Structs.h>
#import <AppKit/NSWindow.h>

@class NSSharedWindowController, NSView;

@interface NSAccessoryWindow : NSWindow {

	unsigned long long _panelType;
	id _panel;
	xpc_connection_sRef _accessoryConnection;
	NSSharedWindowController* _accessoryWindowController;
	NSView* _accessoryView;
	char _isManuallyMakingFirstResponder;
	char _hasRemoteViewActivation;
	char _orderFrontPending;
	char _orderedFrontWithCustomizations;
	unsigned _ignoreFirstResponderChange : 1;

}

@property (assign) char isManuallyMakingFirstResponder;              //@synthesize isManuallyMakingFirstResponder=_isManuallyMakingFirstResponder - In the implementation block
@property (retain) NSView * accessoryView;                           //@synthesize accessoryView=_accessoryView - In the implementation block
@property (assign) char handleEvents; 
@property (readonly) char hasRemoteViewActivation;                   //@synthesize hasRemoteViewActivation=_hasRemoteViewActivation - In the implementation block
@property (assign) id remotePanel;                                   //@synthesize panel=_panel - In the implementation block
-(void)parentWindowDidResignKey:(id)arg1 ;
-(void)applicationWillUpdate:(id)arg1 ;
-(void)_resetPanel:(id)arg1 panelType:(unsigned long long)arg2 accessoryView:(id)arg3 ;
-(CGRect)_accessoryViewFrame;
-(void)moveOffscreenForSnapshot;
-(void)setHandleEvents:(char)arg1 ;
-(char)_getAccessoryViewAccessibilityTokens:(id)arg1 ;
-(char)_setRemoteParentWindowElement:(id)arg1 orChild:(id)arg2 withRemoteTokens:(id)arg3 ;
-(char)_createAccessoryConnectionWithServiceQueue:(dispatch_queue_sRef)arg1 serviceRequest:(id)arg2 ;
-(void)setIsManuallyMakingFirstResponder:(char)arg1 ;
-(char)handleEvents;
-(char)isManuallyMakingFirstResponder;
-(id)remotePanel;
-(id)parentWindowcontroller;
-(void)setRemotePanel:(id)arg1 ;
-(char)_remotePanelIsRunning;
-(void)setParentFocusProperty;
-(char)hasRemoteViewActivation;
-(void)setRemoteViewActivation:(char)arg1 ;
-(void)firstResponderChanged:(id)arg1 ;
-(char)accessibilityIsIgnored;
-(id)accessibilityParentAttribute;
-(void)orderOut:(id)arg1 ;
-(char)makeFirstResponder:(id)arg1 ;
-(void)setAccessoryView:(NSView *)arg1 ;
-(NSView *)accessoryView;
-(void)sendEvent:(id)arg1 ;
-(void)orderFront:(id)arg1 ;
-(id)initWithContentRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(char)arg4 ;
-(void)_moveOffscreen;
-(void)_moveOnscreen;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)cleanup;
@end

