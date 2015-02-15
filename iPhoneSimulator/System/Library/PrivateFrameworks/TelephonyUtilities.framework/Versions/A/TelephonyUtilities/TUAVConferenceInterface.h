/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:01 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/Versions/A/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUtilities/AVConferenceDelegate.h>

@protocol TUAVConferenceInterfaceDelegate;
@class NSMutableArray, AVConference;

@interface TUAVConferenceInterface : NSObject <AVConferenceDelegate> {

	char _hasActiveConference;
	id<TUAVConferenceInterfaceDelegate> _delegate;
	NSMutableArray* _activeConferenceConnections;
	AVConference* _conference;
	long long _callID;

}

@property (assign,nonatomic) id<TUAVConferenceInterfaceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isMuted,nonatomic) char muted; 
@property (assign,getter=isSendingAudio,nonatomic) char sendingAudio; 
@property (nonatomic,retain) NSMutableArray * activeConferenceConnections;              //@synthesize activeConferenceConnections=_activeConferenceConnections - In the implementation block
@property (nonatomic,retain) AVConference * conference;                                 //@synthesize conference=_conference - In the implementation block
@property (assign,nonatomic) long long callID;                                          //@synthesize callID=_callID - In the implementation block
@property (assign,nonatomic) char hasActiveConference;                                  //@synthesize hasActiveConference=_hasActiveConference - In the implementation block
+(id)sharedInstance;
-(void)setMuted:(char)arg1 ;
-(char)isMuted;
-(void)setActiveConferenceConnections:(NSMutableArray *)arg1 ;
-(void)_cleanUpConference;
-(AVConference *)conference;
-(NSMutableArray *)activeConferenceConnections;
-(void)_startConferenceForConferenceConnection:(id)arg1 withSocket:(int)arg2 ;
-(id)_conferenceConnectionForCall:(id)arg1 ;
-(void)_cleanUpConferenceConnection:(id)arg1 error:(id)arg2 ;
-(void)_cleanUpAllConferenceConnectionsWithError:(id)arg1 ;
-(void)setConference:(AVConference *)arg1 ;
-(void)_setUpDidStartTimeoutForConference:(id)arg1 conferenceConnection:(id)arg2 ;
-(char)_shouldIgnoreAVConferenceError:(id)arg1 ;
-(void)conference:(id)arg1 withCallID:(long long)arg2 remoteMediaStalled:(char)arg3 ;
-(void)conference:(id)arg1 didStartSession:(char)arg2 withUserInfo:(id)arg3 ;
-(void)conference:(id)arg1 didStopWithCallID:(long long)arg2 error:(id)arg3 ;
-(void)conference:(id)arg1 updateInputFrequencyLevel:(id)arg2 ;
-(void)conference:(id)arg1 updateOutputFrequencyLevel:(id)arg2 ;
-(void)conference:(id)arg1 updateInputMeterLevel:(float)arg2 ;
-(void)conference:(id)arg1 updateOutputMeterLevel:(float)arg2 ;
-(void)conference:(id)arg1 receivedFirstRemoteFrameForCallID:(long long)arg2 ;
-(void)conference:(id)arg1 remoteScreenAttributesChanged:(id)arg2 callID:(long long)arg3 ;
-(void)conference:(id)arg1 remoteVideoAttributesChanged:(id)arg2 callID:(long long)arg3 ;
-(void)conference:(id)arg1 remoteAudioPaused:(char)arg2 callID:(long long)arg3 ;
-(void)conference:(id)arg1 remoteVideoPaused:(char)arg2 callID:(long long)arg3 ;
-(void)serverDiedForConference:(id)arg1 ;
-(void)conference:(id)arg1 inititiateRelayRequest:(long long)arg2 requestDict:(id)arg3 ;
-(void)conference:(id)arg1 sendRelayUpdate:(long long)arg2 updateDict:(id)arg3 ;
-(void)conference:(id)arg1 cancelRelayRequest:(long long)arg2 requestDict:(id)arg3 ;
-(void)conference:(id)arg1 videoQualityNotificationForCallID:(long long)arg2 isDegraded:(char)arg3 isRemote:(char)arg4 ;
-(void)conference:(id)arg1 withCallID:(long long)arg2 networkHint:(char)arg3 ;
-(void)conference:(id)arg1 closeConnectionForCallID:(long long)arg2 ;
-(void)setSendingAudio:(char)arg1 ;
-(void)startConferenceForCall:(id)arg1 withSocket:(int)arg2 didStartHandler:(/*^block*/id)arg3 didStopHandler:(/*^block*/id)arg4 ;
-(void)stopConferenceForCall:(id)arg1 ;
-(void)stopConferenceForAllCalls;
-(void)_startAudioSession;
-(void)_stopAudioSession;
-(id)init;
-(void)setDelegate:(id<TUAVConferenceInterfaceDelegate>)arg1 ;
-(void)dealloc;
-(id<TUAVConferenceInterfaceDelegate>)delegate;
-(char)isSendingAudio;
-(char)hasActiveConference;
-(long long)callID;
-(void)setCallID:(long long)arg1 ;
-(void)setHasActiveConference:(char)arg1 ;
@end

