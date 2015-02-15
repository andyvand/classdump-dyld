/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:32:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/RemoteViewServices.framework/Versions/A/RemoteViewServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSPanel.h>

@class NSRemoteWindowController;

@interface NSLocalWindowWrappingRemoteWindow : NSPanel {

	NSRemoteWindowController* _remoteWindowController;
	/*^block*/id _eventHandler;

}

@property (assign) id eventHandler;                                                //@synthesize eventHandler=_eventHandler - In the implementation block
@property (assign) NSRemoteWindowController * remoteWindowController;              //@synthesize remoteWindowController=_remoteWindowController - In the implementation block
@property (readonly) char canBecomeKeyWindow; 
@property (readonly) char canBecomeMainWindow; 
-(char)blacklistedSelector:(SEL)arg1 ;
-(void)setRemoteWindowController:(NSRemoteWindowController *)arg1 ;
-(void)_enableAutomaticTerminationForRVSClient;
-(void)_disableAutomaticTerminationForRVSClient;
-(void)remoteResponderChainPerformSelector:(SEL)arg1 ;
-(char)remoteValidateAction:(SEL)arg1 tag:(long long)arg2 type:(unsigned long long)arg3 ;
-(NSRemoteWindowController *)remoteWindowController;
-(id)_possiblyPerformAction:(SEL)arg1 inRemoteReponderChainAndDoAction:(char)arg2 ;
-(void)sendEvent:(id)arg1 ;
-(void)makeKeyWindow;
-(char)canBecomeMainWindow;
-(void)makeMainWindow;
-(id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2 ;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(void)undo:(id)arg1 ;
-(void)redo:(id)arg1 ;
-(void)keyDown:(id)arg1 ;
-(char)canBecomeKeyWindow;
-(id)eventHandler;
-(void)setEventHandler:(id)arg1 ;
@end
