/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ViewBridge.framework/Versions/A/ViewBridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ViewBridge/ViewBridge-Structs.h>
#import <AppKit/NSApplication.h>

@class NSMutableArray;

@interface NSViewServiceApplication : NSApplication {

	NSMutableArray* _exceptionQueue;
	unsigned _didReceiveReopenWindows : 1;

}
+(char)anyRemoteEverTrustedOurKeyEvents;
+(char)isFakeEvent:(id)arg1 ;
+(void)learnRemotePID;
+(void)cacheMainBundleAsServiceBundle;
+(void)registerStandardUserDefaults;
+(void)ensureNSApp;
+(void)obviateWindowAnimations;
+(void)cacheFakeEvent:(id)arg1 ;
+(void)viewTrustsServiceKeyEvents;
+(id)realKeyEventInProgress;
+(void)stoleKeyFocus:(id)arg1 ;
+(void)doctorServiceBundleInfoDictionary;
+(void)validateXpcBundleInfoDictionary:(id)arg1 ;
+(id)bootstrapSharedServiceListener;
+(void)commonBootstrap;
+(char)commonNamedFaults;
+(int)bootstrapKind;
+(char)hasBootstrapKind:(int)arg1 ;
+(id)bundleForClass;
-(void)schedulePermittedFrontNotifications;
-(void)_configureWindow:(id)arg1 ;
-(void)forwardEventToRemoteApp:(id)arg1 ;
-(void)sendEvent:(id)arg1 withForwarding:(char)arg2 ;
-(void)raiseIfDeferredException:(id)arg1 ;
-(char)_eventIsToxic:(id)arg1 ;
-(void)sendEventWithoutCatch:(id)arg1 withForwarding:(char)arg2 ;
-(char)_modalSession:(NSModalSessionRef)arg1 wouldBeepGivenFakeEvent:(id)arg2 ;
-(id)beginRemoteModalSession:(id)arg1 forWindow:(id)arg2 withSize:(CGSize)arg3 withReply:(/*^block*/id)arg4 ;
-(NSModalSessionRef)beginLocalAppModalSessionForWindow:(id)arg1 ;
-(void)beginRemoteAppModalSessionForWindow:(id)arg1 ;
-(void)endLocalAppModalSession:(NSModalSessionRef)arg1 withWindow:(id)arg2 ;
-(void)endRemoteAppModalSession:(NSModalSessionRef)arg1 withWindow:(id)arg2 ;
-(void)permittedFrontAppsChanged:(id)arg1 ;
-(void)enqueueException:(id)arg1 ;
-(void)dealloc;
-(id)nextEventMatchingMask:(unsigned long long)arg1 untilDate:(id)arg2 inMode:(id)arg3 dequeue:(char)arg4 ;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(void)beginSheet:(id)arg1 modalForWindow:(id)arg2 modalDelegate:(id)arg3 didEndSelector:(SEL)arg4 contextInfo:(void*)arg5 ;
-(void)endSheet:(id)arg1 returnCode:(long long)arg2 ;
-(void)_reopenWindowsAsNecessaryIncludingRestorableState:(char)arg1 registeringAsReady:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)finishLaunching;
-(void)sendEvent:(id)arg1 ;
-(void)_registerRequiredAEHandlers;
-(void)_modalSession:(NSModalSessionRef)arg1 sendEvent:(id)arg2 ;
-(NSModalSessionRef)beginModalSessionForWindow:(id)arg1 ;
-(void)endModalSession:(NSModalSessionRef)arg1 ;
-(void)onFirstEvent;
-(char)_handleKeyEquivalent:(id)arg1 ;
-(void)endSheet:(id)arg1 ;
-(void)event:(id)arg1 wouldActivateWindow:(id)arg2 ;
-(int)_stealKeyFocusWithOptions:(unsigned)arg1 ;
-(int)_releaseKeyFocus;
-(void)_cycleWindowsReversed:(char)arg1 ;
-(void)_removeWindow:(id)arg1 ;
-(void)_addWindow:(id)arg1 ;
-(char)_shouldLoadMainNibNamed:(id)arg1 ;
@end

