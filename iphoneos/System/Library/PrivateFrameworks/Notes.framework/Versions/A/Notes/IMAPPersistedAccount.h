/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSSet;


@protocol IMAPPersistedAccount <MCPersistedConnectionBasedAccount>
@property (nonatomic,readonly) NSManagedObject*<IMAPPersistedMailbox> defaultMailbox; 
@property (nonatomic,readonly) NSManagedObject*<IMAPPersistedMailbox> inbox; 
@property (assign,nonatomic) long long gmailCapabilitiesSupport; 
@property (nonatomic,copy) NSString * serverPathPrefix; 
@property (nonatomic,copy,readonly) NSSet * mailboxes; 
@required
-(NSManagedObject*<IMAPPersistedMailbox>)inbox;
-(long long)gmailCapabilitiesSupport;
-(NSString *)serverPathPrefix;
-(void)setGmailCapabilitiesSupport:(long long)arg1;
-(NSSet *)mailboxes;
-(void)addMailboxes:(id)arg1;
-(id)objectIDOfMailboxWithServerName:(id)arg1;
-(id)newMailboxWithName:(id)arg1 serverName:(id)arg2 parent:(id)arg3;
-(NSManagedObject*<IMAPPersistedMailbox>)defaultMailbox;
-(void)setServerPathPrefix:(id)arg1;

@end

