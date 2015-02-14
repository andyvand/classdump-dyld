/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalManagedChangeRequest.h>

@class NSData, NSString;

@interface CalManagedSharedCalendarInvitationResponseChangeRequest : CalManagedChangeRequest

@property (assign) int response; 
@property (retain) NSData * invitation; 
@property (retain) NSString * calendarHomePath; 
@property (retain) NSString * principalUID; 
+(id)insertSharedCalendarInvitationResponse:(int)arg1 toInvitation:(id)arg2 principalUID:(id)arg3 calendarHomePath:(id)arg4 inManagedObjectContext:(id)arg5 ;
@end

