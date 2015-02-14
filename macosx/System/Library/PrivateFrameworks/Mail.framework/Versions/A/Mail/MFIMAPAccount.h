/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/MFRemoteStoreAccount.h>
#import <Mail/IMAPAccount.h>

@class NSDictionary, NSArray, NSMutableArray, NSString, IMAPConnectionPool, NSLock, MFIMAPOperationCache, NSMutableSet, NSMutableDictionary, MFMailbox, MFLibraryIMAPStore, NSOperationQueue, MCAuthScheme, NSURL;

@interface MFIMAPAccount : MFRemoteStoreAccount <IMAPAccount> {

	double _lastUnreadCountsAndNewMessagesUpdateTime;
	NSArray* _lastKnownCapabilities;
	NSMutableArray* _namespacePrefixes;
	NSString* _separatorChar;
	IMAPConnectionPool* _connectionPool;
	NSLock* _connectionPoolLock;
	MFIMAPOperationCache* _offlineCache;
	NSString* _serverPathPrefixWithFilesystemSeparator;
	NSString* _serverPathPrefixAsFilesystemPath;
	NSLock* _fsPrefixLock;
	NSLock* _mailboxListingLock;
	NSMutableSet* _mailboxURLsToSynchronize;
	NSMutableDictionary* _IMAPMailboxes;
	NSMutableDictionary* _IMAPQuotaRoots;
	id _allMailLock;
	MFMailbox* _allMailMailbox;
	unsigned _readBufferSize;
	char _isFetchingUnreadCountsAndCheckingNewMessagesForAllMailboxes;
	MFMailbox* _serverDefinedArchiveMailbox;
	id _serverDefinedArchiveMailboxLock;
	MFMailbox* _serverDefinedDraftsMailbox;
	id _serverDefinedDraftsMailboxLock;
	MFMailbox* _serverDefinedJunkMailbox;
	id _serverDefinedJunkMailboxLock;
	MFMailbox* _serverDefinedSentMailbox;
	id _serverDefinedSentMailboxLock;
	MFMailbox* _serverDefinedTrashMailbox;
	id _serverDefinedTrashMailboxLock;
	char _recoveringFromConnectionLoss;
	char _lastConnectionFailed;
	char _shouldIncludePrefixInPath;
	char _allowsInputForConnectionProblems;
	MFLibraryIMAPStore* _idleStore;
	double _lastMailboxListFetchTime;
	NSOperationQueue* _remoteTaskQueue;
	NSOperationQueue* _remoteFetchQueue;
	NSOperationQueue* _deferredInitializationQueue;

}

@property (retain) IMAPConnectionPool * connectionPool;                                     //@synthesize connectionPool=_connectionPool - In the implementation block
@property (assign) char hasServerDefinedAllMailMailbox; 
@property (assign) char hasServerDefinedArchiveMailbox; 
@property (assign) char hasServerDefinedDraftsMailbox; 
@property (assign) char hasServerDefinedJunkMailbox; 
@property (assign) char hasServerDefinedSentMailbox; 
@property (assign) char hasServerDefinedTrashMailbox; 
@property (retain,readonly) MFMailbox * serverDefinedArchiveMailbox; 
@property (retain,readonly) MFMailbox * serverDefinedDraftsMailbox; 
@property (retain,readonly) MFMailbox * serverDefinedJunkMailbox; 
@property (retain,readonly) MFMailbox * serverDefinedSentMailbox; 
@property (retain,readonly) MFMailbox * serverDefinedTrashMailbox; 
@property (assign) char ignoreServerDefinedArchiveMailbox; 
@property (assign) char ignoreServerDefinedDraftsMailbox; 
@property (assign) char ignoreServerDefinedJunkMailbox; 
@property (assign) char ignoreServerDefinedSentMailbox; 
@property (assign) char ignoreServerDefinedTrashMailbox; 
@property (assign) char shouldUseGmailLabelStores; 
@property (assign) char needsGmailLabelsCleanup; 
@property (retain) MFLibraryIMAPStore * idleStore;                                          //@synthesize idleStore=_idleStore - In the implementation block
@property (assign,nonatomic) double lastMailboxListFetchTime;                               //@synthesize lastMailboxListFetchTime=_lastMailboxListFetchTime - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * remoteTaskQueue;                          //@synthesize remoteTaskQueue=_remoteTaskQueue - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * remoteFetchQueue;                         //@synthesize remoteFetchQueue=_remoteFetchQueue - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * deferredInitializationQueue;              //@synthesize deferredInitializationQueue=_deferredInitializationQueue - In the implementation block
@property (assign,nonatomic) char lastConnectionFailed;                                     //@synthesize lastConnectionFailed=_lastConnectionFailed - In the implementation block
@property (assign,nonatomic) char shouldIncludePrefixInPath;                                //@synthesize shouldIncludePrefixInPath=_shouldIncludePrefixInPath - In the implementation block
@property (assign,nonatomic) char allowsInputForConnectionProblems;                         //@synthesize allowsInputForConnectionProblems=_allowsInputForConnectionProblems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * accountTypeString; 
@property (copy,readonly) NSString * identifier; 
@property (copy) NSString * displayName; 
@property (nonatomic,copy,readonly) NSString * saslProfileName; 
@property (assign) char configureDynamically; 
@property (assign) char allowInsecureAuthentication; 
@property (copy) NSString * canonicalEmailAddress; 
@property (copy) NSString * hostname; 
@property (assign) long long portNumber; 
@property (nonatomic,copy,readonly) NSArray * standardPorts; 
@property (nonatomic,copy,readonly) NSArray * standardSSLPorts; 
@property (assign) long long securityLayerType; 
@property (retain) MCAuthScheme * preferredAuthScheme; 
@property (copy) NSString * username; 
@property (copy) NSString * password; 
@property (copy,readonly) NSString * applePersonID; 
@property (copy,readonly) NSString * appleAuthenticationToken; 
@property (copy,readonly) NSString * googleClientToken; 
@property (nonatomic,readonly) char requiresAuthentication; 
@property (assign) char shouldUseAuthentication; 
@property (assign) char usesSSL; 
@property (readonly) NSURL * subscriptionURL; 
@property (copy,readonly) NSString * subscriptionURLLabel; 
@property (copy) NSString * externalHostname; 
@property (assign) char recoveringFromConnectionLoss;                                       //@synthesize recoveringFromConnectionLoss=_recoveringFromConnectionLoss - In the implementation block
@property (assign) char useIDLEIfAvailable; 
@property (assign) long long gmailCapabilitiesSupport; 
@property (copy) NSDictionary * serverID; 
@property (readonly) id<IMAPOfflineCache> offlineCache; 
@property (assign) unsigned readBufferSize; 
+(id)standardPorts;
+(id)standardSSLPorts;
+(id)accountTypeString;
+(id)_pathComponentForMailboxName:(id)arg1 ;
+(void)_deleteQueuedMailboxes:(id)arg1 ;
+(id)_mailboxNameForPathComponent:(id)arg1 ;
-(id)initWithAccountInfo:(id)arg1 ;
-(long long)defaultSecurePortNumber;
-(long long)defaultPortNumber;
-(void)releaseAllConnections;
-(void*)keychainProtocol;
-(void)validateConnections;
-(char)requiresAuthentication;
-(char)shouldRetryConnectionWithoutCertificateCheckingAfterError:(id)arg1 host:(id)arg2 didPromptUser:(char*)arg3 ;
-(char)connectAndAuthenticate:(id)arg1 ;
-(id)newConnectedConnectionDiscoveringBestSettings:(char)arg1 withConnectTimeout:(double)arg2 readWriteTimeout:(double)arg3 ;
-(id)authenticatedConnection;
-(NSString *)saslProfileName;
-(id)iaServiceType;
-(void)setIsOffline:(char)arg1 ;
-(id)nameForMailbox:(id)arg1 ;
-(void)completeDeferredInitialization;
-(void)handleAlertResponse:(id)arg1 ;
-(id)mailboxForRelativePath:(id)arg1 isFilesystemPath:(char)arg2 create:(char)arg3 ;
-(id)primaryMailbox;
-(char)isGmailAccount;
-(id)allMailMailbox;
-(Class)storeClassForMailbox:(id)arg1 ;
-(id)_infoForMatchingURL:(id)arg1 ;
-(char)resetSpecialMailboxes;
-(id)mailboxPathExtension;
-(void)synchronizeAllMailboxes;
-(char)_synchronizeMailboxListHighPriority:(char)arg1 ;
-(char)_setChildren:(id)arg1 forMailbox:(id)arg2 ;
-(id)_specialMailboxRelativePathForType:(int)arg1 ;
-(id)createMailboxWithParent:(id)arg1 displayName:(id)arg2 localizedDisplayName:(id)arg3 ;
-(char)renameMailbox:(id)arg1 newDisplayName:(id)arg2 parent:(id)arg3 ;
-(char)canMailboxBeDeleted:(id)arg1 ;
-(char)_deleteMailbox:(id)arg1 reflectToServer:(char)arg2 ;
-(id)validNameForMailbox:(id)arg1 fromDisplayName:(id)arg2 error:(id*)arg3 ;
-(id)_specialMailboxWithType:(int)arg1 create:(char)arg2 isLocal:(char)arg3 ;
-(char)deleteMailbox:(id)arg1 reflectToServer:(char)arg2 ;
-(void)saveCache;
-(NSOperationQueue *)remoteTaskQueue;
-(id)_URLPersistenceScheme;
-(void)fetchSynchronouslyIsAuto:(id)arg1 ;
-(void)_synchronouslyLoadListingForParent:(id)arg1 ;
-(NSOperationQueue *)remoteFetchQueue;
-(id)_newConnectionWithPendingGateway:(char)arg1 ;
-(void)handleOpenMailboxError:(id)arg1 ;
-(void)setConnectionPool:(IMAPConnectionPool *)arg1 ;
-(char)hasServerDefinedAllMailMailbox;
-(void)setShouldUseGmailLabelStores:(char)arg1 ;
-(char)shouldUseGmailLabelStores;
-(void)_startObserving:(char)arg1 IMAPMailbox:(id)arg2 ;
-(void)setShouldIncludePrefixInPath:(char)arg1 ;
-(NSOperationQueue *)deferredInitializationQueue;
-(char)needsGmailLabelsCleanup;
-(void)_cleanUpExistingMessages;
-(void)_updateIdleMailbox;
-(void)setIdleStore:(MFLibraryIMAPStore *)arg1 ;
-(IMAPConnectionPool *)connectionPool;
-(id)_colorByMessageFromColorByMessageDigest:(id)arg1 ;
-(void)setNeedsGmailLabelsCleanup:(char)arg1 ;
-(void)_setFileSystemServerPathPrefix;
-(void)_readCustomInfoFromMailboxCache:(id)arg1 ;
-(void)_writeCustomInfoToMailboxCache:(id)arg1 ;
-(void)doRoutineCleanup;
-(char)useIDLEIfAvailable;
-(MFLibraryIMAPStore *)idleStore;
-(void)refreshMailboxListingRootedAtMailbox:(id)arg1 ;
-(void)_checkForNewMessagesInStore:(id)arg1 ;
-(id)gatewayForMailbox:(id)arg1 options:(unsigned long long)arg2 ;
-(void)_fetchUnreadCountsForMailbox:(id)arg1 recursively:(char)arg2 gateway:(id)arg3 ;
-(unsigned)readBufferSize;
-(void)_clearAllPathBasedCachesAndDelete:(char)arg1 ;
-(void)setIgnoreServerDefinedDraftsMailbox:(char)arg1 ;
-(void)setStoreDraftsOnServer:(char)arg1 ;
-(void)setIgnoreServerDefinedJunkMailbox:(char)arg1 ;
-(void)setStoreJunkOnServer:(char)arg1 ;
-(void)setIgnoreServerDefinedSentMailbox:(char)arg1 ;
-(void)setStoreSentMessagesOnServer:(char)arg1 ;
-(void)setIgnoreServerDefinedTrashMailbox:(char)arg1 ;
-(void)setStoreTrashOnServer:(char)arg1 ;
-(long long)gmailCapabilitiesSupport;
-(void)setHasServerDefinedAllMailMailbox:(char)arg1 ;
-(void)setReadBufferSize:(unsigned)arg1 ;
-(char)allowsInputForConnectionProblems;
-(void)setLastConnectionFailed:(char)arg1 ;
-(char)lastConnectionFailed;
-(id)_gatewayForMailbox:(id)arg1 name:(id)arg2 options:(unsigned long long)arg3 ;
-(void)setRecoveringFromConnectionLoss:(char)arg1 ;
-(void)_invalidateMailboxWithName:(id)arg1 expunge:(char)arg2 URLToCompact:(id)arg3 ;
-(id)gatewayForExistingConnectionToMailbox:(id)arg1 ;
-(id)_getPotentialGatewayForMailbox:(id)arg1 options:(unsigned long long)arg2 createdNewConnection:(char*)arg3 needsSelect:(char*)arg4 ;
-(void)setAllowsInputForConnectionProblems:(char)arg1 ;
-(char)_recoverFromConnectionlessStateHighPriority:(char)arg1 ;
-(void)_setSeparatorChar:(id)arg1 ;
-(id<IMAPOfflineCache>)offlineCache;
-(void)_clearOfflineCache;
-(char)compactWhenClosingMailboxes;
-(void)_releaseAllConnectionsAndCallSuper:(char)arg1 saveOfflineCache:(char)arg2 ;
-(void)_validateConnections;
-(id)_IMAPMailboxForMailbox:(id)arg1 name:(id)arg2 createIfNeeded:(char)arg3 ;
-(id)_mailboxForName:(id)arg1 ;
-(id)_addIMAPMailboxForMailbox:(id)arg1 name:(id)arg2 ;
-(MFMailbox *)serverDefinedSentMailbox;
-(MFMailbox *)serverDefinedDraftsMailbox;
-(MFMailbox *)serverDefinedTrashMailbox;
-(MFMailbox *)serverDefinedJunkMailbox;
-(char)hasServerDefinedArchiveMailbox;
-(id)_serverDefinedMailboxWithAttribute:(unsigned long long)arg1 ;
-(char)hasServerDefinedDraftsMailbox;
-(char)hasServerDefinedJunkMailbox;
-(char)hasServerDefinedSentMailbox;
-(char)hasServerDefinedTrashMailbox;
-(void)_removeIMAPMailboxWithName:(id)arg1 ;
-(void)_setIsOffline:(char)arg1 ;
-(void)_fetchUnreadCountsCheckForNewMessages:(char)arg1 ;
-(void)boostExistingFetchTo:(long long)arg1 ;
-(void)_asynchronouslyFetchUnreadCountsCheckForNewMessages:(char)arg1 highPriority:(char)arg2 ;
-(double)lastMailboxListFetchTime;
-(void)setLastMailboxListFetchTime:(double)arg1 ;
-(void)_synchronizeMailboxListDuringMailCheck;
-(id)lastKnownCapabilities;
-(id)_listingForMailbox:(id)arg1 listAllChildren:(char)arg2 highPriority:(char)arg3 ;
-(void)_loadMailboxListingIntoCache:(id)arg1 parent:(id)arg2 addedMailboxes:(id)arg3 removedMailboxes:(id)arg4 updatingSourceMailbox:(char)arg5 ;
-(void)_updateSpecialMailboxes;
-(void)setHasServerDefinedArchiveMailbox:(char)arg1 ;
-(void)setHasServerDefinedDraftsMailbox:(char)arg1 ;
-(void)setHasServerDefinedJunkMailbox:(char)arg1 ;
-(void)setHasServerDefinedSentMailbox:(char)arg1 ;
-(void)setHasServerDefinedTrashMailbox:(char)arg1 ;
-(char)ignoreServerDefinedArchiveMailbox;
-(char)ignoreServerDefinedDraftsMailbox;
-(char)ignoreServerDefinedJunkMailbox;
-(char)ignoreServerDefinedSentMailbox;
-(char)ignoreServerDefinedTrashMailbox;
-(id)serverPathPrefix;
-(id)separatorCharFetchIfNeeded:(char)arg1 ;
-(id)_recursivelyFilterMailboxList:(id)arg1 accordingToList:(id)arg2 ;
-(id)_listingForMailbox:(id)arg1 listAllChildren:(char)arg2 onlySubscribed:(char)arg3 highPriority:(char)arg4 ;
-(id)_namespacePrefixesForPrivate:(char)arg1 public:(char)arg2 shared:(char)arg3 ;
-(id)_fullIMAPPathForPath:(id)arg1 relativeToMailbox:(id)arg2 ;
-(id)IMAPMailboxForMailboxName:(id)arg1 createIfNeeded:(char)arg2 ;
-(char)_createMailbox:(id)arg1 withGateway:(id)arg2 ;
-(char)_askToChangePathPrefixToCreateMailbox:(id)arg1 displayName:(id)arg2 withGateway:(id)arg3 ;
-(void)setServerPathPrefix:(id)arg1 permanently:(char)arg2 ;
-(id)offlineCacheIfOffline;
-(id)_fileSystemServerPathPrefix:(char)arg1 ;
-(void)_fetchUnreadCountsForMailbox:(id)arg1 recursively:(char)arg2 gateway:(id)arg3 checkForNewMessages:(char)arg4 ;
-(void)_synchronizeAccountWithServerHighPriority:(id)arg1 ;
-(id)_copyMailboxWithParent:(id)arg1 name:(id)arg2 pathComponent:(id)arg3 attributes:(unsigned long long)arg4 existingMailbox:(id)arg5 ;
-(void)_loadMailboxListingIntoCache:(id)arg1 parent:(id)arg2 addedMailboxes:(id)arg3 removedMailboxes:(id)arg4 ;
-(id)IMAPMailboxForMailbox:(id)arg1 createIfNeeded:(char)arg2 ;
-(void)_mailboxesWereRemovedFromTree:(id)arg1 withFileSystemPaths:(id)arg2 ;
-(void)_waitForMailboxListingLoadToComplete;
-(void)_recursivelyModifySubscriptions:(char)arg1 forMailbox:(id)arg2 children:(id)arg3 withGateway:(id)arg4 ;
-(void)_renameIMAPMailboxWithMailbox:(id)arg1 fromName:(id)arg2 toName:(id)arg3 ;
-(char)shouldIncludePrefixInPath;
-(void)_setServerPathPrefix:(id)arg1 permanently:(char)arg2 shouldSync:(char)arg3 ;
-(void)_loadEntriesFromFileSystemPath:(id)arg1 parent:(id)arg2 ;
-(id)_mailboxPathPrefix:(char)arg1 ;
-(void)deleteMessagesFromMailbox:(id)arg1 olderThanNumberOfDays:(long long)arg2 ;
-(char)handleResponseCodeFromResponse:(id)arg1 ;
-(id)quotaRootForName:(id)arg1 createIfNeeded:(char)arg2 ;
-(char)allowsPartialDownloads;
-(void)sendAccountNeedsCheckingNotification;
-(void)recoverFromConnectionLoss;
-(id)gmailLabelWithName:(id)arg1 ;
-(void)detectAllMailWithGateway:(id)arg1 ;
-(char)recoveringFromConnectionLoss;
-(void)setUseIDLEIfAvailable:(char)arg1 ;
-(void)setGmailCapabilitiesSupport:(long long)arg1 ;
-(void)setServerID:(NSDictionary *)arg1 ;
-(void)_migrateColorsForGmail;
-(void)setCompactWhenClosingMailboxes:(char)arg1 ;
-(char)needToSynchronizeMailboxCaches;
-(void)resetNeedToSynchronizeMailboxCaches;
-(void)didSynchronizeMailboxCachesAndFoundChanges:(char)arg1 ;
-(id)_dataForTemporaryUid:(unsigned)arg1 ;
-(unsigned long long)minimumPartialDownloadSize;
-(void)setAllowsPartialDownloads:(char)arg1 ;
-(void)setIgnoreServerDefinedArchiveMailbox:(char)arg1 ;
-(void)invalidateMailboxWithName:(id)arg1 expunge:(char)arg2 URLStringToCompact:(id)arg3 ;
-(MFMailbox *)serverDefinedArchiveMailbox;
-(void)clearQuotaRoots;
-(char)supportsIDLE;
-(void)insertInMailboxes:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)storedServerPathPrefix;
-(void)syncFileSystemWithServerPathPrefix;
-(char)storesUnseenCount;
-(void)messageDeliveryWillBegin:(id)arg1 ;
-(unsigned)messageCaching;
-(void)setMessageCaching:(unsigned)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(char)hasCapability:(unsigned long long)arg1 ;
-(NSDictionary *)serverID;
-(id)providerIdentifier;
@end

