/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalUserNotification.h>

@class CalManagedAlarm, NSDate, NSUserNotification, NSString;

@interface CalUserAlarmNotification : NSObject <CalUserNotification> {

	CalManagedAlarm* _alarm;
	NSDate* _date;
	char _isForLocation;
	NSUserNotification* _notification;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithAlarm:(id)arg1 triggerDate:(id)arg2 isForLocation:(char)arg3 ;
-(id)notification;
-(id)initWithAlarm:(id)arg1 triggerDate:(id)arg2 ;
@end

