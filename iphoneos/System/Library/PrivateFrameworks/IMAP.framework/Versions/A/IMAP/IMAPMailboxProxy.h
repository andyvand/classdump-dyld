/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMAP.framework/Versions/A/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMAP/IMAP-Structs.h>
#import <MailCore/MCMailboxProxy.h>
#import <IMAP/IMAPMailboxDelegate.h>
#import <IMAP/IMAPMessageDataSource.h>
#import <IMAP/MCMailbox.h>

@class IMAPCommandPipeline, IMAPDownloadCache, IMAPMailboxSyncEngine, NSMutableArray, NSMutableSet, NSOperationQueue, NSLock, IMAPMailbox, IMAPAccountProxy, NSString;

@interface IMAPMailboxProxy : MCMailboxProxy <IMAPMailboxDelegate, IMAPMessageDataSource, MCMailbox> {

	IMAPCommandPipeline* _fetchPipeline;
	IMAPDownloadCache* _downloadCache;
	IMAPMailboxSyncEngine* _mailboxSyncEngine;
	NSMutableArray* _messagesToAdd;
	NSMutableSet* _messagesBeingAdded;
	NSOperationQueue* _messagesWereAddedQueue;
	NSMutableSet* _messageIDsBeingUpdated;
	NSLock* _copyLock;
	NSOperationQueue* _imapMailboxQueue;
	id _imapMailboxLock;
	IMAPMailbox* _imapMailbox;
	char _doingHasMessages;
	IMAPAccountProxy* _account;

}

@property (__weak) IMAPAccountProxy * account;                      //@synthesize account=_account - In the implementation block
@property (__weak) IMAPMailbox * imapMailbox; 
@property (copy) NSString * name; 
@property (copy) NSString * serverName; 
@property (assign) char doingHasMessages;                           //@synthesize doingHasMessages=_doingHasMessages - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) char isReadOnly; 
@property (nonatomic,readonly) char persistentIDType; 
-(id)URLString;
-(void)setUserInfoObject:(id)arg1 forKey:(id)arg2 ;
-(void)updateFromServer;
-(char)isReadOnly;
-(id)initWithManagedObject:(id)arg1 ;
-(id)async_setFlagWithKey:(id)arg1 state:(char)arg2 forMessages:(id)arg3 ;
-(id)async_setJunkMailLevel:(long long)arg1 forMessages:(id)arg2 trainJunkMailDatabase:(char)arg3 userRecorded:(char)arg4 ;
-(void)deleteMessages:(id)arg1 moveToTrash:(char)arg2 ;
-(void)undeleteMessages:(id)arg1 ;
-(id)async_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(void)setColor:(id)arg1 highlightTextOnly:(char)arg2 forMessages:(id)arg3 ;
-(char)canCompact;
-(id)routeMessages:(id)arg1 fetchingBodies:(char)arg2 messagesNeedingBodies:(id)arg3 ;
-(void)doCompact;
-(id)userInfoObjectForKey:(id)arg1 ;
-(void)invalidateMessage:(id)arg1 ;
-(id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 fetchIfNotAvailable:(char)arg3 ;
-(void)addMessages:(id)arg1 ;
-(id)messageForMessageID:(id)arg1 ;
-(id)cacheDirectoryContents;
-(id)undeleteMessages:(id)arg1 movedToStore:(id)arg2 newMessageIDs:(id)arg3 ;
-(void)sendResponseType:(char)arg1 forMeetingMessage:(id)arg2 ;
-(char)isAllMailMailbox;
-(char)unseenCountIsKnown;
-(unsigned long long)unseenCount;
-(void)setComputedHighestModificationSequence:(unsigned long long)arg1 ;
-(id)mailboxName;
-(id)headerDataForMessage:(id)arg1 fetchIfNotAvailable:(char)arg2 ;
-(unsigned)uidValidityStatus;
-(id)attachmentsDirectoryForMessage:(id)arg1 ;
-(char)hasCacheFileForMessage:(id)arg1 directoryContents:(id)arg2 ;
-(id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 ;
-(void)setUserInfoBool:(char)arg1 forKey:(id)arg2 ;
-(char)userInfoBoolForKey:(id)arg1 ;
-(id)snippetsForMessages:(id)arg1 ;
-(id)headerDataForMessage:(id)arg1 ;
-(id)fullBodyDataForMessage:(id)arg1 ;
-(id)dataForMimePart:(id)arg1 ;
-(char)hasCacheFileForMessage:(id)arg1 part:(id)arg2 directoryContents:(id)arg3 ;
-(id)_copyMailboxSyncEngineCreateIfNecessary:(char)arg1 setupGatewayIfNecessary:(char)arg2 ;
-(unsigned long long)totalCountOfMessages;
-(unsigned)_permanentFlags;
-(id)getDetailsForMessagesWithRemoteIDs:(id)arg1 ;
-(void)setUidValidityStatus:(unsigned)arg1 ;
-(unsigned)maximumRemoteID;
-(id)async_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 updatingServer:(char)arg3 ;
-(char)persistentIDType;
-(char)hasCachedDataForMimePart:(id)arg1 ;
-(id)messagesBeingAdded;
-(void)setAllegedHighestModificationSequence:(unsigned long long)arg1 ;
-(void)updateCountFromMailbox:(id)arg1 fromIDLE:(char)arg2 ;
-(void)updateUidValidityFromMailbox:(id)arg1 ;
-(void)processResponsesFromMailbox:(id)arg1 ;
-(void)updateSelectedGatewayFromMailbox:(id)arg1 ;
-(unsigned long long)allegedHighestModificationSequenceForMailbox:(id)arg1 ;
-(unsigned long long)computedHighestModificationSequenceForMailbox:(id)arg1 ;
-(void)updateComputedHighestModificationSequence:(unsigned long long)arg1 forMailbox:(id)arg2 ;
-(char)isInbox;
-(id)copyMessagesWithTemporaryUids;
-(id)copyIncompleteMessages;
-(char)hasValidCacheFileForMessage:(id)arg1 ;
-(id)fetchPipeline;
-(id)downloadCache;
-(char)messagesAreBeingAdded;
-(id)fetchAndCacheBodyDataForMessages:(id)arg1 ;
-(void)compactMessagesFromSyncEngine:(id)arg1 ;
-(char)messageHasBeenDeleted:(id)arg1 ;
-(id)newDictionaryForLocalFlags:(unsigned)arg1 serverFlags:(unsigned)arg2 existingDictionary:(id)arg3 ;
-(void)syncEngineDidStart;
-(void)syncEngineDidFinish;
-(unsigned)uidNextStatus;
-(void)setUidNextStatus:(unsigned)arg1 ;
-(unsigned long long)allegedHighestModificationSequence;
-(void)removeAllLocalMessages;
-(void)syncEngineDidSynchronizeMessageList;
-(id)messageWithDefaultLoadOptionsAndManagedObjectID:(id)arg1 ;
-(id)messagesWithManagedObjectIDs:(id)arg1 ;
-(id)recentFlagChangesForManagedObjectID:(id)arg1 ;
-(id)headersForMessage:(id)arg1 ;
-(id)headersForMessage:(id)arg1 fetchIfNotAvailable:(char)arg2 ;
-(id)headerDataForMessage:(id)arg1 fetchIfNotAvailable:(char)arg2 allowPartial:(char)arg3 ;
-(id)bodyForMessage:(id)arg1 fetchIfNotAvailable:(char)arg2 ;
-(id)bodyForMessage:(id)arg1 fetchIfNotAvailable:(char)arg2 updateFlags:(char)arg3 ;
-(id)bodyForMessage:(id)arg1 fetchIfNotAvailable:(char)arg2 updateFlags:(char)arg3 allowPartial:(char)arg4 ;
-(id)bodyDataForMessage:(id)arg1 fetchIfNotAvailable:(char)arg2 allowPartial:(char)arg3 ;
-(void)messageFlagsDidChange:(id)arg1 flags:(id)arg2 ;
-(void)setNumberOfAttachments:(unsigned)arg1 isSigned:(char)arg2 isEncrypted:(char)arg3 forMessage:(id)arg4 ;
-(char)supportsSnippets;
-(void)saveSnippetsForMessages:(id)arg1 ;
-(void)flushAllCaches;
-(id)uniquedString:(id)arg1 ;
-(id)extendedDisplayName;
-(char)hasMessages;
-(void)dealloc;
-(void)invalidate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)displayName;
-(NSString *)serverName;
-(void)setServerName:(NSString *)arg1 ;
-(IMAPAccountProxy *)account;
-(id)mailbox;
-(void)setAccount:(IMAPAccountProxy *)arg1 ;
-(void)setImapMailbox:(IMAPMailbox *)arg1 ;
-(IMAPMailbox *)imapMailbox;
-(void)resetSyncEngine;
-(void)mailboxWithServerName:(id)arg1 wasRenamed:(id)arg2 ;
-(void)_messageDidSetBody:(id)arg1 ;
-(char)messageShouldBePersisted:(id)arg1 ;
-(char)isMessageDeletedFromPersistence:(id)arg1 ;
-(void)deleteMessageFromPersistence:(id)arg1 ;
-(char)doingHasMessages;
-(void)setDoingHasMessages:(char)arg1 ;
-(id)messagesForMessageIDHeader:(id)arg1 ;
-(char)setPreferredEncoding:(unsigned long long)arg1 forMessage:(id)arg2 ;
-(char)synchronouslySetPreferredEncoding:(unsigned long long)arg1 forMessages:(id)arg2 ;
-(char)addMessageToServer:(id)arg1 withMessageType:(char)arg2 ;
-(char)deleteMessageFromServer:(unsigned)arg1 ;
@end

