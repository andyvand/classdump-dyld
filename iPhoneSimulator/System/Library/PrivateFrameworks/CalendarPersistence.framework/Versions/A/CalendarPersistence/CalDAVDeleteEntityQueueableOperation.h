/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:06 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalDAVEntityQueueableOperation.h>
#import <CalendarPersistence/CoreDAVDeleteTaskDelegate.h>

@class NSURL, NSString;

@interface CalDAVDeleteEntityQueueableOperation : CalDAVEntityQueueableOperation <CoreDAVDeleteTaskDelegate> {

	NSURL* _calendarURL;
	NSString* _eTag;
	NSString* _scheduleTag;

}

@property (retain) NSString * eTag;                                 //@synthesize eTag=_eTag - In the implementation block
@property (retain) NSString * scheduleTag;                          //@synthesize scheduleTag=_scheduleTag - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)readableDescription;
-(NSString *)eTag;
-(void)setETag:(NSString *)arg1 ;
-(NSString *)scheduleTag;
-(void)setScheduleTag:(NSString *)arg1 ;
-(void)enqueue;
-(id)initWithChangeRequest:(id)arg1 calendarURL:(id)arg2 fromSource:(id)arg3 ;
-(void)deleteTask:(id)arg1 completedWithError:(id)arg2 ;
-(void)performOperation:(char)arg1 ;
@end

