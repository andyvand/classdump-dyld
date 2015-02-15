/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:56:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Notes/NFFolder.h>
#import <Notes/IMAPPersistedMailbox.h>

@class NSString, NSSet, NSNumber;

@interface NFIMAPFolder : NFFolder <IMAPPersistedMailbox>

@property (nonatomic,retain) NFIMAPFolder * parent; 
@property (nonatomic,retain) NSNumber * allegedHighestModificationSequence; 
@property (nonatomic,retain) NSNumber * computedHighestModificationSequence; 
@property (nonatomic,copy) NSString * serverName; 
@property (nonatomic,retain) NSNumber * uidValidity; 
@property (nonatomic,retain) NSNumber * uidNext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSManagedObject*<IMAPPersistedAccount> account; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSSet * persistedMessages; 
@property (nonatomic,retain) NSNumber * imapAllegedHighestModificationSequence; 
@property (nonatomic,retain) NSNumber * imapComputedHighestModificationSequence; 
@property (nonatomic,retain) NSNumber * imapUIDNext; 
@property (nonatomic,retain) NSNumber * imapUIDValidity; 
@property (nonatomic,copy) NSString * imapServerName; 
@property (nonatomic,readonly) char isRootMailbox; 
+(Class)noteClass;
+(id)folderWithName:(id)arg1 parentFolder:(id)arg2 context:(id)arg3 ;
+(id)createFolderWithName:(id)arg1 parentFolder:(id)arg2 context:(id)arg3 ;
-(unsigned long long)totalCountOfMessages;
-(char)isRemote;
-(char)validateValue:(inout id*)arg1 forKey:(id)arg2 error:(out id*)arg3 ;
-(id)subfolderWithName:(id)arg1 ;
-(id)newSubfolderWithName:(id)arg1 ;
-(char)validateAccount:(inout id*)arg1 error:(out id*)arg2 ;
-(id)newNote;
-(char)_isSiblingWithSameNameAllowed:(id)arg1 ;
-(id)newSubfolderWithName:(id)arg1 serverName:(id)arg2 ;
-(void)addChildMailboxesObject:(id)arg1 ;
-(void)removeChildMailboxesObject:(id)arg1 ;
-(void)addChildMailboxes:(id)arg1 ;
-(void)removeChildMailboxes:(id)arg1 ;
-(void)addPersistedMessagesObject:(id)arg1 ;
-(void)removePersistedMessagesObject:(id)arg1 ;
-(void)addPersistedMessages:(id)arg1 ;
-(void)removePersistedMessages:(id)arg1 ;
-(id)newMessage;
-(id)messagesWithObjectIDs:(id)arg1 ;
-(id)copyIncompleteMessagesIncludingObjectIDs:(id)arg1 ;
-(unsigned)maximumIMAPUID;
-(id)getDetailsForMessagesWithIMAPUIDs:(id)arg1 ;
-(id)cacheDirectoryContentsExcludingObjectIDs:(id)arg1 ;
-(id)messageWithUniqueID:(id)arg1 ;
-(NSSet *)persistedMessages;
-(void)setPersistedMessages:(NSSet *)arg1 ;
-(NSNumber *)imapAllegedHighestModificationSequence;
-(void)setImapAllegedHighestModificationSequence:(NSNumber *)arg1 ;
-(NSNumber *)imapComputedHighestModificationSequence;
-(void)setImapComputedHighestModificationSequence:(NSNumber *)arg1 ;
-(NSNumber *)imapUIDNext;
-(void)setImapUIDNext:(NSNumber *)arg1 ;
-(NSNumber *)imapUIDValidity;
-(void)setImapUIDValidity:(NSNumber *)arg1 ;
-(NSString *)imapServerName;
-(void)setImapServerName:(NSString *)arg1 ;
-(char)isRootMailbox;
@end
