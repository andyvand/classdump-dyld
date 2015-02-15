/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalDAVCalendarQueueableOperation.h>
#import <CalendarPersistence/CoreDAVDeleteTaskDelegate.h>
#import <CalendarPersistence/CoreDAVTaskGroupDelegate.h>

@class NSString;

@interface CalDAVRemoveCalendarQueueableOperation : CalDAVCalendarQueueableOperation <CoreDAVDeleteTaskDelegate, CoreDAVTaskGroupDelegate> {

	NSString* _uri;
	NSString* _inboxURI;

}

@property (retain) NSString * uri;                                  //@synthesize uri=_uri - In the implementation block
@property (retain) NSString * inboxURI;                             //@synthesize inboxURI=_inboxURI - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setError:(id)arg1 ;
-(void)finishOperation;
-(void)performOperation;
-(void)setUri:(NSString *)arg1 ;
-(NSString *)uri;
-(void)taskGroup:(id)arg1 didFinishWithError:(id)arg2 ;
-(NSString *)inboxURI;
-(id)initWithChangeRequest:(id)arg1 session:(id)arg2 URI:(id)arg3 inboxURI:(id)arg4 ;
-(void)setInboxURI:(NSString *)arg1 ;
-(void)useCoreDAV;
-(void)deleteTask:(id)arg1 completedWithError:(id)arg2 ;
-(void)configureOperationDependencies;
-(void)updateFreeBusySet;
@end

