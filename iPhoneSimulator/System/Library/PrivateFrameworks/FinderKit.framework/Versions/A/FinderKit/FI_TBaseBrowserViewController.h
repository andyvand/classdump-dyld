/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:22 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_TViewController.h>
#import <FinderKit/NSDraggingSource.h>
#import <FinderKit/NSSharingServiceDelegate.h>
#import <FinderKit/NSSharingServicePickerDelegate.h>
#import <FinderKit/TBrowserViewDelegateProtocol.h>
#import <FinderKit/TDropOperationDelegateProtocol.h>
#import <FinderKit/TNodeTaskDelegateProtocol.h>
#import <FinderKit/TQLPreviewWindowControllerProtocol.h>
#import <FinderKit/TTypeSelectDelegate.h>
#import <FinderKit/TValidatorClientProtocol.h>

@class TSpringController, FI_TNodeViewSettings, NSString;

@interface FI_TBaseBrowserViewController : FI_TViewController <NSDraggingSource, NSSharingServiceDelegate, NSSharingServicePickerDelegate, TBrowserViewDelegateProtocol, TDropOperationDelegateProtocol, TNodeTaskDelegateProtocol, TQLPreviewWindowControllerProtocol, TTypeSelectDelegate, TValidatorClientProtocol> {

	TNSRef<FI_TNodeViewSettings *> _viewSettings;
	BOOL _showIconPreview;
	long long _validatorID;
	TSpringController* _springController;
	TriStateBool _allowsDraggingFilesIn;
	TRef<__CFMachPort *, TRetainReleasePolicy<CFMachPortRef> >* _modifierFlagsEventMonitor;
	TRef<__CFRunLoopSource *, TRetainReleasePolicy<CFRunLoopSourceRef> >* _modifierFlagsEventSource;

}

@property (retain) FI_TNodeViewSettings * viewSettings; 
@property (assign,nonatomic) BOOL showIconPreview;                                 //@synthesize showIconPreview=_showIconPreview - In the implementation block
@property (nonatomic,readonly) unsigned long long selectedNodesCount; 
@property (nonatomic,retain) TSpringController * springController;                 //@synthesize springController=_springController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(TTypeSelectController*)typeSelectControllerWithDelegate:(id)arg1 ;
-(void)browserViewDidMoveToWindow;
-(void)browserViewWillMoveToWindow:(id)arg1 ;
-(void)selectNodesNowOrLater:(const TFENodeVector*)arg1 ;
-(long long)validatorID;
-(void)initCommon;
-(void)viewLoaded;
-(BOOL)isBackupBrowser;
-(const TFENodeVector*)resolvedTargetPath;
-(void)setSelectedNodes:(const TFENodeVector*)arg1 byExtendingSelection:(BOOL)arg2 ;
-(void)revealNodes:(const TFENodeVector*)arg1 select:(BOOL)arg2 ;
-(BOOL)isTimeMachineBrowser;
-(unsigned long long)getTargetSelection:(TFENodeVector*)arg1 includeTarget:(BOOL)arg2 upTo:(unsigned long long)arg3 ;
-(void)deselectAllNodes;
-(BOOL)startEditingWithNode:(const TFENode*)arg1 renameOp:(id)arg2 ;
-(unsigned long long)getSelectedNodes:(TFENodeVector*)arg1 ;
-(void)selectAllNodes;
-(void)cmdQuickLook:(id)arg1 ;
-(void)cmdOpenParent:(id)arg1 ;
-(void)updatePreviewPanel;
-(void)getQuickLookNodes:(TFENodeVector*)arg1 ;
-(BOOL)quickLookHandleEvent:(id)arg1 ;
-(CGRect)globalZoomRectForNode:(const TFENode*)arg1 ;
-(id)zoomImageForNode:(const TFENode*)arg1 contentRect:(CGRect*)arg2 ;
-(id)quickLookSharedPreviewViewForPreviewNode:(const TFENode*)arg1 ;
-(void)openQuickLookNode:(const TFENode*)arg1 ;
-(void)stopEditing:(BOOL)arg1 ;
-(void)aboutToTearDown;
-(BOOL)handleUnicodeTextInput:(id)arg1 atTime:(double)arg2 ;
-(TFENode*)typeSelectNodeAtIndex:(unsigned long long)arg1 ;
-(long long)typeSelectIndexForNode:(const TFENode*)arg1 ;
-(unsigned long long)typeSelectNodeCount;
-(void)typeSelectNode:(const TFENode*)arg1 ;
-(unsigned long long)typeSelectGetSelectedNodes:(TFENodeVector*)arg1 ;
-(id)browserView;
-(id)beginDraggingNodes:(const TFENodeVector*)arg1 mouseDownEvent:(id)arg2 ;
-(FI_TNodeViewSettings *)viewSettings;
-(unsigned long long)getSelectedNodes:(TFENodeVector*)arg1 upTo:(unsigned long long)arg2 ;
-(BOOL)shouldTypeSelectForEvent:(id)arg1 withCurrentSearchString:(id)arg2 ;
-(BOOL)inBrowseMode;
-(CGRect)frameForNode:(const TFENode*)arg1 ;
-(BOOL)isDesktopBrowser;
-(BOOL)showIconPreview;
-(CGRect)iconFrameForNode:(const TFENode*)arg1 ;
-(BOOL)canHaveRedundantReplicaNodes;
-(void)openPreviewPanelInFullScreen:(BOOL)arg1 ;
-(void)updateSTFEditorLocation;
-(BOOL)validateShare:(id)arg1 ;
-(void)flushNodeEvents;
-(void)syncWithNodeEvents;
-(void)openSelection;
-(unsigned long long)selectedNodesCount;
-(BOOL)validateKeepArrangedBy:(id)arg1 ;
-(BOOL)validateDuplicate:(id)arg1 ;
-(BOOL)validateMoveToTrash:(id)arg1 ;
-(BOOL)validateDeleteFromICloud:(id)arg1 ;
-(unsigned long long)getCommandTarget:(SEL)arg1 outNodes:(TFENodeVector*)arg2 upTo:(unsigned long long)arg3 ;
-(BOOL)validateRemoveTag:(id)arg1 ;
-(unsigned long long)getCommandTarget:(SEL)arg1 outNodes:(TFENodeVector*)arg2 ;
-(void)cmdRemoveTag:(id)arg1 ;
-(BOOL)handleValidateEditTags:(id)arg1 ;
-(void)handleCmdEditTags:(id)arg1 ;
-(BOOL)handleKeyDown:(id)arg1 currentKey:(unsigned short*)arg2 ;
-(void)openSelectionWithModifiers:(unsigned long long)arg1 allowTabs:(BOOL)arg2 ;
-(BOOL)validateSelectAll:(id)arg1 ;
-(BOOL)validateDeselectAll:(id)arg1 ;
-(BOOL)startEditingNodeNowOrLater:(const TFENode*)arg1 renameOp:(id)arg2 ;
-(CGSize)dragFlockingFrameSizeForDropTargetView:(id)arg1 ;
-(id)dragFlockingImageComponentsForNode:(const TFENode*)arg1 dropTargetView:(id)arg2 ;
-(BOOL)allowsDraggingToMoveFilesOut;
-(void)setShowIconPreview:(BOOL)arg1 ;
-(unsigned long long)dragOperationWhenMovingInsideTargetAndCheckingModifiers;
-(TFENode*)nodeAtPoint:(const CGPoint*)arg1 includeTarget:(BOOL)arg2 ;
-(BOOL)checkForTEFFilesInContainer:(const TFENode*)arg1 ;
-(BOOL)handleQuickLookWithEvent:(id)arg1 ;
-(void)titleOfNode:(const TFENode*)arg1 didChangeTo:(id)arg2 renameOp:(id)arg3 ;
-(void)updateDraggingItemsForDrag:(id)arg1 dropTargetView:(id)arg2 ;
-(unsigned long long)draggingEntered:(id)arg1 dropTargetView:(id)arg2 ;
-(void)draggingExited:(id)arg1 dropTargetView:(id)arg2 ;
-(void)draggingEnded:(id)arg1 dropTargetView:(id)arg2 ;
-(void)setAlwaysVisibleNode:(const TFENode*)arg1 ;
-(TFENode*)nextTypeSelectNode:(const TFENodeVector*)arg1 ;
-(TSpringController *)springController;
-(char)performDragOperation:(id)arg1 dropTargetView:(id)arg2 ;
-(CGRect)popoverFrameForNode:(const TFENode*)arg1 ;
-(BOOL)validateArrange:(id)arg1 ;
-(void)cmdKeepArrangedBy:(id)arg1 ;
-(void)addOffsetSpatialDataFromNodes:(const TFENodeVector*)arg1 toPropertyList:(vector<TFENodePropertyList, std::__1::allocator<TFENodePropertyList> >*)arg2 ;
-(void)prepareSnapToGridForUpcomingItems;
-(void)addSpatialDataForLocationInView:(const CGPoint*)arg1 toPropertyList:(TFENodePropertyList*)arg2 ;
-(CGRect)zoomRectForNode:(const TFENode*)arg1 ;
-(unsigned long long)getSelectedNodesForQuickLook:(TFENodeVector*)arg1 includeTarget:(BOOL)arg2 upTo:(unsigned long long)arg3 ;
-(void)clearTypeSelectBuffer;
-(unsigned long long)getSelectedNodesInFocus:(TFENodeVector*)arg1 upTo:(unsigned long long)arg2 ;
-(TriStateBool)includeTargetForCommandSelector:(SEL)arg1 ;
-(void)cmdMoveToTrash:(id)arg1 ;
-(void)cmdDeleteFromICloud:(id)arg1 ;
-(void)handleMoveToTrashCommand:(const TFENodeVector*)arg1 ;
-(unsigned long long)selectedNodesCountInFocus;
-(TFENode*)focusNode;
-(void)setViewSettings:(FI_TNodeViewSettings *)arg1 ;
-(void)shareWithSharingService:(id)arg1 ;
-(void)cmdNewFolderAtMouseLocation:(id)arg1 ;
-(void)cmdDuplicate:(id)arg1 ;
-(void)cmdSetLabel:(id)arg1 ;
-(void)cmdShare:(id)arg1 ;
-(void)becomeActiveQLWindowController;
-(BOOL)isActiveQLWindowController;
-(void)updateDraggedTypesForModifiers:(unsigned long long)arg1 ;
-(void)resignActiveQLWindowController;
-(void)tearDownModifierFlagsMonitor;
-(unsigned long long)getSelectedNodesInFocus:(TFENodeVector*)arg1 ;
-(BOOL)typeSelectEvent:(const TString*)arg1 atTime:(double)arg2 ;
-(void)togglePreviewPanelWithFullScreen:(BOOL)arg1 ;
-(unsigned long long)getSelectedNodesForQuickLook:(TFENodeVector*)arg1 includeTarget:(BOOL)arg2 ;
-(BOOL)filterQuickLookNodes:(const TFENodeVector*)arg1 originalNodes:(TFENodeVector*)arg2 nodesToPreview:(TFENodeVector*)arg3 allowFolders:(BOOL)arg4 ;
-(void)closePreviewPanel;
-(CGRect)dragFlockingFrameForNode:(const TFENode*)arg1 dropTargetView:(id)arg2 ;
-(void)setAllowsDraggingFilesIn:(BOOL)arg1 ;
-(id)draggedTypesForDropTargetView:(id)arg1 ;
-(TFENode*)nodeForDraggingItem:(id)arg1 ;
-(CGRect)dragFlockingFrameForDraggingItem:(id)arg1 dropTargetView:(id)arg2 mouseLocationInView:(const CGPoint*)arg3 ;
-(BOOL)getSelectionForServices:(TFENodeVector*)arg1 ;
-(void)cmdNewFolder:(id)arg1 ;
-(void)cmdDeselectAll:(id)arg1 ;
-(void)handleDuplicateCommand:(const TFENodeVector*)arg1 exactly:(BOOL)arg2 ;
-(void)handleMoveToTrashOrPutBackCommand:(const TFENodeVector*)arg1 ;
-(TFENode*)wellPositionedNodeFromNodes:(const TFENodeVector*)arg1 ;
-(BOOL)handleValidateOpen:(const TFENodeVector*)arg1 ;
-(BOOL)commonValidateOpen:(id)arg1 ;
-(BOOL)validateOpenParentCommon:(id)arg1 ;
-(void)selectContextMenuTargetNodes;
-(void)cmdSetLabel0:(id)arg1 ;
-(void)commonSetLabel:(long long)arg1 ;
-(void)commonRemoveLabel:(long long)arg1 ;
-(void)prepareSnapToGridForNode:(const TFENode*)arg1 ;
-(BOOL)commonValidateNewFolder:(id)arg1 ;
-(void)cmdNewFolderCommon:(const TFENodeVector*)arg1 createBurnFolder:(BOOL)arg2 createAtMouseLoc:(BOOL)arg3 ;
-(BOOL)focusedOnSearchResults;
-(unsigned long long)getTargetSelection:(TFENodeVector*)arg1 includeTarget:(BOOL)arg2 ;
-(BOOL)isTypeSelectInProgressWithTime:(double)arg1 ;
-(void)cmdShareFromToolbarItem:(id)arg1 ;
-(CGRect)globalFrameForNode:(const TFENode*)arg1 ;
-(CGRect)globalIconFrameForNode:(const TFENode*)arg1 ;
-(BOOL)validateRemoveAllTags:(id)arg1 ;
-(void)cmdRemoveAllTags:(id)arg1 ;
-(BOOL)validateOpen:(id)arg1 ;
-(BOOL)validateOpenParent:(id)arg1 ;
-(BOOL)validateQuickLook:(id)arg1 ;
-(void)cmdArrange:(id)arg1 ;
-(BOOL)validateSetLabel:(id)arg1 ;
-(void)cmdSetLabel1:(id)arg1 ;
-(void)cmdSetLabel2:(id)arg1 ;
-(void)cmdSetLabel3:(id)arg1 ;
-(void)cmdSetLabel4:(id)arg1 ;
-(void)cmdSetLabel5:(id)arg1 ;
-(void)cmdSetLabel6:(id)arg1 ;
-(void)cmdSetLabel7:(id)arg1 ;
-(void)cmdSetTagColor:(id)arg1 ;
-(void)cmdRemoveLabel1:(id)arg1 ;
-(void)cmdRemoveLabel2:(id)arg1 ;
-(void)cmdRemoveLabel3:(id)arg1 ;
-(void)cmdRemoveLabel4:(id)arg1 ;
-(void)cmdRemoveLabel5:(id)arg1 ;
-(void)cmdRemoveLabel6:(id)arg1 ;
-(void)cmdRemoveLabel7:(id)arg1 ;
-(BOOL)newFolderCompletedCallback:(const TFENode*)arg1 createdBurnableFolder:(BOOL)arg2 newFolderOp:(id)arg3 ;
-(BOOL)validateNewFolder:(id)arg1 ;
-(BOOL)validateNewFolderAtMouseLocation:(id)arg1 ;
-(void)setSpringController:(TSpringController *)arg1 ;
-(const TFENode*)target;
-(id)validRequestorForSendType:(id)arg1 returnType:(id)arg2 ;
-(char)validateMenuItem:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(id)scrollView;
-(unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2 ;
-(void)draggingSession:(id)arg1 endedAtPoint:(CGPoint)arg2 operation:(unsigned long long)arg3 ;
-(char)ignoreModifierKeysForDraggingSession:(id)arg1 ;
-(TString*)searchString;
-(void)windowDidBecomeMain:(id)arg1 ;
-(void)windowDidResignMain:(id)arg1 ;
-(CGRect)sharingService:(id)arg1 sourceFrameOnScreenForShareItem:(id)arg2 ;
-(id)sharingService:(id)arg1 transitionImageForShareItem:(id)arg2 contentRect:(CGRect*)arg3 ;
-(id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long*)arg3 ;
-(id)sharingServicePicker:(id)arg1 delegateForSharingService:(id)arg2 ;
-(BOOL)writeSelectionToPasteboard:(id)arg1 types:(id)arg2 ;
-(unsigned long long)itemCount;
-(void)selectionChanged;
-(void)cmdOpen:(id)arg1 ;
@end

