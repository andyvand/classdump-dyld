/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:28:45 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCoreServices/LSApplicationWorkspaceObserver.h>

@protocol OS_dispatch_queue;
@class NSHashTable, NSObject;

@interface LSApplicationWorkspaceRemoteObserver : LSApplicationWorkspaceObserver {

	BOOL _observinglsd;
	NSHashTable* _observers;
	NSObject<OS_dispatch_queue>* _progressSubscriptionsQueue;

}
-(void)setObservinglsd:(BOOL)arg1 ;
-(BOOL)isObservinglsd;
-(unsigned)currentObserverCount;
-(void)addLocalObserver:(id)arg1 ;
-(void)applicationInstallsDidCancel:(id)arg1 ;
-(void)applicationInstallsDidPause:(id)arg1 ;
-(void)applicationInstallsDidPrioritize:(id)arg1 ;
-(void)applicationInstallsDidResume:(id)arg1 ;
-(void)networkUsageChanged:(BOOL)arg1 ;
-(void)removeLocalObserver:(id)arg1 ;
-(id)localObservers;
-(void)applicationInstallsDidStart:(id)arg1 ;
-(void)applicationInstallsDidUpdateIcon:(id)arg1 ;
-(void)applicationInstallsDidChange:(id)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2 ;
-(void)dealloc;
-(id)init;
@end
