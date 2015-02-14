/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MFMailbox;

@interface MFCachedMailboxInfo : NSObject {

	int _mailboxType;
	long long _mailboxID;
	MFMailbox* _mailbox;

}

@property (assign,nonatomic) long long mailboxID;              //@synthesize mailboxID=_mailboxID - In the implementation block
@property (assign,nonatomic) int mailboxType;                  //@synthesize mailboxType=_mailboxType - In the implementation block
@property (nonatomic,retain) MFMailbox * mailbox;              //@synthesize mailbox=_mailbox - In the implementation block
-(int)mailboxType;
-(void)setMailboxID:(long long)arg1 ;
-(long long)mailboxID;
-(void)updateWithMessage:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(MFMailbox *)mailbox;
-(void)setMailbox:(MFMailbox *)arg1 ;
-(void)setMailboxType:(int)arg1 ;
@end

