/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IDSSessionDelegate <NSObject>
@optional
-(void)session:(id)arg1 receivedInvitationAcceptFromID:(id)arg2;
-(void)session:(id)arg1 receivedInvitationDeclineFromID:(id)arg2;
-(void)session:(id)arg1 receivedInvitationCancelFromID:(id)arg2;
-(void)sessionStarted:(id)arg1;
-(void)sessionEnded:(id)arg1;
-(void)sessionEnded:(id)arg1 withReason:(unsigned)arg2 error:(id)arg3;
-(void)session:(id)arg1 didReceiveData:(id)arg2;

@end

