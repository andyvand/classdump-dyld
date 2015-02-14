/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CalCalDAVTaskManager;

@interface CalHolidayCalendarSubscriber : NSObject {

	CalCalDAVTaskManager* _calDAVTaskManager;

}
+(id)defaultSubscriber;
-(void)dealloc;
-(id)backupCalendarSymbolicColor;
-(char)_alreadySubscribedToLocalHolidayCalendar;
-(char)_alreadySubscribedToCalendarWithLanguageCode:(id)arg1 withLocationCode:(id)arg2 orURL:(id)arg3 ;
-(void)_subscribeToHolidayCalendar:(id)arg1 withAccount:(id)arg2 locationCode:(id)arg3 languageCode:(id)arg4 ;
-(void)subscribeToHolidayCalendar;
-(void)disableHolidayCalendars;
@end

