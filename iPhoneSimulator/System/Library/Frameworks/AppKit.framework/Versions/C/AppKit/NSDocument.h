/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:26 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSUIActivityProvider.h>
#import <AppKit/NSFilePresenter.h>
#import <AppKit/NSUserInterfaceValidations.h>

@class NSUserActivity, NSWindow, NSURL, NSString, NSPrintInfo, NSView, NSUndoManager, NSScriptObjectSpecifier, NSDate, NSPrintOperation, NSArray, NSOperationQueue;

@interface NSDocument : NSObject <NSUIActivityProvider, NSFilePresenter, NSUserInterfaceValidations> {

	NSWindow* _window;
	id _windowControllers;
	NSURL* _fileURL;
	NSString* _fileType;
	NSPrintInfo* _printInfo;
	long long _documentReserved;
	NSView* savePanelAccessory;
	id _displayName;
	id _privateData;
	NSUndoManager* _undoManager;
	struct {
		unsigned inClose : 1;
		unsigned hasUndoManager : 1;
		unsigned unused : 1;
		unsigned reconciledToFileName : 1;
		unsigned checkingDisplayName : 1;
		unsigned hasInvalidRestorableState : 1;
		unsigned hasEverHadInvalidRestorableState : 1;
		unsigned RESERVED : 25;
	}  _docFlags;
	NSString* _savePanelSaveType;

}

@property (copy) NSString * lastComponentOfFileName; 
@property (readonly) NSScriptObjectSpecifier * objectSpecifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSUserActivity * userActivity; 
@property (copy) NSString * fileType; 
@property (copy) NSURL * fileURL; 
@property (copy) NSDate * fileModificationDate; 
@property (getter=isDraft) char draft; 
@property (getter=isEntireFileLoaded,readonly) char entireFileLoaded; 
@property (readonly) char autosavingIsImplicitlyCancellable; 
@property (readonly) char keepBackupFile; 
@property (copy,readonly) NSURL * backupFileURL; 
@property (readonly) char shouldRunSavePanelWithAccessoryView; 
@property (readonly) char fileNameExtensionWasHiddenInLastRunSavePanel; 
@property (copy,readonly) NSString * fileTypeFromLastRunSavePanel; 
@property (readonly) char hasUnautosavedChanges; 
@property (copy,readonly) NSString * autosavingFileType; 
@property (copy) NSURL * autosavedContentsFileURL; 
@property (getter=isLocked,readonly) char locked; 
@property (copy) NSPrintInfo * printInfo; 
@property (readonly) NSPrintOperation * PDFPrintOperation; 
@property (getter=isDocumentEdited,readonly) char documentEdited; 
@property (getter=isInViewingMode,readonly) char inViewingMode; 
@property (retain) NSUndoManager * undoManager; 
@property (assign) char hasUndoManager; 
@property (copy,readonly) NSString * windowNibName; 
@property (copy,readonly) NSArray * windowControllers; 
@property (copy,readonly) NSString * displayName; 
@property (readonly) NSWindow * windowForSheet; 
@property (copy,readonly) NSURL * presentedItemURL; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
+(char)_url:(id)arg1 matchesURL:(id)arg2 ;
+(void)initialize;
+(char)_autosavesInPlace;
+(void)_something:(id)arg1 wasPresentedWithResult:(long long)arg2 soContinue:(/*^block*/id)arg3 ;
+(id)_fileModificationDateForURL:(id)arg1 ;
+(id)_tagNamesForURL:(id)arg1 ;
+(char)_preservesVersions;
+(char)_hasOverrideForSelector:(SEL)arg1 ;
+(void)_alertSheetDidOrderOnScreen:(id)arg1 ;
+(char)_presentsVersionsUserInterface;
+(id)_backupFileNameForURL:(id)arg1 ;
+(void)_finishWritingToURL:(id)arg1 withTemporaryDirectoryURL:(id)arg2 newContentsURL:(id)arg3 afterSuccess:(char)arg4 ;
+(id)_attributesOfItemAtURL:(id)arg1 ;
+(void)_setAttributes:(id)arg1 ofItemAtURL:(id)arg2 ;
+(void)_setTagNames:(id)arg1 forURL:(id)arg2 ;
+(char)_autosavesDrafts;
+(char)autosavesInPlace;
+(char)_usesICloudDocumentLibrary;
+(char)_canTryToOverrideAutosavingSafetyConcern:(long long)arg1 ;
+(id)_errorDescriptionForAutosavingSafetyConcern:(long long)arg1 presentableFileName:(id)arg2 ;
+(id)_errorFailureReasonForAutosavingSafetyConcern:(long long)arg1 ;
+(char)_fileIsOldEnoughToQuestionAutosavingAtURL:(id)arg1 ;
+(char)_autosavingIsQuestionableAtURL:(id)arg1 errorInfo:(id*)arg2 ;
+(void)_autosavingTimerDidFireSoContinue:(id)arg1 ;
+(id)_uniqueAutosavedContentsURLWithFileNameExtension:(id)arg1 ;
+(char)preservesVersions;
+(char)autosavesDrafts;
+(void)_parseBaseDraftName:(id*)arg1 number:(long long*)arg2 fromDisplayName:(id)arg3 ;
+(void)_parseBaseName:(id*)arg1 number:(long long*)arg2 fromDisplayName:(id)arg3 ;
+(id)_directoryURLForNewDocuments;
+(id)_fileURLForNewDocumentWithBaseName:(id)arg1 extension:(id)arg2 isDuplicate:(char)arg3 number:(long long*)arg4 unique:(char)arg5 directoryURL:(id)arg6 ;
+(char)_parseName:(id*)arg1 number:(long long*)arg2 fromDisplayName:(id)arg3 withTemplate:(id)arg4 ;
+(id)_nonSandboxedURLForURL:(id)arg1 ;
+(char)_isURL:(id)arg1 containedByURL:(id)arg2 ;
+(char)_conflictsExistForFileAtURL:(id)arg1 ;
+(id)_willPresentConflictResolutionError:(id)arg1 ;
+(void)_resolveConflictsForDocument:(id)arg1 atURL:(id)arg2 byKeepingVersions:(id)arg3 otherVersions:(id)arg4 currentVersion:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
+(void)_handleConflictsForDocument:(id)arg1 atURL:(id)arg2 modalForWindow:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(char)usesUbiquitousStorage;
+(char)_isICloudEnabled;
+(void)_presentNameConflictAlertForURL:(id)arg1 window:(id)arg2 thenContinue:(/*^block*/id)arg3 ;
+(id)_errorDescriptionForUnlockingFailureWithUnderlyingError:(id)arg1 presentableFileName:(id)arg2 ;
+(id)_errorFailureReasonForUnlockingFailureWithUnderlyingError:(id)arg1 ;
+(id)_destinationURLForRenamingItemAtURL:(id)arg1 directoryURL:(id)arg2 displayName:(id)arg3 fileType:(id)arg4 proposedName:(id)arg5 fallbackExtension:(id)arg6 outFileName:(id*)arg7 extensionHidden:(char*)arg8 error:(id*)arg9 ;
+(char)_stillObservesWillCloseUndoGroup;
+(long long)_bucketForNonModalErrorCode:(long long)arg1 ;
+(id)_sortedNonModalErrors:(id)arg1 ;
+(id)writableTypes;
+(char)isNativeType:(id)arg1 ;
+(char)canConcurrentlyReadDocumentsOfType:(id)arg1 ;
+(id)_debuggingInformationForFileCoordination;
+(long long)_autosavingSafetyConcernForURL:(id)arg1 ignoringAutolocking:(char)arg2 ;
+(id)_errorForAutosavingSafetyConcern:(long long)arg1 displayName:(id)arg2 userInfo:(id)arg3 ;
+(char)_validateDraftDocumentName:(id)arg1 ;
+(void)_handleConflictsForDocumentAtURL:(id)arg1 modalForWindow:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(char)_validateDuplicateDocumentName:(id)arg1 withOriginalName:(id)arg2 ;
+(id)readableTypes;
+(char)_isJavaSubclass;
+(char)_hasJavaOverrideForInitializerSelector:(SEL)arg1 ;
+(id)restorableStateKeyPaths;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)relinquishPresentedItemToReader:(/*^block*/id)arg1 ;
-(void)relinquishPresentedItemToWriter:(/*^block*/id)arg1 ;
-(void)savePresentedItemChangesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)presentedItemDidMoveToURL:(id)arg1 ;
-(void)presentedItemDidChange;
-(void)presentedItemDidGainVersion:(id)arg1 ;
-(void)presentedItemDidLoseVersion:(id)arg1 ;
-(void)presentedItemDidResolveConflictVersion:(id)arg1 ;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(void)invalidateRestorableState;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)restoreStateWithCoder:(id)arg1 ;
-(void)_updateSuddenTermination;
-(void)_updateTitleForMenuItem:(id)arg1 originalTitle:(id)arg2 ;
-(void)saveDocument:(id)arg1 ;
-(void)saveDocumentAs:(id)arg1 ;
-(void)saveDocumentTo:(id)arg1 ;
-(void)revertDocumentToSaved:(id)arg1 ;
-(void)runPageLayout:(id)arg1 ;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(char)validateMenuItem:(id)arg1 ;
-(char)presentError:(id)arg1 ;
-(id)willPresentError:(id)arg1 ;
-(void)_something:(id)arg1 wasPresentedWithResult:(long long)arg2 soContinue:(/*^block*/id)arg3 ;
-(void)close;
-(void)presentError:(id)arg1 modalForWindow:(id)arg2 delegate:(id)arg3 didPresentSelector:(SEL)arg4 contextInfo:(void*)arg5 ;
-(void)makeWindowControllers;
-(void)showWindows;
-(id)handlePrintScriptCommand:(id)arg1 ;
-(NSScriptObjectSpecifier *)objectSpecifier;
-(NSArray *)windowControllers;
-(NSUndoManager *)undoManager;
-(id)_topEditor;
-(void)objectDidBeginEditing:(id)arg1 ;
-(void)objectDidEndEditing:(id)arg1 ;
-(NSUserActivity *)userActivity;
-(void)_becomeCurrentUserActivityIfNecessary;
-(void)updateUserActivityState:(id)arg1 ;
-(void)userActivityWasContinued:(id)arg1 ;
-(void)restoreUserActivityState:(id)arg1 ;
-(void)_didRestoreUserActivity:(id)arg1 ;
-(void)_cleanUpUserActivity;
-(void)setUserActivity:(NSUserActivity *)arg1 ;
-(void)_setNeedsToReleaseSecurityScope:(char)arg1 ;
-(unsigned)recentDocumentID;
-(void)setRecentDocumentID:(unsigned)arg1 ;
-(NSDate *)fileModificationDate;
-(char)autosavingIsImplicitlyCancellable;
-(NSURL *)autosavedContentsFileURL;
-(NSURL *)backupFileURL;
-(char)isDraft;
-(NSString *)displayName;
-(void)_releaseUndoManager;
-(void)setWindow:(id)arg1 ;
-(void)setFileType:(NSString *)arg1 ;
-(char)_initWithType:(id)arg1 error:(id*)arg2 ;
-(void)setFileURL:(NSURL *)arg1 ;
-(void)setFileModificationDate:(NSDate *)arg1 ;
-(void)_setTagNames:(id)arg1 ;
-(char)readFromURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(char)isInViewingMode;
-(void)_setFileContentsDeservesPreservingForReason:(unsigned long long)arg1 ;
-(void)_checkAutosavingAndUpdateLockedState;
-(void)_readFileIsDraft;
-(id)initWithContentsOfFile:(id)arg1 ofType:(id)arg2 ;
-(char)_initWithContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(void)setAutosavedContentsFileURL:(NSURL *)arg1 ;
-(void)updateChangeCount:(unsigned long long)arg1 ;
-(char)_initForURL:(id)arg1 withContentsOfURL:(id)arg2 ofType:(id)arg3 error:(id*)arg4 ;
-(id)_oldVersion;
-(id)_originalDocument;
-(NSURL *)fileURL;
-(id)_displayNameForURL:(id)arg1 ;
-(void)_setDisplayName:(id)arg1 ;
-(char)_reconcileDisplayNameAndTrackingInfoToFileURL;
-(void)_synchronizeWindowTitles;
-(void)_updateTemporaryVersionStorageState;
-(void)_updateUbiquitousQuery;
-(void)_clearNonModalErrorForBucket:(long long)arg1 ;
-(void)_setShowAutosaveButton:(char)arg1 ;
-(void)setFileName:(id)arg1 ;
-(void)_setFileURL:(id)arg1 ;
-(id)fileName;
-(void)performSynchronousFileAccessUsingBlock:(/*^block*/id)arg1 ;
-(id)writableTypesForSaveOperation:(unsigned long long)arg1 ;
-(NSWindow *)windowForSheet;
-(void)_presentAlertWithPrimaryMessage:(id)arg1 secondaryMessage:(id)arg2 firstButtonLabel:(id)arg3 isDefault:(char)arg4 alternateButtonLabel:(id)arg5 otherButtonLabel:(id)arg6 ignoreAccidentalEvents:(char)arg7 showSuppressionButton:(char)arg8 thenContinue:(/*^block*/id)arg9 ;
-(void)_beginNextActivity;
-(/*^block*/id)_activityCompletionHandlerForActivity:(id)arg1 ;
-(void)continueAsynchronousWorkOnMainThreadUsingBlock:(/*^block*/id)arg1 ;
-(void)_enqueueActivity:(id)arg1 ;
-(void)_cancelAllActivitiesAndFinishAsynchronously:(char*)arg1 ;
-(void)_processActivity:(id)arg1 blockingMainThread:(char)arg2 ;
-(void)performActivityWithSynchronousWaiting:(char)arg1 usingBlock:(/*^block*/id)arg2 cancellationHandler:(/*^block*/id)arg3 ;
-(void)_beginNextFileAccess;
-(/*^block*/id)_fileAccessCompletionHandlerWithToken:(id)arg1 ;
-(void)_addFileAccessWaiter:(/*^block*/id)arg1 synchronous:(char)arg2 ;
-(void)continueFileAccessUsingBlock:(/*^block*/id)arg1 ;
-(char)_isFileAccessContinuing;
-(void)_performFileAccessOnMainThread:(char)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_continueCurrentFileAccessDuringBlock:(/*^block*/id)arg1 ;
-(char)isEntireFileLoaded;
-(NSString *)fileType;
-(char)revertToContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(void)_updateAfterRevertingToContentsOfOwnFileURL:(id)arg1 ofType:(id)arg2 ;
-(void)_discardEditing;
-(char)_revertToContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(void)_coordinateReadingContentsAndReturnError:(id*)arg1 byAccessor:(/*^block*/id)arg2 ;
-(id)_willPresentRevertingError:(id)arg1 ;
-(void)_presentError:(id)arg1 thenContinue:(/*^block*/id)arg2 ;
-(void)_willChangePersistentVersions;
-(char)_preserveCurrentVersionForReason:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)_scheduleCleanupOldVersions;
-(void)_recordPreviousSaveDateForVersion:(id)arg1 ;
-(void)_didChangePersistentVersions;
-(char)isClosed;
-(void)_presentAlertWithPrimaryMessage:(id)arg1 secondaryMessage:(id)arg2 defaultButtonLabel:(id)arg3 alternateButtonLabel:(id)arg4 otherButtonLabel:(id)arg5 ignoreAccidentalEvents:(char)arg6 thenContinue:(/*^block*/id)arg7 ;
-(void)_commitEditingThenContinue:(/*^block*/id)arg1 ;
-(void)performActivityWithSynchronousWaiting:(char)arg1 usingBlock:(/*^block*/id)arg2 ;
-(char)_unlockAndReturnError:(id*)arg1 ;
-(char)_revertToVersion:(id)arg1 preservingFirst:(char)arg2 error:(id*)arg3 ;
-(void)_revertToChosenVersion:(id)arg1 thenContinue:(/*^block*/id)arg2 ;
-(void)_checkShouldRevertToChosenVersionThenContinue:(/*^block*/id)arg1 ;
-(char)hasRecentChanges;
-(char)_revertToDiscardRecentChangesPreservingFirst:(char)arg1 error:(id*)arg2 ;
-(void)_browseVersions;
-(id)_previousSavedVersion;
-(id)_versionForTag:(long long)arg1 ;
-(void)_revertToVersionForTag:(long long)arg1 thenContinue:(/*^block*/id)arg2 ;
-(char)_canRevertToDiscardRecentChanges;
-(void)_revertToDiscardRecentChangesOrBrowseVersions:(char)arg1 thenContinue:(/*^block*/id)arg2 ;
-(char)_canRevertToSaved;
-(void)_revertToSavedThenContinue:(/*^block*/id)arg1 ;
-(char)isDocumentEdited;
-(char)_fileContentsDeservesPreserving;
-(id)_preserveContentsOfURL:(id)arg1 forURL:(id)arg2 reason:(unsigned long long)arg3 comment:(id)arg4 options:(unsigned long long)arg5 error:(id*)arg6 ;
-(char)_preserveFileContentsIfNecessaryAndReturnError:(id*)arg1 ;
-(char)hasUnautosavedChanges;
-(NSString *)autosavingFileType;
-(id)fileNameExtensionForType:(id)arg1 saveOperation:(unsigned long long)arg2 ;
-(id)_temporaryVersionStorageIdentifier;
-(char)writeSafelyToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 error:(id*)arg4 ;
-(void)_resetMoveAndRenameSensing;
-(void)_deleteAutosavedContents;
-(void)_setAutosavingError:(id)arg1 presented:(char)arg2 ;
-(char)revertToSavedFromFile:(id)arg1 ofType:(id)arg2 ;
-(char)hasUndoManager;
-(id)_invokeJavaOverrideForSelector:(SEL)arg1 withErrorAndOtherArguments:(id*)arg2 ;
-(char)readFromFile:(id)arg1 ofType:(id)arg2 ;
-(char)readFromFileWrapper:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(char)loadFileWrapperRepresentation:(id)arg1 ofType:(id)arg2 ;
-(char)readFromData:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(char)loadDataRepresentation:(id)arg1 ofType:(id)arg2 ;
-(char)writeToFile:(id)arg1 ofType:(id)arg2 ;
-(id)fileWrapperOfType:(id)arg1 error:(id*)arg2 ;
-(id)fileWrapperRepresentationOfType:(id)arg1 ;
-(void)unblockUserInteraction;
-(id)dataOfType:(id)arg1 error:(id*)arg2 ;
-(id)dataRepresentationOfType:(id)arg1 ;
-(char)_canUseVersionBackupFileOptimization;
-(char)_finishWritingToURL:(id)arg1 byMovingItemAtURL:(id)arg2 addingAttributes:(id)arg3 error:(id*)arg4 ;
-(char)_finishWritingToURL:(id)arg1 byTakingContentsFromItemAtURL:(id)arg2 addingAttributes:(id)arg3 usingTemporaryDirectoryAtURL:(id)arg4 backupFileName:(id)arg5 error:(id*)arg6 ;
-(char)fileNameExtensionWasHiddenInLastRunSavePanel;
-(id)_presentableFileNameForSaveOperation:(unsigned long long)arg1 url:(id)arg2 ;
-(char)keepBackupFile;
-(void)performAsynchronousFileAccessUsingBlock:(/*^block*/id)arg1 ;
-(char)writeToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 originalContentsURL:(id)arg4 error:(id*)arg5 ;
-(id)tagNamesFromLastRunSavePanel;
-(id)_tagNames;
-(id)fileAttributesToWriteToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 originalContentsURL:(id)arg4 error:(id*)arg5 ;
-(char)_shouldSetTagsForSaveOperation:(unsigned long long)arg1 ;
-(char)_shouldSetDraftAttributeForSaveOperation:(unsigned long long)arg1 ;
-(void)_setFileAtURL:(id)arg1 isDraft:(char)arg2 ;
-(char)_finishWritingToURL:(id)arg1 byTakingContentsFromItemAtURL:(id)arg2 replacingOriginalItemAtURL:(id)arg3 addingAttributes:(id)arg4 usingTemporaryDirectoryAtURL:(id)arg5 backupFileName:(id)arg6 error:(id*)arg7 ;
-(void)_cleanupBackupFileAtURL:(id)arg1 ;
-(id)_recoverableVariantOfOverwritingError:(id)arg1 forOperation:(unsigned long long)arg2 url:(id)arg3 type:(id)arg4 temporaryDirectoryURL:(id)arg5 newContentsURL:(id)arg6 writer:(/*^block*/id)arg7 ;
-(char)_writeSafelyToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 forceTemporaryDirectory:(char)arg4 error:(id*)arg5 ;
-(char)writeWithBackupToFile:(id)arg1 ofType:(id)arg2 saveOperation:(unsigned long long)arg3 ;
-(char)_writeSafelyToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 error:(id*)arg4 ;
-(char)writeToFile:(id)arg1 ofType:(id)arg2 originalFile:(id)arg3 saveOperation:(unsigned long long)arg4 ;
-(char)writeToURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(char)_fileNameExtensionAttributesIsOverridden;
-(id)fileAttributesToWriteToFile:(id)arg1 ofType:(id)arg2 saveOperation:(unsigned long long)arg3 ;
-(id)_fileAttributesToWriteToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 originalContentsURL:(id)arg4 error:(id*)arg5 ;
-(void)saveDocumentWithDelegate:(id)arg1 didSaveSelector:(SEL)arg2 contextInfo:(void*)arg3 ;
-(void)runModalSavePanelForSaveOperation:(unsigned long long)arg1 delegate:(id)arg2 didSaveSelector:(SEL)arg3 contextInfo:(void*)arg4 ;
-(void)_handleDocumentFileChanges:(id)arg1 ;
-(void)_presentAlertForFileOverwritten:(char)arg1 moved:(char)arg2 renamed:(char)arg3 inTrash:(char)arg4 orUnavailable:(char)arg5 thenSave:(/*^block*/id)arg6 saveAs:(/*^block*/id)arg7 orCancel:(/*^block*/id)arg8 ;
-(char)_shouldAutomaticallyDuplicate;
-(void)_something:(id)arg1 didSomething:(char)arg2 soContinue:(/*^block*/id)arg3 ;
-(void)continueActivityUsingBlock:(/*^block*/id)arg1 ;
-(void)saveToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 delegate:(id)arg4 didSaveSelector:(SEL)arg5 contextInfo:(void*)arg6 ;
-(void)_checkForFileChangesThenSave:(/*^block*/id)arg1 saveAs:(/*^block*/id)arg2 orCancel:(/*^block*/id)arg3 ;
-(void)_checkAutosavingIgnoringSafetyChecksThenContinue:(/*^block*/id)arg1 ;
-(void)_commitEditingWithDelegate:(id)arg1 didSomethingSelector:(SEL)arg2 contextInfo:(void*)arg3 thenContinue:(/*^block*/id)arg4 ;
-(id)_fileNameExtensionsForType:(id)arg1 forUseInSavePanel:(char)arg2 ;
-(void)_setSaveType:(id)arg1 ;
-(id)_allowedTypesFromSavePanelType;
-(id)_defaultFromWritableTypeNames:(id)arg1 ;
-(char)shouldRunSavePanelWithAccessoryView;
-(id)_savePanelAccessoryViewForWritableTypes:(id)arg1 defaultType:(id)arg2 ;
-(char)_isAutoDuplicate;
-(char)_isAutoDuplicateFromEmailAttachment;
-(id)_originalDisplayName;
-(char)_isDuplicate;
-(id)_originalDocumentURL;
-(id)fileNameFromRunningSavePanelForSaveOperation:(unsigned long long)arg1 ;
-(long long)runModalSavePanel:(id)arg1 withAccessoryView:(id)arg2 ;
-(void)saveToFile:(id)arg1 saveOperation:(unsigned long long)arg2 delegate:(id)arg3 didSaveSelector:(SEL)arg4 contextInfo:(void*)arg5 ;
-(id)_preparedSavePanelForOperation:(unsigned long long)arg1 ;
-(id)_defaultDirectoryURLForSaveOperation:(unsigned long long)arg1 ;
-(char)prepareSavePanel:(id)arg1 ;
-(void)_setFileNameExtensionWasHiddenInLastRunSavePanel:(char)arg1 ;
-(void)_setTagNamesFromLastRunSavePanel:(id)arg1 ;
-(NSString *)fileTypeFromLastRunSavePanel;
-(void)_setFileTagNames:(id)arg1 ;
-(void)_unsetFileNameExtensionWasHiddenInLastRunSavePanel;
-(char)isLocked;
-(void)unlockWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)autosaveWithImplicitCancellability:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)saveToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_fileCoordinator:(id)arg1 coordinateReadingContentsAndWritingItemAtURL:(id)arg2 byAccessor:(/*^block*/id)arg3 ;
-(void)_disablePeriodicAutosaving;
-(id)duplicateAndReturnError:(id*)arg1 ;
-(void)_coordinateReadingContentsAndWritingItemAtURL:(id)arg1 byAccessor:(/*^block*/id)arg2 ;
-(void)_coordinateReadingContentsAndWritingItemAtURL:(id)arg1 error:(id*)arg2 byAccessor:(/*^block*/id)arg3 ;
-(unsigned long long)_currentFileSize;
-(void)willNotPresentError:(id)arg1 ;
-(void)_attemptToFreeDiskSpace;
-(id)_silentlyRecoverableVariantOfDiskFullError:(id)arg1 resaver:(/*^block*/id)arg2 ;
-(char)canAsynchronouslyWriteToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 ;
-(char)saveToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 error:(id*)arg4 ;
-(void)_discontinueFileAccessUsingBlock:(/*^block*/id)arg1 ;
-(id)_silentlyRecoverableVariantOfSavingError:(id)arg1 resaver:(/*^block*/id)arg2 ;
-(void)_finishSavingToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 changeCount:(id)arg4 ;
-(void)_finishPreservingAfterSavingForSaveOperation:(unsigned long long)arg1 freshlyPreservedVersion:(id)arg2 ;
-(id)_willPresentSavingError:(id)arg1 withURL:(id)arg2 ofType:(id)arg3 forOperation:(unsigned long long)arg4 recoveryContinuer:(/*^block*/id)arg5 ;
-(id)changeCountTokenForSaveOperation:(unsigned long long)arg1 ;
-(void)_preserveVersionAfterWritingToURL:(id)arg1 forSaveOperation:(unsigned long long)arg2 byMovingBackupFileAtURL:(id)arg3 version:(id*)arg4 ;
-(id)_autoDuplicateOriginalDocumentURL;
-(void)_setAutoDuplicateOriginalDocumentURL:(id)arg1 ;
-(int)_preservationActionAfterSaveOperation:(unsigned long long)arg1 ;
-(char)_canAsynchronouslyPreserveVersionAfterWriting;
-(char)_preserveContentsIfNecessaryAfterWriting:(char)arg1 toURL:(id)arg2 forSaveOperation:(unsigned long long)arg3 version:(id*)arg4 error:(id*)arg5 ;
-(char)_canAsynchronouslyWriteToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 ;
-(void)_blockUserInteraction;
-(void)_waitForUserInteractionUnblocking;
-(void)_didUnblockUserInteraction;
-(char)_checkFileModificationDateBeforeSavingToURL:(id)arg1 saveOperation:(unsigned long long)arg2 ;
-(id)_errorForOverwrittenFileWithSaver:(/*^block*/id)arg1 ;
-(void)_fileCoordinator:(id)arg1 asynchronouslyCoordinateReadingContentsAndWritingItemAtURL:(id)arg2 byAccessor:(/*^block*/id)arg3 ;
-(char)_windowsShouldDisplayDocumentShowsPanel;
-(void)setDraft:(char)arg1 ;
-(void)_beginVersionsButtonUpdates;
-(void)updateChangeCountWithToken:(id)arg1 forSaveOperation:(unsigned long long)arg2 ;
-(void)_endVersionsButtonUpdates;
-(void)_enablePeriodicAutosaving;
-(void)_updateWindowControllersWithShowsPanelOnClose:(char)arg1 ;
-(void)_clearNonModalErrorsForSaveOperation:(unsigned long long)arg1 ;
-(long long)_autosavingPossibilityConcern;
-(id)_errorForAutosavingSafetyConcern:(long long)arg1 allowingDuplicate:(char)arg2 userInfo:(id)arg3 ;
-(char)_checkAutosavingPossibilityAndReturnError:(id*)arg1 ;
-(char)checkAutosavingPossibilityAndReturnError:(id*)arg1 ;
-(char)checkAutosavingSafetyAndReturnError:(id*)arg1 ;
-(char)_canDisplayDocumentPopovers;
-(id)_makeNonModalErrorOfType:(long long)arg1 underlyingError:(id)arg2 ;
-(void)_addNonModalError:(id)arg1 ;
-(double)autosavingDelay;
-(char)needsAutosaveAsDraft;
-(id)_autosavingError;
-(void)_rescheduleAutosaving;
-(void)scheduleAutosaving;
-(void)autosaveDocumentWithDelegate:(id)arg1 didAutosaveSelector:(SEL)arg2 contextInfo:(void*)arg3 ;
-(void)_autosaveDocumentWithDelegate:(id)arg1 didAutosaveSelector:(SEL)arg2 implicitCancellability:(char)arg3 contextInfo:(void*)arg4 ;
-(char)_isPeriodicAutosavingEnabled;
-(double)_autosavingDelay;
-(void)_scheduleAutosavingAfterDelay:(double)arg1 reset:(char)arg2 ;
-(void)_autosaveDocumentBecauseOfTimerWithCancellability:(char)arg1 ;
-(char)_isBeingEdited;
-(char)_shouldModallyPresentAutosavingError:(id)arg1 ;
-(char)_allUnautosavedChangesAreDiscardable;
-(id)_fileURLForNewDocumentWithFileSystemUniquing:(char)arg1 customDirectoryURL:(id)arg2 ;
-(char)_canNonModallyPresentAutosavingError:(id)arg1 ;
-(void)_setFileIsDraft:(char)arg1 ;
-(id)_draftHashForName:(id)arg1 ;
-(char)hasExplicitChanges;
-(char)_canImplicitlySaveDocument;
-(id)defaultDraftName;
-(char)_isEmailAttachment;
-(char)_isOtherWellKnownAttachment;
-(char)editingShouldAutomaticallyDuplicate;
-(id)_displayNameForDuplicating;
-(void)_setOriginalDisplayName:(id)arg1 ;
-(void)_setDuplicate:(char)arg1 ;
-(void)_setAutoDuplicate:(char)arg1 ;
-(void)_setAutoDuplicateFromEmailAttachment:(char)arg1 ;
-(unsigned long long)_autosaveElsewhereReason;
-(void)moveDocumentWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)runModalMovePanelWithDelegate:(id)arg1 didMoveSelector:(SEL)arg2 contextInfo:(void*)arg3 ;
-(void)_ensureDocumentIsUnlockedForMoveOrRenameThenContinue:(/*^block*/id)arg1 ;
-(id)_willPresentMovingError:(id)arg1 ;
-(void)moveToURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_moveToURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_preparedMovePanel;
-(char)prepareMovePanel:(id)arg1 ;
-(id)_openPanelForOtherInMovePanel:(id)arg1 ;
-(void)_runModalOpenPanel:(id)arg1 thenContinue:(/*^block*/id)arg2 ;
-(void)moveDocument:(id)arg1 ;
-(void)renameDocument:(id)arg1 ;
-(void)unlockDocument:(id)arg1 ;
-(void)lockDocument:(id)arg1 ;
-(void)_commonSetCurrentStateForTitlebarPopoverViewBridgeInfo:(id)arg1 ;
-(id)_nonModalError;
-(id)_replacementTypeForSaveAsInsteadOfMoveToURL:(id)arg1 modifiedURL:(id*)arg2 hideExtension:(char*)arg3 ;
-(id)_recoverableRenameFileError:(id)arg1 proposedName:(id)arg2 destinationURL:(id)arg3 retryRenamer:(/*^block*/id)arg4 renameCanceler:(/*^block*/id)arg5 ;
-(void)_presentAlertWithPrimaryMessage:(id)arg1 secondaryMessage:(id)arg2 firstButtonLabel:(id)arg3 isDefault:(char)arg4 alternateButtonLabel:(id)arg5 otherButtonLabel:(id)arg6 ignoreAccidentalEvents:(char)arg7 thenContinue:(/*^block*/id)arg8 ;
-(void)_setTemporaryVersionStorageIdentifier:(id)arg1 ;
-(id)_lastSavedVersion;
-(id)_lastOpenedVersion;
-(char)_canRevertToVersionForTag:(long long)arg1 ;
-(void)_cleanupOldVersions:(id)arg1 keepingVersions:(id)arg2 ;
-(void)_doCleanupOldVersions;
-(void)_deleteAllVersions;
-(void)_versionWasDeleted:(id)arg1 ;
-(void)_presentErrors:(id)arg1 thenContinue:(/*^block*/id)arg2 ;
-(void)_saveIfNecessaryWithDelegate:(id)arg1 didSaveSelector:(SEL)arg2 contextInfo:(void*)arg3 ;
-(char)_isHandlingConflicts;
-(void)_setHandlingConflicts:(char)arg1 ;
-(void)_ubiquitousQueryUpdate:(id)arg1 ;
-(void)_cleanupUbiquitousQuery;
-(char)canCloseDocument;
-(void)canCloseDocumentWithDelegate:(id)arg1 shouldCloseSelector:(SEL)arg2 contextInfo:(void*)arg3 ;
-(char)_needsTemporaryVersionStorageWarning;
-(id)_errorDescriptionForTemporaryVersionStorageWarning;
-(void)_setShouldSkipTemporaryVersionStorageAlert;
-(void)duplicateDocumentWithDelegate:(id)arg1 didDuplicateSelector:(SEL)arg2 contextInfo:(void*)arg3 ;
-(void)_setSuppressWindowTitleDisplayNameEmbellishment:(char)arg1 ;
-(char)_shouldSaveDuplicateNextToOriginalWithUserEnteredName:(char)arg1 ;
-(char)_cancelTitleEditing;
-(void)lockDocumentWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setLocked:(char)arg1 ;
-(void)_updateDocumentEditedAndAnimate:(char)arg1 ;
-(void)lockWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)unlockDocumentWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_checkAutosavingThenContinue:(/*^block*/id)arg1 ;
-(id)_errorForUnlockFailureWithUnderlyingError:(id)arg1 ;
-(NSPrintInfo *)printInfo;
-(char)shouldChangePrintInfo:(id)arg1 ;
-(void)setPrintInfo:(NSPrintInfo *)arg1 ;
-(void)runModalPageLayoutWithPrintInfo:(id)arg1 delegate:(id)arg2 didRunSelector:(SEL)arg3 contextInfo:(void*)arg4 ;
-(char)preparePageLayout:(id)arg1 ;
-(void)printDocumentWithSettings:(id)arg1 showPrintPanel:(char)arg2 delegate:(id)arg3 didPrintSelector:(SEL)arg4 contextInfo:(void*)arg5 ;
-(void)printShowingPrintPanel:(char)arg1 ;
-(NSPrintOperation *)PDFPrintOperation;
-(id)printOperationWithSettings:(id)arg1 error:(id*)arg2 ;
-(void)runModalPrintOperation:(id)arg1 delegate:(id)arg2 didRunSelector:(SEL)arg3 contextInfo:(void*)arg4 ;
-(id)_willPresentPrintingError:(id)arg1 ;
-(void)_renameWithProposedName:(id)arg1 grantHandler:(/*^block*/id)arg2 destinationURL:(id)arg3 hideExtensions:(char)arg4 nameChecked:(char)arg5 trashChecked:(char)arg6 overwriteChecked:(char)arg7 completionHandler:(/*^block*/id)arg8 ;
-(long long)_documentUniquingNumber;
-(void)renameToURL:(id)arg1 extensionHidden:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)_documentShowsPanelOnCloseAndIsVisibleInWindow:(char*)arg1 ;
-(long long)_documentEditingState;
-(char)_documentShowsPanelOnClose;
-(void)_updateStateFromEdited:(char)arg1 recentChanges:(char)arg2 ;
-(void)_updateStateFromEdited:(char)arg1 showsPanel:(char)arg2 recentChanges:(char)arg3 ;
-(char)_checkAutosavingAndReturnError:(id*)arg1 ;
-(void)_updateLockedStateWithAutosavingSafetyError:(id)arg1 ;
-(void)_presentError:(id)arg1 ignoreAccidentalEvents:(char)arg2 thenContinue:(/*^block*/id)arg3 ;
-(void)_checkAdvisoryAutosavingSafety;
-(char)_preventEditing;
-(void)_automaticallyDuplicateThenUpdateChangeCount:(unsigned long long)arg1 ;
-(void)_checkAutosavingThenUpdateChangeCount:(unsigned long long)arg1 ;
-(void)_waitForEditorCommittingThenPerformBlock:(/*^block*/id)arg1 ;
-(void)setHasUndoManager:(char)arg1 ;
-(void)_changeWasUndone:(id)arg1 ;
-(void)_changeWasRedone:(id)arg1 ;
-(void)_changeWasDone:(id)arg1 ;
-(void)_changeWillBeDone:(id)arg1 ;
-(void)setUndoManager:(NSUndoManager *)arg1 ;
-(void)_somethingDidSomething:(char)arg1 soContinue:(/*^block*/id)arg2 ;
-(id)_errorUserInfoForNonModalErrorCode:(long long)arg1 underlyingError:(id)arg2 ;
-(char)_shouldShowAutosaveButtonForWindow:(id)arg1 ;
-(void)_updateWindowControllersWithNonModalError:(id)arg1 ;
-(id)_nonModalErrors;
-(void)_setNonModalErrors:(id)arg1 ;
-(NSString *)windowNibName;
-(void)addWindowController:(id)arg1 ;
-(void)removeWindowController:(id)arg1 ;
-(void)_windowsDidShow;
-(void)_handleConflicts;
-(void)_warmupTitlebarPopover;
-(char)shouldCloseWindowController:(id)arg1 ;
-(void)shouldCloseWindowController:(id)arg1 delegate:(id)arg2 shouldCloseSelector:(SEL)arg3 contextInfo:(void*)arg4 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)__setDisplayName:(id)arg1 ;
-(char)_suppressWindowTitleDisplayNameEmbellishment;
-(char)_duplicateHasAutomaticallyChosenName;
-(id)_versionModificationDateForTag:(long long)arg1 ;
-(char)_canSave;
-(void)duplicateDocument:(id)arg1 ;
-(void)_deleteThisVersion:(id)arg1 ;
-(void)_deleteAllVersions:(id)arg1 ;
-(void)browseDocumentVersions:(id)arg1 ;
-(void)moveDocumentToUbiquityContainer:(id)arg1 ;
-(void)_addRevertItemsToMenu:(id)arg1 ;
-(void)_handlePurgingToURL:(id)arg1 ;
-(void)_editor:(id)arg1 didCommit:(char)arg2 soContinue:(/*^block*/id)arg3 ;
-(id)initWithType:(id)arg1 error:(id*)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(id)initForURL:(id)arg1 withContentsOfURL:(id)arg2 ofType:(id)arg3 error:(id*)arg4 ;
-(char)_isExpendableAsUnsavedDocument;
-(char)_isLocatedByURL:(id)arg1 becauseOfAutosavedContentsFile:(char*)arg2 ;
-(void)_something:(id)arg1 didSomethingSoContinue:(/*^block*/id)arg2 ;
-(void)_revertToVersion:(id)arg1 thenContinue:(/*^block*/id)arg2 ;
-(char)isAutosavingCritical;
-(void)_setAutosavingCheckingIsDisabledForScripting:(char)arg1 ;
-(void)changeSaveType:(id)arg1 ;
-(id)tagsFromLastRunSavePanel;
-(void)_handleOtherFromDocumentTitlebarPopoverThenContinue:(/*^block*/id)arg1 ;
-(void)_updateTitlebarPopoverViewBridgeInfo:(id)arg1 ;
-(void)_configureTitlebarPopoverViewBridgeInfo:(id)arg1 ;
-(void)_moveDocumentToURL:(id)arg1 andHideExtension:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_resetTemporaryVersionStorageAlert;
-(void)_ubiquityIdentityChanged;
-(void)_setOriginalDocumentURL:(id)arg1 ;
-(void)printDocument:(id)arg1 ;
-(void)saveDocumentToPDF:(id)arg1 ;
-(id)_printJobTitle;
-(void)renameToDisplayName:(id)arg1 grantHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)prepareRenameSession:(id)arg1 ;
-(void)renameDocumentToURL:(id)arg1 automaticallyChosen:(char)arg2 extensionHidden:(char)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_attemptNonModalErrorRecovery:(id)arg1 ;
-(void)windowControllerWillLoadNib:(id)arg1 ;
-(void)windowControllerDidLoadNib:(id)arg1 ;
-(id)_windowTitleDisplayName;
-(id)_transferWindowOwnership;
-(void)_setDocumentUniquingNumber:(long long)arg1 ;
-(void)_requestViewControllerForDocumentTitlebarPopover:(id)arg1 thenDisplayPopoverUsingBlock:(/*^block*/id)arg2 ;
-(void)_populateRevertToMenu:(id)arg1 ;
-(void)accommodatePresentedItemDisconnectionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)presentedItemDidDisconnect;
-(id)_presentedItemTemporaryVersionStorageIdentifier;
-(id)_bookmarkData;
-(id)_currentFileModificationDate;
-(char)readFromURL:(id)arg1 ofType:(id)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 ofType:(id)arg2 ;
-(void)menuNeedsUpdate:(id)arg1 ;
-(char)revertToSavedFromURL:(id)arg1 ofType:(id)arg2 ;
-(long long)runModalPageLayoutWithPrintInfo:(id)arg1 ;
-(char)writeToURL:(id)arg1 ofType:(id)arg2 ;
-(void)_setJavaLastError:(id)arg1 ;
-(id)_javaLastError;
-(void)restoreDocumentWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_writableTypeForType:(id)arg1 saveOperation:(unsigned long long)arg2 ;
-(id)_writableTypeForFileNameExtension:(id)arg1 saveOperation:(unsigned long long)arg2 ;
-(void)_document:(id)arg1 didSucceed:(char)arg2 forScriptCommand:(id)arg3 ;
-(void)_saveToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 didSaveSelector:(SEL)arg4 scriptCommand:(id)arg5 ;
-(void)_document:(id)arg1 shouldClose:(char)arg2 forScriptCommand:(id)arg3 ;
-(NSString *)lastComponentOfFileName;
-(void)setLastComponentOfFileName:(NSString *)arg1 ;
-(id)handleSaveScriptCommand:(id)arg1 ;
-(id)handleCloseScriptCommand:(id)arg1 ;
-(void)_setHasInvalidRestorableState:(char)arg1 ;
-(char)_hasInvalidRestorableState;
-(char)_hasEverHadInvalidRestorableState;
-(void)_markAsEverHavingInvalidRestorableState;
-(id)_persistentUIIdentifier;
-(id)_copyPersistentUIChildren;
-(void)_encodeObjectIntoRestorableState:(id)arg1 forKey:(id)arg2 ;
-(void)_restorePersistentState:(id)arg1 ;
-(id)_persistentUIEncodedReference;
@end

