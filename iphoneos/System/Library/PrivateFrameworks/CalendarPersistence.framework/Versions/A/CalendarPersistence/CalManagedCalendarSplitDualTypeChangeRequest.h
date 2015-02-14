/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalManagedCalendarChangeRequest.h>

@class NSString;

@interface CalManagedCalendarSplitDualTypeChangeRequest : CalManagedCalendarChangeRequest

@property (assign) char isPendingEventMultiMoves; 
@property (assign) char isPendingTaskMultiMoves; 
@property (nonatomic,retain) NSString * destinationCalendarURI; 
+(id)insertCalendarSplitDualTypeChangeRequestWithType:(int)arg1 sourceUID:(id)arg2 uri:(id)arg3 principalUID:(id)arg4 inboxURI:(id)arg5 isPendingEventMultiMoves:(char)arg6 isPendingTaskMultiMoves:(char)arg7 inManagedObjectContext:(id)arg8 ;
@end

