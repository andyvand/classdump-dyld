/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:31:17 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Message/Message-Structs.h>
#import <Message/MFMessageLibrary.h>
#import <Message/MFLibraryContentIndexDataSource.h>
#import <Message/MFSQLiteConnectionPoolDelegate.h>
#import <Message/MFContentProtectionObserver.h>

@protocol OS_dispatch_queue, MFMailboxPathProvider, MFMailMessageLibraryDelegate;
@class MFSQLiteConnectionPool, MFLibraryContentIndex, MFWeakObjectCache, NSObject, , MFMailMessageLibraryMigrator, NSString, MFDbJournal, NSMutableSet, MFAttachmentLibraryDataProvider;

@interface MFMailMessageLibrary : MFMessageLibrary <MFLibraryContentIndexDataSource, MFSQLiteConnectionPoolDelegate, MFContentProtectionObserver> {

	MFSQLiteConnectionPool* _connectionPool;
	MFLibraryContentIndex* _contentIndex;
	MFWeakObjectCache* _libraryMessageCache;
	CFDictionaryRef _mailboxCache;
	NSObject<OS_dispatch_queue>* _metadataQueue;
	<MFMailboxPathProvider>* _mailboxPathProvider;
	MFMailMessageLibraryMigrator* _migrator;
	NSString* _threadLocalHandleKey;
	NSString* _activeAccountClause;
	int _protectedDataAvailability;
	MFDbJournal* _protectedJournal;
	NSObject<OS_dispatch_queue>* _keyBagQueue;
	NSMutableSet* _messagesToThreadAtUnlock;
	<MFMailMessageLibraryDelegate>* _delegate;
	MFAttachmentLibraryDataProvider* _attachmentDataProvider;

}

@property (assign,nonatomic) <MFMailMessageLibraryDelegate> * delegate; 
@property (nonatomic,readonly) int protectedDataAvailability; 
+(id)defaultInstance;
+(id)defaultPath;
+(void)_removeLibrary:(BOOL)arg1 atPath:(id)arg2 ;
+(void)removeLibraryAtPath:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)initWithPath:(id)arg1 ;
-(id)dataProvider;
-(id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(void)setNumberOfAttachments:(unsigned)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4 ;
-(BOOL)shouldCancel;
-(id)loadMeetingExternalIDForMessage:(id)arg1 ;
-(id)loadMeetingDataForMessage:(id)arg1 ;
-(id)loadMeetingMetadataForMessage:(id)arg1 ;
-(id)_newConnection;
-(void)deleteMailboxes:(id)arg1 ;
-(void)deleteAccount:(id)arg1 ;
-(BOOL)renameMailboxes:(id)arg1 to:(id)arg2 ;
-(int)libraryIDForAccount:(id)arg1 ;
-(int)createLibraryIDForAccount:(id)arg1 ;
-(unsigned)serverUnreadOnlyOnServerCountForMailbox:(id)arg1 ;
-(unsigned)unreadCountForMailbox:(id)arg1 ;
-(unsigned)unreadCountForMailbox:(id)arg1 matchingCriterion:(id)arg2 ;
-(unsigned)nonDeletedCountForMailbox:(id)arg1 ;
-(unsigned)mailboxIDForURLString:(id)arg1 ;
-(id)urlForMailboxID:(unsigned)arg1 ;
-(id)mailboxUidForMessage:(id)arg1 ;
-(void)setMessage:(id)arg1 isPartial:(BOOL)arg2 ;
-(BOOL)isMessageContentsLocallyAvailable:(id)arg1 ;
-(void)setFlags:(unsigned long long)arg1 forMessage:(id)arg2 ;
-(void)setSummary:(id)arg1 forMessage:(id)arg2 ;
-(id)dataPathForMessage:(id)arg1 ;
-(id)dataPathForMessage:(id)arg1 part:(id)arg2 ;
-(id)accountForMessage:(id)arg1 ;
-(void)setData:(id)arg1 forMessage:(id)arg2 isPartial:(BOOL)arg3 ;
-(id)dataConsumerForMessage:(id)arg1 part:(id)arg2 ;
-(void)updateMessage:(id)arg1 withMetadata:(/*^block*/ id)arg2 ;
-(id)metadataForMessage:(id)arg1 key:(id)arg2 ;
-(unsigned)totalCountForMailbox:(id)arg1 ;
-(unsigned)nonDeletedCountForMailbox:(id)arg1 includeServerSearchResults:(BOOL)arg2 includeThreadSearchResults:(BOOL)arg3 ;
-(id)messageWithLibraryID:(unsigned)arg1 options:(unsigned)arg2 inMailbox:(id)arg3 ;
-(id)messagesWithSummariesForMailbox:(id)arg1 range:(NSRange)arg2 ;
-(id)messagesMatchingCriterion:(id)arg1 options:(unsigned)arg2 range:(NSRange)arg3 ;
-(id)copyMessageInfosForMailbox:(id)arg1 ;
-(id)copyMessageInfosMatchingCriterion:(id)arg1 ;
-(id)copyMessageInfosForConversationsContainingMessagesMatchingCriterion:(id)arg1 forMailbox:(id)arg2 ;
-(id)messagesWithoutSummariesForMailbox:(id)arg1 fromRowID:(unsigned)arg2 limit:(unsigned)arg3 ;
-(id)messagesMatchingCriterion:(id)arg1 options:(unsigned)arg2 ;
-(id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned)arg2 inRemoteMailbox:(id)arg3 ;
-(CFDictionaryRef)copySendersByLibraryIDForConversation:(long long)arg1 mailbox:(id)arg2 limit:(int)arg3 ;
-(long long)oldestKnownConversationInMailbox:(id)arg1 ;
-(id)serverSearchResultMessagesForMailbox:(id)arg1 ;
-(id)dateOfOldestNonSearchResultMessageInMailbox:(id)arg1 ;
-(id)filterContiguousMessages:(id)arg1 forCriterion:(id)arg2 options:(unsigned)arg3 ;
-(id)messageWithMessageID:(id)arg1 options:(unsigned)arg2 inMailbox:(id)arg3 ;
-(id)headerDataForMessage:(id)arg1 ;
-(id)dataForMimePart:(id)arg1 isComplete:(BOOL*)arg2 ;
-(id)dataConsumerForMessage:(id)arg1 part:(id)arg2 incomplete:(BOOL)arg3 ;
-(id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 ;
-(id)bodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 isComplete:(BOOL*)arg3 ;
-(id)messagesForMailbox:(id)arg1 olderThanNumberOfDays:(int)arg2 ;
-(void)setFlagsFromDictionary:(id)arg1 forMessagesInMailboxURLString:(id)arg2 ;
-(id)addMessages:(id)arg1 withMailbox:(id)arg2 fetchBodies:(BOOL)arg3 newMessagesByOldMessage:(id)arg4 remoteIDs:(id)arg5 setFlags:(unsigned long long)arg6 clearFlags:(unsigned long long)arg7 messageFlagsForMessages:(id)arg8 copyFiles:(BOOL)arg9 addPOPUIDs:(BOOL)arg10 dataSectionsByMessage:(id)arg11 ;
-(void)compactMailbox:(id)arg1 ;
-(BOOL)hasCompleteDataForMimePart:(id)arg1 ;
-(sqlite3_stmtRef)preparedStatement:(sqlite3Ref)arg1 pattern:(id)arg2 ;
-(void)performReadTransaction:(/*^block*/ id)arg1 ;
-(void)performWriteTransaction:(/*^block*/ id)arg1 ;
-(void)compactMessages:(id)arg1 permanently:(BOOL)arg2 ;
-(void)setFlagsForMessages:(id)arg1 mask:(unsigned long long)arg2 ;
-(void)updateRecipientsForMessage:(id)arg1 fromHeaders:(id)arg2 ;
-(void)updateThreadingInfoForMessage:(id)arg1 fromHeaders:(id)arg2 ;
-(id)messagesNeedingSyncConfirmationForMailbox:(id)arg1 ;
-(id)messagesWithoutSummariesForMailbox:(id)arg1 ;
-(id)messagesWithSummariesForMailbox:(id)arg1 fromRowID:(unsigned)arg2 limit:(unsigned)arg3 ;
-(id)orderedBatchOfMessagesEndingAtRowId:(unsigned)arg1 limit:(unsigned)arg2 success:(BOOL*)arg3 ;
-(unsigned)deletedCountForMailbox:(id)arg1 ;
-(void)setServerUnreadOnlyOnServerCount:(unsigned)arg1 forMailbox:(id)arg2 ;
-(id)oldestMessageInMailbox:(id)arg1 ;
-(id)messageWithRemoteID:(id)arg1 inRemoteMailbox:(id)arg2 ;
-(unsigned)maximumRemoteIDForMailbox:(id)arg1 ;
-(unsigned)minimumRemoteIDForMailbox:(id)arg1 ;
-(id)sequenceIdentifierForMailbox:(id)arg1 ;
-(void)setSequenceIdentifier:(id)arg1 forMailbox:(id)arg2 ;
-(id)sequenceIdentifierForMessagesWithRemoteIDs:(id)arg1 inMailbox:(id)arg2 ;
-(void)setSequenceIdentifier:(id)arg1 forMessageWithLibraryID:(unsigned)arg2 ;
-(void)setSequenceIdentifier:(id)arg1 forMessagesWithRemoteIDs:(id)arg2 inMailbox:(id)arg3 ;
-(id)getDetailsForMessagesWithRemoteIDInRange:(NSRange)arg1 fromMailbox:(id)arg2 ;
-(id)getDetailsForAllMessagesFromMailbox:(id)arg1 ;
-(id)getDetailsForMessages:(unsigned)arg1 absoluteBottom:(unsigned)arg2 topOfDesiredRange:(unsigned)arg3 range:(NSRange*)arg4 fromMailbox:(id)arg5 ;
-(id)messagesWithMessageIDHeader:(id)arg1 ;
-(void)removeAllMessagesFromMailbox:(id)arg1 removeMailbox:(BOOL)arg2 andNotify:(BOOL)arg3 ;
-(id)messageWithMessageID:(id)arg1 inMailbox:(id)arg2 ;
-(id)dataConsumerForMessage:(id)arg1 isPartial:(BOOL)arg2 ;
-(id)dataConsumerForMessage:(id)arg1 ;
-(id)metadataForMessage:(id)arg1 ;
-(id)bodyDataForMessage:(id)arg1 ;
-(void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned)arg3 range:(NSRange)arg4 ;
-(void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned)arg3 ;
-(id)messagesMatchingCriterion:(id)arg1 options:(unsigned)arg2 success:(BOOL*)arg3 ;
-(id)messagesMatchingCriterion:(id)arg1 options:(unsigned)arg2 range:(NSRange)arg3 success:(BOOL*)arg4 ;
-(void)closeDatabaseConnections;
-(void)deletePOPUID:(id)arg1 inMailbox:(id)arg2 ;
-(id)UIDsToDeleteInMailbox:(id)arg1 ;
-(id)deletedUIDsInMailbox:(id)arg1 ;
-(id)allUIDsInMailbox:(id)arg1 ;
-(id)hiddenPOPUIDsInMailbox:(id)arg1 ;
-(void)appendOfflineCacheOperation:(id)arg1 forAccount:(int)arg2 lastTemporaryID:(unsigned)arg3 ;
-(void)markOfflineCacheOperationAsComplete:(id)arg1 ;
-(id)offlineCacheOperationsForAccount:(int)arg1 lastTemporaryID:(unsigned*)arg2 ;
-(void)appendOfflineCacheReplayData:(id)arg1 forAccountID:(int)arg2 ;
-(void)consumeOfflineCacheReplayDataForAccount:(int)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(void)deleteOfflineCacheDataForAccount:(int)arg1 ;
-(void)updateFlagsForMessagesInPlace:(id)arg1 success:(BOOL*)arg2 ;
-(id)remoteStoreForMessage:(id)arg1 ;
-(id)storedIntegerPropertyWithName:(id)arg1 ;
-(void)setStoredIntegerPropertyWithName:(id)arg1 value:(id)arg2 ;
-(void)_removeCachedLibraryMessageWithLibraryID:(unsigned)arg1 ;
-(void)_setProtectedDataAvailabilityState:(int)arg1 ;
-(void)_reconcileAfterKeybagUnlock;
-(void)invalidateAndWait;
-(sqlite3Ref)getWriterDB;
-(void)unlockDB:(sqlite3Ref)arg1 ;
-(int)beginTransaction:(sqlite3Ref)arg1 withType:(int)arg2 ;
-(BOOL)isProtectedDataAvailable:(sqlite3Ref)arg1 ;
-(void)_addMessageToThreadAtUnlock:(unsigned)arg1 ;
-(id)addThreadingInfoBySubjectForMessageID:(unsigned)arg1 nonPrefixedSubject:(id)arg2 messageIDsBySubject:(id)arg3 usingDatabase:(sqlite3Ref)arg4 toReferences:(id)arg5 withinMailbox:(int)arg6 ;
-(id)conversationIDsOfMessagesInSameThreadAsMessageWithLibraryID:(unsigned)arg1 messageIDHash:(long long)arg2 ;
-(void)notifyConversation:(long long)arg1 hasMergedIntoConversation:(long long)arg2 ;
-(int)handleSqliteError:(sqlite3Ref)arg1 format:(id)arg2 ;
-(id)referencesFromHeaders:(id)arg1 ;
-(long long)addReferencesForMessage:(id)arg1 libraryID:(unsigned)arg2 messageIDHash:(long long)arg3 withSubject:(id)arg4 withReferences:(id)arg5 usingDatabase:(sqlite3Ref)arg6 otherSubjectIDMappings:(id)arg7 usingMailbox:(int)arg8 notify:(BOOL)arg9 ;
-(BOOL)_writeEmlxFile:(id)arg1 withBodyData:(id)arg2 protectionClass:(int)arg3 ;
-(id)_libraryMessageWithLibraryID:(unsigned)arg1 wasCached:(BOOL*)arg2 ;
-(int)rollbackTransaction:(sqlite3Ref)arg1 ;
-(int)commitTransaction:(sqlite3Ref)arg1 ;
-(void)iterateStatement:(sqlite3_stmtRef)arg1 db:(sqlite3Ref)arg2 withProgressMonitor:(id)arg3 andRowHandler:(/*function pointer*/ void*)arg4 context:(void*)arg5 ;
-(void)sendMessagesForStatement:(sqlite3_stmtRef)arg1 db:(sqlite3Ref)arg2 to:(id)arg3 options:(unsigned)arg4 timestamp:(unsigned long long)arg5 ;
-(void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned)arg3 baseTable:(unsigned)arg4 ;
-(sqlite3Ref)getReaderDB;
-(id)queryForCriterion:(id)arg1 db:(sqlite3Ref)arg2 options:(unsigned)arg3 ;
-(id)queryForCriterion:(id)arg1 db:(sqlite3Ref)arg2 options:(unsigned)arg3 baseTable:(unsigned)arg4 ;
-(unsigned)integerForQuery:(id)arg1 withTextArgument:(id)arg2 ;
-(unsigned)flaggedCountForMailbox:(id)arg1 ;
-(unsigned)attachmentCountForMailbox:(id)arg1 ;
-(unsigned)includesMeCountForMailbox:(id)arg1 ;
-(unsigned)countOfRelatedMessagesMatchingCriterion:(id)arg1 forConversationsContainingMessagesMatchingCriterion:(id)arg2 forMailbox:(id)arg3 ;
-(id)_messageForStatement:(sqlite3_stmtRef)arg1 options:(unsigned)arg2 timestamp:(unsigned long long)arg3 isProtectedDataAvailable:(BOOL)arg4 ;
-(BOOL)_canSelectMessagesWithOptions:(unsigned)arg1 db:(sqlite3Ref)arg2 ;
-(CFDictionaryRef)_copyReferenceHashesWithoutMessagesForMessageWithConversation:(id)arg1 ;
-(id)_getReferencesForHashesWithOwners:(CFDictionaryRef)arg1 ;
-(id)stringForQuery:(id)arg1 monitor:(id)arg2 ;
-(id)pathForMailboxURL:(id)arg1 ;
-(id)mailboxURLForMessage:(id)arg1 ;
-(void)_notifyDidCompact:(BOOL)arg1 messages:(id)arg2 mailboxes:(id)arg3 ;
-(BOOL)cleanupProtectedTables:(sqlite3Ref)arg1 checkForInconsistencies:(BOOL)arg2 ;
-(id)dataPathForMessage:(id)arg1 type:(int)arg2 ;
-(BOOL)_setMessageData:(id)arg1 libraryID:(unsigned)arg2 part:(id)arg3 partial:(BOOL)arg4 complete:(BOOL)arg5 ;
-(void)_setMessageDataString:(id)arg1 forKey:(id)arg2 forMessage:(id)arg3 ;
-(void)_assignTransactionIdentifier:(unsigned)arg1 forLibraryIDs:(id)arg2 ;
-(id)loadData:(id)arg1 forMessage:(id)arg2 usingBlock:(/*^block*/ id)arg3 ;
-(id)bodyDataAtPath:(id)arg1 headerData:(id*)arg2 ;
-(id)headerDataAtPath:(id)arg1 ;
-(id)equalToMailboxIDsFromCriterion:(id)arg1 ;
-(id)_activeAccountsClause;
-(id)queryForCriterion:(id)arg1 db:(sqlite3Ref)arg2 options:(unsigned)arg3 baseTable:(unsigned)arg4 isSubquery:(BOOL)arg5 range:(NSRange)arg6 ;
-(id)queryForCriterion:(id)arg1 db:(sqlite3Ref)arg2 options:(unsigned)arg3 baseTable:(unsigned)arg4 isSubquery:(BOOL)arg5 ;
-(void)sendMessagesMatchingQuery:(const char*)arg1 db:(sqlite3Ref)arg2 to:(id)arg3 options:(unsigned)arg4 ;
-(void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned)arg3 baseTable:(unsigned)arg4 range:(NSRange)arg5 success:(BOOL*)arg6 ;
-(id)_indexSetOfMessagesDeleted;
-(void)_handleCorruptDatabase;
-(id)_activeConnectionWithDB:(sqlite3Ref)arg1 ;
-(void)_handleSQLiteErrorCode:(int)arg1 db:(sqlite3Ref)arg2 ;
-(void)_reconcileJournal:(sqlite3Ref)arg1 ;
-(BOOL)isKeyBagUnlocked;
-(void)_performTransaction:(/*^block*/ id)arg1 forWriting:(BOOL)arg2 ;
-(id)_connectionForWriting:(BOOL)arg1 ;
-(id)_activeConnectionWrapper;
-(id)_setActiveConnection:(id)arg1 forWriting:(BOOL)arg2 ;
-(id)_activeConnection;
-(void)_handleFullDatabase;
-(void)_handleProtectedDataIOError;
-(void)_handleIOError;
-(void)_handleBusyError;
-(void)renameOrRemoveDatabase;
-(id)itemsRequiringIndexingForContentIndex:(id)arg1 limit:(unsigned)arg2 ;
-(void)contentIndex:(id)arg1 assignTransactionIdentifier:(unsigned)arg2 forDocumentIdentifiers:(id)arg3 ;
-(void)contentIndex:(id)arg1 invalidateItemsGreaterThanTransactionId:(unsigned)arg2 ;
-(id)newConnectionForConnectionPool:(id)arg1 ;
-(void)contentProtectionStateChanged:(int)arg1 previousState:(int)arg2 ;
-(int)mailboxLocationOfMessageID:(unsigned)arg1 usingDatabase:(sqlite3Ref)arg2 ;
-(int)countOfMessagesMissingFromThreadContainingMessage:(id)arg1 ;
-(int)loadMoreMessagesForThreadContainingMessage:(id)arg1 hasNoMoreMessages:(BOOL*)arg2 ;
-(id)stringForQuery:(id)arg1 ;
-(void)vacuumDataForObsoleteAccountURLString:(id)arg1 ;
-(id)attachmentsDirectoryForLibraryID:(unsigned)arg1 mailboxID:(unsigned)arg2 ;
-(id)queryForCriterion:(id)arg1 db:(sqlite3Ref)arg2 options:(unsigned)arg3 range:(NSRange)arg4 ;
-(void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned)arg3 baseTable:(unsigned)arg4 range:(NSRange)arg5 ;
-(void)iterateMessagesMatchingCriterion:(id)arg1 withResultHandler:(id)arg2 options:(unsigned)arg3 withMonitor:(id)arg4 ;
-(void)rebuildActiveAccountsClauseWithAccounts:(id)arg1 ;
-(int)protectedDataAvailability;
-(int)attachProtectedDatabase:(sqlite3Ref)arg1 ;
-(BOOL)migrate;
-(void)setMailboxPathProvider:(id)arg1 ;
-(id)allMailboxURLStrings;
-(id)_libraryMessageCache;
@end
