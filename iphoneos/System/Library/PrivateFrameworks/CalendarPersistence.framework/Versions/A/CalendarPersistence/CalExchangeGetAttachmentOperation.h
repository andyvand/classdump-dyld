/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalExchangeOperation.h>
#import <CalendarPersistence/CalMessageTraceableOpearation.h>

@class NSArray, NSManagedObjectID;

@interface CalExchangeGetAttachmentOperation : CalExchangeOperation <CalMessageTraceableOpearation> {

	NSArray* _attachmentIDs;
	NSManagedObjectID* _calendarItemObjectID;

}
-(void)dealloc;
-(id)debugDescription;
-(id)debugTitle;
-(char)executeWithBinding:(id)arg1 inSession:(id)arg2 inContext:(id)arg3 error:(id*)arg4 ;
-(id)messageTracerName;
-(id)messageTracerUUID;
-(id)initWithSession:(id)arg1 attachmentIDs:(id)arg2 forCalendarItem:(id)arg3 ;
@end

