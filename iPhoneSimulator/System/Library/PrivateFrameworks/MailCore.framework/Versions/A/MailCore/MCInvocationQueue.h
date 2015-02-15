/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperationQueue.h>

@class NSPort;

@interface MCInvocationQueue : NSOperationQueue {

	id _runLoopCancelPortOnceLock;
	NSPort* _runLoopCancelPort;

}
+(void)cancelAllMonitoredItems;
+(char)didCancelAllMonitoredItems;
-(id)_newOperationWithInvocation:(id)arg1 ;
-(void)runInvocationOnQueueSynchronously:(id)arg1 ;
-(id)initWithMaxConcurrentOperationCount:(long long)arg1 ;
-(void)addInvocation:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

