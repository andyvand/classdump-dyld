/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/WhitePages.framework/Versions/A/WhitePages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSRecursiveLock;

@interface WPWorkerAgent : NSObject {

	id _target;
	SEL _selector;
	NSMutableArray* _workers;
	NSRecursiveLock* _lock;

}
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)removeWorker:(id)arg1 queryBeenCanceled:(char)arg2 ;
-(void)addWorker:(id)arg1 ;
-(id)allWorkers;
-(void)removeWorker:(id)arg1 ;
-(void)dealloc;
-(void)cancel;
@end

