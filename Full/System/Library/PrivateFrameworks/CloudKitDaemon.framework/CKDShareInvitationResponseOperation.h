/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@class NSArray, NSMutableDictionary;

@interface CKDShareInvitationResponseOperation : CKDOperation {

	/*^block*/id _shareInvitationResponseProgressBlock;
	NSArray* _invitationsToAccept;
	NSArray* _invitationsToDecline;
	NSMutableDictionary* _invitationsByInvitationID;

}

@property (nonatomic,copy) id shareInvitationResponseProgressBlock;                        //@synthesize shareInvitationResponseProgressBlock=_shareInvitationResponseProgressBlock - In the implementation block
@property (nonatomic,retain) NSArray * invitationsToAccept;                                //@synthesize invitationsToAccept=_invitationsToAccept - In the implementation block
@property (nonatomic,retain) NSArray * invitationsToDecline;                               //@synthesize invitationsToDecline=_invitationsToDecline - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * invitationsByInvitationID;              //@synthesize invitationsByInvitationID=_invitationsByInvitationID - In the implementation block
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setShareInvitationResponseProgressBlock:(id)arg1 ;
-(id)shareInvitationResponseProgressBlock;
-(void)_handleInvitationRespondedTo:(id)arg1 invitationID:(id)arg2 responseCode:(id)arg3 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(NSArray *)invitationsToAccept;
-(void)setInvitationsToAccept:(NSArray *)arg1 ;
-(NSArray *)invitationsToDecline;
-(void)setInvitationsToDecline:(NSArray *)arg1 ;
-(NSMutableDictionary *)invitationsByInvitationID;
-(void)setInvitationsByInvitationID:(NSMutableDictionary *)arg1 ;
-(void)main;
@end

