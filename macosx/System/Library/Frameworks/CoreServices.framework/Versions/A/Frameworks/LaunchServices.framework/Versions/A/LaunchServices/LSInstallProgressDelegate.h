/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <LaunchServices/LaunchServices-Structs.h>
#import <LaunchServices/NSXPCListenerDelegate.h>
#import <LaunchServices/LSInstallProgressProtocol.h>

@class NSMutableDictionary, LSInstallProgressList, NSMutableOrderedSet, NSMutableSet, LSObserverTimer, NSString;

@interface LSInstallProgressDelegate : NSObject <NSXPCListenerDelegate, LSInstallProgressProtocol> {

	NSMutableDictionary* _observers;
	LSInstallProgressList* _progresses;
	NSMutableOrderedSet* _orderedInstalls;
	NSMutableDictionary* _installIndexes;
	NSMutableSet* _inactiveInstalls;
	LSObserverTimer* installsStartedTimer;
	LSObserverTimer* iconsUpdatedTimer;
	LSObserverTimer* installsUpdatedTimer;
	LSObserverTimer* installsFinishedTimer;
	LSObserverTimer* didUninstallTimer;
	dispatch_queue_sRef _installControlsQueue;
	dispatch_queue_sRef _observersQueue;
	char _usingNetwork;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)addObserver:(id)arg1 withUUID:(id)arg2 ;
-(void)removeObserverWithUUID:(id)arg1 ;
-(void)placeholderInstalledForApp:(id)arg1 ;
-(void)sendIconUpdatedNotificationForApp:(id)arg1 ;
-(void)sendInstalledNotificationForApps:(id)arg1 ;
-(void)sendUninstalledNotificationForApps:(id)arg1 ;
-(void)sendChangeNotificationForApp:(id)arg1 ;
-(void)createInstallProgressForApplication:(id)arg1 withPhase:(unsigned long long)arg2 andPublishingString:(id)arg3 ;
-(void)installationEndedForApplication:(id)arg1 ;
-(void)installationFailedForApplication:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)sendNetworkUsageChangedNotification;
-(void)restoreInactiveInstalls;
-(id)parentProgressForApplication:(id)arg1 andPhase:(unsigned long long)arg2 isActive:(char)arg3 ;
-(void)sendInstalledNotificationForApp:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)sendUninstalledNotificationForApp:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)sendWillUninstallNotificationForApps:(id)arg1 Plugins:(id)arg2 isUpdate:(char)arg3 ;
-(void)sendFailedNotificationForApp:(id)arg1 isUninstall:(char)arg2 ;
-(void)beginObservingConnection;
-(void)endObservingConnection;
-(void)rebuildInstallIndexes;
-(void)sendAppControlsNotificationForApp:(id)arg1 withName:(id)arg2 ;
-(void)handleCancelInstallationForApp:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

