/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSString, NSNumber, NSDate, NSArray, _NSDocumentActivity, NSMutableArray, NSOperationQueue, NSPointerArray, NSSavePanel, NSTimer, NSURL, NSFileVersion, NSError, NSConditionLock, NSDocument, NSMetadataQuery;

@interface NSDocumentMoreIVars : NSObject {

	long long documentUniquingNumber;
	NSString* originalDisplayName;
	NSNumber* originalParentFolderID;
	NSString* originalFileName;
	NSDate* fileModificationDate;
	NSNumber* savePanelNameExtensionHidden;
	NSArray* savePanelTagNames;
	dispatch_queue_sRef activityQueue;
	_NSDocumentActivity* activityBeingPerformed;
	NSMutableArray* pendingActivities;
	char activityIsContinuing;
	dispatch_queue_sRef fileAccessQueue;
	long long fileAccessCount;
	id fileAccessToken;
	NSMutableArray* fileAccessWaiters;
	NSOperationQueue* filePresenterQueue;
	SCD_Struct_NS34 differenceDueToRecentChanges;
	SCD_Struct_NS34 differenceSincePreservingPreviousVersion;
	SCD_Struct_NS34 differenceSinceSaving;
	SCD_Struct_NS34 differenceSinceAutosaving;
	SCD_Struct_NS34 differenceDueToDiscardableChanges;
	SCD_Struct_NS34 differenceDueToExplicitChanges;
	char appearsLocked;
	char autosavingPossibilityIsChecked;
	char autosavingSafetyIsChecked;
	char advisoryAutosavingSafetyIsChecked;
	NSMutableArray* autosavingCheckChangeCounts;
	char autosavingSafetyCheckingIsDisabled;
	char autosavingCheckingIsDisabledForScripting;
	char autosavingCheckingIsDisabledForSaving;
	char automaticDuplicateIsChecked;
	char needsAutomaticDuplicate;
	/*^block*/id autosavingCheckWaiter;
	NSPointerArray* editors;
	char waitingForEditorCommiting;
	/*^block*/id editorCommittingWaiter;
	char disabledSuddenTermination;
	NSSavePanel* savePanel;
	NSTimer* autosavingTimer;
	char isAutosavingBecauseOfTimer;
	char autosavingIsImplicitlyCancellable;
	NSURL* autosavedContentsFileURL;
	char autosavingPeriodicallyIsDisabled;
	id eventMonitor;
	double firstUnsavedChangeTime;
	double lastUnsavedChangeTime;
	unsigned long long fileContentsPreservationReason;
	NSString* fileContentsComment;
	id temporaryVersionStorageIdentifier;
	char hasPreservedVersionInTemporaryStorage;
	double lastPreservationTime;
	NSFileVersion* versionWithoutRecentChanges;
	char versionWithoutRecentChangesIsNotLastOpened;
	NSFileVersion* lastOpenedVersion;
	NSFileVersion* previousSavedVersion;
	char scheduledCleanupOldVersions;
	long long cleanupOldVersionsDisableCount;
	dispatch_queue_sRef previousSavedVersionLookupQueue;
	char previousSavedVersionIsChecked;
	NSFileVersion* mostRecentPreservedVersion;
	CFSetRef javaVariantMethodsBeingInvoked;
	NSError* javaLastError;
	char updateFileWrapperNamesDuringWriting;
	NSURL* originalContentsURLDuringWriting;
	NSConditionLock* userInteractionLock;
	NSFileVersion* oldVersion;
	NSDocument* originalDocument;
	char savingWhileClosing;
	unsigned autoID;
	char ignoreUndoAndRedoNotifications;
	char isHandlingConflicts;
	char conflictHandlingSheetIsUp;
	char didUpdateAfterReverting;
	unsigned long long autosaveElsewhereReason;
	NSError* mostRecentAutosavingError;
	char hasPresentedMostRecentAutosavingError;
	long long diskFullRecoveryAttempts;
	char isWaitingForWriter;
	NSURL* newFileURL;
	char didChange;
	char didBecomeDisconnected;
	NSURL* backupFileURL;
	NSError* temporaryVersionStorageRequirementError;
	char shouldSkipTemporaryVersionStorageAlert;
	char userClickedDontSaveInLastRunSavePanel;
	char isDraft;
	char isDuplicate;
	char suppressWindowTitleDisplayNameEmbellishment;
	char isAutoDuplicate;
	char isAutoDuplicateFromEmailAttachment;
	NSURL* originalDocumentURL;
	NSURL* autoDuplicateOriginalDocumentURL;
	char isAutosaveAsDisabled;
	char readInitialContents;
	NSArray* nonModalErrors;
	NSMetadataQuery* ubiquitousQuery;
	long long versionsButtonTransactionCount;
	char showAutosaveButton;
	NSArray* tagNames;
	char suppressSettingFileIsDraft;
	char needToReleaseSecurityScope;
	unsigned recentDocumentID;

}

@property (assign) unsigned recentDocumentID; 
-(id)description;
-(unsigned)recentDocumentID;
-(void)setRecentDocumentID:(unsigned)arg1 ;
@end

