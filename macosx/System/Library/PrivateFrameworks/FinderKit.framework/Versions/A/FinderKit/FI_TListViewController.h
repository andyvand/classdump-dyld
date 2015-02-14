/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_TBrowserViewController.h>
#import <FinderKit/NSOutlineViewDelegate.h>
#import <FinderKit/NSTableViewDelegate.h>
#import <FinderKit/NSOutlineViewDataSource.h>
#import <FinderKit/NSWindowDelegate.h>
#import <FinderKit/NSMenuDelegate.h>
#import <FinderKit/NSScrollViewDelegate.h>

@class FI_TListTableColumn, NSDateFormatter, NSMutableDictionary, NSString, FI_TListMoreCell, FI_TListNameField, NSMutableArray, FI_TListHeaderRowView;

@interface FI_TListViewController : FI_TBrowserViewController <NSOutlineViewDelegate, NSTableViewDelegate, NSOutlineViewDataSource, NSWindowDelegate, NSMenuDelegate, NSScrollViewDelegate> {

	FI_TListTableColumn* _genericTextColumn;
	FI_TListTableColumn* _genericDateColumn;
	FI_TListTableColumn* _genericNumericColumn;
	NSDateFormatter* _shortDateFormatter;
	NSDateFormatter* _shortDateWithTimeFormatter;
	NSDateFormatter* _mediumDateFormatter;
	NSDateFormatter* _longDateFormatter;
	double _iconSize;
	double _textSize;
	BOOL _showDateModified;
	BOOL _showDateCreated;
	BOOL _showDateLastOpened;
	BOOL _showDateAdded;
	BOOL _showSize;
	BOOL _showKind;
	BOOL _showVersion;
	BOOL _showComments;
	BOOL _showLabel;
	BOOL _useRelativeDates;
	BOOL _calculateAllSizes;
	BOOL _displayingSpotlightAttributes;
	NSMutableDictionary* _columns;
	NSString* _sortColumn;
	FI_TListMoreCell* _moreCell;
	BOOL _recursiveExpansion;
	BOOL _ignoreIncomingCollapses;
	BOOL _updatingColumns;
	BOOL _unbindingViewSettings;
	BOOL _addingItems;
	BOOL _nodesBeingDraggedAreAllAtTheRootLevel;
	BOOL _editing;
	FI_TListNameField* _originalEditedNameField;
	double _floatingHeaderY;
	NSMutableArray* _headerViews;
	set<TFENode, std::__1::less<TFENode>, std::__1::allocator<TFENode> >* _disclosedNodes;
	vector<std::__1::pair<TFENode, TFENode>, std::__1::allocator<std::__1::pair<TFENode, TFENode> > >* _disclosedAliasNodes;
	mutex _disclosedAliasNodesLock;
	FI_TListHeaderRowView* _headerRowView;
	BOOL _showingAnyColorTags;
	BOOL _showingAnyStatusImages;
	BOOL _isResizingColumns;
	unsigned long long _minSizeForExpandedColumns;
	long long _cachedMaximumDepth;

}

@property (assign,nonatomic) FI_TListTableColumn * genericTextColumn;                   //@synthesize genericTextColumn=_genericTextColumn - In the implementation block
@property (assign,nonatomic) FI_TListTableColumn * genericDateColumn;                   //@synthesize genericDateColumn=_genericDateColumn - In the implementation block
@property (assign,nonatomic) FI_TListTableColumn * genericNumericColumn;                //@synthesize genericNumericColumn=_genericNumericColumn - In the implementation block
@property (assign,nonatomic) double iconSize;                                           //@synthesize iconSize=_iconSize - In the implementation block
@property (assign,nonatomic) double textSize;                                           //@synthesize textSize=_textSize - In the implementation block
@property (assign,nonatomic) BOOL showDateModified;                                     //@synthesize showDateModified=_showDateModified - In the implementation block
@property (assign,nonatomic) BOOL showDateCreated;                                      //@synthesize showDateCreated=_showDateCreated - In the implementation block
@property (assign,nonatomic) BOOL showDateLastOpened;                                   //@synthesize showDateLastOpened=_showDateLastOpened - In the implementation block
@property (assign,nonatomic) BOOL showDateAdded;                                        //@synthesize showDateAdded=_showDateAdded - In the implementation block
@property (assign,nonatomic) BOOL showSize;                                             //@synthesize showSize=_showSize - In the implementation block
@property (assign,nonatomic) BOOL showKind;                                             //@synthesize showKind=_showKind - In the implementation block
@property (assign,nonatomic) BOOL showVersion;                                          //@synthesize showVersion=_showVersion - In the implementation block
@property (assign,nonatomic) BOOL showComments;                                         //@synthesize showComments=_showComments - In the implementation block
@property (assign,nonatomic) BOOL showLabel;                                            //@synthesize showLabel=_showLabel - In the implementation block
@property (assign,nonatomic) BOOL useRelativeDates;                                     //@synthesize useRelativeDates=_useRelativeDates - In the implementation block
@property (assign,nonatomic) BOOL calculateAllSizes;                                    //@synthesize calculateAllSizes=_calculateAllSizes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * columns;                             //@synthesize columns=_columns - In the implementation block
@property (nonatomic,retain) NSString * sortColumn; 
@property (nonatomic,readonly) BOOL displayingSpotlightAttributes;                      //@synthesize displayingSpotlightAttributes=_displayingSpotlightAttributes - In the implementation block
@property (assign,nonatomic) BOOL recursiveExpansion;                                   //@synthesize recursiveExpansion=_recursiveExpansion - In the implementation block
@property (assign,nonatomic) BOOL ignoreIncomingCollapses;                              //@synthesize ignoreIncomingCollapses=_ignoreIncomingCollapses - In the implementation block
@property (assign,nonatomic) BOOL updatingColumns;                                      //@synthesize updatingColumns=_updatingColumns - In the implementation block
@property (assign,nonatomic) BOOL addingItems;                                          //@synthesize addingItems=_addingItems - In the implementation block
@property (assign,nonatomic) BOOL nodesBeingDraggedAreAllAtTheRootLevel;                //@synthesize nodesBeingDraggedAreAllAtTheRootLevel=_nodesBeingDraggedAreAllAtTheRootLevel - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;                             //@synthesize editing=_editing - In the implementation block
@property (nonatomic,retain) FI_TListNameField * originalEditedNameField;               //@synthesize originalEditedNameField=_originalEditedNameField - In the implementation block
@property (assign,nonatomic) double floatingHeaderY;                                    //@synthesize floatingHeaderY=_floatingHeaderY - In the implementation block
@property (nonatomic,retain) FI_TListHeaderRowView * headerRowView;                     //@synthesize headerRowView=_headerRowView - In the implementation block
@property (assign,nonatomic) BOOL showingAnyColorTags; 
@property (assign,nonatomic) BOOL showingAnyStatusImages; 
@property (assign,nonatomic) BOOL isResizingColumns;                                    //@synthesize isResizingColumns=_isResizingColumns - In the implementation block
@property (assign,nonatomic) unsigned long long minSizeForExpandedColumns;              //@synthesize minSizeForExpandedColumns=_minSizeForExpandedColumns - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)sortColumn;
-(void)setSortColumn:(NSString *)arg1 ;
-(void)removeGroups:(const TFENodeVector*)arg1 ;
-(void)browserViewWillMoveToWindow:(id)arg1 ;
-(double)textSize;
-(void)viewLoaded;
-(void)setTopBarMirrorView:(id)arg1 ;
-(id)postProcessOperationOfKind:(int)arg1 forContainer:(const TFENode*)arg2 ;
-(void)setSelectedNodes:(const TFENodeVector*)arg1 byExtendingSelection:(BOOL)arg2 ;
-(void)revealNodes:(const TFENodeVector*)arg1 select:(BOOL)arg2 ;
-(void)folderContentChanged:(const FolderContentChangeDescriptor*)arg1 ;
-(void)spotlightAttrSyncComplete:(const TGroupedNodes*)arg1 forContainer:(const TFENode*)arg2 withOperation:(id)arg3 ;
-(void)deselectAllNodes;
-(BOOL)containsNode:(const TFENode*)arg1 ;
-(BOOL)startEditingWithNode:(const TFENode*)arg1 renameOp:(id)arg2 ;
-(void)selectAllNodes;
-(void)cmdArrangeByName:(id)arg1 ;
-(void)stopEditing:(BOOL)arg1 ;
-(void)aboutToTearDown;
-(void)adjustFormatterForColumn:(id)arg1 ;
-(void)visibilityForColumnDidChange:(id)arg1 to:(BOOL)arg2 ;
-(BOOL)openContainer:(const TFENode*)arg1 ;
-(BOOL)closeContainer:(const TFENode*)arg1 ;
-(TFENode*)typeSelectNodeAtIndex:(unsigned long long)arg1 ;
-(long long)typeSelectIndexForNode:(const TFENode*)arg1 ;
-(unsigned long long)typeSelectNodeCount;
-(void)invalidateThumbnailForKeyNodes:(const TFENodeVector*)arg1 ;
-(CGRect)thumbnailFrameForNode:(const TFENode*)arg1 ;
-(void)syncOnActivateIfRemoteTarget;
-(unsigned long long)getSelectedNodes:(TFENodeVector*)arg1 upTo:(unsigned long long)arg2 ;
-(void)getVisibleNodes:(TFENodeVector*)arg1 ;
-(BOOL)nodeIsSelected:(const TFENode*)arg1 ;
-(CGImageRef)createRestoreImageForNode:(const TFENode*)arg1 outRect:(CGRect*)arg2 ;
-(CGRect)frameForNode:(const TFENode*)arg1 ;
-(TFENode*)thumbnailTargetNodeForNode:(const TFENode*)arg1 ;
-(CGRect)iconFrameForNode:(const TFENode*)arg1 ;
-(id)initWithDataSource:(id)arg1 andViewSettings:(id)arg2 targetPath:(const TFENodeVector*)arg3 containerController:(id)arg4 ;
-(id)browserViewState;
-(void)restoreBrowserViewState:(id)arg1 ;
-(void)saveScrollPosition;
-(BOOL)shouldSaveAndRestoreScrollDistanceFromTop;
-(CGSize)idealViewSize;
-(CGSize)viewScrollersSize;
-(void)checkForUbquityStatusChange;
-(unsigned long long)indexForNode:(const TFENode*)arg1 ;
-(BOOL)addItems:(const TGroupedNodes*)arg1 forContainer:(const TFENode*)arg2 removeAll:(BOOL)arg3 groupChanges:(TGroupChanges*)arg4 withOperation:(id)arg5 ;
-(BOOL)addItems:(const TFENodeVector*)arg1 forNode:(const TFENode*)arg2 withOperation:(id)arg3 ;
-(BOOL)removeItems:(const TFENodeVector*)arg1 forNode:(const TFENode*)arg2 ;
-(void)reloadDataForContainerNode:(const TFENode*)arg1 ;
-(void)updateSTFEditorLocation;
-(int)updateNeededForNode:(const TFENode*)arg1 property:(unsigned long long)arg2 ;
-(void)reloadNodes:(const TFENodeVector*)arg1 forNode:(const TFENode*)arg2 ;
-(BOOL)updateNodesGroup:(const TGroupedNodes*)arg1 forContainer:(const TFENode*)arg2 groupChanges:(TGroupChanges*)arg3 ;
-(void)registerContainerWithNodeKeyCache:(const TFENode*)arg1 ;
-(void)unregisterContainerWithNodeKeyCache:(const TFENode*)arg1 ;
-(void)sortAllChildrenForNode:(const TFENode*)arg1 collator:(SortCollator*)arg2 reload:(BOOL)arg3 maintainSelection:(BOOL)arg4 ;
-(void)didPerformFirstReload;
-(void)openTarget;
-(void)closeTarget;
-(void)privateBindSettings;
-(void)unbindViewSettings;
-(void)refreshNodeSettings:(BOOL)arg1 ;
-(unsigned long long)selectedNodesCount;
-(BOOL)handleKeyDown:(id)arg1 currentKey:(unsigned short*)arg2 ;
-(id)dragFlockLabelImageForNode:(const TFENode*)arg1 inFrame:(CGRect*)arg2 ;
-(id)dragFlockIconImageForNode:(const TFENode*)arg1 inView:(id)arg2 ;
-(long long)initialFlockingFormation;
-(void)springNowWithNoSpringController;
-(id)menuForColumnHeaders;
-(FI_TListHeaderRowView *)headerRowView;
-(void)startEditingSelectedRow;
-(BOOL)isResizingColumns;
-(unsigned long long)iconToTextGap;
-(BOOL)showingAnyColorTags;
-(void)setShowingAnyColorTags:(BOOL)arg1 ;
-(BOOL)showingAnyStatusImages;
-(void)setShowingAnyStatusImages:(BOOL)arg1 ;
-(BOOL)_setIconSizeNoKVO:(double)arg1 ;
-(BOOL)_setTextSizeNoKVO:(double)arg1 ;
-(BOOL)_setShowIconPreviewNoKVO:(BOOL)arg1 ;
-(id)listView;
-(void)configureScrollView;
-(void)setColumnAutoResizing:(BOOL)arg1 ;
-(void)setRecursiveExpansion:(BOOL)arg1 ;
-(void)setUpdatingColumns:(BOOL)arg1 ;
-(void)setAddingItems:(BOOL)arg1 ;
-(void)localeChanged;
-(void)handleDayChange;
-(void)updateColumnConfiguration;
-(BOOL)isGroupNode:(const TFENode*)arg1 ;
-(id)iconImageForNode:(const TFENode*)arg1 ;
-(double)rowHeightForIconAndText;
-(id)makeCellViewWithIdentifier:(id)arg1 owner:(id)arg2 forNode:(const TFENode*)arg3 ;
-(id)makeNameCellViewForDragImage:(const TFENode*)arg1 ;
-(void)drawDragImageSelectionBubble:(CGRect)arg1 ;
-(id)makeDragImageForNode:(const TFENode*)arg1 includeIcon:(BOOL)arg2 includeText:(BOOL)arg3 outTextFrame:(CGRect*)arg4 ;
-(id)indexSetForNodes:(const TFENodeVector*)arg1 ;
-(BOOL)addingItems;
-(void)reloadColumnWithIdentifier:(id)arg1 ;
-(BOOL)recursiveExpansion;
-(TFENode*)splitNodeGetBrowserIdentity:(const TFENode*)arg1 ;
-(void)expandTopLevelAsNecessary;
-(id)colorForCellColumn:(id)arg1 selected:(BOOL)arg2 key:(BOOL)arg3 forNode:(const TFENode*)arg4 ;
-(BOOL)drawEnabled:(const TFENode*)arg1 ;
-(BOOL)isDateColumn:(id)arg1 ;
-(void)updateViewForRow:(long long)arg1 column:(long long)arg2 columnIdentifier:(id)arg3 property:(unsigned long long)arg4 node:(const TFENode*)arg5 ;
-(void)reloadColumnForNode:(const TFENode*)arg1 matchingProperty:(unsigned long long)arg2 ;
-(BOOL)displayingSpotlightAttributes;
-(BOOL)shouldCloseContainer:(const TFENode*)arg1 ;
-(void)finishAddingItems:(BOOL)arg1 withOperation:(id)arg2 ;
-(TFENode*)splitNodeGetDatasourceIdentity:(const TFENode*)arg1 ;
-(void)highlightAndSetSortIndicator:(id)arg1 ascending:(BOOL)arg2 ;
-(void)configureRowHeight;
-(void)configureIndentation;
-(void)setColumnVisibility:(id)arg1 visible:(BOOL)arg2 ;
-(void)adjustDateStyleFormatForColumn:(id)arg1 ;
-(BOOL)isColumnVisible:(id)arg1 ;
-(BOOL)showSize;
-(void)setShowIconPreview:(BOOL)arg1 ;
-(void)invertSortOrder:(id)arg1 ;
-(void)helperCmdArrangeBy:(id)arg1 ;
-(void)updateCellViewFormattersForColumn:(id)arg1 ;
-(double)longestDateForFormatter:(id)arg1 ;
-(void)adjustKindStyleFormatForColumn:(id)arg1 ;
-(void)adjustSizeStyleFormatForColumn:(id)arg1 ;
-(void)setIsResizingColumns:(BOOL)arg1 ;
-(void)setIsResizing:(BOOL)arg1 column:(id)arg2 ;
-(void)setResizeCursorForColumn:(id)arg1 ;
-(void)updateColumnWidthViewSettings;
-(void)invalidateLayoutForColumn:(id)arg1 ;
-(BOOL)updatingColumns;
-(id)columnSettings;
-(void)addColumnWithName:(id)arg1 withSettings:(id)arg2 ;
-(double)widthForColumn:(id)arg1 ;
-(BOOL)calculateAllSizes;
-(BOOL)shouldDrawDimmedSizeForNode:(const TFENode*)arg1 ;
-(id)dataForNode:(const TFENode*)arg1 identifier:(id)arg2 fromDataSource:(id)arg3 ;
-(id)customColorCellValue:(id)arg1 selected:(BOOL)arg2 key:(BOOL)arg3 forNode:(const TFENode*)arg4 ;
-(void)updateCellTextColor:(id)arg1 column:(id)arg2 row:(long long)arg3 node:(const TFENode*)arg4 ;
-(void)setHeaderRowView:(FI_TListHeaderRowView *)arg1 ;
-(TFENode*)parentForNotificationHelper:(id)arg1 ;
-(long long)maximumDisclosedDepth;
-(void)setMinSizeForExpandedColumns:(unsigned long long)arg1 ;
-(unsigned long long)minSizeForExpandedColumns;
-(void)updateGroupTitleViewIfNeeded;
-(void)configureCellViewOfColumn:(long long)arg1 forRowView:(id)arg2 andNode:(const TFENode*)arg3 ;
-(void)cmdToggleDateModified:(id)arg1 ;
-(void)cmdToggleDateCreated:(id)arg1 ;
-(void)cmdToggleDateLastOpened:(id)arg1 ;
-(void)cmdToggleDateAdded:(id)arg1 ;
-(void)cmdToggleSize:(id)arg1 ;
-(void)cmdToggleVersion:(id)arg1 ;
-(void)cmdToggleKind:(id)arg1 ;
-(void)cmdToggleComments:(id)arg1 ;
-(void)cmdToggleLabels:(id)arg1 ;
-(void)cmdSpotlightAttribute:(id)arg1 ;
-(id)suggestedAttributes;
-(TFENode*)outlineNodeFromItem:(id)arg1 ;
-(id)sizeForNode:(const TFENode*)arg1 sizeAll:(BOOL)arg2 ;
-(id)getTagsStringForNode:(const TFENode*)arg1 ;
-(BOOL)cellUsesCustomColorAppearance:(id)arg1 forNode:(const TFENode*)arg2 ;
-(BOOL)nodesBeingDraggedAreAllAtTheRootLevel;
-(void)removeHeaderView;
-(TFENode*)nodeAtPoint:(const CGPoint*)arg1 includeTarget:(BOOL)arg2 ;
-(void)listViewWillDraw;
-(void)scrollToLeftMargin;
-(CGImageRef)newImageForRow:(long long)arg1 outRect:(CGRect*)arg2 ;
-(BOOL)node:(const TFENode*)arg1 isAChildInViewOfNodes:(const TFENodeVector*)arg2 ;
-(id)visibleColumnIndices;
-(void)setShowDateModified:(BOOL)arg1 ;
-(void)setShowDateCreated:(BOOL)arg1 ;
-(void)setShowDateLastOpened:(BOOL)arg1 ;
-(void)setShowDateAdded:(BOOL)arg1 ;
-(void)setShowSize:(BOOL)arg1 ;
-(void)setShowKind:(BOOL)arg1 ;
-(void)setShowVersion:(BOOL)arg1 ;
-(void)setShowComments:(BOOL)arg1 ;
-(void)setShowLabel:(BOOL)arg1 ;
-(BOOL)shouldCalculateFolderSizes:(const TFENode*)arg1 ;
-(void)setCalculateAllSizes:(BOOL)arg1 ;
-(void)setColumnSettings:(id)arg1 ;
-(BOOL)commonValidateArrangeBy:(id)arg1 ;
-(void)adjustColumnWidthsForLinen;
-(void)resizeColumn:(id)arg1 toWidth:(double)arg2 ;
-(void)resizeColumnFromRight:(id)arg1 withEvent:(id)arg2 ;
-(void)resizeColumn:(id)arg1 withEvent:(id)arg2 ;
-(void)updateCustomCellColorAppearance:(id)arg1 forColumn:(id)arg2 selected:(BOOL)arg3 key:(BOOL)arg4 forNode:(const TFENode*)arg5 ;
-(void)adjustNameColumnWidthForExpansion;
-(BOOL)checkForTEFFilesInContainer:(const TFENode*)arg1 ;
-(FI_TListTableColumn *)genericTextColumn;
-(void)setGenericTextColumn:(FI_TListTableColumn *)arg1 ;
-(FI_TListTableColumn *)genericDateColumn;
-(void)setGenericDateColumn:(FI_TListTableColumn *)arg1 ;
-(FI_TListTableColumn *)genericNumericColumn;
-(void)setGenericNumericColumn:(FI_TListTableColumn *)arg1 ;
-(BOOL)showDateModified;
-(BOOL)showDateCreated;
-(BOOL)showDateLastOpened;
-(BOOL)showDateAdded;
-(BOOL)showKind;
-(BOOL)showVersion;
-(BOOL)showComments;
-(BOOL)showLabel;
-(BOOL)ignoreIncomingCollapses;
-(void)setIgnoreIncomingCollapses:(BOOL)arg1 ;
-(void)setNodesBeingDraggedAreAllAtTheRootLevel:(BOOL)arg1 ;
-(FI_TListNameField *)originalEditedNameField;
-(void)setOriginalEditedNameField:(FI_TListNameField *)arg1 ;
-(double)floatingHeaderY;
-(void)setFloatingHeaderY:(double)arg1 ;
-(TFENode*)nodeAtIndex:(unsigned long long)arg1 ;
-(void)setTextSize:(double)arg1 ;
-(void)handleDoubleClick:(id)arg1 ;
-(NSMutableDictionary *)columns;
-(void)setColumns:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
-(BOOL)isEditing;
-(id)selectedItems;
-(void)reloadData;
-(void)selectAll:(id)arg1 ;
-(void)setDataSource:(id)arg1 ;
-(id)nibName;
-(void)menuNeedsUpdate:(id)arg1 ;
-(double)iconSize;
-(void)setUseRelativeDates:(BOOL)arg1 ;
-(id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3 ;
-(id)outlineView:(id)arg1 rowViewForItem:(id)arg2 ;
-(char)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3 ;
-(char)selectionShouldChangeInOutlineView:(id)arg1 ;
-(char)outlineView:(id)arg1 shouldSelectItem:(id)arg2 ;
-(id)outlineView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2 ;
-(void)outlineView:(id)arg1 didClickTableColumn:(id)arg2 ;
-(void)outlineView:(id)arg1 didDragTableColumn:(id)arg2 ;
-(double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2 ;
-(id)outlineView:(id)arg1 typeSelectStringForTableColumn:(id)arg2 item:(id)arg3 ;
-(char)outlineView:(id)arg1 shouldTypeSelectForEvent:(id)arg2 withCurrentSearchString:(id)arg3 ;
-(char)outlineView:(id)arg1 isGroupItem:(id)arg2 ;
-(double)outlineView:(id)arg1 sizeToFitWidthOfColumn:(long long)arg2 ;
-(char)outlineView:(id)arg1 shouldReorderColumn:(long long)arg2 toColumn:(long long)arg3 ;
-(char)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2 ;
-(void)outlineViewSelectionDidChange:(id)arg1 ;
-(void)outlineViewColumnDidMove:(id)arg1 ;
-(void)outlineViewColumnDidResize:(id)arg1 ;
-(void)outlineViewItemWillExpand:(id)arg1 ;
-(void)outlineViewItemDidExpand:(id)arg1 ;
-(void)outlineViewItemWillCollapse:(id)arg1 ;
-(void)outlineViewItemDidCollapse:(id)arg1 ;
-(long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2 ;
-(id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3 ;
-(char)outlineView:(id)arg1 isItemExpandable:(id)arg2 ;
-(id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3 ;
-(char)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3 ;
-(unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4 ;
-(char)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4 ;
-(void)setEditing:(BOOL)arg1 ;
-(void)setIconSize:(double)arg1 ;
-(void)collapseItem:(id)arg1 collapseChildren:(BOOL)arg2 ;
-(char)outlineView:(id)arg1 shouldAutoExpandItem:(id)arg2 ;
-(unsigned long long)itemCount;
-(BOOL)useRelativeDates;
-(void)didEndScrollInScrollView:(id)arg1 ;
-(unsigned)viewStyle;
@end

