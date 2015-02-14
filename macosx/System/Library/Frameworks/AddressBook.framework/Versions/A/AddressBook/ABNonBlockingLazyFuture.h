/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABFuture.h>

@class ABFuture, NSString;

@interface ABNonBlockingLazyFuture : NSObject <ABFuture> {

	ABFuture* _future;
	/*^block*/id _block;
	/*^block*/id _cleanupBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isFinished,readonly) char finished; 
@property (getter=isCancelled,readonly) char cancelled; 
+(id)lazyFutureWithBlock:(/*^block*/id)arg1 cleanupBlock:(/*^block*/id)arg2 ;
-(id)result:(id*)arg1 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(void)addFailureBlock:(/*^block*/id)arg1 ;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(id)initWithBlock:(/*^block*/id)arg1 cleanupBlock:(/*^block*/id)arg2 ;
-(void)cleanupBlocks;
-(void)resolveFuture;
-(void)dealloc;
-(char)cancel;
-(char)isCancelled;
-(char)isFinished;
@end

