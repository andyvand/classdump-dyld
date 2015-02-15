/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistantd/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue, OS_xpc_object, OS_dispatch_source;
@class NSObject, NSXPCListener, NSString;

@interface ADDaemon : NSObject <NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCListener* _clientListener;
	unsigned long long _clientConnectionsCount;
	NSXPCListener* _dictationListener;
	unsigned long long _dictationConnectionsCount;
	NSXPCListener* _settingsListener;
	NSObject*<OS_xpc_object> _syncListener;
	NSObject*<OS_dispatch_source> _idleTimerSource;
	char _idleTimerFlag;
	NSObject*<OS_dispatch_source> _memoryWarningSource;
	char _syncNotifyTokenRegistered;
	int _syncNotifyToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDaemon;
-(void)_daemonDidLaunch;
-(void)_daemonWillShutdown;
-(void)_resetIdleTimerFlag;
-(char)_shutdownConditionsMet;
-(char)_clientListenerShouldAcceptNewConnection:(id)arg1 ;
-(char)_settingsListenerShouldAcceptNewConnection:(id)arg1 ;
-(char)_dictationListenerShouldAcceptNewConnection:(id)arg1 ;
-(void)_scheduleBackgroundJobsIfNecessary;
-(void)keepAlive;
-(void)_jobComplete;
-(void)_scheduleDestroyJobIfNecessary;
-(void)_scheduleRefreshValidationIfNecessary;
-(void)_setupClientListener;
-(void)_setupDictationListener;
-(void)_setupSettingsListener;
-(void)_setupSyncListener;
-(void)_registerForSyncNotifications;
-(void)_setupShutdownTimers;
-(void)_setupDictationModelDownload;
-(void)_scheduleJobWithInterval:(double)arg1 jobBlock:(/*^block*/id)arg2 ;
-(int)idleTimerInterval;
-(void)_setupBackgroundTaskAgent;
-(void)scheduleSyncJob;
-(void)scheduleDestroyJob;
-(void)unscheduleDestroyJob;
-(void)scheduleValidationRefreshForInterval:(double)arg1 ;
-(void)scheduleActivationTokenRefresh;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)_queue;
-(id)init;
-(void)dealloc;
-(void)run;
-(void)shutdown;
@end
