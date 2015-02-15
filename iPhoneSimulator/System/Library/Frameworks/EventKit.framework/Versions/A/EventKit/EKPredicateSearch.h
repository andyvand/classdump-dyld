/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:39 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSPredicate, EKEventStore, NSMutableSet, CalMDQuery, NSObject;

@interface EKPredicateSearch : NSObject {

	Class _entityClass;
	NSPredicate* _predicate;
	EKEventStore* _store;
	NSMutableSet* _currentResults;
	/*^block*/id _completionCallback;
	/*^block*/id _cancelCallback;
	CalMDQuery* _mdQuery;
	long long _previousQueryCount;
	char _finished;
	char _isEventQuery;
	NSObject*<OS_dispatch_queue> _queryQueue;

}

@property (retain) NSMutableSet * currentResults;                        //@synthesize currentResults=_currentResults - In the implementation block
@property (copy) id completionCallback;                                  //@synthesize completionCallback=_completionCallback - In the implementation block
@property (copy) id cancelCallback;                                      //@synthesize cancelCallback=_cancelCallback - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queryQueue;              //@synthesize queryQueue=_queryQueue - In the implementation block
+(id)searchWithEntityClass:(Class)arg1 predicate:(id)arg2 store:(id)arg3 ;
+(char)_fastPathAvailableForPredicate:(id)arg1 inStore:(id)arg2 ;
+(id)_fastPathResultForPredicate:(id)arg1 inStore:(id)arg2 ;
-(void)startWithCompletionCallback:(/*^block*/id)arg1 cancelCallback:(/*^block*/id)arg2 synchronous:(char)arg3 isEventQuery:(char)arg4 ;
-(id)initWithEntityClass:(Class)arg1 predicate:(id)arg2 store:(id)arg3 ;
-(void)setCurrentResults:(NSMutableSet *)arg1 ;
-(void)_endSpotlightQuery;
-(NSMutableSet *)currentResults;
-(void)_completeOnAppropriateThreadWithResults:(id)arg1 ;
-(id)completionCallback;
-(void)_processManagedObjectsIntoEKObjects:(id)arg1 ;
-(void)_updateQuery:(id)arg1 ;
-(void)_finishQuery:(id)arg1 ;
-(void)_startSpotlightQuery:(id)arg1 synchronous:(char)arg2 ;
-(void)setCompletionCallback:(id)arg1 ;
-(void)setCancelCallback:(id)arg1 ;
-(id)_managedCalendarsForCalendarUIDs:(id)arg1 context:(id)arg2 ;
-(void)_beginQueryWithMDQueryString:(id)arg1 onCalendars:(id)arg2 synchronous:(char)arg3 ;
-(id)cancelCallback;
-(NSObject*<OS_dispatch_queue>)queryQueue;
-(void)setQueryQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(id)run;
-(void)cancelSearch;
@end
