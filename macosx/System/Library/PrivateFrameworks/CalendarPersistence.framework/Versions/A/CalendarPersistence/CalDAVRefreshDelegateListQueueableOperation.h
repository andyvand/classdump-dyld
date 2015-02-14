/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalDAVQueueableOperation.h>

@class NSArray;

@interface CalDAVRefreshDelegateListQueueableOperation : CalDAVQueueableOperation {

	NSArray* _delegateInfos;
	char _serverSupportsDelegates;
	/*^block*/id _completionBlock;

}

@property (nonatomic,copy) id completionBlock;              //@synthesize completionBlock=_completionBlock - In the implementation block
-(void)dealloc;
-(void)setCompletionBlock:(id)arg1 ;
-(id)completionBlock;
-(void)finishOperation;
-(void)performOperation;
-(id)readableDescription;
-(void)refreshWithExceptionHandling;
-(void)refresh;
-(void)addDelegate:(id)arg1 toPrincipal:(id)arg2 inContext:(id)arg3 ;
-(char)serverSupportsDelegates;
@end

