/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:06 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSUserNotificationCenter, CalUserNotificationCenterCache, CLLocationManager, NSMutableDictionary;

@interface CalUserNotificationCenter : NSObject {

	NSUserNotificationCenter* _icalCenter;
	CalUserNotificationCenterCache* _icalCenterCache;
	NSUserNotificationCenter* _reminderCenter;
	CalUserNotificationCenterCache* _reminderCenterCache;
	CLLocationManager* _locationManager;
	NSMutableDictionary* _monitoredRegionsCache;

}

@property (nonatomic,retain) CLLocationManager * locationManager;              //@synthesize locationManager=_locationManager - In the implementation block
+(id)defaultCenter;
-(id)init;
-(void)dealloc;
-(void)setupLocationManagerOnLaunch;
-(id)centerForAppID:(id)arg1 ;
-(char)isDisplayed:(id)arg1 ;
-(char)isScheduled:(id)arg1 ;
-(char)isDelivered:(id)arg1 ;
-(char)isSimilarDelivered:(id)arg1 ;
-(char)isSnoozeNotification:(id)arg1 ;
-(id)cacheForAppID:(id)arg1 ;
-(void)addDeliveredNotifications:(id)arg1 forAppID:(id)arg2 ;
-(void)setupLocationManagerForNewRegion;
-(char)isMonitored:(id)arg1 ;
-(void)tearDownLocationManagerIfNeeded;
-(void)_setupLocationManagerAndCheckMonitoredRegions:(char)arg1 ;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(id)displayedNotificationsOfType:(id)arg1 forApp:(id)arg2 ;
-(id)scheduledNotificationsOfType:(id)arg1 forApp:(id)arg2 ;
-(id)deliveredNotificationsOfType:(id)arg1 forApp:(id)arg2 ;
-(void)removeScheduledAlarmWithID:(id)arg1 ;
-(void)removeFiringAlarmWithID:(id)arg1 ;
-(void)removeMonitoredAlarmWithID:(id)arg1 ;
-(void)removeDeliveredAlarmWithID:(id)arg1 ;
-(void)removeScheduledNotificationOfType:(id)arg1 withID:(id)arg2 forApp:(id)arg3 ;
-(void)removeDisplayedNotificationOfType:(id)arg1 withID:(id)arg2 forApp:(id)arg3 ;
-(void)removeDeliveredNotificationOfType:(id)arg1 withID:(id)arg2 forApp:(id)arg3 ;
-(char)isCorrectVersion:(id)arg1 ;
-(char)notification:(id)arg1 isEqualToNotification:(id)arg2 ;
-(char)scheduleAlarmNotification:(id)arg1 ;
-(char)deliverMessageNotification:(id)arg1 ;
-(void)startRemindersNotificationCenterWidget;
-(char)fireAlarmNotification:(id)arg1 ;
-(char)monitorLocationForAlarm:(id)arg1 ;
-(void)stopMonitoringLocations;
-(id)currentlyFiringAlarms;
-(id)currentlyScheduledAlarms;
-(id)currentlyDeliveredAlarms;
-(id)currentlyDisplayedMessages;
-(id)currentlyDeliveredMessages;
-(id)monitoredAlarmIDs;
-(void)removeAlarmWithID:(id)arg1 ;
-(void)removeDisplayedMessageWithID:(id)arg1 ;
-(void)removeDeliveredMessageWithID:(id)arg1 ;
-(void)removeNotificationsWithOldVersion;
-(void)resetCaches;
-(CLLocationManager *)locationManager;
@end

