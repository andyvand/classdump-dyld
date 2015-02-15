/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalDAVRemoveCalendarQueueableOperation.h>

@class CalManagedObjectContext, CalManagedCalDAVCalendar, NSURL, NSSet;

@interface CalDAVCalendarSplitDualTypeCalendarQueueableOperation : CalDAVRemoveCalendarQueueableOperation {

	CalManagedObjectContext* _context;
	int _state;
	CalManagedCalDAVCalendar* _sourceCalendar;
	CalManagedCalDAVCalendar* _destinationCalendar;
	NSURL* _destinationCalendarURI;
	char _waitingForCompletionBlock;
	NSSet* _sourceCalendarRemoteEventHrefs;
	NSSet* _sourceCalendarRemoteTodoHrefs;
	unsigned long long _queryAndMoveIteration;

}

@property (retain) CalManagedCalDAVCalendar * sourceCalendar;                   //@synthesize sourceCalendar=_sourceCalendar - In the implementation block
@property (retain) CalManagedCalDAVCalendar * destinationCalendar;              //@synthesize destinationCalendar=_destinationCalendar - In the implementation block
@property (retain) CalManagedObjectContext * managedObjectContext;              //@synthesize context=_context - In the implementation block
@property (assign) int state;                                                   //@synthesize state=_state - In the implementation block
@property (retain) NSURL * destinationCalendarURI;                              //@synthesize destinationCalendarURI=_destinationCalendarURI - In the implementation block
@property (retain) NSSet * sourceCalendarRemoteEventHrefs;                      //@synthesize sourceCalendarRemoteEventHrefs=_sourceCalendarRemoteEventHrefs - In the implementation block
@property (retain) NSSet * sourceCalendarRemoteTodoHrefs;                       //@synthesize sourceCalendarRemoteTodoHrefs=_sourceCalendarRemoteTodoHrefs - In the implementation block
@property (assign) unsigned long long queryAndMoveIteration;                    //@synthesize queryAndMoveIteration=_queryAndMoveIteration - In the implementation block
+(id)queryTaskProperties;
-(void)dealloc;
-(void)setState:(int)arg1 ;
-(int)state;
-(void)setManagedObjectContext:(CalManagedObjectContext *)arg1 ;
-(CalManagedObjectContext *)managedObjectContext;
-(void)performOperation;
-(id)managedPrincipal;
-(void)taskGroup:(id)arg1 didFinishWithError:(id)arg2 ;
-(id)initWithChangeRequest:(id)arg1 session:(id)arg2 URI:(id)arg3 inboxURI:(id)arg4 ;
-(void)deleteTask:(id)arg1 completedWithError:(id)arg2 ;
-(CalManagedCalDAVCalendar *)destinationCalendar;
-(CalManagedCalDAVCalendar *)sourceCalendar;
-(void)_finishWithError:(id)arg1 state:(int)arg2 ;
-(void)prepareOperation;
-(void)fetchEventsOrTodosFromRemoteSourceCollection;
-(void)setSourceCalendar:(CalManagedCalDAVCalendar *)arg1 ;
-(NSURL *)destinationCalendarURI;
-(void)setDestinationCalendarURI:(NSURL *)arg1 ;
-(void)setDestinationCalendar:(CalManagedCalDAVCalendar *)arg1 ;
-(void)_saveManagedObjectContext;
-(void)queryEventTaskComplete:(id)arg1 ;
-(void)postFetchStateSwitch;
-(void)queryTodoTaskComplete:(id)arg1 ;
-(void)addNewDestinationCollectionFromSource;
-(void)moveTargetedItemsToDestinationCollection;
-(void)mkCalendarComplete:(id)arg1 ;
-(NSSet *)sourceCalendarRemoteEventHrefs;
-(NSSet *)sourceCalendarRemoteTodoHrefs;
-(id)coreDAVQueryResponseItemsForTargetItems;
-(void)performMultiMoveOperation:(id)arg1 withPUTFallBack:(char)arg2 ;
-(void)removeOriginalCollection;
-(id)calendarItemServerURLsFromCoreDAVResponses:(id)arg1 ;
-(id)calendarItemsWithServerURLs:(id)arg1 ;
-(void)multiMoveTaskCompletedWithTaskGroup:(id)arg1 didUseFallback:(char)arg2 ;
-(void)saveDestinationCollectionURIOnChangeRequest;
-(void)setSourceCalendarRemoteEventHrefs:(NSSet *)arg1 ;
-(void)setSourceCalendarRemoteTodoHrefs:(NSSet *)arg1 ;
-(unsigned long long)queryAndMoveIteration;
-(void)setQueryAndMoveIteration:(unsigned long long)arg1 ;
-(id)calendarItemWithServerURL:(id)arg1 ;
@end

