/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:01 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/Versions/A/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUtilities/IDSIDQueryControllerDelegate.h>

@class NSMutableArray, TUCallCenterCallsCache, TUCallModelState, TUCall, NSArray, NSString;

@interface TUCallCenter : NSObject <IDSIDQueryControllerDelegate> {

	NSMutableArray* _displayedCalls;
	NSMutableArray* _conferenceParticipantCalls;
	TUCallCenterCallsCache* _callsCache;
	TUCallModelState* _callModelState;

}

@property (nonatomic,retain,readonly) TUCall * incomingCall; 
@property (nonatomic,retain,readonly) NSArray * incomingCalls; 
@property (nonatomic,retain) NSMutableArray * displayedCalls;                          //@synthesize displayedCalls=_displayedCalls - In the implementation block
@property (nonatomic,retain) NSMutableArray * conferenceParticipantCalls;              //@synthesize conferenceParticipantCalls=_conferenceParticipantCalls - In the implementation block
@property (nonatomic,retain) TUCallCenterCallsCache * callsCache;                      //@synthesize callsCache=_callsCache - In the implementation block
@property (nonatomic,retain) TUCallModelState * callModelState;                        //@synthesize callModelState=_callModelState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_sharedInstanceWithDaemonDelegate:(id)arg1 ;
+(char)shouldDisableAppFeatures;
+(char)isIMAVChatHostProcess;
+(char)isInCallServiceProcess;
+(char)emergencyCallBackModeIsActive;
+(id)sharedInstance;
+(id)sharedAddressBook;
-(int)currentCallCount;
-(unsigned long long)currentVideoCallCount;
-(int)ambiguityState;
-(char)isSwappable;
-(char)isMergeable;
-(char)isHoldAllowed;
-(char)isAddCallAllowed;
-(char)isTakingCallsPrivateAllowed;
-(char)isHardPauseAvailable;
-(char)isEndAndAnswerAllowed;
-(char)isHoldAndAnswerAllowed;
-(char)isSendToVoicemailAllowed;
-(char)allCallsAreOfService:(int)arg1 ;
-(char)isAmbiguous;
-(void)handleCallStatusChanged:(id)arg1 ;
-(void)handleCallConnected:(id)arg1 ;
-(id)callWithStatus:(int)arg1 ;
-(void)requestHandoffForAllCalls;
-(void)answerCall:(id)arg1 ;
-(void)disconnectCall:(id)arg1 ;
-(void)swapCalls;
-(void)endActiveAndAnswerCall:(id)arg1 ;
-(void)endHeldAndAnswerCall:(id)arg1 ;
-(void)disconnectCurrentCallAndActivateHeld;
-(void)disconnectAllCalls;
-(void)handleCallModelStateChanged:(id)arg1 ;
-(id)_allCalls;
-(void)disconnectCall:(id)arg1 withReason:(int)arg2 ;
-(TUCallCenterCallsCache *)callsCache;
-(id)proxyCallWithDestinationID:(id)arg1 service:(int)arg2 status:(int)arg3 sourceIdentifier:(id)arg4 outgoing:(char)arg5 conferenceIdentifier:(id)arg6 voicemail:(char)arg7 callerNameFromNetwork:(id)arg8 ;
-(id)callWithCallUUID:(id)arg1 ;
-(id)currentCalls;
-(void)handleCallStatusOnDefaultPairedDeviceChanged:(id)arg1 ;
-(TUCallModelState *)callModelState;
-(id)dial:(id)arg1 callID:(id)arg2 service:(int)arg3 sourceIdentifier:(id)arg4 ;
-(void)setCallsCache:(TUCallCenterCallsCache *)arg1 ;
-(id)displayedCallFromCalls:(id)arg1 ;
-(TUCall *)incomingCall;
-(id)initWithDaemonDelegate:(id)arg1 ;
-(void)handleChatStateChanged:(id)arg1 ;
-(void)handleChatConferenceMetadataUpdated:(id)arg1 ;
-(void)handleChatSendingAudioChangedNotification:(id)arg1 ;
-(void)handleChatInvitationSent:(id)arg1 ;
-(void)daemonConnected:(id)arg1 ;
-(void)handleChatFirstPreviewFrameArrived:(id)arg1 ;
-(void)handleChatFirstRemoteFrameArrived:(id)arg1 ;
-(void)handleChatRemoteVideoDidChange:(id)arg1 ;
-(void)handleChatRemoteScreenDidChange:(id)arg1 ;
-(void)handleChatRemotePauseDidChange:(id)arg1 ;
-(void)handleChatVideoQualityDidChange:(id)arg1 ;
-(void)handleChatVideoStalledDidChange:(id)arg1 ;
-(void)_callStatusChangedInternal:(id)arg1 ;
-(void)_updateActiveCalls:(id)arg1 ;
-(NSArray *)incomingCalls;
-(id)conferenceCall;
-(NSMutableArray *)conferenceParticipantCalls;
-(id)_callGroupsFromCalls:(id)arg1 ;
-(id)_currentCalls:(char)arg1 ;
-(id)currentVideoCalls;
-(id)callsWithStatus:(int)arg1 ;
-(id)callsOnDefaultPairedDevice;
-(id)videoCallWithStatus:(int)arg1 ;
-(id)currentCallGroups;
-(id)currentAudioAndVideoCalls;
-(id)callsHostedElsewhere;
-(id)callsWithAnEndpointElsewhere;
-(id)sourceAccount:(char)arg1 ;
-(id)dial:(id)arg1 callID:(id)arg2 service:(int)arg3 ;
-(id)dial:(id)arg1 callID:(id)arg2 service:(int)arg3 sourceIdentifier:(id)arg4 isRelayCall:(char)arg5 ;
-(char)canInitiateCalls;
-(char)canInitiateCallForService:(int)arg1 ;
-(id)_dialFaceTimeCall:(id)arg1 isVideo:(char)arg2 callID:(id)arg3 sourceIdentifier:(id)arg4 ;
-(void)disconnectRelayingCalls;
-(void)disconnectNonRelayingCalls;
-(void)answerCall:(id)arg1 withSourceIdentifier:(id)arg2 ;
-(void)answerCall:(id)arg1 withSourceIdentifier:(id)arg2 wantsHoldMusic:(char)arg3 ;
-(char)anyCallIsHostedOnCurrentDevice;
-(void)handleCallStatusChanged:(id)arg1 userInfo:(id)arg2 ;
-(id)_callStatusUserInfoForUserInfo:(id)arg1 ;
-(void)_updateCallCount:(id)arg1 force:(char)arg2 ;
-(void)handleFilteredCall:(id)arg1 userInfo:(id)arg2 ;
-(id)_callerUnavailableUserInfoForCall:(id)arg1 reason:(unsigned)arg2 error:(int)arg3 ;
-(void)handleCallerUnavailableForCall:(id)arg1 reason:(unsigned)arg2 error:(int)arg3 ;
-(void)handleCallFailed:(id)arg1 ;
-(void)_handleCallEnded:(id)arg1 withReason:(unsigned)arg2 error:(int)arg3 ;
-(id)_videoCallUserInfoForUserInfo:(id)arg1 ;
-(void)forceCallActive:(id)arg1 ;
-(void)handleFilteredCall:(id)arg1 ;
-(id)callWithUniqueProxyIdentifier:(id)arg1 ;
-(id)callGroupsOnDefaultPairedDevice;
-(unsigned long long)callCountOnDefaultPairedDevice;
-(char)anyCallIsEndpointOnCurrentDevice;
-(id)callsHostedOrAnEndpointElsewhere;
-(id)dial:(id)arg1 service:(int)arg2 ;
-(id)dialEmergency:(id)arg1 ;
-(id)dialVoicemail;
-(void)sendFieldModeDigits:(id)arg1 ;
-(void)answerCallWithHoldMusic:(id)arg1 ;
-(void)holdActiveAndAnswerCall:(id)arg1 ;
-(void)resumeCall:(id)arg1 ;
-(char)canTakeCallsPrivate;
-(void)handleCallSubTypeChanged:(id)arg1 ;
-(void)handleCallerIDChanged:(id)arg1 ;
-(void)invitedToIMAVChat:(id)arg1 ;
-(void)createdOutgoingIMAVChat:(id)arg1 ;
-(void)filteredIncomingIMAVChat:(id)arg1 ;
-(void)endEmergencyCallBackMode;
-(NSMutableArray *)displayedCalls;
-(void)setDisplayedCalls:(NSMutableArray *)arg1 ;
-(void)setConferenceParticipantCalls:(NSMutableArray *)arg1 ;
-(void)setCallModelState:(TUCallModelState *)arg1 ;
-(void)_postDisplayedCallsChanged;
-(void)_postConferenceParticipantsChanged;
-(void)_setIncomingCall:(id)arg1 ;
-(void)suspendCallChangeNotifications;
-(void)_setActiveCalls:(id)arg1 ;
-(void)_setConferenceParticipants:(id)arg1 ;
-(void)resumeCallChangeNotifications;
-(void)_addActiveCall:(id)arg1 ;
-(void)_removeActiveCall:(id)arg1 ;
-(char)inCall;
-(char)inOutgoingCall;
-(char)justAnIncomingCallExists;
-(char)canMergeCalls;
-(id)displayedCall;
-(id)displayedCallsNotIncludingIncomingCall;
-(void)forceCallIntoConference:(id)arg1 ;
-(void)forceCallOutOfConference:(id)arg1 ;
-(void)forceDisconnectOfCall:(id)arg1 ;
-(void)forceUpdateOfCallList;
-(void)_handleCallControlFailure:(id)arg1 ;
-(id)incomingVideoCall;
-(id)activeVideoCall;
-(id)allNonFinalVideoCalls;
-(id)currentVideoCall;
-(void)dealloc;
-(void)_resetState;
@end

