/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AVCore.framework/Versions/A/AVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface AVHandler : NSObject
+(void)ensureHandlerSetup;
-(void)setupComplete;
-(void)pendingVCRequestComplete;
-(void)vcCapabilitiesChanged:(unsigned long long)arg1 ;
-(void)account:(id)arg1 conference:(id)arg2 receivedInvitationFrom:(id)arg3 properties:(id)arg4 ;
-(void)account:(id)arg1 conference:(id)arg2 receivedResponseToInvitationFrom:(id)arg3 properties:(id)arg4 ;
-(void)account:(id)arg1 conference:(id)arg2 receivedCancelInvitationFrom:(id)arg3 properties:(id)arg4 ;
-(void)account:(id)arg1 conference:(id)arg2 receivedCounterProposalFrom:(id)arg3 properties:(id)arg4 ;
-(void)account:(id)arg1 conference:(id)arg2 receivedUpdateFrom:(id)arg3 data:(id)arg4 ;
-(void)account:(id)arg1 conference:(id)arg2 receivedAVMessage:(unsigned)arg3 from:(id)arg4 sessionID:(unsigned)arg5 userInfo:(id)arg6 ;
-(void)account:(id)arg1 conference:(id)arg2 changedToNewConferenceID:(id)arg3 ;
-(void)account:(id)arg1 conference:(id)arg2 peerIDChangedFromID:(id)arg3 toID:(id)arg4 ;
-(void)account:(id)arg1 conference:(id)arg2 peerID:(id)arg3 propertiesUpdated:(id)arg4 ;
-(void)account:(id)arg1 conference:(id)arg2 invitationSentSuccessfully:(char)arg3 ;
-(void)property:(id)arg1 changedTo:(id)arg2 from:(id)arg3 ;
-(void)persistentProperty:(id)arg1 changedTo:(id)arg2 from:(id)arg3 ;
-(void)account:(id)arg1 postedError:(id)arg2 ;
-(void)dealloc;
-(void)account:(id)arg1 conference:(id)arg2 requestSendResponseWithResult:(long long)arg3 toPerson:(id)arg4 ;
@end

