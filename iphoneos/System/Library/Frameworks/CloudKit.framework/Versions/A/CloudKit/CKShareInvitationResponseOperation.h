/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKOperation.h>

@class NSArray, NSMutableDictionary;

@interface CKShareInvitationResponseOperation : CKOperation {

	NSArray* _invitationsToAccept;
	NSArray* _invitationsToDecline;
	/*^block*/id _shareInvitationResponseCompletionBlock;
	NSMutableDictionary* _successfulResponsesByID;
	NSMutableDictionary* _invitationsByInvitationID;
	NSMutableDictionary* _responseErrorsByInvitationID;

}

@property (nonatomic,copy) NSArray * invitationsToAccept;                                     //@synthesize invitationsToAccept=_invitationsToAccept - In the implementation block
@property (nonatomic,copy) NSArray * invitationsToDecline;                                    //@synthesize invitationsToDecline=_invitationsToDecline - In the implementation block
@property (nonatomic,copy) id shareInvitationResponseCompletionBlock;                         //@synthesize shareInvitationResponseCompletionBlock=_shareInvitationResponseCompletionBlock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * successfulResponsesByID;                   //@synthesize successfulResponsesByID=_successfulResponsesByID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * invitationsByInvitationID;                 //@synthesize invitationsByInvitationID=_invitationsByInvitationID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * responseErrorsByInvitationID;              //@synthesize responseErrorsByInvitationID=_responseErrorsByInvitationID - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(char)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(id)initWithInvitationsToAccept:(id)arg1 invitationsToDecline:(id)arg2 ;
-(void)setShareInvitationResponseCompletionBlock:(id)arg1 ;
-(NSArray *)invitationsToAccept;
-(void)setInvitationsToAccept:(NSArray *)arg1 ;
-(NSArray *)invitationsToDecline;
-(void)setInvitationsToDecline:(NSArray *)arg1 ;
-(NSMutableDictionary *)invitationsByInvitationID;
-(NSMutableDictionary *)responseErrorsByInvitationID;
-(NSMutableDictionary *)successfulResponsesByID;
-(id)shareInvitationResponseCompletionBlock;
-(void)setSuccessfulResponsesByID:(NSMutableDictionary *)arg1 ;
-(void)setInvitationsByInvitationID:(NSMutableDictionary *)arg1 ;
-(void)setResponseErrorsByInvitationID:(NSMutableDictionary *)arg1 ;
-(id)init;
@end

