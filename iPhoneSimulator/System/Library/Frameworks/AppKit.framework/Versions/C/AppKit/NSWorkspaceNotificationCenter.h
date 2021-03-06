/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:31 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <Foundation/NSNotificationCenter.h>

@class NSWorkspace, NSLock, NSHashTable;

@interface NSWorkspaceNotificationCenter : NSNotificationCenter {

	NSWorkspace* _workspace;
	NSLock* _workspaceLock;
	dispatch_queue_sRef _volumeRefQueue;
	NSWorkspaceNotificationCenterSubsystemContext_t _subsystemContexts[17];
	NSHashTable* _notificationObservers[22];

}
-(void)dealloc;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4 ;
-(void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3 ;
-(id)addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)initWithWorkspace:(id)arg1 ;
-(void)_createSubsystemIfNecessary:(int)arg1 ;
-(void)_destroyAllUnobservedSubsystems;
-(char)_destroySubsystemIfUnobserved:(int)arg1 ;
-(void)_addOrRemoveObserverForAllNotifications:(id)arg1 isAdding:(char)arg2 ;
-(void)_addOrRemoveObserver:(id)arg1 forName:(id)arg2 isAdding:(char)arg3 ;
-(char)_checkForObserversOfSubsystem:(int)arg1 ;
-(void)_workspaceDidResignOrBecomeActive:(id)arg1 ;
-(unsigned)connectionID;
-(void)_workspaceDidBecomeActive:(id)arg1 ;
-(void)_workspaceDidResignActive:(id)arg1 ;
-(void)_accessibilityDisplaySettingsDidChange:(id)arg1 ;
@end

