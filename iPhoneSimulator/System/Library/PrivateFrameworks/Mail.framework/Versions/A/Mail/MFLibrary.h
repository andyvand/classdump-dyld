/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:46 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/Mail-Structs.h>
#import <Mail/MFLibraryInterface.h>

@class NSString;

@interface MFLibrary : NSObject <MFLibraryInterface>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)fileExists;
+(long long)libraryStatusAsReader;
+(char)setupLibrary;
+(void)setInitialized;
+(char)shouldCancel;
+(void)mailboxesDidChange;
+(id)messagesMatchingCriterion:(id)arg1 options:(unsigned)arg2 searchType:(long long)arg3 ;
+(id)databaseUUIDString;
+(long long)mailboxIDForMailbox:(id)arg1 ;
+(id)sqlListWithArray:(id)arg1 ;
+(id)EWSFolderIdsByURLForMailboxes:(id)arg1 ;
+(id)messageWithRemoteID:(id)arg1 inRemoteMailbox:(id)arg2 options:(unsigned)arg3 ;
+(void)updateEWSOfflineIdsToRealIds:(id)arg1 ;
+(void)setEWSFolderId:(id)arg1 forMailbox:(id)arg2 ;
+(id)EWSFolderIdForMailbox:(id)arg1 ;
+(void)setData:(id)arg1 forMessage:(id)arg2 isPartial:(char)arg3 hasCompleteText:(char)arg4 ;
+(id)existingDataPathForMessage:(id)arg1 ;
+(char)addCalendarEvent:(id)arg1 toMessage:(id)arg2 ;
+(char)updateCalendarEvent:(id)arg1 forMessage:(id)arg2 ;
+(id)messagesWithRemoteIDs:(id)arg1 inRemoteMailbox:(id)arg2 options:(unsigned)arg3 ;
+(void)updateSize:(id)arg1 forMessage:(id)arg2 ;
+(void)gatherCountsForMailbox:(id)arg1 totalCount:(unsigned long long*)arg2 unreadCount:(unsigned long long*)arg3 deletedCount:(unsigned long long*)arg4 totalSize:(unsigned long long*)arg5 ;
+(id)duplicateMessages:(id)arg1 newRemoteIDs:(id)arg2 newDocumentIDs:(id)arg3 forMailbox:(id)arg4 setFlags:(long long)arg5 clearFlags:(long long)arg6 messageFlagsForMessages:(id)arg7 createNewCacheFiles:(char)arg8 error:(id*)arg9 ;
+(id)duplicateMessages:(id)arg1 newRemoteIDs:(id)arg2 newDocumentIDs:(id)arg3 forMailbox:(id)arg4 setFlags:(long long)arg5 clearFlags:(long long)arg6 createNewCacheFiles:(char)arg7 error:(id*)arg8 ;
+(void)setData:(id)arg1 forMessage:(id)arg2 isPartial:(char)arg3 ;
+(id)addMessages:(id)arg1 withMailbox:(id)arg2 fetchBodies:(char)arg3 oldMessagesByNewMessage:(id)arg4 error:(id*)arg5 ;
+(id)getDetailsForMessagesWithRemoteIDStrings:(id)arg1 fromMailbox:(id)arg2 ;
+(id)EWSSyncStateForMailbox:(id)arg1 ;
+(void)queueStoreFinishedFirstTimeSync:(id)arg1 ;
+(void)setEWSSyncState:(id)arg1 forMailbox:(id)arg2 ;
+(id)incompleteMessagesForMailbox:(id)arg1 directoryContents:(id)arg2 ;
+(id)messagesWithMessageID:(id)arg1 inMailbox:(id)arg2 ;
+(id)messagesForGmailLabel:(id)arg1 inAllMailMailbox:(id)arg2 olderThanNumberOfDays:(long long)arg3 ;
+(id)messagesForMailbox:(id)arg1 where:(id)arg2 sortedBy:(id)arg3 ascending:(char)arg4 options:(unsigned)arg5 ;
+(void)setBackgroundColorForMessages:(id)arg1 textColorForMessages:(id)arg2 ;
+(id)queryForCriterion:(id)arg1 options:(unsigned)arg2 baseTable:(unsigned long long)arg3 isSubquery:(char)arg4 fixUpCriterion:(char)arg5 ;
+(id)messagesMatchingQuery:(const char*)arg1 options:(unsigned)arg2 ;
+(void)compactMailbox:(id)arg1 ;
+(void)setSourceMailbox:(id)arg1 forMailboxes:(id)arg2 ;
+(void)removeSourceMailbox:(id)arg1 ;
+(void)removeSourceMailboxFromMailboxes:(id)arg1 ;
+(void)clearLabelsForMailboxes:(id)arg1 ;
+(char)libraryIsImporting;
+(void)deleteMailboxes:(id)arg1 ;
+(void)commitFlagsForMessage:(id)arg1 oldFlags:(unsigned)arg2 ;
+(void)scheduleCommit;
+(id)backingStoreJournalDirectory;
+(id)backingStoreJournalPath;
+(char)removeBackingStoreUpdateJournal;
+(void)scheduleMessageFileUpdate;
+(char)updateBackingStoreUpdateJournal;
+(void)_mergeRestoreMessageLibraryIDsToUpdate:(id)arg1 ;
+(void)queueMessagesChangedNotificationForMessages:(id)arg1 flags:(id)arg2 oldFlagsByMessage:(id)arg3 ;
+(void)_addMessagesNeedingEmlxUpdate:(id)arg1 ;
+(void)_commitMessagesInBackground;
+(void)_setCommitTimer:(id)arg1 ;
+(void)_updateMessageFilesInBackground;
+(void)updateFileForMessage:(id)arg1 ;
+(void)unScheduleMessageFileUpdate;
+(void)commitSynchronouslyPostingMessages:(id)arg1 postFlags:(id)arg2 postingOldFlagsByMessage:(id)arg3 ;
+(void)executeWriteBlockInDatabase:(/*^block*/id)arg1 ;
+(void)unScheduleCommit;
+(void)commitSynchronously;
+(void)synchronouslyUpdateMessageFiles;
+(void)executeBlock:(/*^block*/id)arg1 isWriter:(char)arg2 useTransaction:(char)arg3 isPrivileged:(char)arg4 ;
+(void)_commitFlagsForMessage:(id)arg1 oldFlags:(id)arg2 ;
+(char)isInitialized;
+(void)loadMessageCountsForMailboxes;
+(id)_mailboxIDsStringForMailboxes:(id)arg1 ;
+(void)executeReadBlockInDatabase:(/*^block*/id)arg1 ;
+(void)recalculateMessageCountsForMailboxIDs:(id)arg1 ;
+(void)queueMessageGmailLabelsChangedNotificationForMessages:(id)arg1 ;
+(void)_setDatabaseUUIDString:(id)arg1 ;
+(void)loadSearchSettings;
+(void)_mailboxWillBeInvalidated:(id)arg1 ;
+(void)_mailboxWasRenamed:(id)arg1 ;
+(void)_mailAccountsDidChange:(id)arg1 ;
+(char)initializeDatabase:(sqlite3Ref)arg1 ;
+(void)_invalidateDirectoryForMailboxes:(id)arg1 ;
+(void)clearActiveMailboxesCache;
+(id)_spotlightSendQueue;
+(void)_sendAttributesToSpotlight:(id)arg1 attributes:(id)arg2 ;
+(void)_removeExtendedAttributePlistFromEMLX:(id)arg1 ;
+(void)_removeAlternatePathForEmlxPath:(id)arg1 ;
+(id)dataDirectoryForMailbox:(id)arg1 ;
+(id)messageWithLibraryID:(long long)arg1 ;
+(void)_updateDateLastViewed:(int)arg1 forLibraryID:(long long)arg2 ;
+(id)attachmentsDirectoryForMessage:(id)arg1 ;
+(char)isRemoteStoreAccount:(id)arg1 ;
+(char)isLibraryMessage:(id)arg1 ;
+(char)isLocalAccount:(id)arg1 ;
+(void)updateNormalizedSubjectsIfNeededWithHandle:(id)arg1 ;
+(void)queueConversationsChangedNotification:(id)arg1 ;
+(char)canUseEmlxFileWhenCopyingMessage:(id)arg1 fromAccount:(id)arg2 toAccount:(id)arg3 ;
+(char)_isFullEmlxLocallyAvailable:(id)arg1 ;
+(id)dataPathForMessage:(id)arg1 ;
+(void)incrementRunningIndexOfCurrentMessage;
+(void)cleanupTablesReferencingMessageID:(long long)arg1 inDatabase:(id)arg2 ;
+(id)intermediateDirectoryForLibraryID:(long long)arg1 forAttachments:(char)arg2 ;
+(id)plistDataForMessage:(id)arg1 subject:(id)arg2 sender:(id)arg3 to:(id)arg4 dateSent:(id)arg5 dateReceived:(id)arg6 dateLastViewed:(id)arg7 remoteID:(id)arg8 originalMailboxURLString:(id)arg9 gmailLabels:(id)arg10 flags:(long long)arg11 mergeWithDictionary:(id)arg12 ;
+(id)_filenameForLibraryID:(long long)arg1 type:(long long)arg2 ;
+(char)writeEmlxFile:(id)arg1 forMessage:(id)arg2 withBodyData:(id)arg3 plistData:(id)arg4 error:(id*)arg5 ;
+(void)setStoreForMessage:(id)arg1 fromMailbox:(id)arg2 knownStores:(id)arg3 ;
+(void)_setRecipientTypeForMessages:(id)arg1 ;
+(void)queueMessagesUpdatedNotification:(id)arg1 ;
+(void)queueMessagesAddedNotification:(id)arg1 ;
+(id)insertOrUpdateMessages:(id)arg1 withMailbox:(id)arg2 fetchBodies:(char)arg3 isInitialImport:(char)arg4 oldMessagesByNewMessage:(id)arg5 remoteIDs:(id)arg6 newDocumentIDs:(id)arg7 setFlags:(long long)arg8 clearFlags:(long long)arg9 messageFlagsForMessages:(id)arg10 copyFiles:(char)arg11 progressDelegate:(id)arg12 updateRowIDs:(id)arg13 missedMessages:(id*)arg14 error:(id*)arg15 ;
+(id)addMessages:(id)arg1 withMailbox:(id)arg2 fetchBodies:(char)arg3 isInitialImport:(char)arg4 oldMessagesByNewMessage:(id)arg5 remoteIDs:(id)arg6 setFlags:(long long)arg7 clearFlags:(long long)arg8 messageFlagsForMessages:(id)arg9 copyFiles:(char)arg10 missedMessages:(id*)arg11 error:(id*)arg12 ;
+(id)addMessages:(id)arg1 withMailbox:(id)arg2 fetchBodies:(char)arg3 isInitialImport:(char)arg4 oldMessagesByNewMessage:(id)arg5 error:(id*)arg6 ;
+(void)setAttachmentNames:(id)arg1 forMessage:(id)arg2 ;
+(void)_getActiveAccountURLs:(id)arg1 andActiveMailboxURLs:(id)arg2 ;
+(id)copyMailboxURLToRowIDMap;
+(void)_rebuildActiveMailboxesCache;
+(id)_copyActiveMailboxesCache;
+(id)myAddressIDsString;
+(void)_rebuildActiveMailboxesCacheIfNecessary;
+(void)sendMessagesMatchingQuery:(const char*)arg1 to:(id)arg2 options:(unsigned)arg3 ;
+(char*)_queryForMailbox:(id)arg1 where:(id)arg2 sortedBy:(id)arg3 ascending:(char)arg4 options:(unsigned)arg5 ;
+(id)_activeMailboxesClauseRebuildIfNecessary;
+(void)setStoreForMessage:(id)arg1 knownStores:(id)arg2 ;
+(id)getDetailsForMessagesWithQuery:(char*)arg1 contiguous:(char)arg2 firstRemoteID:(unsigned long long)arg3 lastRemoteID:(unsigned long long)arg4 fromMailbox:(id)arg5 ;
+(void)setStoresForMessages:(id)arg1 ;
+(id)messageWithLibraryID:(long long)arg1 options:(unsigned)arg2 ;
+(char)boolForQuery:(id)arg1 ;
+(id)_mailboxForMailboxID:(long long)arg1 ;
+(id)urlForMailboxID:(long long)arg1 ;
+(id)mailboxForMessage:(id)arg1 ;
+(char)_loadSecondaryMetadataForMessage:(id)arg1 fromDB:(sqlite3Ref)arg2 ;
+(id)_dataPathForMessage:(id)arg1 type:(long long)arg2 ;
+(char)hasCacheFileForMessage:(id)arg1 directoryContents:(id)arg2 ;
+(id)_emlxPListInFile:(id)arg1 plistOffset:(unsigned long long*)arg2 ;
+(void)_sendAttributesToSpotlightForMessage:(id)arg1 path:(id)arg2 replaceExisting:(char)arg3 ;
+(void)removeMessages:(id)arg1 cleanUpAfter:(char)arg2 ;
+(void)queueMessagesCompactedNotification:(id)arg1 ;
+(id)messagesWhere:(id)arg1 sortedBy:(id)arg2 options:(unsigned)arg3 ;
+(void)deleteMailboxes:(id)arg1 forRebuild:(char)arg2 ;
+(char)_EWSFolderExistsForMailbox:(id)arg1 errorString:(id)arg2 ;
+(void)_addEWSProperty:(char*)arg1 value:(id)arg2 forMailbox:(id)arg3 errorString:(id)arg4 ;
+(id)_EWSProperty:(char*)arg1 forMailbox:(id)arg2 errorString:(id)arg3 ;
+(id)v2_intermediateDirectoryForLibraryID:(long long)arg1 forAttachments:(char)arg2 ;
+(id)_dataPathForLibraryID:(long long)arg1 pathToMailbox:(id)arg2 type:(long long)arg3 ;
+(id)filenameForLibraryID:(long long)arg1 part:(id)arg2 ;
+(id)_dataPathForMessageWithLibraryID:(long long)arg1 mailboxID:(long long)arg2 withFilename:(id)arg3 ;
+(void)commitMessage:(id)arg1 immediately:(char)arg2 ;
+(id)bodyDataAtPath:(id)arg1 headerData:(id*)arg2 ;
+(id)bodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 ;
+(id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 ;
+(id)dataPathForMessage:(id)arg1 part:(id)arg2 ;
+(char)_hasCacheFileForMessageWithLibraryID:(long long)arg1 mailboxID:(long long)arg2 directoryContents:(id)arg3 allowsPartials:(char)arg4 ;
+(id)_messageDataAtPath:(id)arg1 ;
+(id)remoteStoreForMessage:(id)arg1 ;
+(id)calendarEventForMessageID:(long long)arg1 ;
+(id)spotlightCallbackDispatchQueue;
+(id)queryForCriterion:(id)arg1 options:(unsigned)arg2 ;
+(void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned)arg3 searchType:(long long)arg4 queryLabel:(id)arg5 async:(char)arg6 ;
+(id)_queryForCountCriterion:(id)arg1 ;
+(unsigned long long)unsignedCountForQuery:(id)arg1 monitor:(id)arg2 ;
+(unsigned long long)countForCriterion:(id)arg1 monitor:(id)arg2 ;
+(MDQueryRef)createAllMailboxesSpotlightQueryWithQueryString:(id)arg1 attributes:(CFArrayRef)arg2 queryLabel:(id)arg3 forUnreadCount:(char)arg4 withMailboxExclusions:(char)arg5 includeWhereFromsCriterion:(char)arg6 ;
+(id)criterionExpressionStringForStartLibraryID:(long long)arg1 count:(unsigned long long)arg2 ;
+(id)addMessages:(id)arg1 withMailbox:(id)arg2 error:(id*)arg3 ;
+(void)setCurrentMailbox:(id)arg1 ;
+(void)flushCachedDatabases;
+(void)setLibraryIsImporting:(char)arg1 ;
+(void)setTotalNumberOfMessages:(unsigned long long)arg1 ;
+(char)importMailbox:(id)arg1 ;
+(void)_sendAttributesToSpotlight:(id)arg1 bodyData:(id)arg2 plistData:(id)arg3 ;
+(void)_upgradeMessageDirectoriesSynchronously;
+(id)_checkOutDBHandleForWriting:(char)arg1 isPrivileged:(char)arg2 ;
+(void)_checkInDBHandle:(id)arg1 forWriting:(char)arg2 ;
+(long long)_libraryStatusCanWrite:(char)arg1 ;
+(id)_mailboxForMailboxID:(long long)arg1 forceCreation:(char)arg2 ;
+(long long)mailboxIDForMailbox:(id)arg1 loadIfNotPresent:(char)arg2 ;
+(void)loadDatabaseUUIDStringIfNeeded:(sqlite3Ref)arg1 ;
+(void)restoreBackingStoreUpdateJournalIfNeeded;
+(void)tagDatabaseVersionIfNeeded:(sqlite3Ref)arg1 ;
+(void)didCommit:(sqlite3Ref)arg1 ;
+(id)newUnsignedForQuery:(id)arg1 db:(sqlite3Ref)arg2 ;
+(void)_queueMessagesNotification:(id)arg1 withUserInfo:(id)arg2 ;
+(void)flagsChangedForMessages:(id)arg1 ;
+(void)updateJunkMessagesForIndexing;
+(void)waitForCommitsToFinish;
+(void)setSnippetsForMessages:(id)arg1 ;
+(void)updateGmailLabelsFromDictionary:(id)arg1 forMessages:(id)arg2 ;
+(void)setFlagsAndColorForMessages:(id)arg1 ;
+(id)writeQueue;
+(void)touchDirectoryForMailbox:(id)arg1 ;
+(void)deleteDataDirectoriesForMailbox:(id)arg1 ;
+(void)backfillDateLastViewedAttribute;
+(void)hideMailboxesNotInLibraryFromSpotlight;
+(void)addGmailLabelsToEmlx;
+(void)fixAttachmentCache;
+(void)updateDatabaseValuesIfNeeded;
+(void)resetConversationIDForMessages:(id)arg1 ;
+(id)addMessages:(id)arg1 withMailbox:(id)arg2 progressDelegate:(id)arg3 error:(id*)arg4 ;
+(void)invalidateMyEmailAddresses;
+(void)disableActiveMailboxFiltering;
+(char)_isActiveMailboxID:(long long)arg1 ;
+(id)messagesForMailbox:(id)arg1 olderThanNumberOfDays:(long long)arg2 ;
+(id)unreadMessagesForMailbox:(id)arg1 ;
+(unsigned long long)totalCountForMailbox:(id)arg1 ;
+(unsigned long long)unreadCountForMessageType:(char)arg1 ;
+(void)setMessageCountsForMailboxes;
+(unsigned)maximumRemoteIDForMailbox:(id)arg1 ;
+(id)getDetailsForMessagesWithRemoteIDs:(id)arg1 fromMailbox:(id)arg2 ;
+(id)messageWithMessageID:(id)arg1 ;
+(id)messagesWithMessageIDHeader:(id)arg1 ;
+(id)firstReplyToMessage:(id)arg1 ;
+(char)messageHasRelatedNonJunkMessages:(id)arg1 ;
+(id)referencesForLibraryID:(long long)arg1 ;
+(id)accountForMessage:(id)arg1 ;
+(id)mailboxNameForMessage:(id)arg1 ;
+(char)loadSecondaryMetadataForMessage:(id)arg1 ;
+(id)snippetsForMessages:(id)arg1 ;
+(void)reloadMessage:(id)arg1 ;
+(char)renameMailboxes:(id)arg1 to:(id)arg2 ;
+(id)lastMessageWithMessageID:(id)arg1 inMailbox:(id)arg2 ;
+(id)draftWithDocumentID:(id)arg1 mailbox:(id)arg2 ;
+(unsigned long long)allegedHighestModificationSequenceforIMAPMailboxURL:(id)arg1 ;
+(void)setAllegedHighestModificationSequence:(unsigned long long)arg1 forIMAPMailboxURL:(id)arg2 ;
+(unsigned long long)computedHighestModificationSequenceforIMAPMailboxURL:(id)arg1 ;
+(void)setComputedHighestModificationSequence:(unsigned long long)arg1 forIMAPMailboxURL:(id)arg2 ;
+(id)dataPathForLibraryID:(long long)arg1 pathToMailbox:(id)arg2 fileExists:(char*)arg3 ;
+(id)messageWithDataPath:(id)arg1 ;
+(void)appendData:(id)arg1 forMessage:(id)arg2 part:(id)arg3 ;
+(id)emlxPListAtURL:(id)arg1 ;
+(id)headerDataForMessage:(id)arg1 ;
+(id)bodyDataForMessage:(id)arg1 ;
+(id)fullBodyDataForMessage:(id)arg1 ;
+(id)dataForMimePart:(id)arg1 ;
+(char)isMessageContentLocallyAvailable:(id)arg1 ;
+(id)fullMessageDataForMessage:(id)arg1 ;
+(char)hasCacheFileForMessage:(id)arg1 part:(id)arg2 directoryContents:(id)arg3 ;
+(void)markMessageAsViewed:(id)arg1 viewedDate:(id)arg2 ;
+(id)countedSpotlightQueryStringWithQueryString:(id)arg1 ;
+(id)spotlightQueryStringWithQueryString:(id)arg1 ;
+(unsigned long long)countForCriterion:(id)arg1 ;
+(char)boolForCriterion:(id)arg1 ;
+(id)filterContiguousMessages:(id)arg1 forCriterion:(id)arg2 options:(unsigned)arg3 ;
+(char)rebuildMailbox:(id)arg1 ;
+(char)importMessagesFromEnabledAccounts;
+(void)upgradeMessageDirectoriesIfNeeded;
+(void)takeAccountsOnlineAllAccounts:(char)arg1 ;
+(char)isEmptyDB;
+(long long)libraryStatusAsWriter;
+(char)threadIsExecutingInDatabaseBlock;
+(id)currentMailbox;
+(unsigned long long)runningIndexOfCurrentMessage;
+(unsigned long long)totalNumberOfMessages;
+(void)cleanOldDatabases;
+(void)prepareToReImportMessages;
+(char)deleteEventForMessage:(id)arg1 ;
+(id)mailboxForMailboxID:(long long)arg1 forceCreation:(char)arg2 ;
+(long long)cachedMailboxIDForMailbox:(id)arg1 ;
+(int)lastWriteMinorVersion;
+(void)registerStoreForUpdates:(id)arg1 ;
+(unsigned long long)numberOfMessagesForAccount:(id)arg1 ;
+(long long)threadPriority;
+(void)initialize;
+(id)sharedInstance;
+(void)dispose;
+(void)removeMessages:(id)arg1 ;
+(void)setThreadPriority:(long long)arg1 ;
@end

