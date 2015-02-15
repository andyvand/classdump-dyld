/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:06 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalManagedCalDAVCalendar.h>

@class NSString;

@interface CalManagedCalDAVSubscribedCalendar : CalManagedCalDAVCalendar

@property (retain) NSString * eTag; 
+(id)entityName;
-(id)lastOperationError;
-(id)session;
-(char)wantsSession;
-(void)activateSession;
-(char)isSubscribed;
-(void)refreshSession;
-(void)refreshSession:(long long)arg1 ;
-(char)allowsScheduling;
-(char)isSubscribedHolidayCalendar;
@end

