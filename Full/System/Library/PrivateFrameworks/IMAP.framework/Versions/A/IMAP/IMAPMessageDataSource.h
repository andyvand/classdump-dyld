/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:41 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMAP.framework/Versions/A/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IMAPMessageDataSource <MCMessageDataSource>
@property (nonatomic,readonly) char persistentIDType; 
@optional
-(id)async_setGmailLabelsFromDictionary:(id)arg1 forMessages:(id)arg2 updatingServer:(char)arg3;
-(id)messageWithDefaultLoadOptionsAndRowID:(long long)arg1;
-(id)messagesWithRowIDs:(id)arg1;
-(id)recentFlagChangesForRowID:(id)arg1;
-(id)messageWithDefaultLoadOptionsAndManagedObjectID:(id)arg1;
-(id)messagesWithManagedObjectIDs:(id)arg1;
-(id)recentFlagChangesForManagedObjectID:(id)arg1;

@required
-(void)addMessages:(id)arg1;
-(id)cacheDirectoryContents;
-(char)isAllMailMailbox;
-(void)setComputedHighestModificationSequence:(unsigned long long)arg1;
-(id)mailboxName;
-(unsigned)uidValidityStatus;
-(char)hasCacheFileForMessage:(id)arg1 directoryContents:(id)arg2;
-(char)hasCacheFileForMessage:(id)arg1 part:(id)arg2 directoryContents:(id)arg3;
-(unsigned long long)totalCountOfMessages;
-(id)getDetailsForMessagesWithRemoteIDs:(id)arg1;
-(void)setUidValidityStatus:(unsigned)arg1;
-(unsigned)maximumRemoteID;
-(id)async_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 updatingServer:(char)arg3;
-(char)persistentIDType;
-(id)messagesBeingAdded;
-(void)setAllegedHighestModificationSequence:(unsigned long long)arg1;
-(char)isInbox;
-(id)copyMessagesWithTemporaryUids;
-(id)copyIncompleteMessages;
-(char)hasValidCacheFileForMessage:(id)arg1;
-(id)fetchPipeline;
-(id)downloadCache;
-(char)messagesAreBeingAdded;
-(id)fetchAndCacheBodyDataForMessages:(id)arg1;
-(void)compactMessagesFromSyncEngine:(id)arg1;
-(char)messageHasBeenDeleted:(id)arg1;
-(id)newDictionaryForLocalFlags:(unsigned)arg1 serverFlags:(unsigned)arg2 existingDictionary:(id)arg3;
-(void)syncEngineDidStart;
-(void)syncEngineDidFinish;
-(unsigned)uidNextStatus;
-(void)setUidNextStatus:(unsigned)arg1;
-(unsigned long long)allegedHighestModificationSequence;
-(void)removeAllLocalMessages;
-(void)syncEngineDidSynchronizeMessageList;
-(id)account;

@end

