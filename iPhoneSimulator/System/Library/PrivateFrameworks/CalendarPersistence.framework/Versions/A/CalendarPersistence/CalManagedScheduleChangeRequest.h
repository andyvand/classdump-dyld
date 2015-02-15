/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:06 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalManagedChangeRequest.h>

@class NSString;

@interface CalManagedScheduleChangeRequest : CalManagedChangeRequest

@property (retain) NSString * meAddress; 
@property (retain) NSString * recipients; 
@property (retain) NSString * scheduleData; 
@property (retain) NSString * recurrenceID; 
@property (retain) NSString * principalUID; 
@property (assign) int method; 
+(id)insertScheduleChangeRequestWithEvent:(id)arg1 method:(int)arg2 ;
+(id)insertScheduleChangeRequestWithEvent:(id)arg1 document:(id)arg2 ;
+(id)calculateRecipientsForInvitationReply:(id)arg1 meAddress:(id)arg2 organizer:(id)arg3 ;
+(id)calculateRecipientsForCancelDocument:(id)arg1 ;
+(id)calculateRecipientsForScheduleEvent:(id)arg1 meAddress:(id)arg2 organizer:(id)arg3 ;
+(id)insertScheduleChangeRequestWithEvent:(id)arg1 document:(id)arg2 method:(int)arg3 ;
@end

