/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenSharing/ScreenSharing-Structs.h>
#import <Foundation/NSThread.h>

@protocol OS_dispatch_semaphore;
@class NSObject, SSSession;

@interface SenderThread : NSThread {

	NSObject*<OS_dispatch_semaphore> mSuspendSemaphore;
	CFRunLoopRef mRunLoop;
	SSSession* mSession;
	char mSuspended;

}

@property (assign) SSSession * session; 
-(void)shutDown;
-(void)setSession:(SSSession *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)resume;
-(void)suspend;
-(void)main;
-(SSSession *)session;
@end

