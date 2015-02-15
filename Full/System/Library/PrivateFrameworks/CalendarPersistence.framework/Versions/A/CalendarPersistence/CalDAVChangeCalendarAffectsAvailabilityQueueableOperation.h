/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalDAVCalendarQueueableOperation.h>
#import <CalendarPersistence/CoreDAVTaskGroupDelegate.h>

@class CalDAVUpdateFreeBusySetTaskGroup, NSString;

@interface CalDAVChangeCalendarAffectsAvailabilityQueueableOperation : CalDAVCalendarQueueableOperation <CoreDAVTaskGroupDelegate> {

	CalDAVUpdateFreeBusySetTaskGroup* _updateFreeBusySetTaskGroup;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)performOperation;
-(void)taskGroup:(id)arg1 didFinishWithError:(id)arg2 ;
-(id)initWithChangeRequest:(id)arg1 session:(id)arg2 URI:(id)arg3 value:(id)arg4 inboxURI:(id)arg5 ;
@end

