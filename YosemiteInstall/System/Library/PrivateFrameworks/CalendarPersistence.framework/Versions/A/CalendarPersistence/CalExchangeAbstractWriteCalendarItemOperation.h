/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:55:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalExchangePersistentOperation.h>

@interface CalExchangeAbstractWriteCalendarItemOperation : CalExchangePersistentOperation
-(void)updateRecurrenceForCalendarItem:(id)arg1 withEvent:(id)arg2 ;
-(void)updateRequiredAttendeesForCalendarItem:(id)arg1 withEvent:(id)arg2 ;
-(void)updateOptionalAttendeesForCalendarItem:(id)arg1 withEvent:(id)arg2 ;
-(void)updateResourcesForCalendarItem:(id)arg1 withEvent:(id)arg2 ;
-(void)removeUninvitedAttendeesForEvent:(id)arg1 ;
-(int)_EWSDayFromCalDay:(unsigned long long)arg1 ;
@end
