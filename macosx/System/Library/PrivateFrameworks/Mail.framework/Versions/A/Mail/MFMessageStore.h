/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/Mail-Structs.h>
#import <Mail/MCMessageDataSource.h>

@class NSCache, NSTimer, NSMutableDictionary, MFMailbox, NSMutableArray, MFMailAccount, NSMutableSet, MCActivityMonitor, NSOperationQueue, MCInvocationQueue, NSString;

@interface MFMessageStore : NSObject <MCMessageDataSource> {

	id _retainCountLock;
	char _haveOpenLockFile;
	char _isWritingChangesToDisk;
	char _isTryingToClose;
	id _cacheLock;
	NSCache* _headerDataCache;
	NSCache* _headerCache;
	NSCache* _bodyDataCache;
	NSCache* _bodyCache;
	int _storeState;
	NSTimer* _timer;
	NSMutableDictionary* _fetchLockMap;
	MFMailbox* _mailbox;
	NSMutableArray* _allMessages;
	MFMailAccount* _account;
	NSMutableSet* _uniqueStrings;
	char _isReadOnly;
	char _compactOnClose;
	char _hasUnsavedChangesToMessageData;
	char _forceInvalidation;
	MCActivityMonitor* _openMonitor;
	NSOperationQueue* _deleteQueue;
	MCInvocationQueue* _openAndCloseMailboxQueue;

}

@property (assign) char hasUnsavedChangesToMessageData;                                   //@synthesize hasUnsavedChangesToMessageData=_hasUnsavedChangesToMessageData - In the implementation block
@property (assign) char isFirstTimeSync; 
@property (assign) char isReadOnly;                                                       //@synthesize isReadOnly=_isReadOnly - In the implementation block
@property (retain) MCActivityMonitor * openMonitor;                                       //@synthesize openMonitor=_openMonitor - In the implementation block
@property (assign) char forceInvalidation;                                                //@synthesize forceInvalidation=_forceInvalidation - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * deleteQueue;                            //@synthesize deleteQueue=_deleteQueue - In the implementation block
@property (nonatomic,readonly) MCInvocationQueue * openAndCloseMailboxQueue;              //@synthesize openAndCloseMailboxQueue=_openAndCloseMailboxQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)copyMessages:(id)arg1 toMailbox:(id)arg2 shouldDelete:(char)arg3 ;
+(char)storeAtPathIsWritable:(id)arg1 ;
+(char)createEmptyStoreForPath:(id)arg1 ;
+(id)currentlyAvailableStoresForAccount:(id)arg1 ;
+(char)cheapStoreAtPathIsEmpty:(id)arg1 ;
+(id)currentlyAvailableStoreForMailbox:(id)arg1 ;
+(id)_storeCreationMarker;
+(id)_copyRawAvailableStoreForMailbox:(id)arg1 wantsCreate:(char)arg2 shouldCreate:(char*)arg3 ;
+(void)registerAvailableStore:(id)arg1 forMailbox:(id)arg2 ;
+(id)succesfulMessagesFromMessages:(id)arg1 unsuccessfulOnes:(id)arg2 ;
+(char)createEmptyStoreIfNeededForPath:(id)arg1 notIndexable:(char)arg2 ;
+(void)_autosaveMessageStore:(id)arg1 ;
+(void)removeStoreFromCache:(id)arg1 ;
+(unsigned long long)numberOfCurrentlyOpenStores;
+(id)descriptionOfOpenStores;
+(void)initialize;
-(char)isReadOnly;
-(char)isSmartMailbox;
-(id)objectSpecifierForMessage:(id)arg1 ;
-(id)async_setFlagWithKey:(id)arg1 state:(char)arg2 forMessages:(id)arg3 ;
-(id)async_setJunkMailLevel:(long long)arg1 forMessages:(id)arg2 trainJunkMailDatabase:(char)arg3 userRecorded:(char)arg4 ;
-(void)deleteMessages:(id)arg1 moveToTrash:(char)arg2 ;
-(void)undeleteMessages:(id)arg1 ;
-(id)async_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(void)setColor:(id)arg1 highlightTextOnly:(char)arg2 forMessages:(id)arg3 ;
-(id)initWithAccount:(id)arg1 ;
-(long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 ;
-(id)copyOfAllMessagesWithOptions:(unsigned)arg1 ;
-(id)initWithMailbox:(id)arg1 readOnly:(char)arg2 createEmptyStore:(char)arg3 ;
-(char)_acquireLockFile;
-(void)setIsReadOnly:(char)arg1 ;
-(void)resetAllMessages;
-(void)addMessagesToAllMessages:(id)arg1 ;
-(id)_fetchHeaderDataForMessage:(id)arg1 fetchIfNotAvailable:(char)arg2 allowPartial:(char)arg3 ;
-(id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 fetchIfNotAvailable:(char)arg3 allowPartial:(char)arg4 ;
-(char)canCompact;
-(id)copyOfAllMessages;
-(void)_flushAllMessageData;
-(void)setHasUnsavedChangesToMessageData:(char)arg1 ;
-(id)routeMessages:(id)arg1 fetchingBodies:(char)arg2 messagesNeedingBodies:(id)arg3 ;
-(void)doCompact;
-(void)writeUpdatedMessageDataToDisk;
-(id)_lockFilePath;
-(id)_fetchHeaderDataForMessage:(id)arg1 fetchIfNotAvailable:(char)arg2 ;
-(id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 fetchIfNotAvailable:(char)arg3 ;
-(id)_defaultRouterDestination;
-(void)fetchSynchronously;
-(char)isFirstTimeSync;
-(long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 ;
-(void)invalidateMessage:(id)arg1 ;
-(void)updateNumberOfAttachmentsForMessages:(id)arg1 ;
-(char)isOpened;
-(void)openSynchronouslyUpdatingMetadata:(char)arg1 ;
-(int)storeState;
-(void)openSynchronously;
-(id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 fetchIfNotAvailable:(char)arg3 ;
-(void)messagesWereAdded:(id)arg1 conversationsMembers:(id)arg2 duringOpen:(char)arg3 options:(id)arg4 ;
-(id)messageForMessageID:(id)arg1 ;
-(long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 ;
-(id)async_deleteMessages:(id)arg1 moveToTrash:(char)arg2 ;
-(id)async_setLocalFlagsForMessages:(id)arg1 ;
-(void)setIsFirstTimeSync:(char)arg1 ;
-(char)canRebuild;
-(char)allowsOverwrite;
-(char)allowsDeleteInPlace;
-(void)startSynchronization;
-(id)undeleteMessages:(id)arg1 movedToStore:(id)arg2 newMessageIDs:(id)arg3 ;
-(long long)undoAppendOfMessageIDs:(id)arg1 ;
-(void)sendResponseType:(char)arg1 forMeetingMessage:(id)arg2 ;
-(char)allowsAppend;
-(long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 newDocumentIDsByOld:(id)arg5 flagsToSet:(id)arg6 forMove:(char)arg7 error:(id*)arg8 ;
-(id)async_setGmailLabelsFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(void)deleteMessagesOlderThanNumberOfDays:(long long)arg1 compact:(char)arg2 ;
-(id)headerDataForMessage:(id)arg1 fetchIfNotAvailable:(char)arg2 ;
-(id)attachmentsDirectoryForMessage:(id)arg1 ;
-(void)invalidateMessages:(id)arg1 ;
-(id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 ;
-(id)initWithMailbox:(id)arg1 readOnly:(char)arg2 ;
-(id)snippetsForMessages:(id)arg1 ;
-(id)headerDataForMessage:(id)arg1 ;
-(id)bodyDataForMessage:(id)arg1 ;
-(id)fullBodyDataForMessage:(id)arg1 ;
-(id)dataForMimePart:(id)arg1 ;
-(void)openAsynchronously;
-(id)willDeallocPerformingInStoreCacheLock:(char*)arg1 ;
-(void)_invalidateInBackground;
-(char)setStoreState:(int)arg1 fromState:(int)arg2 ;
-(char)forceInvalidation;
-(void)cleanupSynchronously;
-(void)structureDidChange;
-(void)deleteLastMessageWithHeaders:(id)arg1 compactWhenDone:(char)arg2 ;
-(char)hasCachedDataForMimePart:(id)arg1 ;
-(id)_cachedBodyDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(id)_cachedHeaderDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(id)colorForMessage:(id)arg1 ;
-(void)_setBackgroundColorForMessages:(id)arg1 textColorForMessages:(id)arg2 ;
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
-(void)invalidateSyncEngine;
-(char)_shouldCallCompactWhenClosing;
-(void)fetchSynchronouslyForKnownChanges;
-(char)isSortedAscending;
-(unsigned long long)totalCount;
-(void)willOpen;
-(void)didOpenWithMessages:(id)arg1 ;
-(void)updateMessages:(id)arg1 updateColor:(char)arg2 updateNumberOfAttachments:(char)arg3 ;
-(void)cleanupAsynchronously;
-(void)_setFlagsAndColorForMessages:(id)arg1 ;
-(void)messagesWereAdded:(id)arg1 ;
-(void)messagesWereCompacted:(id)arg1 ;
-(void)messagesWereUpdated:(id)arg1 ;
-(void)cancelOpen;
-(id)messagesForDocumentID:(id)arg1 ;
-(void)_rebuildTableOfContentsSynchronously;
-(void)_invalidateObjectCachesForKey:(id)arg1 ;
-(id)_setOrGetValue:(id)arg1 forKey:(id)arg2 inCache:(id*)arg3 ;
-(char)_updateFlagForMessage:(id)arg1 key:(id)arg2 value:(char)arg3 ;
-(void)openAsynchronouslyWithOptions:(unsigned)arg1 ;
-(id)mutableCopyOfAllMessages;
-(id)recentMessageWithValue:(id)arg1 forHeader:(id)arg2 ;
-(void)updateMetadata;
-(void)_setNeedsAutosave;
-(void)_cancelAutosave;
-(void)rebuildTableOfContentsAsynchronously;
-(unsigned long long)_numberOfMessagesToCache;
-(void)invalidateSavingChanges:(char)arg1 ;
-(id)finishRoutingMessages:(id)arg1 routed:(id)arg2 ;
-(id)routeMessages:(id)arg1 isUserAction:(char)arg2 fetchingBodies:(char)arg3 messagesNeedingBodies:(id)arg4 ;
-(MCInvocationQueue *)openAndCloseMailboxQueue;
-(char)hasUnsavedChangesToMessageData;
-(void)queueSaveChangesInvocation;
-(char)_isReadyToBeInvalidated;
-(void)_messageStoreCommonInit;
-(void)setOpenMonitor:(MCActivityMonitor *)arg1 ;
-(void)_cleanupSynchronouslyIfCancelOpenPosted;
-(MCActivityMonitor *)openMonitor;
-(void)setForceInvalidation:(char)arg1 ;
-(NSOperationQueue *)deleteQueue;
-(void)finishCopyOfMessages:(id)arg1 fromStore:(id)arg2 originalsWereDeleted:(char)arg3 ;
-(long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 flagsToSet:(id)arg5 forMove:(char)arg6 error:(id*)arg7 ;
-(long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 flagsToSet:(id)arg5 forMove:(char)arg6 ;
-(long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 flagsToSet:(id)arg5 ;
-(id)bodyDataForMessage:(id)arg1 fetchIfNotAvailable:(char)arg2 ;
-(id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(id)_fetchBodyForMessage:(id)arg1 fetchIfNotAvailable:(char)arg2 updateFlags:(char)arg3 allowPartial:(char)arg4 ;
-(id)_setOrGetBody:(id)arg1 forMessage:(id)arg2 updateFlags:(char)arg3 ;
-(id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(char)_updateFlagColor:(char)arg1 forMessage:(id)arg2 ;
-(id)setPrimitiveFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(void)updateMessageColorsSynchronouslyForMessages:(id)arg1 postingNotification:(char)arg2 ;
-(void)_removeLockFile;
-(void)updateBodyFlagsForMessage:(id)arg1 body:(id)arg2 ;
-(void)updateMetadataAsynchronously;
-(void)createDummyMailboxIfNecessary;
-(id)allMailboxRepresentations;
-(const char*)displayNameForLogging;
-(char)isTrash;
-(void)setAllMessages:(id)arg1 ;
-(unsigned long long)indexOfMessageInAllMessages:(id)arg1 ;
-(void)removeAllMessagesAtIndexes:(id)arg1 ;
-(void)removeMessageFromAllMessages:(id)arg1 ;
-(long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 forMove:(char)arg5 ;
-(id)headerDataForMessage:(id)arg1 allowPartial:(char)arg2 ;
-(void)setUniquedStrings:(id)arg1 ;
-(void)addUniquedStrings:(id)arg1 ;
-(void)updateNumberOfAttachmentsAndColorsForMessages:(id)arg1 ;
-(void)updateMessageColorsSynchronouslyForMessages:(id)arg1 ;
-(void)suggestSortOrder:(id)arg1 ascending:(char)arg2 ;
-(id)_fetchBodyForMessage:(id)arg1 updateFlags:(char)arg2 ;
-(id)init;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(NSString *)description;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)objectSpecifier;
-(void)reset;
-(id)status;
-(void)_invalidate;
-(id)displayName;
-(void)saveChanges;
-(id)sortOrder;
-(id)account;
-(id)mailbox;
@end

