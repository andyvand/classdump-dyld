/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:37:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Mail.app/Contents/MacOS/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Mail/Mail-Structs.h>
@class NSConditionLock, NSMutableSet, NSArray, NSMutableDictionary, NSSet;

@interface MailboxesOutlineViewStateStorage : NSObject {

	NSConditionLock* _shouldShowVariablesLock;
	unsigned long long _shouldShowVariablesToUpdate;
	unsigned long long _shouldShowVariablesToReset;
	char _shouldShowOutbox;
	char _shouldShowDrafts;
	char _shouldShowTrash;
	char _shouldShowJunk;
	char _shouldShowFlags;
	char _shouldShowArchive;
	char _shouldShowVIPs;
	NSMutableSet* _visibleFlagMailboxes;
	id _firstUpdateLock;
	char _firstUpdate;
	id _isListeningForVariablesLock;
	char _isListeningForDocumentEditorNotifications;
	char _isListeningForMessagesAdded;
	char _isListeningForFlagUpdates;
	id _sectionItemsLock;
	NSArray* _sectionItems;
	NSArray* _visibleSectionItems;
	NSArray* _visibleMailboxes;
	id _defaultSectionItemsLock;
	id _activityMonitorMailboxMapsLock;
	NSMutableDictionary* _mailboxesPerActivityMonitor;
	NSMutableDictionary* _activityMonitorsPerMailbox;
	NSMutableDictionary* _finishedActivityMonitorCountPerMailbox;
	NSConditionLock* _changedMailboxesLock;
	NSMutableSet* _changedMailboxes;
	NSArray* _draggedMailboxes;
	NSSet* _observedTaskNames;

}

@property (assign) char shouldShowOutbox; 
@property (assign) char shouldShowDrafts; 
@property (assign) char shouldShowTrash; 
@property (assign) char shouldShowJunk; 
@property (assign) char shouldShowFlags; 
@property (assign) char shouldShowArchive; 
@property (assign) char shouldShowVIPs; 
@property (copy,readonly) NSArray * sectionItems; 
@property (copy,readonly) NSArray * visibleSectionItems; 
@property (copy,readonly) NSArray * visibleMailboxes; 
@property (retain) NSArray * draggedMailboxes;                              //@synthesize draggedMailboxes=_draggedMailboxes - In the implementation block
@property (nonatomic,copy,readonly) NSSet * observedTaskNames;              //@synthesize observedTaskNames=_observedTaskNames - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedInstance;
-(NSArray *)draggedMailboxes;
-(char)shouldShowFlags;
-(char)shouldShowArchive;
-(char)shouldShowVIPs;
-(void)_mailboxListingDidChange:(id)arg1 ;
-(char)shouldShowDrafts;
-(char)draftsExist;
-(char)flagsExist;
-(void)_viewerPreferencesChanged:(id)arg1 ;
-(id)copyActivityMonitorsForMailboxes:(id)arg1 finishedCount:(unsigned long long*)arg2 ;
-(NSArray *)sectionItems;
-(void)setShouldShowOutbox:(char)arg1 ;
-(void)setShouldShowDrafts:(char)arg1 ;
-(void)setShouldShowTrash:(char)arg1 ;
-(void)setShouldShowJunk:(char)arg1 ;
-(void)setShouldShowFlags:(char)arg1 ;
-(void)setShouldShowArchive:(char)arg1 ;
-(void)setShouldShowVIPs:(char)arg1 ;
-(NSArray *)visibleSectionItems;
-(NSArray *)visibleMailboxes;
-(void)setDraggedMailboxes:(NSArray *)arg1 ;
-(void)moveSectionItem:(id)arg1 beforeItem:(id)arg2 ;
-(void)_readSectionItemsFromDefaults;
-(void)_readVisibleFlagsMailboxesFromDefaults;
-(void)_setNeedsToResetShouldShowVariablesWithMask:(unsigned long long)arg1 ;
-(void)_updateIsListeningForVariables;
-(void)_mailAccountsChanged:(id)arg1 ;
-(void)_deliveryFailureHappened:(id)arg1 ;
-(void)_outboxCountDidChange:(id)arg1 ;
-(void)_allViewersDidClose:(id)arg1 ;
-(void)_monitoredActivityChanged:(id)arg1 ;
-(void)_accountInitializedMailboxList:(id)arg1 ;
-(void)_VIPsChanged:(id)arg1 ;
-(void)_mailboxDisplayCountChanged:(id)arg1 ;
-(void)_updateShouldShowVariables;
-(void)_triggerShouldShowVariablesUpdate;
-(void)_setShouldShowVariablesNeedUpdateWithUpdateMask:(unsigned long long)arg1 resetMask:(unsigned long long)arg2 ;
-(void)_writeVisibleFlagsMailboxesToDefaults;
-(char)_archiveMessagesOrSubmailboxesExist;
-(void)_updateSectionItemsWithNewlyVisibleFlagMailboxes:(id)arg1 ;
-(void)_messagesWereAddedToMailboxes:(id)arg1 ;
-(void)_editorUserSaved:(id)arg1 ;
-(void)_editorClosed:(id)arg1 ;
-(id)_sectionItemsFromDefaultSectionItems:(id)arg1 ;
-(void)_writeSectionItems:(id)arg1 toDefaultsWithKey:(id)arg2 ;
-(void)_writeSectionItemsToDefaults;
-(void)_setNeedsToUpdateShouldShowVariablesWithMask:(unsigned long long)arg1 ;
-(void)_handleOutboxCountChange;
-(void)_setShouldShowVariable:(char*)arg1 withMask:(unsigned long long)arg2 to:(char)arg3 ;
-(NSSet *)observedTaskNames;
-(id)_copyKeyForObject:(id)arg1 ;
-(id)_copyMailboxesForActivityMonitor:(id)arg1 ;
-(char)_addActivityMonitor:(id)arg1 toMailbox:(id)arg2 ;
-(char)_removeActivityMonitor:(id)arg1 fromMailbox:(id)arg2 ;
-(void)_setNeedsToNotifyChangedMailboxes:(id)arg1 ;
-(void)_notifyChangedMailboxes;
-(void)_triggerChangedMailboxesNotification;
-(void)_postChangedMailboxesNotification;
-(char)_draftsHasMessageWithNoWindow;
-(char)shouldShowOutbox;
-(char)shouldShowTrash;
-(char)shouldShowJunk;
-(void)_messageFlagsChanged:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

