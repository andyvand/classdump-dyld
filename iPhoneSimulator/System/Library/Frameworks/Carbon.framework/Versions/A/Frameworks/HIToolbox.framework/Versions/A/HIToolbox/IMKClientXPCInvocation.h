/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:04 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/HIToolbox.framework/Versions/A/HIToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <HIToolbox/HIToolbox-Structs.h>
@class IMKClientInvocationSentinel, IMKInputSession;

@interface IMKClientXPCInvocation : NSObject {

	char _request_reply_done;
	char _timedOut;
	SEL _callerSelector;
	CFRunLoopTimerRef _replyTimer;
	IMKClientInvocationSentinel* _sentinel;
	IMKInputSession* _imkInputSession;

}
+(id)invocationWithSession:(id)arg1 selector:(SEL)arg2 ;
-(void)invocationInterruptXPCReply;
-(id)sentinel;
-(char)isMarkedDone;
-(void)invocationAwaitXPCReply;
-(void)markDone;
-(id)initWithSession:(id)arg1 selector:(SEL)arg2 ;
-(char)timedOut;
-(void)finalize;
-(void)dealloc;
@end

