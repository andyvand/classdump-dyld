/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSSet, NSNumber;


@protocol IMAPPersistedMailbox <NSObject>
@property (nonatomic,retain) NSManagedObject*<IMAPPersistedAccount> account; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) NSManagedObject*<IMAPPersistedMailbox> parent; 
@property (nonatomic,copy) NSSet * persistedMessages; 
@property (nonatomic,retain) NSNumber * imapAllegedHighestModificationSequence; 
@property (nonatomic,retain) NSNumber * imapComputedHighestModificationSequence; 
@property (nonatomic,retain) NSNumber * imapUIDNext; 
@property (nonatomic,retain) NSNumber * imapUIDValidity; 
@property (nonatomic,copy) NSString * imapServerName; 
@property (nonatomic,readonly) char isRootMailbox; 
@required
-(id)compactDescription;
-(unsigned long long)totalCountOfMessages;
-(void)setName:(id)arg1;
-(NSString *)name;
-(NSManagedObject*<IMAPPersistedMailbox>)parent;
-(void)setParent:(id)arg1;
-(NSManagedObject*<IMAPPersistedAccount>)account;
-(void)setAccount:(id)arg1;
-(void)addChildMailboxesObject:(id)arg1;
-(void)removeChildMailboxesObject:(id)arg1;
-(void)addChildMailboxes:(id)arg1;
-(void)removeChildMailboxes:(id)arg1;
-(void)addPersistedMessagesObject:(id)arg1;
-(void)removePersistedMessagesObject:(id)arg1;
-(void)addPersistedMessages:(id)arg1;
-(void)removePersistedMessages:(id)arg1;
-(id)newMessage;
-(id)messagesWithObjectIDs:(id)arg1;
-(id)copyIncompleteMessagesIncludingObjectIDs:(id)arg1;
-(unsigned)maximumIMAPUID;
-(id)getDetailsForMessagesWithIMAPUIDs:(id)arg1;
-(id)cacheDirectoryContentsExcludingObjectIDs:(id)arg1;
-(id)messageWithUniqueID:(id)arg1;
-(NSSet *)persistedMessages;
-(void)setPersistedMessages:(id)arg1;
-(NSNumber *)imapAllegedHighestModificationSequence;
-(void)setImapAllegedHighestModificationSequence:(id)arg1;
-(NSNumber *)imapComputedHighestModificationSequence;
-(void)setImapComputedHighestModificationSequence:(id)arg1;
-(NSNumber *)imapUIDNext;
-(void)setImapUIDNext:(id)arg1;
-(NSNumber *)imapUIDValidity;
-(void)setImapUIDValidity:(id)arg1;
-(NSString *)imapServerName;
-(void)setImapServerName:(id)arg1;
-(char)isRootMailbox;

@end

