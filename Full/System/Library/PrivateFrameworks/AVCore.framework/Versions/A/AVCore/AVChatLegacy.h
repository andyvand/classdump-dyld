/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AVCore.framework/Versions/A/AVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVCore/AVChat.h>

@interface AVChatLegacy : AVChat {

	id _theaterDelegate;
	long long _ardRole;

}
+(id)currentAVChatInfo;
+(void)_sendUpdate;
+(int)systemSupportsNewOutgoingConferenceTo:(id)arg1 isVideo:(char)arg2 isARD:(char)arg3 ;
+(id)avChatWithMatchingIMHandles:(id)arg1 video:(char)arg2 ARDRole:(long long)arg3 ;
+(void)_doSendUpdate;
+(char)_anyOfTheseParticipants:(id)arg1 matchAnyOfTheseIMHandles:(id)arg2 ;
+(void)getVideoStillForIMHandle:(id)arg1 data:(id*)arg2 result:(unsigned*)arg3 ;
+(char)isIMHandleInActiveConference:(id)arg1 ;
-(float)audioVolume;
-(void)setAudioVolume:(float)arg1 ;
-(void)dealloc;
-(int)ardRole;
-(id)initIncomingFrom:(id)arg1 isVideo:(char)arg2 callerProperties:(id)arg3 ;
-(void)_responseToVCInvite:(id)arg1 ;
-(void)handleGenericAVMessageFromParticipant:(id)arg1 type:(unsigned)arg2 userInfo:(id)arg3 ;
-(void)_initParticipantsWithIMHandles:(id)arg1 ;
-(void)_initParticipantsWithNuggets:(id)arg1 ;
-(char)_participantsCheckOut;
-(void)handleVideoConferenceNotification:(id)arg1 ;
-(void)_endChatWithReason:(unsigned)arg1 andError:(int)arg2 ;
-(void)_refreshAddableStatus;
-(void)_connectTo:(id)arg1 withData:(id)arg2 ;
-(void)invite:(id)arg1 ;
-(void)setARDRole:(int)arg1 ;
-(void)participant:(id)arg1 changedFromState:(unsigned)arg2 toState:(unsigned)arg3 ;
-(char)isAOLInterop;
-(unsigned)addStatusForIMHandle:(id)arg1 asVideo:(char)arg2 ardRole:(int)arg3 ;
-(void)conferencePersonWithID:(id)arg1 didConnect:(char)arg2 ;
-(char)shouldConferenceAcceptIncomingRequestFromUser:(id)arg1 onLocalSubnetOnly:(char*)arg2 ;
-(void)_imHandleStatusChanged:(id)arg1 ;
-(char)_imHandlesRequireCoercedIDs:(id)arg1 ;
-(id)_initWith:(id)arg1 invitedBy:(id)arg2 ARDRole:(int)arg3 sessionID:(unsigned)arg4 video:(char)arg5 extraProperties:(id)arg6 ;
-(void)_configureVCCRecv;
-(id)_currentAVChatInfo;
-(id)theaterDelegate;
-(void)_configureVCC;
-(void)connectProc:(id)arg1 ;
-(id)initPersistentAVChatWith:(id)arg1 invitedBy:(id)arg2 ARDRole:(int)arg3 sessionID:(unsigned)arg4 video:(char)arg5 ;
-(id)initOutgoingTo:(id)arg1 isVideo:(char)arg2 ARDRole:(int)arg3 ;
-(char)isOneWay;
-(id)vcErrorReport;
-(id)recorder;
-(id)auxVideo;
-(id)ard;
-(void)setTheaterDelegate:(id)arg1 ;
-(char)canAddIMHandle:(id)arg1 ;
-(void)removeParticipantWithID:(id)arg1 ;
@end

