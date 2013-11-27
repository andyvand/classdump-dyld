/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:32:48 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
#import <ScreenReaderCore/SCRCTargetSelector.h>

@class NSLock;

@interface SCRCTargetSelectorTimer : SCRCTargetSelector {

	CFRunLoopTimerRef _timer;
	id _key;
	BOOL _isCancelled;
	BOOL _isPending;
	id _object;
	NSLock* _lock;
	BOOL _createdTimer;

}
+(void)initialize;
+(void)_runThread;
-(oneway void)release;
-(void)dealloc;
-(void)invalidate;
-(BOOL)isCancelled;
-(void)cancel;
-(BOOL)isPending;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 threadKey:(id)arg3 ;
-(BOOL)_createdTimer;
-(void)dispatchAfterDelay:(double)arg1 ;
-(void)dispatchAfterDelay:(double)arg1 withObject:(id)arg2 ;
-(id)threadKey;
-(void)_dispatch;
-(void)_dispatchMainThread;
-(void)_dispatchSCRCThread;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
@end
