/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:31 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSFilePresenter.h>

@class NSDocument, NSWindow, NSArray, NSDocumentRevisionsWindow, NSMutableArray, NSMutableSet, NSOperationQueue, _NSDocumentRevisionsCache, NSFileVersion, NSDocumentRevisionsPlaceholderView, NSString, NSURL;

@interface NSDocumentRevisionsController : NSObject <NSFilePresenter> {

	CGRect oldWindowRect;
	CGRect resizedWindowRect;
	unsigned long long oldWindowMask;
	unsigned long long oldWindowCollectionBehavior;
	long long oldWindowLevel;
	char oldIsMovable;
	unsigned long long oldPresentationOptions;
	char windowWasFullScreen;
	NSDocument* originalDocument;
	NSWindow* originalDocumentWindow;
	NSWindow* revisionWindow;
	NSArray* inspectorWindows;
	long long windowSheetCount;
	char unfocusOriginalAfterSheet;
	char unfocusRevisionAfterSheet;
	char suppressUnfocusingOriginalAfterSheet;
	char revisionWindowWasKey;
	id starfield;
	NSDocumentRevisionsWindow* window;
	unsigned long long currentStackItemIndex;
	NSArray* otherWindowRestorationBlocks;
	char gotBackupVersions;
	char gotNonLocalVersions;
	NSMutableArray* stackItems;
	NSMutableSet* versionSet;
	void* backupCollectionToken;
	char observingRevisions;
	char asyncVersionLookupInProgress;
	long long asyncVersionLookupErrorCode;
	char preloadRevisions;
	NSOperationQueue* asyncDocumentOpeningQueue;
	_NSDocumentRevisionsCache* revisionCache;
	unsigned long long windowFocusState;
	id eventMonitorUninstaller;
	NSMutableArray* transitoryAnimations;
	char ending;
	char preparedForRevert;
	char needToRestoreLiveEnvironment;
	long long outcome;
	unsigned long long options;
	NSFileVersion* revertingToVersion;
	char scheduledCorrectionBlock;
	NSDocumentRevisionsPlaceholderView* _timeMachineStatusPlaceholderView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURL * presentedItemURL; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
+(id)sharedController;
+(void)_hideOverlayScrollersForView:(id)arg1 ;
+(void)_setOverlayScrollersHidden:(char)arg1 forView:(id)arg2 ;
+(void)_setOverlayScrollersHidden:(char)arg1 forWindow:(id)arg2 ;
+(void)_hideOverlayScrollersForWindow:(id)arg1 ;
+(void)doOrderingWithoutAnimationForWindow:(id)arg1 preventScrollerFlashing:(char)arg2 withBlock:(/*^block*/id)arg3 ;
+(id)_windowForDocument:(id)arg1 ;
+(id)_takeScreenshotExcludingWindows:(id)arg1 ;
+(id)_descriptionForRevision:(id)arg1 ;
-(void)dealloc;
-(void)presentedItemDidMoveToURL:(id)arg1 ;
-(void)presentedItemDidGainVersion:(id)arg1 ;
-(void)presentedItemDidLoseVersion:(id)arg1 ;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(char)isVisualizing;
-(void)_something:(id)arg1 wasPresentedWithResult:(long long)arg2 soContinue:(/*^block*/id)arg3 ;
-(id)_originalDocument;
-(void)_checkShouldRevertToChosenVersionThenContinue:(/*^block*/id)arg1 ;
-(void)startVisualizationWithDocument:(id)arg1 options:(unsigned long long)arg2 thenContinue:(/*^block*/id)arg3 ;
-(void)_deleteAllVersions;
-(char)_canDeleteCurrentVersion;
-(id)_currentDocument;
-(void)_something:(id)arg1 didSomethingSoContinue:(/*^block*/id)arg2 ;
-(id)_presentedItemTemporaryVersionStorageIdentifier;
-(char)interceptsWindowClose:(id)arg1 ;
-(void)startDownloadingCurrentVersion:(id)arg1 ;
-(void)_updateAsyncVersionLookupStatus;
-(id)_snapshotOfPlaceholderView:(id)arg1 ;
-(id)_currentStackItem;
-(id)_dictionaryForRevision:(id)arg1 ;
-(void)_loadSnapshotForStackItem:(id)arg1 forceNew:(char)arg2 wait:(char)arg3 thenContinue:(/*^block*/id)arg4 ;
-(id)_acquireDocumentForRevision:(id)arg1 ;
-(void)_relinquishRevision:(id)arg1 ;
-(unsigned long long)_nextRevisionIndexToPreload:(id)arg1 ;
-(void)_preloadNextRevision:(id)arg1 ;
-(void)_preloadRevisionAtIndex:(unsigned long long)arg1 thenContinue:(/*^block*/id)arg2 ;
-(char)_canPreloadRevisions;
-(id)_windowForRevision:(id)arg1 ;
-(void)_willEvictRevision:(id)arg1 ;
-(void)_stopPreloadingRevisions;
-(void)_evictRevision:(id)arg1 ;
-(void)_addRevisionToCache:(id)arg1 ;
-(void)_setDocument:(id)arg1 forRevision:(id)arg2 ;
-(void)_setPreferredSize:(CGSize)arg1 forRevision:(id)arg2 ;
-(void)takeOverWindow:(id)arg1 forRevision:(id)arg2 ;
-(id)_cloudVersionPlaceholderView;
-(void)_startDownloadingStackItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setAsyncVersionLookupInProgress:(char)arg1 forDocument:(id)arg2 ;
-(void)_insertVersions:(id)arg1 ;
-(void)_startPredownloadingNonLocalVersions;
-(void)_setAsyncVersionLookupError:(id)arg1 forDocument:(id)arg2 ;
-(void)endVisualizationThenContinue:(/*^block*/id)arg1 ;
-(id)_versionLoadFailedPlaceholderView;
-(void)_loadDocumentForStackItem:(id)arg1 wait:(char)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_takeSnapshotOfWindow:(id)arg1 withShadow:(char)arg2 shadowOffset:(CGPoint*)arg3 ;
-(id)_snapshotForDocument:(id)arg1 ;
-(void)_requestUIForStackItem:(id)arg1 wait:(char)arg2 thenContinue:(/*^block*/id)arg3 ;
-(void)_startObservingSheetsForWindow:(id)arg1 ;
-(void)_stopObservingSheetsForWindow:(id)arg1 ;
-(id)_focusAnimationForOriginalWindow:(char)arg1 fromState:(int)arg2 toState:(int)arg3 ;
-(void)_showRevisionWindow:(id)arg1 ;
-(CGRect)_resizedOriginalDocumentWindowFrame;
-(CGSize)_preferredSizeForRevision:(id)arg1 ;
-(CGRect)_frameForAnimatingWindowFrame:(CGRect)arg1 toSize:(CGSize)arg2 ;
-(char)_windowHasSheet;
-(void)_endVisualizationAfterDelay;
-(char)_canUnfocusWindow:(id)arg1 ;
-(id)_focusAnimationFromState:(int)arg1 toState:(int)arg2 ;
-(char)_isWindowFocused:(id)arg1 ;
-(void)_sheetWillBegin:(id)arg1 ;
-(void)_sheetDidEnd:(id)arg1 ;
-(void)_focusWindow:(id)arg1 ;
-(void)_unfocusWindow:(id)arg1 ;
-(void)_unfocusWindowAfterSheetIfNecessary:(id)arg1 ;
-(void)_windowDidResize:(id)arg1 ;
-(void)_cleanupVisualizationState;
-(id)_closeDrawers;
-(id)_inspectorWindows;
-(void)_takeStartAnimationTransitionSnapshotsExcludingWindows:(id)arg1 ;
-(id)makeBackstopStackItems;
-(void)_preventWindowCycling;
-(id)_scheduleTransitoryAnimationOfWindow:(id)arg1 startFrame:(CGRect)arg2 endFrame:(CGRect)arg3 startSize:(CGSize)arg4 endSize:(CGSize)arg5 hop:(char)arg6 duration:(double)arg7 ;
-(void)_animateDisplayFadeOut:(char)arg1 ;
-(void)_animateInspectorWindows;
-(void)_installEventTap;
-(void)_startPreloadingRevisions;
-(void)_startIntrusionDetection;
-(void)_startObservingWindowFrameChanges;
-(void)_startAsynchronouslyFetchingVersionsForURL:(id)arg1 ;
-(void)_startTransitoryAnimationsThenContinue:(/*^block*/id)arg1 ;
-(void)_startObservingRevisions;
-(id)_versionsForDocument:(id)arg1 ;
-(char)_prepareForStartAnimation;
-(void)_performStartAnimation;
-(void)_uninstallEventTap;
-(void)_unshiftRevisionWindow;
-(CGRect)_destinationFrameForFinishAnimation;
-(void)_stopObservingRevisions;
-(void)_stopIntrusionDetection;
-(void)_stopObservingWindowFrameChanges;
-(void)_closeAllRevisionDocuments;
-(void)_restoreWindowCycling;
-(CGRect)_destinationFrameForResizeAfterFinishAnimation;
-(void)_restoreLiveEnvironment;
-(void)_updateRevisionCacheCosts;
-(void)discardAnyChangesToOldDocument;
-(void)setCurrentStackItemIndex:(unsigned long long)arg1 ;
-(void)_prepareForFinishAnimationWithOutcome:(long long)arg1 ;
-(void)_performFinishAnimationThenContinue:(/*^block*/id)arg1 ;
-(void)endVisualizationWithOutcome:(long long)arg1 thenContinueAfterAnimation:(/*^block*/id)arg2 ;
-(void)_displayProgressPanelOnWindow:(id)arg1 forDownloadingUbiquitousVersion:(id)arg2 canceller:(/*^block*/id*)arg3 ;
-(char)canGoToNextVersion;
-(void)goToStackItemAtIndex:(unsigned long long)arg1 ;
-(char)canGoToPreviousVersion;
-(void)_doDuplicateRevisionDocument:(id)arg1 thenContinue:(/*^block*/id)arg2 ;
-(void)_handleIntrusion;
-(char)_isKeyWindowAllowed:(id)arg1 ;
-(void)_appDidDeactivate:(id)arg1 ;
-(void)_windowDidBecomeKey:(id)arg1 ;
-(char)_asyncVersionLookupInProgress;
-(long long)_asyncVersionLookupErrorCode;
-(void)_finishedDownloadingNonLocalStackItem:(id)arg1 ;
-(void)cacheWillEvictRevision:(id)arg1 ;
-(void)_hideRevisionWindow;
-(char)_shouldHideTimelineForWindowFocusState:(int)arg1 ;
-(void)_cancelTransitoryAnimations;
-(long long)_outcome;
-(unsigned long long)currentStackItemIndex;
-(void)endVisualization;
-(void)revertToCurrentRevision;
-(void)goToRevisionWillBegin;
-(void)goToRevisionDidEnd;
-(void)goToNextVersion:(id)arg1 ;
-(void)goToPreviousVersion:(id)arg1 ;
-(void)timelineAction:(id)arg1 ;
-(void)duplicateCurrentRevision;
@end

