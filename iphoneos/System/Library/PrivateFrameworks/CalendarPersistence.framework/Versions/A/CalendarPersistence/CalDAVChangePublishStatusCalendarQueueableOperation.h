/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalDAVCalendarQueueableOperation.h>

@class CalDAVModifyCalendarSharingLevelTaskGroup;

@interface CalDAVChangePublishStatusCalendarQueueableOperation : CalDAVCalendarQueueableOperation {

	CalDAVModifyCalendarSharingLevelTaskGroup* _taskGroup;

}
-(void)dealloc;
-(void)performOperation;
-(id)initWithChangeRequest:(id)arg1 session:(id)arg2 action:(id)arg3 ;
@end
