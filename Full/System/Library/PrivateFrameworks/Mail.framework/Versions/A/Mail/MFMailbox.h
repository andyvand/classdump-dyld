/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/Mail-Structs.h>
#import <Mail/MCGmailLabel.h>
#import <Mail/MCMailbox.h>
#import <Mail/MFUIMailbox.h>

@class MFMailAccount, NSMutableSet, NSString, NSArray, NSMutableIndexSet, MCError, MFCriterion;

@interface MFMailbox : NSObject <MCGmailLabel, MCMailbox, MFUIMailbox> {

	MFMailAccount* _account;
	NSMutableSet* _reservedPathComponents;
	id _countsLock;
	unsigned long long _displayCount;
	unsigned long long _unseenCount;
	unsigned long long _deletedCount;
	char _countsWereLoaded;
	CFTreeRef _tree;
	NSString* _pendingNameChange;
	char _isSmartMailbox;
	id _criteriaLock;
	NSArray* _criteria;
	long long _criteriaState;
	NSString* _realFullPath;
	unsigned long long _numberOfVisibleChildren;
	NSMutableIndexSet* _visibleChildrenIndexes;
	NSArray* _sortedChildren;
	char _sortedChildrenAreUpToDate;
	char _failedToOpen;
	MCError* _openFailureError;
	id _displayIndexLock;
	unsigned long long _displayIndex;
	char _isManuallySorted;
	char _isVisibleFlaggedMailbox;
	id _dontIndexFlagLock;
	char _dontIndexFlagWritten;
	id _typeAndRepresentedAccountLock;
	MFMailAccount* _representedAccount;
	int _type;
	id _attributesLock;
	unsigned long long _attributes;
	id _deletionLock;
	char _deletionInProgress;
	char _storeIsReadOnly;
	char _uuidUpdatedInDatabase;
	char _respectsMailboxExclusions;
	char _needsToSaveMailboxName;
	char _allCriteriaMustBeSatisfied;
	char _isPublicOrShared;
	long long _smartMailboxVersion;
	NSString* _syncId;
	NSString* _name;
	NSString* _pathComponent;
	long long _unreadCountQueryObserverID;
	NSString* _uuid;

}

@property (assign) char isSmartMailbox; 
@property (assign) long long smartMailboxVersion;                      //@synthesize smartMailboxVersion=_smartMailboxVersion - In the implementation block
@property (assign) char respectsMailboxExclusions;                     //@synthesize respectsMailboxExclusions=_respectsMailboxExclusions - In the implementation block
@property (assign) unsigned long long attributes; 
@property (nonatomic,readonly) char hasMessages; 
@property (copy) NSString * syncId;                                    //@synthesize syncId=_syncId - In the implementation block
@property (readonly) MFCriterion * criterion; 
@property (assign) unsigned long long displayIndex; 
@property (assign) char isManuallySorted; 
@property (assign) char isVisibleFlaggedMailbox; 
@property (readonly) unsigned long long deletedCount; 
@property (assign) char isPublicOrShared;                              //@synthesize isPublicOrShared=_isPublicOrShared - In the implementation block
@property (assign) char isFirstTimeSync; 
@property (readonly) char hasFirstTimeSyncBeenDetermined; 
@property (copy) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (copy) NSString * pathComponent;                             //@synthesize pathComponent=_pathComponent - In the implementation block
@property (copy) NSString * uuid;                                      //@synthesize uuid=_uuid - In the implementation block
@property (assign) long long unreadCountQueryObserverID;               //@synthesize unreadCountQueryObserverID=_unreadCountQueryObserverID - In the implementation block
@property (assign) char storeIsReadOnly;                               //@synthesize storeIsReadOnly=_storeIsReadOnly - In the implementation block
@property (assign) char uuidUpdatedInDatabase;                         //@synthesize uuidUpdatedInDatabase=_uuidUpdatedInDatabase - In the implementation block
@property (assign) char needsToSaveMailboxName;                        //@synthesize needsToSaveMailboxName=_needsToSaveMailboxName - In the implementation block
@property (assign) char allCriteriaMustBeSatisfied;                    //@synthesize allCriteriaMustBeSatisfied=_allCriteriaMustBeSatisfied - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) int type; 
+(id)smartMailboxes;
+(id)smartMailboxWithIdentifier:(id)arg1 ;
+(id)mailboxWithPersistentIdentifier:(id)arg1 ;
+(char)typeIsGeneric:(int)arg1 ;
+(void)queueUpdateCountsForMailboxes:(id)arg1 ;
+(char)mailboxTypeAllowsConversations:(int)arg1 ;
+(char)isSmartMailboxDictionaryCompatible:(id)arg1 ;
+(void)setSmartMailboxes:(id)arg1 ;
+(id)_smartMailboxWithIdentifier:(id)arg1 inArray:(id)arg2 ;
+(id)mailboxFromPath:(id)arg1 ;
+(id)_mailboxesFromCriterion:(id)arg1 ;
+(void)reimportJunk;
+(char)mailboxTypeIsAlwaysUnread:(int)arg1 ;
+(char)mailboxTypeAllowsDeduplication:(int)arg1 ;
+(char)logMailboxUUIDErrors;
+(char)refreshUnreadCountOnSelect;
+(void)setRefreshUnreadCountOnSelect:(char)arg1 ;
+(id)smartMailboxPlaceholders;
+(void)addSmartMailboxPlaceholder:(id)arg1 ;
+(void)removeAllSmartMailboxPlaceholders;
+(id)smartMailboxesEnumeratorIncludingFlagMailboxes:(char)arg1 VIPSenderMailboxes:(char)arg2 ;
+(id)displayNameForMessage:(id)arg1 mailboxCriteria:(id)arg2 ;
+(void)setShouldIndexTrash:(char)arg1 ;
+(void)setShouldIndexJunk:(char)arg1 ;
+(void)setCanMarkUserInfoAsDirty:(char)arg1 ;
+(void)initialize;
-(id)URLString;
-(unsigned long long)numberOfChildren;
-(id)childAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfChild:(id)arg1 ;
-(NSString *)uuid;
-(void)setUserInfoObject:(id)arg1 forKey:(id)arg2 ;
-(void)setUuid:(NSString *)arg1 ;
-(void)prepareForDeletion;
-(id)store;
-(char)isSmartMailbox;
-(id)mutableCopyOfChildren;
-(id)representedAccount;
-(void)_addressBookDidChange:(id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(id)backupID;
-(long long)backupType;
-(MFCriterion *)criterion;
-(id)accountRelativeFilesystemPath;
-(id)fullPath;
-(char)isSpecialMailbox;
-(id)mutableCopyOfChildrenIncludingHiddenChildren:(char)arg1 hidingGmail:(char)arg2 ;
-(unsigned long long)numberOfVisibleChildrenHidingGmail:(char)arg1 ;
-(id)visibleChildAtIndex:(unsigned long long)arg1 ;
-(id)realFullPath;
-(void)setAllCriteriaMustBeSatisfied:(char)arg1 ;
-(void)setCriteria:(id)arg1 ;
-(id)tildeAbbreviatedPath;
-(id)syncableURLString;
-(id)criteria;
-(id)depthFirstEnumerator;
-(char)allCriteriaMustBeSatisfied;
-(char)isFirstTimeSync;
-(id)childWithPathComponent:(id)arg1 ;
-(char)isDescendantOfMailboxWithType:(int)arg1 ;
-(void)setPendingNameChange:(id)arg1 ;
-(void)setFailedToOpen:(char)arg1 error:(id)arg2 ;
-(id)displayNameUsingAccountNameIfSpecial:(char)arg1 ;
-(void)invalidateChildren;
-(void)saveUserInfo;
-(id)userInfoObjectForKey:(id)arg1 ;
-(char)isStore;
-(void)setIsFirstTimeSync:(char)arg1 ;
-(char)isAllMailMailbox;
-(void)flushCriteria;
-(id)childEnumerator;
-(char)unseenCountIsKnown;
-(unsigned long long)unseenCount;
-(char)isGmailImportantLabel;
-(char)isPublicOrShared;
-(id)accountRelativePath;
-(void)setName:(id)arg1 pathComponent:(id)arg2 ;
-(id)mailboxName;
-(void)setRepresentedAccount:(id)arg1 ;
-(void)setUserInfoBool:(char)arg1 forKey:(id)arg2 ;
-(char)userInfoBoolForKey:(id)arg1 ;
-(char)hasFirstTimeSyncBeenDetermined;
-(id)userInfoDictionary;
-(id)extendedDisplayName;
-(id)genericDisplayName;
-(char)allowsMoveDeletedMessagesToTrash;
-(id)initWithMailbox:(id)arg1 ;
-(NSString *)pathComponent;
-(id)initWithName:(id)arg1 pathComponent:(id)arg2 attributes:(unsigned long long)arg3 forAccount:(id)arg4 ;
-(id)unusedChildPathComponent:(id)arg1 ;
-(void)forceSaveUserInfo;
-(char)isStoreConvertibleToFolder;
-(void)assignNewUUID;
-(void)setIsPublicOrShared:(char)arg1 ;
-(void)setDisplayCount:(unsigned long long)arg1 ;
-(void)setIsManuallySorted:(char)arg1 ;
-(void)setDisplayIndex:(unsigned long long)arg1 ;
-(unsigned long long)displayCount;
-(unsigned long long)displayIndex;
-(char)isManuallySorted;
-(void)_registerForSmartMailboxNotification;
-(id)_abGroupsUsedInCriteria;
-(void)_VIPSendersChanged:(id)arg1 ;
-(long long)smartMailboxEncodingVersion;
-(char)isSmartMailboxExpressibleInTigerSchema;
-(void)cancelUnreadCountQuery;
-(id)initWithName:(id)arg1 attributes:(unsigned long long)arg2 forAccount:(id)arg3 ;
-(void)setIsSmartMailbox:(char)arg1 ;
-(void)setSyncId:(NSString *)arg1 ;
-(void)setSmartMailboxVersion:(long long)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 copyUUID:(char)arg2 ;
-(void)_userInfoDidLoad:(id)arg1 ;
-(NSString *)syncId;
-(long long)unreadCountQueryObserverID;
-(void)setUnreadCountQueryObserverID:(long long)arg1 ;
-(void)setPathComponent:(NSString *)arg1 ;
-(void)_enqueueUnreadCountChangeNotification;
-(char)displayIndexCanBeModified;
-(void)_invalidateVisibleChildrenCaches;
-(unsigned long long)numberOfSortedChildrenHidingGmail:(char)arg1 ;
-(id)sortedChildAtIndex:(unsigned long long)arg1 hidingGmail:(char)arg2 ;
-(id)_gmailWhiteMailboxChild;
-(void)_updateSortedChildrenIfNeeded;
-(id)childEnumeratorIncludingHiddenChildren:(char)arg1 ;
-(char)isGmailWhiteMailboxOrDescendant:(char)arg1 ;
-(/*^block*/id)mailboxComparatorWithAccount:(id)arg1 ;
-(unsigned long long)indexToInsertChildMailbox:(id)arg1 ;
-(void)_saveMailboxNameIfNeeded;
-(char)needsToSaveMailboxName;
-(void)setNeedsToSaveMailboxName:(char)arg1 ;
-(id)_stringByAppendingPathComponentsToAccountPath:(id)arg1 relativeToTree:(CFTreeRef)arg2 generateFileSystemPath:(char)arg3 ;
-(id)_URLStringIsSyncable:(char)arg1 ;
-(void)_updateDontIndexFlagFile;
-(char)isIndexable;
-(id)_loadUserInfo;
-(void)setUserInfoIsDirty:(char)arg1 ;
-(char)_userInfoIsDirty;
-(void)_saveMailboxesWithDirtyUserInfo;
-(void)_saveMailboxesWithDirtyUserInfoWithDelay;
-(id)_ancestralAccount;
-(id)_URLStringWithAccount:(id)arg1 ;
-(id)modifiedVIPCriterionForInboxOnly;
-(id)_mailboxExclusionCriteria;
-(void)notifyForUnreadCount:(unsigned long long)arg1 andOldUnreadCount:(unsigned long long)arg2 ;
-(void)setMessageCounts:(id)arg1 ;
-(id)storeCreateIfNeeded:(char)arg1 ;
-(void)setStoreIsReadOnly:(char)arg1 ;
-(char)storeIsReadOnly;
-(char)isEqualToSmartMailbox:(id)arg1 ;
-(id)accountURLString;
-(char)isPlaceholder;
-(char)isVisibleFlaggedMailbox;
-(id)representedMailbox;
-(char)canBeRenamed;
-(char)hasMessages;
-(void)setIsVisibleFlaggedMailbox:(char)arg1 ;
-(unsigned long long)suggestedDisplayIndexForChildMailbox:(id)arg1 hidingGmail:(char)arg2 ;
-(char)isValidGmailLabel;
-(void)_deleteChildrenWithURLsIfInvalid:(id)arg1 fullPaths:(id)arg2 ;
-(void)sortChildren;
-(char)hasAlternateParent;
-(id)applescriptAccount;
-(char)isPlainSmartMailbox;
-(id)pathRelativeToMailbox:(id)arg1 ;
-(char)isDescendantOfMailbox:(id)arg1 ;
-(char)preferredMessageType;
-(void)setPrimitiveAttributes:(unsigned long long)arg1 ;
-(void)setUserInfoWithDictionary:(id)arg1 ;
-(char)criteriaAreValid:(id*)arg1 ;
-(char)_isNormalMailbox;
-(char)isStoreReadOnlyCreateIfNeeded:(char)arg1 ;
-(char)failedToOpen;
-(id)openFailureError;
-(char)isValidDestinationMailbox;
-(long long)smartMailboxVersion;
-(char)uuidUpdatedInDatabase;
-(void)setUuidUpdatedInDatabase:(char)arg1 ;
-(char)respectsMailboxExclusions;
-(void)setRespectsMailboxExclusions:(char)arg1 ;
-(char)isPointedToByCriterion:(id)arg1 traversedMailboxes:(id)arg2 ;
-(char)isPointedToBySmartMailbox:(id)arg1 traversedMailboxes:(id)arg2 ;
-(char)isPointedToBySmartMailbox:(id)arg1 ;
-(id)applescriptContainer;
-(id)applescriptChildren;
-(void)removeFromMessagesAtIndex:(unsigned long long)arg1 ;
-(void)setMailboxName:(id)arg1 ;
-(id)valueInMessagesWithUniqueID:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(void)setName:(NSString *)arg1 ;
-(id)URL;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(char)isVisible;
-(id)objectSpecifier;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(char)isValid;
-(id)displayName;
-(id)persistentIdentifier;
-(unsigned long long)attributes;
-(char)isContainer;
-(id)parent;
-(id)childWithName:(id)arg1 ;
-(id)children;
-(id)labelName;
-(char)setChildren:(id)arg1 ;
-(void)setParent:(id)arg1 ;
-(void)setAttributes:(unsigned long long)arg1 ;
-(char)hasChildren;
-(id)deepCopy;
-(id)account;
-(id)messages;
-(unsigned long long)deletedCount;
-(void)setPrimitiveType:(int)arg1 ;
@end

