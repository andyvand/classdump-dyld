/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_TBrowserViewController.h>
#import <FinderKit/FIAliasResolution.h>
#import <FinderKit/NSBrowserDelegate.h>
#import <FinderKit/NSMenuDelegate.h>
#import <FinderKit/AccessibilityProtocol.h>
#import <FinderKit/TNameTextFieldDelegate.h>
#import <FinderKit/TDuplicateTaskDelegateProtocol.h>

@class NSTimer, FI_TColumnPreviewController, NSString;

@interface FI_TColumnViewController : FI_TBrowserViewController <FIAliasResolution, NSBrowserDelegate, NSMenuDelegate, AccessibilityProtocol, TNameTextFieldDelegate, TDuplicateTaskDelegateProtocol> {

	TFENode* _draggingSourceContainer;
	BOOL _selectedItemNeedsPreviewView;
	TNSRef<FI_TColumnPreviewController *> _previewViewController;
	double _textSize;
	BOOL _showIcons;
	BOOL _showPreviewColumn;
	BOOL _configuring;
	BOOL _resizingAllColumns;
	BOOL _forwardKeydownsToNextColumn;
	BOOL _delayedOpening;
	int _arrangeBy;
	TAliasesTargets* _resolvedAliasTable;
	StColumnOptimizer* _optimizer;
	TFENode* _brokenAlias;
	NSTimer* _delayedContainerSynchingTimer;
	TColumnOptimizerContainers* _delayedContainers;
	TColumnPreviewQTEjectHelper* _ejectHelper;
	long long _columnIndexOriginatingDrag;
	BOOL _nextSelectionAllowsRetarget;
	BOOL _settingSelectionPath;

}

@property (assign,nonatomic) double textSize;                                                           //@synthesize textSize=_textSize - In the implementation block
@property (assign,nonatomic) BOOL showIcons;                                                            //@synthesize showIcons=_showIcons - In the implementation block
@property (assign,nonatomic) BOOL showPreviewColumn;                                                    //@synthesize showPreviewColumn=_showPreviewColumn - In the implementation block
@property (assign,nonatomic) BOOL delayedOpening;                                                       //@synthesize delayedOpening=_delayedOpening - In the implementation block
@property (assign,nonatomic) int arrangeBy;                                                             //@synthesize arrangeBy=_arrangeBy - In the implementation block
@property (assign,nonatomic) double preferredColumnWidth; 
@property (nonatomic,retain,readonly) FI_TColumnPreviewController * previewViewController; 
@property (assign,nonatomic) BOOL nextSelectionAllowsRetarget;                                          //@synthesize nextSelectionAllowsRetarget=_nextSelectionAllowsRetarget - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)columnViewDelayBeforeDisplay;
-(void)setGrouping:(BOOL)arg1 ;
-(double)textSize;
-(BOOL)nextSelectionAllowsRetarget;
-(void)setNextSelectionAllowsRetarget:(BOOL)arg1 ;
-(BOOL)trimPath:(const TFENodeVector*)arg1 forNode:(const TFENode*)arg2 ;
-(void)setSelectedNodes:(const TFENodeVector*)arg1 byExtendingSelection:(BOOL)arg2 ;
-(void)revealNodes:(const TFENodeVector*)arg1 select:(BOOL)arg2 ;
-(TBaseNodeComparator*)createComparator:(const TFENode*)arg1 ;
-(TGroupManager*)groupManager:(const TFENode*)arg1 ;
-(void)updatePropertiesForNodes:(const vector<std::__1::pair<TFENode, unsigned int>, std::__1::allocator<std::__1::pair<TFENode, unsigned int> > >*)arg1 inContainerNode:(const TFENode*)arg2 ;
-(void)groupChangedForNodes:(const TFENodeVector*)arg1 inContainerNode:(const TFENode*)arg2 ;
-(void)folderContentChanged:(const FolderContentChangeDescriptor*)arg1 ;
-(void)updateScrollPosition;
-(unsigned long long)getTargetSelection:(TFENodeVector*)arg1 includeTarget:(BOOL)arg2 upTo:(unsigned long long)arg3 ;
-(void)deselectAllNodes;
-(BOOL)containsNode:(const TFENode*)arg1 ;
-(BOOL)startEditingWithNode:(const TFENode*)arg1 renameOp:(id)arg2 ;
-(void)selectAllNodes;
-(void)selectionChangedByUserAction:(BOOL)arg1 ;
-(unsigned long long)getSelectedNodes:(TFENodeVector*)arg1 forContainer:(const TFENode*)arg2 upTo:(unsigned long long)arg3 ;
-(void)cmdArrangeByName:(id)arg1 ;
-(void)cmdArrangeByModDate:(id)arg1 ;
-(void)cmdArrangeByCreationDate:(id)arg1 ;
-(void)cmdArrangeByLastOpenDate:(id)arg1 ;
-(void)cmdArrangeByDateAdded:(id)arg1 ;
-(void)cmdArrangeByPhysicalSize:(id)arg1 ;
-(void)cmdArrangeByKind:(id)arg1 ;
-(void)cmdArrangeByLabel:(id)arg1 ;
-(id)zoomImageForNode:(const TFENode*)arg1 contentRect:(CGRect*)arg2 ;
-(void)alias:(const TFENode*)arg1 resolvedAs:(const TFENode*)arg2 temporaryNode:(const TFENode*)arg3 ;
-(void)stopEditing:(BOOL)arg1 ;
-(void)aboutToTearDown;
-(BOOL)openContainer:(const TFENode*)arg1 ;
-(BOOL)closeContainer:(const TFENode*)arg1 ;
-(TFENode*)typeSelectNodeAtIndex:(unsigned long long)arg1 ;
-(long long)typeSelectIndexForNode:(const TFENode*)arg1 ;
-(unsigned long long)typeSelectNodeCount;
-(void)invalidateThumbnailForKeyNodes:(const TFENodeVector*)arg1 ;
-(CGRect)thumbnailFrameForNode:(const TFENode*)arg1 ;
-(void)computeTargetPathsFor:(const TFENodeVector*)arg1 ;
-(void)sortDataSourceAsynchronously:(BOOL)arg1 revealSelection:(BOOL)arg2 ;
-(void)syncOnActivateIfRemoteTarget;
-(unsigned long long)getSelectedNodes:(TFENodeVector*)arg1 upTo:(unsigned long long)arg2 ;
-(void)getVisibleNodes:(TFENodeVector*)arg1 ;
-(BOOL)nodeIsSelected:(const TFENode*)arg1 ;
-(CGRect)frameForNode:(const TFENode*)arg1 ;
-(id)getCellForNode:(const TFENode*)arg1 ;
-(TFENode*)thumbnailTargetNodeForNode:(const TFENode*)arg1 ;
-(CGRect)iconFrameForNode:(const TFENode*)arg1 ;
-(BOOL)retargetedInternally:(const TFENodeVector*)arg1 ;
-(void)saveTransientViewState;
-(void)restoreTransientViewState;
-(id)initWithDataSource:(id)arg1 andViewSettings:(id)arg2 targetPath:(const TFENodeVector*)arg3 containerController:(id)arg4 ;
-(void)aboutToDestroyBrowserView;
-(id)browserViewState;
-(void)restoreBrowserViewState:(id)arg1 ;
-(BOOL)makeBrowserViewFirstResponder;
-(const TFENode*)browserRoot;
-(void)setTargetPath:(const TFENodeVector*)arg1 ;
-(void)commonPostMouseDown:(id)arg1 ;
-(CGSize)idealViewSize;
-(unsigned long long)indexForNode:(const TFENode*)arg1 ;
-(void)reloadDataForContainerNode:(const TFENode*)arg1 ;
-(void)updateSTFEditorLocation;
-(unsigned long long)itemCountForDelayedPopulation;
-(int)updateNeededForNode:(const TFENode*)arg1 property:(unsigned long long)arg2 ;
-(void)updateNodes:(const TFENodeVector*)arg1 forNode:(const TFENode*)arg2 ;
-(void)reloadNodes:(const TFENodeVector*)arg1 forNode:(const TFENode*)arg2 ;
-(void)openTarget;
-(void)closeTarget;
-(void)privateBindSettings;
-(void)unbindViewSettings;
-(id)viewToCoverForDelayedPopulation;
-(unsigned long long)selectedNodesCount;
-(unsigned long long)getCommandTarget:(SEL)arg1 outNodes:(TFENodeVector*)arg2 upTo:(unsigned long long)arg3 ;
-(BOOL)handleKeyDown:(id)arg1 currentKey:(unsigned short*)arg2 ;
-(CGSize)dragFlockingFrameSizeForDropTargetView:(id)arg1 ;
-(id)dragFlockLabelImageForNode:(const TFENode*)arg1 inFrame:(CGRect*)arg2 inView:(id)arg3 ;
-(id)dragFlockIconImageForNode:(const TFENode*)arg1 inView:(id)arg2 ;
-(void)springNowWithNoSpringController;
-(void)configureRowHeight;
-(void)setShowIconPreview:(BOOL)arg1 ;
-(TFENode*)nodeAtPoint:(const CGPoint*)arg1 includeTarget:(BOOL)arg2 ;
-(void)updateDraggingItemsForDrag:(id)arg1 dropTargetView:(id)arg2 ;
-(TFENode*)nextTypeSelectNode:(const TFENodeVector*)arg1 ;
-(void)setArrangeBy:(int)arg1 ;
-(int)arrangeBy;
-(id)itemAtIndex:(unsigned long long)arg1 inColumn:(long long)arg2 ;
-(TFENode*)nodeAtIndex:(unsigned long long)arg1 inColumn:(long long)arg2 ;
-(BOOL)isGroupRow:(long long)arg1 inColumn:(long long)arg2 ;
-(void)prefetchIconsInRange:(NSRange)arg1 forColumn:(long long)arg2 ;
-(void)dragImage:(id)arg1 offset:(CGSize)arg2 event:(id)arg3 column:(long long)arg4 ;
-(double)iconSizeForColumn:(long long)arg1 ;
-(unsigned long long)indexForNode:(const TFENode*)arg1 inColumn:(long long)arg2 ;
-(unsigned long long)getSelectedNodes:(TFENodeVector*)arg1 inColumn:(long long)arg2 ;
-(TFENode*)containerForColumn:(long long)arg1 ;
-(void)setSelectedItems:(id)arg1 inColumn:(long long)arg2 byExtendingSelection:(BOOL)arg3 ;
-(void)accessibilityPerformAction:(id)arg1 onCell:(id)arg2 ;
-(id)selectedItemsForColumn:(long long)arg1 ;
-(BOOL)showIcons;
-(void)ejectButtonClicked:(id)arg1 ;
-(void)adjustPreviewColumnWidth;
-(long long)lastContainerColumn;
-(void)browser:(id)arg1 willStopUsingItem:(id)arg2 forColumn:(long long)arg3 ;
-(void)browser:(id)arg1 willStartUsingItem:(id)arg2 forColumn:(long long)arg3 ;
-(double)preferredColumnWidth;
-(void)adjustColumnWidthAutomaticallyChanged:(id)arg1 ;
-(void)itemSelection:(id)arg1 ;
-(void)itemDoubleClick:(id)arg1 ;
-(void)columnViewConfigurationDidChange:(id)arg1 ;
-(void)killDelayedContainerSynchingTimer;
-(TFENode*)parentNodeForColumn:(long long)arg1 ;
-(TFENode*)containerNodeForTarget:(const TFENode*)arg1 ;
-(unsigned long long)childrenCountOfNode:(const TFENode*)arg1 ;
-(id)childAtIndex:(long long)arg1 ofColumnContainer:(const TFENode*)arg2 ;
-(void)getNodes:(TFENodeVector*)arg1 fromSet:(id)arg2 forColumn:(long long)arg3 upTo:(unsigned long long)arg4 ;
-(unsigned long long)getSelectedNodes:(TFENodeVector*)arg1 inColumn:(long long)arg2 upTo:(unsigned long long)arg3 ;
-(unsigned long long)getSelectedNodesInFocus:(TFENodeVector*)arg1 upTo:(unsigned long long)arg2 ;
-(TriStateBool)includeTargetForCommandSelector:(SEL)arg1 ;
-(TFENode*)resolvedNodeForTarget:(const TFENode*)arg1 ;
-(void)unwindOpenCloseContainers;
-(BOOL)syncTargetPath:(BOOL)arg1 ;
-(void)delayedContainerSynching:(id)arg1 ;
-(id)columnsForContainer:(const TFENode*)arg1 upToColumn:(long long)arg2 ;
-(StColumnOptimizer*)setOptimizer:(StColumnOptimizer*)arg1 ;
-(BOOL)isPreviewColumn:(long long)arg1 ;
-(long long)columnWithKeyboardFocus;
-(void)setFocusToColumn:(long long)arg1 ;
-(BOOL)shouldShowChildrenForNode:(const TFENode*)arg1 ;
-(unsigned long long)indexForNode:(const TFENode*)arg1 getColumn:(long long*)arg2 ;
-(TFENode*)nodeOrContainerAtIndex:(long long)arg1 inColumn:(long long)arg2 ;
-(void)handleMoveToTrashCommand:(const TFENodeVector*)arg1 ;
-(unsigned long long)itemCountForColumn:(long long)arg1 ;
-(double)variableIconSize;
-(double)computerIconSize;
-(BOOL)shouldDisplayComputerIconsInColumn:(long long)arg1 ;
-(double)calcBaseRowHeightForColumn:(long long)arg1 ;
-(void)enumerateAvailableNameTextFields:(/*^block*/id)arg1 ;
-(BOOL)updateRowHeights;
-(void)sortDataSource;
-(void)reloadLastColumn;
-(void)showDelayedPreview;
-(BOOL)shouldObserveOrUnobserveNode:(const TFENode*)arg1 forColumn:(long long)arg2 ;
-(double)rowHeightForComputerIconAndText;
-(double)rowHeightForVariableIconAndText;
-(void)setPreferredColumnWidth:(double)arg1 ;
-(void)cmdArrangeByHelper:(int)arg1 ;
-(BOOL)syncPathWithColumns:(const TColumnOptimizerContainers*)arg1 delayOpening:(BOOL)arg2 forwardKeydownsToNextColumn:(BOOL)arg3 ;
-(BOOL)isItem:(id)arg1 expandedAtRow:(long long)arg2 column:(long long)arg3 ;
-(unsigned long long)selectedNodesCountInFocus;
-(void)setShowIcons:(BOOL)arg1 ;
-(void)setShowPreviewColumn:(BOOL)arg1 ;
-(BOOL)shouldCloseContainerOnTargetMove:(const TFENode*)arg1 ;
-(TFENode*)focusNode;
-(void)selectionChanged:(id)arg1 inColumn:(long long)arg2 ;
-(BOOL)showPreviewColumn;
-(BOOL)delayedOpening;
-(void)setDelayedOpening:(BOOL)arg1 ;
-(TFENode*)nodeAtIndex:(unsigned long long)arg1 ;
-(void)setTextSize:(double)arg1 ;
-(void)dealloc;
-(long long)lastColumn;
-(double)browser:(id)arg1 shouldSizeColumn:(long long)arg2 forUserResize:(char)arg3 toWidth:(double)arg4 ;
-(double)browser:(id)arg1 sizeToFitWidthOfColumn:(long long)arg2 ;
-(long long)browser:(id)arg1 numberOfChildrenOfItem:(id)arg2 ;
-(id)browser:(id)arg1 child:(long long)arg2 ofItem:(id)arg3 ;
-(char)browser:(id)arg1 isLeafItem:(id)arg2 ;
-(id)browser:(id)arg1 objectValueForItem:(id)arg2 ;
-(id)rootItemForBrowser:(id)arg1 ;
-(id)browser:(id)arg1 previewViewControllerForLeafItem:(id)arg2 ;
-(id)browser:(id)arg1 headerViewControllerForItem:(id)arg2 ;
-(long long)selectedColumn;
-(void)reloadData;
-(void)browserDidScroll:(id)arg1 ;
-(id)browser:(id)arg1 selectionIndexesForProposedSelection:(id)arg2 inColumn:(long long)arg3 ;
-(void)selectAll:(id)arg1 ;
-(char)browser:(id)arg1 shouldTypeSelectForEvent:(id)arg2 withCurrentSearchString:(id)arg3 ;
-(char)browser:(id)arg1 writeRowsWithIndexes:(id)arg2 inColumn:(long long)arg3 toPasteboard:(id)arg4 ;
-(char)browser:(id)arg1 canDragRowsWithIndexes:(id)arg2 inColumn:(long long)arg3 withEvent:(id)arg4 ;
-(char)browser:(id)arg1 shouldAutoExpandItem:(id)arg2 ;
-(unsigned long long)browser:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long*)arg3 column:(long long*)arg4 dropOperation:(unsigned long long*)arg5 ;
-(char)browser:(id)arg1 acceptDrop:(id)arg2 atRow:(long long)arg3 column:(long long)arg4 dropOperation:(unsigned long long)arg5 ;
-(id)columnView;
-(char)browser:(id)arg1 shouldEditItem:(id)arg2 ;
-(double)browser:(id)arg1 heightOfRow:(long long)arg2 inColumn:(long long)arg3 ;
-(FI_TColumnPreviewController *)previewViewController;
-(id)nibName;
-(void)menuNeedsUpdate:(id)arg1 ;
-(const TFENode*)rootNode;
-(long long)focusedColumn;
-(unsigned long long)itemCount;
-(unsigned)viewStyle;
-(TFENode*)currentNode;
@end

