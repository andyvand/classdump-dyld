/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:29:57 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AppLaunchStats/AppLaunchStats-Structs.h>
#import <DuetPLLConfigLogger/DuetLoggerProtocol.h>
#import <AppLaunchStats/DuetSaveAndRestore.h>

@protocol OS_dispatch_queue;
@class NSObject, AppLaunchStatsSaveAndRestore, AppLaunchStatsState, BKSApplicationStateMonitor, NSMutableDictionary, NSMutableString;

@interface AppLaunchStatsSBMonitor : NSObject <DuetLoggerProtocol, DuetSaveAndRestore> {

	NSObject<OS_dispatch_queue>* sbMonitorQueue;
	AppLaunchStatsSaveAndRestore* saveAndRestoreContext;
	/*^block*/ id callback;
	AppLaunchStatsState* aplsState;
	BKSApplicationStateMonitor* appStateMonitor;
	NSMutableDictionary* blackListed;
	NSMutableDictionary* recentList;
	NSMutableDictionary* trendList;
	NSMutableString* foreGroundApp;
	BOOL _enableAppSwitcherCheck;
	BOOL _enableWasRecentlyLaunched;

}

@property (nonatomic,readonly) NSMutableString * foreGroundApp; 
@property (nonatomic,readonly) BOOL enableAppSwitcherCheck;                  //@synthesize enableAppSwitcherCheck=_enableAppSwitcherCheck - In the implementation block
@property (nonatomic,readonly) BOOL enableWasRecentlyLaunched;               //@synthesize enableWasRecentlyLaunched=_enableWasRecentlyLaunched - In the implementation block
-(void)save:(id)arg1 ;
-(void)logAll:(aslclientRef)arg1 withMsg:(aslmsgRef)arg2 withLevel:(int)arg3 ;
-(void)logLight:(aslclientRef)arg1 withMsg:(aslmsgRef)arg2 withLevel:(int)arg3 ;
-(void)reloadConfiguration;
-(void)saveContext:(id)arg1 ;
-(void)restore:(id)arg1 ;
-(id)init:(id)arg1 withCallback:(/*^block*/ id)arg2 ;
-(id)foreGroundApp;
-(bool)isForeGroundApp:(id)arg1 ;
-(BOOL)enableAppSwitcherCheck;
-(bool)isRemovedFromAppSwitcher:(id)arg1 ;
-(bool)wasRecentlyLaunched:(id)arg1 ;
-(BOOL)enableWasRecentlyLaunched;
-(void)clearTrendingCache;
-(void)initListenerForAppStateChange;
-(void)appSwitchedObserver:(id)arg1 ;
-(void)addToBlackList:(id)arg1 ;
-(void)updateFGAppID:(id)arg1 ;
-(void)removeFromBlackList:(id)arg1 ;
-(void)appSuspendedTriggerExternalEvent:(id)arg1 ;
-(void).cxx_destruct;
@end
