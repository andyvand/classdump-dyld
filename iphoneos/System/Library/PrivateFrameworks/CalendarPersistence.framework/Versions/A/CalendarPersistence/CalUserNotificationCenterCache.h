/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSUserNotificationCenter, NSMutableArray;

@interface CalUserNotificationCenterCache : NSObject {

	NSUserNotificationCenter* _center;
	NSMutableArray* _scheduledNotifications;
	NSMutableArray* _deliveredNotifications;
	NSMutableArray* _displayedNotifications;

}

@property (nonatomic,retain) NSMutableArray * scheduledNotifications;              //@synthesize scheduledNotifications=_scheduledNotifications - In the implementation block
@property (nonatomic,retain) NSMutableArray * deliveredNotifications;              //@synthesize deliveredNotifications=_deliveredNotifications - In the implementation block
@property (nonatomic,retain) NSMutableArray * displayedNotifications;              //@synthesize displayedNotifications=_displayedNotifications - In the implementation block
-(void)dealloc;
-(void)reset;
-(id)initWithCenter:(id)arg1 ;
-(void)removeCachedDeliveredNotificationWithID:(id)arg1 ;
-(NSMutableArray *)displayedNotifications;
-(NSMutableArray *)deliveredNotifications;
-(NSMutableArray *)scheduledNotifications;
-(void)setScheduledNotifications:(NSMutableArray *)arg1 ;
-(void)setDeliveredNotifications:(NSMutableArray *)arg1 ;
-(void)setDisplayedNotifications:(NSMutableArray *)arg1 ;
@end

