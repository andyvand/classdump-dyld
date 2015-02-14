/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SSSessionDelegate <NSObject>
@optional
-(char)handleSSInputEvent:(id)arg1;
-(void)ssSessionTerminated:(id)arg1;
-(void)ssSession:(id)arg1 connectDidFail:(int)arg2;
-(void)ssSession:(id)arg1 delegateControlModeSet:(long long)arg2;
-(void)ssSession:(id)arg1 wantsCredentialsForAuthenticationTypes:(id)arg2;
-(void)ssSession:(id)arg1 authenticationResult:(int)arg2;
-(void)ssSession:(id)arg1 wantsSessionSelection:(id)arg2 consoleUser:(id)arg3;
-(void)ssSession:(id)arg1 sessionSelectionResult:(int)arg2;
-(void)ssSessionReady:(id)arg1;
-(void)ssSession:(id)arg1 sizeChanged:(SSSize)arg2;
-(void)ssSession:(id)arg1 fullScreenUpdateProgress:(double)arg2;
-(void)ssSession:(id)arg1 cursorPositionChanged:(SSPoint)arg2;
-(void)ssSessionRemotePasteboardChanged:(id)arg1;
-(void)ssSession:(id)arg1 systemInfoRequestCompleted:(id)arg2;
-(void)ssSession:(id)arg1 dragDroppedLocalPaths:(id)arg2 onRemotePath:(id)arg3;
-(void)ssSession:(id)arg1 fileCopyProgressDidUpdate:(id)arg2;
-(void)ssSession:(id)arg1 fileCopyDidComplete:(id)arg2;
-(void)ssSessionBeeped:(id)arg1;
-(void)ssSessionUserPictureChanged:(id)arg1;
-(void)ssSession:(id)arg1 virtualDisplayStateChanged:(char)arg2;
-(char)hasHotkeyForKeyCode:(id)arg1;
-(void)ssSessionUserClosedConnection:(id)arg1;
-(void)ssSessionDisplaysDidWake:(id)arg1;
-(void)ssSessionDisplaysDidSleep:(id)arg1;
-(void)ssSession:(id)arg1 onConsoleChanged:(char)arg2;
-(void)ssSession:(id)arg1 canToggleCurtainModeChanged:(char)arg2;
-(void)ssSession:(id)arg1 allowsControl:(char)arg2;
-(void)ssSessionPaused:(id)arg1;
-(void)ssSessionResumed:(id)arg1;

@end

