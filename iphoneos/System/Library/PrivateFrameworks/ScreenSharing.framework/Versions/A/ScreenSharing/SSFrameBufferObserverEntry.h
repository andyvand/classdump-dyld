/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SSFrameBufferObserver;
@class NSThread;

@interface SSFrameBufferObserverEntry : NSObject {

	id<SSFrameBufferObserver> _observer;
	NSThread* _thread;

}
-(id)initWithObserver:(id)arg1 withThread:(id)arg2 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
@end

