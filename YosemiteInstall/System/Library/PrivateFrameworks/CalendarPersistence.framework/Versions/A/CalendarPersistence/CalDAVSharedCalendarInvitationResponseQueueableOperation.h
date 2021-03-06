/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:55:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalDAVPersistentQueueableOperation.h>
#import <CalendarPersistence/CoreDAVTaskGroupDelegate.h>

@class CalDAVReplyToSharedCalendarInvitationTaskGroup, NSData, NSURL, NSString;

@interface CalDAVSharedCalendarInvitationResponseQueueableOperation : CalDAVPersistentQueueableOperation <CoreDAVTaskGroupDelegate> {

	int _response;
	CalDAVReplyToSharedCalendarInvitationTaskGroup* _taskGroup;
	NSData* _invitation;
	NSURL* _calendarHomeURL;

}

@property (retain) CalDAVReplyToSharedCalendarInvitationTaskGroup * taskGroup;              //@synthesize taskGroup=_taskGroup - In the implementation block
@property (retain) NSData * invitation;                                                     //@synthesize invitation=_invitation - In the implementation block
@property (retain) NSURL * calendarHomeURL;                                                 //@synthesize calendarHomeURL=_calendarHomeURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)performOperation;
-(void)taskGroup:(id)arg1 didFinishWithError:(id)arg2 ;
-(CalDAVReplyToSharedCalendarInvitationTaskGroup *)taskGroup;
-(void)setTaskGroup:(CalDAVReplyToSharedCalendarInvitationTaskGroup *)arg1 ;
-(void)setInvitation:(NSData *)arg1 ;
-(id)initWithChangeRequest:(id)arg1 forSession:(id)arg2 ;
-(NSData *)invitation;
-(void)setCalendarHomeURL:(NSURL *)arg1 ;
-(void)useCoreDAV;
-(NSURL *)calendarHomeURL;
-(id)_originalManagedMessageInNewContext;
@end

