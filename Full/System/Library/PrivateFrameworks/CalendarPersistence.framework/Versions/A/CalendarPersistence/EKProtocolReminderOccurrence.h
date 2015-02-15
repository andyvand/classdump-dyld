/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSDate, NSNumber;


@protocol EKProtocolReminderOccurrence <EKProtocolOccurrence>
@property (nonatomic,copy,readonly) NSDate * dueDateUnadjustedFromUTC; 
@property (nonatomic,copy,readonly) NSDate * completionDate; 
@property (nonatomic,copy,readonly) NSNumber * orderNumber; 
@property (nonatomic,readonly) char statusCompleteNotByDate; 
@property (nonatomic,readonly) char canEditRecurrence; 
@property (nonatomic,readonly) char cachedHasLocationAlarm; 
@required
-(NSDate *)completionDate;
-(NSNumber *)orderNumber;
-(NSDate *)dueDateUnadjustedFromUTC;
-(char)statusCompleteNotByDate;
-(char)canEditRecurrence;
-(char)cachedHasLocationAlarm;

@end

