/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:29:57 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AppLaunchStats/AppLaunchStats-Structs.h>
#import <DuetPLLConfigLogger/DuetLoggerProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, AppLaunchStatsSaveAndRestore, NSMutableDictionary, NSUserDefaults;

@interface AppLaunchStatsSBSettings : NSObject <DuetLoggerProtocol> {

	NSObject<OS_dispatch_queue>* aplsSettingsQueue;
	/*^block*/ id callbackBlock;
	AppLaunchStatsSaveAndRestore* saveAndRestoreContext;
	NSMutableDictionary* settingsBlacklist;
	NSUserDefaults* aplsSBSettingsDefault;

}
-(void)logAll:(aslclientRef)arg1 withMsg:(aslmsgRef)arg2 withLevel:(int)arg3 ;
-(void)logLight:(aslclientRef)arg1 withMsg:(aslmsgRef)arg2 withLevel:(int)arg3 ;
-(void)saveContext:(id)arg1 ;
-(void)loadSettingsBlacklist;
-(bool)isManagedConfigurationSettingOn;
-(bool)isAppDisabledInSettingsList:(id)arg1 ;
-(id)init:(/*^block*/ id)arg1 ;
-(void).cxx_destruct;
@end
