/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:32:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/Mail-Structs.h>
#import <Mail/MCActivityTarget.h>

@protocol MFLibraryUpgraderDelegate;
@class MFSqliteHandle, MCActivityMonitor, NSString, MCActivityAggregate;

@interface MFLibraryUpgrader : NSObject <MCActivityTarget> {

	MFSqliteHandle* _handle;
	char _readOnly;
	char _shouldRecalculateConversations;
	char _shouldUpdateSubjectPrefixes;
	char _shouldResetSnippets;
	char _shouldRecalculateMessageCounts;
	char _shouldUpdateSpotlightAttributes;
	char _shouldUpdateMailboxURLs;
	char _shouldResetPasswords;
	char _shouldResetChangeIdentifierForGmailAccounts;
	char _shouldNormalizeMailboxPaths;
	char _shouldResetDynamicAccountConfiguration;
	char _shouldRemoveMailboxesWithAbsoluteURLs;
	id<MFLibraryUpgraderDelegate> _delegate;
	MCActivityMonitor* _monitor;
	NSString* _migrationDestinationPath;
	unsigned long long _initialLastWriteMinorVersion;
	id _activityToken;
	unsigned long long _majorVersion;
	unsigned long long _minorVersion;
	MCActivityAggregate* _activity;
	sqlite3Ref _upgraderDB;

}

@property (assign,nonatomic,__weak) id<MFLibraryUpgraderDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char readOnly;                                                 //@synthesize readOnly=_readOnly - In the implementation block
@property (nonatomic,copy) NSString * migrationDestinationPath;                             //@synthesize migrationDestinationPath=_migrationDestinationPath - In the implementation block
@property (nonatomic,retain) MCActivityMonitor * monitor;                                   //@synthesize monitor=_monitor - In the implementation block
@property (assign,nonatomic) char shouldRecalculateConversations;                           //@synthesize shouldRecalculateConversations=_shouldRecalculateConversations - In the implementation block
@property (assign,nonatomic) char shouldUpdateSubjectPrefixes;                              //@synthesize shouldUpdateSubjectPrefixes=_shouldUpdateSubjectPrefixes - In the implementation block
@property (assign,nonatomic) char shouldResetSnippets;                                      //@synthesize shouldResetSnippets=_shouldResetSnippets - In the implementation block
@property (assign,nonatomic) char shouldRecalculateMessageCounts;                           //@synthesize shouldRecalculateMessageCounts=_shouldRecalculateMessageCounts - In the implementation block
@property (assign,nonatomic) char shouldUpdateSpotlightAttributes;                          //@synthesize shouldUpdateSpotlightAttributes=_shouldUpdateSpotlightAttributes - In the implementation block
@property (assign,nonatomic) char shouldUpdateMailboxURLs;                                  //@synthesize shouldUpdateMailboxURLs=_shouldUpdateMailboxURLs - In the implementation block
@property (assign,nonatomic) char shouldResetPasswords;                                     //@synthesize shouldResetPasswords=_shouldResetPasswords - In the implementation block
@property (assign,nonatomic) char shouldResetChangeIdentifierForGmailAccounts;              //@synthesize shouldResetChangeIdentifierForGmailAccounts=_shouldResetChangeIdentifierForGmailAccounts - In the implementation block
@property (assign,nonatomic) char shouldNormalizeMailboxPaths;                              //@synthesize shouldNormalizeMailboxPaths=_shouldNormalizeMailboxPaths - In the implementation block
@property (assign,nonatomic) char shouldResetDynamicAccountConfiguration;                   //@synthesize shouldResetDynamicAccountConfiguration=_shouldResetDynamicAccountConfiguration - In the implementation block
@property (assign,nonatomic) char shouldRemoveMailboxesWithAbsoluteURLs;                    //@synthesize shouldRemoveMailboxesWithAbsoluteURLs=_shouldRemoveMailboxesWithAbsoluteURLs - In the implementation block
@property (assign,nonatomic) unsigned long long initialLastWriteMinorVersion;               //@synthesize initialLastWriteMinorVersion=_initialLastWriteMinorVersion - In the implementation block
@property (nonatomic,retain) id activityToken;                                              //@synthesize activityToken=_activityToken - In the implementation block
@property (assign,nonatomic) unsigned long long majorVersion;                               //@synthesize majorVersion=_majorVersion - In the implementation block
@property (assign,nonatomic) unsigned long long minorVersion;                               //@synthesize minorVersion=_minorVersion - In the implementation block
@property (nonatomic,retain) MCActivityAggregate * activity;                                //@synthesize activity=_activity - In the implementation block
@property (assign,nonatomic) sqlite3Ref upgraderDB;                                         //@synthesize upgraderDB=_upgraderDB - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)setReadOnly:(char)arg1 ;
-(char)readOnly;
-(MCActivityMonitor *)monitor;
-(id)_handle;
-(void)setProgressItemTotal:(unsigned long long)arg1 ;
-(void)incrementProgressIndicator;
-(void)setMonitor:(MCActivityMonitor *)arg1 ;
-(long long)libraryStatus;
-(void)_setHandle:(id)arg1 ;
-(char)_canRun:(id*)arg1 ;
-(char)_needsRun;
-(char)shouldMigrateToV2;
-(void)_evaluateAccountsForMigration;
-(char)_allAccountsAreOnSameFSAsLibraryMail;
-(void)_executeSQL:(id)arg1 updateMinorVersion:(unsigned long long)arg2 ;
-(void)setActivityToken:(id)arg1 ;
-(void)_firstLoginDidTimeout;
-(unsigned long long)majorVersion;
-(unsigned long long)minorVersion;
-(void)_dropTriggers;
-(void)_upgradeSchemaFromBackBooting;
-(void)_upgradeSchema;
-(void)_createNewDatabaseObjects;
-(void)_stampCurrentMinorVersion;
-(char)shouldRecalculateConversations;
-(char)shouldResetPasswords;
-(void)_resetPasswords;
-(void)_vacuum;
-(void)_useWALJournalingIfPossible;
-(NSString *)migrationDestinationPath;
-(char)isComplexMigrationToV2;
-(void)_removeToDos:(unsigned long long)arg1 ;
-(id)activityToken;
-(unsigned long long)initialLastWriteMinorVersion;
-(void)setShouldUpdateSpotlightAttributes:(char)arg1 ;
-(void)setShouldResetChangeIdentifierForGmailAccounts:(char)arg1 ;
-(void)setShouldUpdateMailboxURLs:(char)arg1 ;
-(void)setShouldNormalizeMailboxPaths:(char)arg1 ;
-(void)setShouldRemoveMailboxesWithAbsoluteURLs:(char)arg1 ;
-(void)setShouldResetDynamicAccountConfiguration:(char)arg1 ;
-(void)setInitialLastWriteMinorVersion:(unsigned long long)arg1 ;
-(void)_upgradeFromTigerToLeopard;
-(void)_upgradeFromLeopardToSnowLeopard;
-(void)_upgradeFromSnowLeopardToSUSnowFelt;
-(void)_upgradeFromSUSnowFeltToLion;
-(void)_upgradeFromLionToMountainLion;
-(void)_upgradeFromMountainLionToSUMountainCalypso;
-(void)_upgradeFromSUMountainCalypsoToMavericks;
-(void)setShouldRecalculateMessageCounts:(char)arg1 ;
-(void)_fixLocalMailboxes:(unsigned long long)arg1 ;
-(void)setShouldUpdateSubjectPrefixes:(char)arg1 ;
-(char)shouldUpdateMailboxURLs;
-(void)updateFavoritePersistentIdentifierUnicodeComposition;
-(char)shouldRemoveMailboxesWithAbsoluteURLs;
-(void)_removeMailboxesWithAbsoluteURLs;
-(char)shouldUpdateSpotlightAttributes;
-(void)_updateSpotlightAttributes;
-(void)_updateMailboxURLUnicodeComposition;
-(char)shouldRecalculateMessageCounts;
-(char)shouldUpdateSubjectPrefixes;
-(char)_calculateInternationalSubjectPrefixes;
-(void)setShouldRecalculateConversations:(char)arg1 ;
-(char)shouldResetSnippets;
-(void)_resetSnippetColumn;
-(void)_resetConversationsForExistingMessages;
-(char)shouldResetChangeIdentifierForGmailAccounts;
-(void)_resetChangeIdentifierForGmailAccounts;
-(char)shouldNormalizeMailboxPaths;
-(void)_normalizeMailboxPathComponentsInMboxCache;
-(char)shouldResetDynamicAccountConfiguration;
-(void)_resetConfigureDynamically;
-(void)_fakeLibraryUpgraderStep;
-(void)_populateRecipientPosition;
-(void)_updateCoalescedAddressReferences;
-(sqlite3Ref)_getWriterDB;
-(void)_unlockWriterDB:(sqlite3Ref)arg1 ;
-(sqlite3Ref)_getReaderDB;
-(long long)_getSQLTableCount:(const char*)arg1 usingDB:(sqlite3Ref)arg2 ;
-(void)_unlockReaderDB:(sqlite3Ref)arg1 ;
-(void)_migrateTasksToLocalCalendar;
-(void)setShouldResetPasswords:(char)arg1 ;
-(void)_updateSmartMailboxUnreadMessages;
-(void)_updateSmartMailboxUnreadMessagesForMailboxes:(id)arg1 ;
-(void)_changeRulesLayout;
-(void)_changeSmartMailboxesLayout;
-(void)_changeSignaturesLayout;
-(void)_changeSignatureBundleLayout;
-(void)_addFileExtensionToSignatures;
-(void)_combineVIPSendersPlists;
-(void)_removeMessageTypeFromRules;
-(void)_removeMessageTypeFromSmartMailboxes;
-(void)_moveSyncedFilesToLocal;
-(void)_removeSyncedFilesMetadata;
-(void)_cleanUpSyncedData;
-(void)_removeDuplicateRSSAccounts;
-(void)upgradeMailDownloadsFiles;
-(void)upgradeAppleScriptFilesAndRules;
-(void)fixMailDownloadsMigrationKey;
-(void)_fixEWSFoldersTable;
-(void)makeAppleScriptReferencesInRulesUseOnlyLastPathComponent;
-(char)_removeMessageTypeFromSmartMailbox:(id)arg1 localProperties:(id)arg2 ;
-(void)_startMigratorServiceForMailDownloads;
-(void)_startMigratorServiceForAppleScriptFilesAndRules;
-(void)_fixShadowEMLXFiles;
-(void)setShouldResetSnippets:(char)arg1 ;
-(id)_urlStringForMailboxDirectory:(id)arg1 account:(id)arg2 levelFromAccountDirectory:(unsigned long long)arg3 ;
-(void)_fixShadowEMLXFilesForAccount:(id)arg1 ;
-(char)_accountIsGmailAccount:(id)arg1 ;
-(id)_mailboxURLStringsForAccount:(id)arg1 ;
-(void)_setSpotlightAttributesForEMLXFilesInMailbox:(id)arg1 mailboxURLString:(id)arg2 ;
-(void)_getRecipientsForMessageWithLibraryID:(long long)arg1 recipientNames:(id)arg2 recipientAddresses:(id)arg3 dbHandle:(id)arg4 ;
-(id)_copySpotlightAttributesWithDateSent:(int)arg1 dateReceived:(int)arg2 dateLastViewed:(int)arg3 read:(int)arg4 libraryFlags:(long long)arg5 messageID:(const char*)arg6 subject:(id)arg7 displayName:(id)arg8 senderName:(id)arg9 senderAddress:(id)arg10 recipientNames:(id)arg11 recipientAddresses:(id)arg12 ;
-(void)incrementProgressIndicatorWithThreshold:(unsigned long long)arg1 ;
-(void)setUpgraderDB:(sqlite3Ref)arg1 ;
-(sqlite3Ref)upgraderDB;
-(void)_getVersionInfo;
-(void)_bootstrapVersioningEngine;
-(void)setMajorVersion:(unsigned long long)arg1 ;
-(void)setMinorVersion:(unsigned long long)arg1 ;
-(void)upgradeRulesFromLion;
-(void)upgradeSmartMailboxesFromLion;
-(void)upgradeSignaturesFromLion;
-(char)_shouldDisplayDisturbingAndVagueWarningAboutMigrationToUser;
-(void)resetEvaluationOfAccountsForMigration;
-(id)unresolvedAccountPaths;
-(char)validateMigrationPath:(id)arg1 ;
-(void)resetProgressItemsWithTotal:(unsigned long long)arg1 andStatusMessage:(id)arg2 ;
-(void)upgradeMailDataIfNecessary;
-(void)setMigrationDestinationPath:(NSString *)arg1 ;
-(MCActivityAggregate *)activity;
-(void)setActivity:(MCActivityAggregate *)arg1 ;
-(id)init;
-(void)setDelegate:(id<MFLibraryUpgraderDelegate>)arg1 ;
-(void)dealloc;
-(id<MFLibraryUpgraderDelegate>)delegate;
-(void)run;
@end

