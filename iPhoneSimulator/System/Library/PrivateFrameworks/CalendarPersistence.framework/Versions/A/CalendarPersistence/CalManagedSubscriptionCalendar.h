/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:06 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalManagedCalendar.h>

@interface CalManagedSubscriptionCalendar : CalManagedCalendar
+(id)entityName;
+(id)singletonContainerSource;
+(id)subscriptionCalendarWithSubscriptionID:(id)arg1 subscriptionURL:(id)arg2 inContext:(id)arg3 ;
+(char)hasSubscriptionCalendarWithSubscriptionID:(id)arg1 subscriptionURL:(id)arg2 inContext:(id)arg3 ;
-(id)type;
-(id)containerSource;
-(id)defaultAlarmsWithIsAllDayEvent:(char)arg1 ;
-(id)lastOperationError;
-(id)session;
-(char)wantsSession;
-(void)activateSession;
-(char)isSubscribed;
-(void)refreshSession;
-(void)refreshSession:(long long)arg1 ;
-(void)willSave;
-(char)isRefreshable;
-(id)defaultAlarmsWithIsAllDayEvent:(char)arg1 fromServer:(char)arg2 ;
-(id)sharees;
-(void)setSharees:(id)arg1 ;
-(char)allowsScheduling;
-(char)isHolidayCalendar;
-(char)isSubscribedHolidayCalendar;
-(char)isLocal;
-(char)isMigrateable;
@end

