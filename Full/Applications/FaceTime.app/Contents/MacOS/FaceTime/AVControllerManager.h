/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/FaceTime.app/Contents/MacOS/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <FaceTime/AVControllerDelegateProtocol.h>
#import <FaceTime/NSSharingServiceDelegate.h>

@class AVController, NSString, NSDictionary;

@interface AVControllerManager : NSObject <AVControllerDelegateProtocol, NSSharingServiceDelegate> {

	char _makingCall;
	char _acceptingCallWaiting;
	char _shouldCloseControllerOnChatEnd;
	char _shouldRevertToVideoControllerOnCancel;
	char _bypassStoringCall;
	unsigned _invitationAssertionID;
	AVController* _currentController;
	NSString* _remoteiMessageAddress;
	AVController* _migrationController;
	AVController* _inviteController;
	AVController* _hiddenController;
	NSDictionary* _storedCall;

}

@property (nonatomic,retain) NSString * remoteiMessageAddress;                        //@synthesize remoteiMessageAddress=_remoteiMessageAddress - In the implementation block
@property (nonatomic,retain) AVController * currentController;                        //@synthesize currentController=_currentController - In the implementation block
@property (nonatomic,retain) AVController * migrationController;                      //@synthesize migrationController=_migrationController - In the implementation block
@property (nonatomic,retain) AVController * inviteController;                         //@synthesize inviteController=_inviteController - In the implementation block
@property (nonatomic,retain) AVController * hiddenController;                         //@synthesize hiddenController=_hiddenController - In the implementation block
@property (assign,nonatomic) char makingCall;                                         //@synthesize makingCall=_makingCall - In the implementation block
@property (assign,nonatomic) char acceptingCallWaiting;                               //@synthesize acceptingCallWaiting=_acceptingCallWaiting - In the implementation block
@property (assign,nonatomic) char shouldCloseControllerOnChatEnd;                     //@synthesize shouldCloseControllerOnChatEnd=_shouldCloseControllerOnChatEnd - In the implementation block
@property (assign,nonatomic) char shouldRevertToVideoControllerOnCancel;              //@synthesize shouldRevertToVideoControllerOnCancel=_shouldRevertToVideoControllerOnCancel - In the implementation block
@property (nonatomic,retain) NSDictionary * storedCall;                               //@synthesize storedCall=_storedCall - In the implementation block
@property (assign,nonatomic) char bypassStoringCall;                                  //@synthesize bypassStoringCall=_bypassStoringCall - In the implementation block
@property (assign,nonatomic) unsigned invitationAssertionID;                          //@synthesize invitationAssertionID=_invitationAssertionID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)remoteHandleForCallObject:(id)arg1 ;
+(void)queryiMessageRepliability:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
+(id)sharedInstance;
-(char)hasStoredOutgoingCall;
-(void)initiateStoredCall;
-(void)receiveInvitationFrom:(id)arg1 ;
-(void)showVideoChatController;
-(char)shouldShowEndAndAccept;
-(void)controller:(id)arg1 callDidEnd:(id)arg2 ;
-(char)shouldShowHoldAndAccept;
-(void)controller:(id)arg1 callWasAccepted:(id)arg2 ;
-(void)controller:(id)arg1 didReplyWithiMessage:(id)arg2 ;
-(void)makeCallTo:(id)arg1 isAudio:(char)arg2 showPrompt:(char)arg3 ;
-(void)makePhoneCallTo:(id)arg1 abRecordID:(id)arg2 showPrompt:(char)arg3 ;
-(char)hasVideoCapability;
-(void)controllerWillCloseWindow:(id)arg1 ;
-(void)controller:(id)arg1 callDidBegin:(id)arg2 ;
-(char)hasStandaloneInvite;
-(void)controller:(id)arg1 callWaitingDidEnd:(id)arg2 ;
-(void)makeCallTo:(id)arg1 ;
-(void)controllerCanceled:(id)arg1 ;
-(void)makeOutgoingCall:(id)arg1 ;
-(void)_accountEnabledStateChanged:(id)arg1 ;
-(void)endAllCalls;
-(char)shouldTerminateOnLastWindowClosed;
-(void)setRemoteiMessageAddress:(NSString *)arg1 ;
-(void)setInvitationAssertionID:(unsigned)arg1 ;
-(unsigned)invitationAssertionID;
-(void)setCurrentController:(AVController *)arg1 ;
-(void)setShouldCloseControllerOnChatEnd:(char)arg1 ;
-(void)setMigrationController:(AVController *)arg1 ;
-(void)setInviteController:(AVController *)arg1 ;
-(void)_revertToVideo;
-(char)contactListIsVisible;
-(void)_buildPeerIDsForChat:(id)arg1 ;
-(char)bypassStoringCall;
-(void)setStoredCall:(NSDictionary *)arg1 ;
-(void)setShouldRevertToVideoControllerOnCancel:(char)arg1 ;
-(void)showTUCallController;
-(NSDictionary *)storedCall;
-(void)setBypassStoringCall:(char)arg1 ;
-(AVController *)inviteController;
-(AVController *)migrationController;
-(AVController *)hiddenController;
-(void)setHiddenController:(AVController *)arg1 ;
-(void)setAcceptingCallWaiting:(char)arg1 ;
-(void)_cancelInvitationAssertionID;
-(char)acceptingCallWaiting;
-(char)shouldCloseControllerOnChatEnd;
-(void)_handleCallWaitingEnded:(id)arg1 call:(id)arg2 ;
-(NSString *)remoteiMessageAddress;
-(char)shouldRevertToVideoControllerOnCancel;
-(void)controller:(id)arg1 didHoldAndAcceptCallWaiting:(id)arg2 ;
-(void)controller:(id)arg1 didEndAndAcceptCallWaiting:(id)arg2 ;
-(void)controller:(id)arg1 didDeclineCallWaiting:(id)arg2 ;
-(id)_handleForPerson:(id)arg1 ;
-(char)makingCall;
-(void)setMakingCall:(char)arg1 ;
-(id)init;
-(AVController *)currentController;
@end

