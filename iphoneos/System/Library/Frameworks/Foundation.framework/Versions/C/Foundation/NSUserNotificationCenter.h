/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSData, NSUserNotification;

@interface NSUserNotificationCenter : NSObject {

	id _internal;

}

@property (assign) id<_NSUserNotificationCenterDelegatePrivate> _appDelegate; 
@property (assign) id<NSUserNotificationCenterDelegate> delegate; 
@property (copy) NSArray * scheduledNotifications; 
@property (copy,readonly) NSArray * deliveredNotifications; 
@property (setter=_setPreventApplicationLaunching:) char _preventApplicationLaunching; 
@property (copy,readonly) NSData * _registeredPushToken; 
@property (setter=_setReverseDeliveredNotifications:) char _reverseDeliveredNotifications; 
@property (readonly) unsigned long long _maxPresentedNotifications; 
@property (readonly) NSArray * _displayedNotifications; 
@property (readonly) NSArray * _presentedAlerts; 
@property (copy) NSArray * _todaySummaryNotifications; 
@property (copy) NSArray * _tomorrowSummaryNotifications; 
@property (copy) NSUserNotification * todaySummaryNotification; 
@property (copy) NSUserNotification * tomorrowSummaryNotification; 
@property (readonly) unsigned long long _notificationPreferences; 
@property (readonly) char _notificationsDisabled; 
+(id)_webNotificationCenterSearchPath;
+(void)_registerForOnDemandCallback:(/*^block*/id)arg1 ;
+(id)_centerForBundleIdentifier:(id)arg1 ;
+(char)_doNotDisturbEnabled;
+(id)_webNotificationIdentifiers;
+(id)defaultUserNotificationCenter;
+(id)_centerForIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
-(void)scheduleNotification:(id)arg1 ;
-(void)removeDeliveredNotification:(id)arg1 ;
-(void)_removeDisplayedNotification:(id)arg1 ;
-(void)_removeAllDisplayedNotifications;
-(void)_registerForRemotePushNotificationsWithEnvironment:(id)arg1 types:(unsigned long long)arg2 ;
-(void)removeAllDeliveredNotifications;
-(void)_removeAllPresentedAlerts;
-(void)_invalidateAndUnregister;
-(void)_setProgress:(double)arg1 forNotificationWithIdentifier:(id)arg2 ;
-(id)init;
-(void)_setAppDelegate:(id)arg1 connect:(char)arg2 ;
-(void)_registerForRemotePushNotificationTypes:(unsigned long long)arg1 ;
-(void)_unRegisterForRemotePushNotifications;
-(void)deliverNotification:(id)arg1 ;
-(void)removeScheduledNotification:(id)arg1 ;
-(void)_setDeliveredNotifications:(id)arg1 ;
-(void)_removePresentedAlert:(id)arg1 ;
@end

