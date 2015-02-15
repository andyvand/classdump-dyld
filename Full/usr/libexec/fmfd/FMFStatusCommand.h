/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:05:13 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/libexec/fmfd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <fmfd/FMFBaseCmd.h>

@class NSDictionary, NSArray, NSSet;

@interface FMFStatusCommand : FMFBaseCmd {

	NSDictionary* _following;
	NSDictionary* _follower;
	NSArray* _offerPending;
	NSArray* _invitePending;
	NSSet* _handles;

}

@property (copy) NSDictionary * following;                 //@synthesize following=_following - In the implementation block
@property (copy) NSDictionary * follower;                  //@synthesize follower=_follower - In the implementation block
@property (copy) NSArray * offerPending;                   //@synthesize offerPending=_offerPending - In the implementation block
@property (copy) NSArray * invitePending;                  //@synthesize invitePending=_invitePending - In the implementation block
@property (nonatomic,retain) NSSet * handles;              //@synthesize handles=_handles - In the implementation block
-(id)jsonBodyDictionary;
-(id)pathSuffix;
-(void)processCommandResponse:(id)arg1 ;
-(void)setFollower:(NSDictionary *)arg1 ;
-(void)setOfferPending:(NSArray *)arg1 ;
-(void)setInvitePending:(NSArray *)arg1 ;
-(id)initWithClientSession:(id)arg1 handles:(id)arg2 groupId:(id)arg3 ;
-(NSDictionary *)follower;
-(NSArray *)offerPending;
-(NSArray *)invitePending;
-(NSDictionary *)following;
-(void)setFollowing:(NSDictionary *)arg1 ;
-(void)setHandles:(NSSet *)arg1 ;
-(NSSet *)handles;
@end
