/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMAP.framework/Versions/A/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMAP/IMAP-Structs.h>
#import <IMAP/IMAPFetchResponseHandler.h>
#import <IMAP/MCActivityTarget.h>

@protocol IMAPMessageDataSource;
@class _NonBoostingLock, IMAPGateway, IMAPMailbox, NSMutableArray, NSMutableIndexSet, NSMutableSet, MCInvocationQueue, NSArray, NSMutableDictionary, NSString;

@interface IMAPMailboxSyncEngine : NSObject <IMAPFetchResponseHandler, MCActivityTarget> {

	NSRange _rangeOfMessagesToFetchFlagsAndUidsForSyncing;
	_NonBoostingLock* _syncEngineLock;
	IMAPGateway* _gateway;
	id<IMAPMessageDataSource> _dataSource;
	IMAPMailbox* _IMAPMailbox;
	NSMutableArray* _auxiliaryLists;
	NSMutableIndexSet* _allNewUids;
	NSMutableIndexSet* _UIDsNeedingSkeletons;
	NSMutableIndexSet* _messageNumbersNeedingUIDs;
	NSMutableArray* _messageDetails;
	unsigned long long _fetchedMessagesCount;
	unsigned long long _maxSkeletonsToFetch;
	NSMutableIndexSet* _expungedUids;
	NSMutableSet* _activeOperations;
	long long _progressType;
	unsigned long long _progressTotal;
	char _isCheckingNewMail;
	MCInvocationQueue* _syncEngineQueue;
	NSMutableArray* _messagesNeedingAttachmentNames;
	NSArray* _messagesBeingRouted;
	NSMutableArray* _messagesAddedToDataSource;
	NSMutableArray* _uidsAddedToServer;
	NSMutableSet* _messageUIDsCachedDuringRouting;
	NSMutableDictionary* _labelsByRemoteId;
	/*^block*/id _compareByUid;
	unsigned _uidValidity;
	unsigned _localDataSourceUidNext;
	unsigned _newUidValidity;
	char _isReset;
	char _needToUpdateExists;
	char _newResponsesAvailable;
	char _automaticallyStartThread;
	char _dataSourceIsInboxOrAllMail;
	char _newMailReceivedInInbox;
	char _checkedForNewUids;
	char _fetchingDueToAllegedModificationSequenceChange;
	char _messagesNeedAttachmentNames;
	char _synchronizedOldMessages;
	char _connectionSupportsUIDPLUS;
	char _forceSyncOfAllMessages;
	unsigned _uidNext;
	unsigned long long _numMessagesOnServer;
	unsigned long long _computedHighestModificationSequence;

}

@property (assign) char messageListIsSynchronized;                                      //@synthesize synchronizedOldMessages=_synchronizedOldMessages - In the implementation block
@property (nonatomic,copy,readonly) id compareByUid; 
@property (assign) unsigned long long numberOfMessagesOnServer;                         //@synthesize numMessagesOnServer=_numMessagesOnServer - In the implementation block
@property (assign) unsigned long long computedHighestModificationSequence;              //@synthesize computedHighestModificationSequence=_computedHighestModificationSequence - In the implementation block
@property (assign) unsigned uidNext;                                                    //@synthesize uidNext=_uidNext - In the implementation block
@property (assign) char connectionSupportsUIDPLUS;                                      //@synthesize connectionSupportsUIDPLUS=_connectionSupportsUIDPLUS - In the implementation block
@property (assign) char forceSyncOfAllMessages;                                         //@synthesize forceSyncOfAllMessages=_forceSyncOfAllMessages - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(char)isReset;
-(char)_hasPendingChanges;
-(unsigned)uidNext;
-(void)setComputedHighestModificationSequence:(unsigned long long)arg1 ;
-(void)setAutomaticallyStartsBackgroundThread:(char)arg1 ;
-(void)setGatewayFromIMAPMailbox:(id)arg1 ;
-(char)messageListIsSynchronized;
-(void)runSynchronouslyWithMessages:(id)arg1 ;
-(void)invalidateDataSource;
-(void)newUIDsWereAddedToServer:(id)arg1 ;
-(void)updateCountOfMessagesOnServerFromIMAPMailbox:(id)arg1 fromIDLE:(char)arg2 ;
-(void)requestCheckingNewMail;
-(void)messagesWereAddedToDataSource:(id)arg1 ;
-(id)messagesBeingAdded;
-(void)responsesWereAddedToIMAPMailbox:(id)arg1 ;
-(void)setUidValidity:(unsigned)arg1 ;
-(void)boostActiveOperationsTo:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)reset;
-(id)initWithDataSource:(id)arg1 ;
-(char)handleResponse:(id)arg1 forOperation:(id)arg2 ;
-(void)setUidNext:(unsigned)arg1 ;
-(unsigned long long)computedHighestModificationSequence;
-(void)uidsWereCompactedFromDataSource:(id)arg1 ;
-(char)_setGateway:(id)arg1 ;
-(unsigned long long)numberOfMessagesOnServer;
-(void)_resetClearingGateway:(char)arg1 clearingDataSource:(char)arg2 ;
-(void)_notifyBackgroundFetchCompleted;
-(void)setNumberOfMessagesOnServer:(unsigned long long)arg1 ;
-(void)setForceSyncOfAllMessages:(char)arg1 ;
-(void)setMessageListIsSynchronized:(char)arg1 ;
-(void)setConnectionSupportsUIDPLUS:(char)arg1 ;
-(void)_startNewThreadIfNeeded;
-(void)_setupForNewIMAPMailbox:(id)arg1 andGateway:(id)arg2 ;
-(char)_shouldContinueSyncingWithMonitor:(id)arg1 ;
-(long long)_cachePolicyForAccount:(id)arg1 ;
-(id)_getAuxiliaryListForType:(unsigned long long)arg1 ;
-(id)_getObjectWithSameUidAsObject:(id)arg1 inArray:(id)arg2 insertIndex:(unsigned long long*)arg3 ;
-(id)_getKnownMessageDetailsForUid:(unsigned)arg1 ;
-(void)_addItem:(id)arg1 toAuxiliaryList:(unsigned long long)arg2 ;
-(void)_removeMessagesOrDetailsFromDataSource:(id)arg1 ;
-(void)_goWithMessages:(id)arg1 ;
-(char)_dataSourcePersistentIDType;
-(void)_resizeMessageDetails;
-(void)_goWithMessagesIfNeeded:(id)arg1 ;
-(id)compareByUid;
-(id)_getKnownMessageDetailsForNumber:(unsigned long long)arg1 ;
-(char)_syncChangedMessagesOnly;
-(void)_addDetails:(id)arg1 forMessageNumber:(unsigned long long)arg2 ;
-(void)_updateFlagChanges:(id*)arg1 withDetails:(id)arg2 previousFlags:(unsigned)arg3 ;
-(id)_gmailLabelsForNames:(id)arg1 ;
-(void)_pushFlags:(id)arg1 forPersistentIDs:(id)arg2 toDataSource:(id)arg3 withMonitor:(id)arg4 ;
-(void)_processAttachmentNames;
-(char)forceSyncOfAllMessages;
-(void)_setAuxiliaryList:(id)arg1 forType:(unsigned long long)arg2 ;
-(void)_handleNewUIDsAddedToServer:(id)arg1 ;
-(void)_handleMessagesWereAddedToPersistence:(id)arg1 withMonitor:(id)arg2 ;
-(id)_copyDataSource;
-(void)_updatePendingChangesWithMonitor:(id)arg1 ;
-(char)_processResponsesWithMonitor:(id)arg1 ;
-(char)_getNewMessageSkeletonsWithMonitor:(id)arg1 messagesFromOpen:(id*)arg2 ;
-(char)_handleRoutedUidsWithMonitor:(id)arg1 ;
-(char)_fetchUidsFlagsAndLabelsWithMonitor:(id)arg1 ;
-(char)_syncWithDataSourceWithMonitor:(id)arg1 messagesFromOpen:(id)arg2 ;
-(char)_cacheMessagesWithMonitor:(id)arg1 ;
-(char)_cacheAttachmentsWithMonitor:(id)arg1 ;
-(char)_handleInvitationMessagesWithMonitor:(id)arg1 ;
-(char)_shouldContinueSyncingWithGateway;
-(id)_copyIMAPMailbox;
-(void)_handleFetchResponse:(id)arg1 withMonitor:(id)arg2 message:(id*)arg3 flagsChanges:(id*)arg4 labels:(id*)arg5 ;
-(void)_doUidStoreUpdate:(id)arg1 ;
-(void)_discardSyncProgressSoFar;
-(void)_removeUidFromAuxiliaryLists:(id)arg1 ;
-(void)_pushLabels:(id)arg1 toDataSource:(id)arg2 withMonitor:(id)arg3 ;
-(void)_mergeItems:(id)arg1 intoAuxiliaryList:(unsigned long long)arg2 ;
-(void)_pushFlags:(id)arg1 toDataSource:(id)arg2 withMonitor:(id)arg3 ;
-(void)_updateCountOfMessagesOnServerIfNecessary;
-(id)_checkOutGateway;
-(id)_newOperationFromUIDsNeedingSkeletons:(unsigned long long)arg1 ;
-(char)connectionSupportsUIDPLUS;
-(char)_placeholderDetailsExist;
-(char)_recoverFromErrorInDownload:(id)arg1 uid:(unsigned)arg2 cacheList:(id)arg3 atIndex:(unsigned long long)arg4 downloadCache:(id)arg5 ;
-(void)_setAttachmentNamesForMessage:(id)arg1 ;
-(char)_handleFailedFetchResponseForOperation:(id)arg1 ;
-(void)_setupFakeResponseToOperation:(id)arg1 messageNumber:(unsigned long long)arg2 ;
@end

