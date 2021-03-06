/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABFuture.h>

@class ABFutureTask, NSString;

@interface ABLazyFuture : NSObject <ABFuture> {

	ABFutureTask* _futureTask;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isFinished,readonly) char finished; 
@property (getter=isCancelled,readonly) char cancelled; 
+(id)lazyFutureWithBlock:(/*^block*/id)arg1 ;
-(id)result:(id*)arg1 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(void)addFailureBlock:(/*^block*/id)arg1 ;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(char)cancel;
-(char)isCancelled;
-(char)isFinished;
-(id)initWithBlock:(/*^block*/id)arg1 ;
@end

