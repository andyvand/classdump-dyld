/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Frameworks/PackageUIKit.framework/Versions/A/PackageUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PackageUIKit/PackageUIKit-Structs.h>
@class NSArray, NSSet, NSAlert, NSString, NSWindow;

@interface PUKApplicationCloser : NSObject {

	NSArray* _bundleIdentifiers;
	NSArray* _openApplications;
	NSArray* _openPlugIns;
	NSSet* _obtainedPlugInHolds;
	dispatch_queue_sRef _openApplicationsQueue;
	char _ignoreOtherUsers;
	NSAlert* _alert;
	NSString* _waitingTitle;
	char _isModal;
	char _isWaitingOffConsole;
	char _shouldSendQuitEvents;
	NSWindow* _windowForSheet;
	id _modalDelegate;
	SEL _modalDelegateEndSelector;
	void* _modalDelegateContextInfo;
	/*^block*/id _completionHandler;

}

@property (assign) char ignoreOtherUsers;              //@synthesize ignoreOtherUsers=_ignoreOtherUsers - In the implementation block
-(id)initWithBundleIdentifiers:(id)arg1 ;
-(char)_buildNextAlert;
-(void)_handleSwitchUser;
-(void)_cancelModalWithCode:(id)arg1 ;
-(void)_alertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(char)ignoreOtherUsers;
-(id)_updateProcessInfo:(id)arg1 recurse:(char)arg2 ;
-(id)_currentRunningProcesses;
-(long long)_actionForProcessWithInfo:(id)arg1 ;
-(void)_updateOpenApplicationsAndPlugIns;
-(char)_buildAlertForLogout;
-(char)_buildAlertForOpenApplications;
-(char)_buildAlertForOpenPlugIns;
-(id)_currentOpenApplications;
-(id)_currentOpenPlugIns;
-(id)_userNamesForIdentifiers:(id)arg1 omittingUser:(unsigned)arg2 ;
-(void)_didClickRetryButton:(id)arg1 ;
-(void)_startMonitoringOpenApplicationsForCurrentUser;
-(void)_sendQuitEventsToOpenApplications;
-(void)_didReturnToConsoleAfterSwitchUser:(id)arg1 ;
-(char)_sendQuitEventTo:(id)arg1 ;
-(void)cancelModal;
-(id)_executablePathForPID:(int)arg1 ;
-(id)_bundleIdentifierForExecutablePath:(id)arg1 bundlePath:(id*)arg2 ;
-(void)setIgnoreOtherUsers:(char)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(char)runModal;
-(void)beginSheetModalForWindow:(id)arg1 modalDelegate:(id)arg2 didEndSelector:(SEL)arg3 contextInfo:(void*)arg4 ;
-(void)beginSheetModalForWindow:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

