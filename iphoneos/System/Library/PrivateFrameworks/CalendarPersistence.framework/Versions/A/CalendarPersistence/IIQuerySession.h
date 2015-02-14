/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IIQuerySessionDelegate;
@class NSOperationQueue, NSMutableArray, ABAddressBook;

@interface IIQuerySession : NSObject {

	id<IIQuerySessionDelegate> _delegate;
	char _includePrevious;
	char _doRooms;
	char _doPeople;
	char _doResources;
	char _doGroups;
	char _isCancelled;
	NSOperationQueue* _queue;

}

@property (assign) id<IIQuerySessionDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (assign) char includePrevious;                              //@synthesize includePrevious=_includePrevious - In the implementation block
@property (assign) char isCancelled;                                  //@synthesize isCancelled=_isCancelled - In the implementation block
@property (readonly) NSMutableArray * results; 
@property (retain) NSOperationQueue * queue;                          //@synthesize queue=_queue - In the implementation block
@property (retain,readonly) ABAddressBook * addressBook; 
-(ABAddressBook *)addressBook;
-(void)setDelegate:(id<IIQuerySessionDelegate>)arg1 ;
-(void)dealloc;
-(NSOperationQueue *)queue;
-(id<IIQuerySessionDelegate>)delegate;
-(char)isRunning;
-(id)initWithDelegate:(id)arg1 ;
-(char)isCancelled;
-(NSMutableArray *)results;
-(void)cancelQuery;
-(void)setIsCancelled:(char)arg1 ;
-(void)setIncludePrevious:(char)arg1 ;
-(char)includePrevious;
-(void)finished;
-(void)started;
-(void)resetQuery;
-(void)setQueue:(NSOperationQueue *)arg1 ;
-(id)searchFor:(id)arg1 onAccount:(id)arg2 findPeople:(char)arg3 groups:(char)arg4 resources:(char)arg5 locations:(char)arg6 ;
@end

