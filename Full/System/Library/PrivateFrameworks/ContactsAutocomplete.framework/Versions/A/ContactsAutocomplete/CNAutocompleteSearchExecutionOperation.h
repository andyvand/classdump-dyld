/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/Versions/A/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol CNAutocompleteSearchExecutor, OS_dispatch_semaphore, OS_dispatch_queue;
@class CNAutocompleteFetchRequest, NSObject;

@interface CNAutocompleteSearchExecutionOperation : NSOperation {

	CNAutocompleteFetchRequest* _request;
	id<CNAutocompleteSearchExecutor> _executor;
	/*^block*/id _reportingBlock;
	/*^block*/id _errorBlock;
	NSObject*<OS_dispatch_semaphore> _sema;
	NSObject*<OS_dispatch_queue> _handlerQueue;

}

@property (copy) id reportingBlock;              //@synthesize reportingBlock=_reportingBlock - In the implementation block
@property (copy) id errorBlock;                  //@synthesize errorBlock=_errorBlock - In the implementation block
+(id)operationWithExecutor:(id)arg1 request:(id)arg2 ;
-(id)errorBlock;
-(void)setErrorBlock:(id)arg1 ;
-(id)initWithExecutor:(id)arg1 request:(id)arg2 ;
-(void)doSynchronousExecution;
-(void)doAsynchronousExecution;
-(void)clearHandlerBlocks;
-(void)reportResults:(id)arg1 ;
-(void)reportError:(id)arg1 ;
-(id)reportingBlock;
-(void)setReportingBlock:(id)arg1 ;
-(void)cancel;
-(void)main;
@end

