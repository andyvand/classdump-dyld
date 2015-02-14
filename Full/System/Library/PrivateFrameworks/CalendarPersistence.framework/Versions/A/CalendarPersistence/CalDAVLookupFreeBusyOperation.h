/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalSingleSynchronousTask.h>

@class CalDAVFreeBusyLookupTask, NSDictionary, NSMutableDictionary, CalDateRange;

@interface CalDAVLookupFreeBusyOperation : CalSingleSynchronousTask {

	CalDAVFreeBusyLookupTask* _task;
	NSDictionary* _freeBusySpans;
	NSMutableDictionary* _userEventArrays;
	CalDateRange* _timeRange;

}

@property (readonly) NSDictionary * freeBusySpans;                //@synthesize freeBusySpans=_freeBusySpans - In the implementation block
@property (readonly) NSDictionary * userEventArrays;              //@synthesize userEventArrays=_userEventArrays - In the implementation block
-(void)dealloc;
-(NSDictionary *)freeBusySpans;
-(id)initWithPrincipal:(id)arg1 timeRange:(id)arg2 attendees:(id)arg3 maskingEventSharedUid:(id)arg4 ;
-(char)executeSynchronouslyWithError:(id*)arg1 ;
-(NSDictionary *)userEventArrays;
@end

