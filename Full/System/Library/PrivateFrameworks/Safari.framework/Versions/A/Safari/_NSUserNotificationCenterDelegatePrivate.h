/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _NSUserNotificationCenterDelegatePrivate <NSUserNotificationCenterDelegate>
@optional
-(void)userNotificationCenter:(id)arg1 didDismissAlert:(id)arg2;
-(void)userNotificationCenter:(id)arg1 didSnoozeAlert:(id)arg2;
-(void)userNotificationCenter:(id)arg1 didRemoveDeliveredNotifications:(id)arg2;
-(void)userNotificationCenter:(id)arg1 didExpireNotifications:(id)arg2;
-(void)userNotificationCenter:(id)arg1 responseChanged:(unsigned long long)arg2 forNotification:(id)arg3;
-(char)userNotificationCenter:(id)arg1 shouldActivateForNotification:(id)arg2;
-(void)userNotificationCenter:(id)arg1 summaryShown:(char)arg2;
-(void)userNotificationCenter:(id)arg1 notificationsDisabled:(char)arg2;
-(void)userNotificationCenter:(id)arg1 notificationPreferencesChanged:(unsigned long long)arg2;
-(void)userNotificationCenter:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
-(void)userNotificationCenter:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;

@end

