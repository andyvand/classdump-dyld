/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/apsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol APSOutgoingMessageQueueDelegate <NSObject>
@required
-(void)outgoingMessageQueue:(id)arg1 lateAcknowledgmentForCriticalOutgoingMessage:(id)arg2;
-(void)outgoingMessageQueue:(id)arg1 requestCriticalMessageFlushWithPaddingLength:(unsigned long long)arg2;
-(void)outgoingMessageQueue:(id)arg1 requestToSendLowPriorityMessages:(id)arg2;
-(void)outgoingMessageQueueShortMessageTimeoutExceeded:(id)arg1;
-(char)shouldForceShortTimeouts;

@end

