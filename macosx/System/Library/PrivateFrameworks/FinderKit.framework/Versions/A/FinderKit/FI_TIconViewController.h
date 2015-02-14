/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_TBrowserViewController.h>
#import <FinderKit/TInfoExtractorDelegate.h>

@class NSColor, NSImage;

@interface FI_TIconViewController : FI_TBrowserViewController <TInfoExtractorDelegate> {

	double _iconSize;
	double _gridSpacing;
	CGPoint _gridOffset;
	double _textSize;
	BOOL _labelOnBottom;
	BOOL _showItemInfo;
	int _arrangeBy;
	int _backgroundType;
	CGSize _idealViewSizeForZoom;
	TIconViewLayout* _iconLayout;
	BOOL _spatialDataIsDirty;
	BOOL _layoutIsDirty;
	BOOL _applySnapToGrid;
	BOOL _animateOnNextReload;
	CGRect _singleIconBounds;
	NSColor* _backgroundColor;
	NSImage* _backgroundImage;
	long long _maxIconDepth;
	TFENodeVector* _nodesInDropAnimation;
	BOOL _drawingDisabled;
	CGRect _dropTargetFrame;
	unordered_map<TFENode, TFENode, std::__1::hash<TFENode>, std::__1::equal_to<TFENode>, std::__1::allocator<std::__1::pair<const TFENode, TFENode> > >* _draggedNodeToDroppedNodeMap;
	BOOL _performDragOperationResult;
	BOOL _hasNewDocumentButton;
	TNSRef<NSMutableIndexSet *> _indexesBeingDropped;
	TNSRef<FI_TIconViewCellOffscreenRenderer *> _cellRenderer;
	TInfoExtractorController* _infoController;
	unordered_map<TFENode, TNSRef<NSMutableDictionary *>, std::__1::hash<TFENode>, std::__1::equal_to<TFENode>, std::__1::allocator<std::__1::pair<const TFENode, TNSRef<NSMutableDictionary *> > > >* _groupInfo;

}

@property (assign,nonatomic) double iconSize;                                         //@synthesize iconSize=_iconSize - In the implementation block
@property (assign,nonatomic) double gridSpacing;                                      //@synthesize gridSpacing=_gridSpacing - In the implementation block
@property (assign,nonatomic) CGPoint gridOffset;                                      //@synthesize gridOffset=_gridOffset - In the implementation block
@property (assign,nonatomic) double textSize;                                         //@synthesize textSize=_textSize - In the implementation block
@property (assign,nonatomic) BOOL labelOnBottom;                                      //@synthesize labelOnBottom=_labelOnBottom - In the implementation block
@property (assign,nonatomic) BOOL showItemInfo;                                       //@synthesize showItemInfo=_showItemInfo - In the implementation block
@property (assign,nonatomic) int arrangeBy;                                           //@synthesize arrangeBy=_arrangeBy - In the implementation block
@property (assign,nonatomic) int backgroundType;                                      //@synthesize backgroundType=_backgroundType - In the implementation block
@property (nonatomic,retain) NSColor * backgroundColor;                               //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) NSImage * backgroundImage;                               //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,readonly) TInfoExtractorController* infoController;              //@synthesize infoController=_infoController - In the implementation block
+(id)tagImageForNode:(const TFENode*)arg1 selected:(BOOL)arg2 dimmed:(BOOL)arg3 ;
+(BOOL)getThumbnailExtactorDataForxRay:(TThumbnailExtractorData*)arg1 forParentNode:(TFENode*)arg2 childNode:(TFENode*)arg3 preferredSize:(CGSize)arg4 ;
-(double)textSize;
-(void)viewLoaded;
-(void)setTopBarMirrorView:(id)arg1 ;
-(void)calculateSpatialData:(DataBrowserItemSpatialData*)arg1 draggingItem:(id)arg2 forcePlace:(BOOL)arg3 ;
-(id)dropTargetViewForDraggingInfo:(id)arg1 ;
-(void)receivePromiseDragNode:(const TFENode*)arg1 spatialData:(const DataBrowserItemSpatialData*)arg2 ;
-(void)calculatePropertiesWithDrop:(TDropOperation*)arg1 forNode:(const TFENode*)arg2 withPasteboardItem:(void*)arg3 pbItemIndex:(unsigned long long)arg4 inPropertyList:(TFENodePropertyList*)arg5 forcePlace:(BOOL)arg6 applyNow:(BOOL)arg7 ;
-(id)postProcessOperationOfKind:(int)arg1 forContainer:(const TFENode*)arg2 ;
-(void)setSelectedNodes:(const TFENodeVector*)arg1 byExtendingSelection:(BOOL)arg2 ;
-(void)revealNodes:(const TFENodeVector*)arg1 select:(BOOL)arg2 ;
-(TGroupManager*)groupManager:(const TFENode*)arg1 ;
-(void)groupChangedForNodes:(const TFENodeVector*)arg1 inContainerNode:(const TFENode*)arg2 ;
-(void)folderContentChanged:(const FolderContentChangeDescriptor*)arg1 ;
-(void)updateScrollPosition;
-(void)deselectAllNodes;
-(BOOL)startEditingWithNode:(const TFENode*)arg1 renameOp:(id)arg2 ;
-(void)selectAllNodes;
-(id)zoomImageForNode:(const TFENode*)arg1 contentRect:(CGRect*)arg2 ;
-(id)quickLookSharedPreviewViewForPreviewNode:(const TFENode*)arg1 ;
-(void)stopEditing:(BOOL)arg1 ;
-(void)aboutToTearDown;
-(TFENode*)typeSelectNodeAtIndex:(unsigned long long)arg1 ;
-(long long)typeSelectIndexForNode:(const TFENode*)arg1 ;
-(unsigned long long)typeSelectNodeCount;
-(void)invalidateInfoTextForKeyNodes:(const TFENodeVector*)arg1 ;
-(CGRect)infoTextMaxFrameForNode:(const TFENode*)arg1 ;
-(void)cmdSortByDate:(id)arg1 ;
-(void)cmdSortByName:(id)arg1 ;
-(void)cmdSortByTags:(id)arg1 ;
-(void)removeAllNodesInContainer:(const TFENode*)arg1 ;
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
-(TFENode*)settingsNode;
-(void)saveScrollPosition;
-(CGSize)viewScrollersSize;
-(unsigned long long)indexForNode:(const TFENode*)arg1 ;
-(BOOL)addItems:(const TFENodeVector*)arg1 forNode:(const TFENode*)arg2 withOperation:(id)arg3 ;
-(BOOL)removeItems:(const TFENodeVector*)arg1 forNode:(const TFENode*)arg2 ;
-(void)updateSTFEditorLocation;
-(void)noticeGroupChanges:(const TGroupChanges*)arg1 firstPopulation:(BOOL)arg2 ;
-(int)updateNeededForNode:(const TFENode*)arg1 property:(unsigned long long)arg2 ;
-(void)reloadNodes:(const TFENodeVector*)arg1 forNode:(const TFENode*)arg2 ;
-(void)registerContainerWithNodeKeyCache:(const TFENode*)arg1 ;
-(void)unregisterContainerWithNodeKeyCache:(const TFENode*)arg1 ;
-(void)dataSourceDidSortAsynchronously:(BOOL)arg1 ;
-(void)privateBindSettings;
-(void)unbindViewSettings;
-(unsigned long long)selectedNodesCount;
-(BOOL)handleKeyDown:(id)arg1 currentKey:(unsigned short*)arg2 ;
-(void)ensureCGSurfaceUpdateOnDraw:(BOOL)arg1 ;
-(void)getGlobalDragItemBounds:(map<TFENode, CGRect, std::__1::less<TFENode>, std::__1::allocator<std::__1::pair<const TFENode, CGRect> > >*)arg1 forNodes:(const TFENodeVector*)arg2 ;
-(id)dragFlockLabelImageForNode:(const TFENode*)arg1 inFrame:(CGRect*)arg2 ;
-(id)dragFlockSelectionImageForNode:(const TFENode*)arg1 inFrame:(CGRect*)arg2 ;
-(id)indexSetForNodes:(const TFENodeVector*)arg1 ;
-(void)setShowIconPreview:(BOOL)arg1 ;
-(TFENode*)nodeAtPoint:(const CGPoint*)arg1 includeTarget:(BOOL)arg2 ;
-(void)updateDraggingItemsForDrag:(id)arg1 dropTargetView:(id)arg2 ;
-(unsigned long long)draggingEntered:(id)arg1 dropTargetView:(id)arg2 ;
-(void)draggingExited:(id)arg1 dropTargetView:(id)arg2 ;
-(void)imageBrowser:(id)arg1 dragImage:(id)arg2 at:(CGPoint)arg3 offset:(CGSize)arg4 event:(id)arg5 pasteboard:(id)arg6 source:(id)arg7 slideBack:(BOOL)arg8 ;
-(BOOL)shouldDrawNode:(const TFENode*)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)drawingDisabled;
-(void)setAlwaysVisibleNode:(const TFENode*)arg1 ;
-(void)iconViewIconSizeDidStabilize:(id)arg1 ;
-(void)iconViewGridSpacingDidStabilize:(id)arg1 ;
-(CGRect)currentSingleIconBounds;
-(CGSize)currentGridSize;
-(const TFENodeVector*)targetNodes;
-(BOOL)inKeepArrangedMode;
-(void)setLabelOnBottom:(BOOL)arg1 ;
-(void)scrollViewFrameChanged:(id)arg1 ;
-(void)previewPanelDidOpen:(id)arg1 ;
-(void)previewPanelDidClose:(id)arg1 ;
-(BOOL)shouldUseIKFinderMode;
-(void)adjustIconViewAnimationMask;
-(void)writeSpatialDataIfDirty;
-(TFENode*)nextTypeSelectNode:(const TFENodeVector*)arg1 ;
-(BOOL)labelOnBottom;
-(void)setSpatialDataIsDirty;
-(void)writeSpatialData;
-(void)updateFreeFormPositions;
-(void)updateGridAlignment;
-(void)cmdCleanUp:(id)arg1 ;
-(void)setViewSettingsArrangeBy:(int)arg1 ;
-(void)arrangeBy:(int)arg1 ;
-(void)cleanUpBy:(int)arg1 ;
-(BOOL)recalcLayout;
-(void)updateFreeFormLayoutAnimated:(BOOL)arg1 ;
-(void)configurationChangedPreservingLayout:(BOOL)arg1 ;
-(void)setupFreeformArrangement;
-(void)setUpFreeFormLayoutMargins;
-(void)iconViewOptionSliderDidStabilize:(id)arg1 ;
-(void)dirtyLayout;
-(id)currentViewSettings;
-(CGRect)anchoredBoundsForIconCellPart:(int)arg1 withViewSettings:(id)arg2 ;
-(CGRect)anchoredBoundsForIconCellPart:(int)arg1 ;
-(BOOL)shouldAnimateReloadData;
-(void)updateGroupInfo;
-(BOOL)isGroupingByDate;
-(void)raiseZPositionForNodes:(const TFENodeVector*)arg1 ;
-(TFENodeVector*)nodesBeingDropped;
-(void)cacheIndexesBeingDroppedForNodes:(const TFENodeVector*)arg1 ;
-(id)indexesBeingDropped;
-(void)prefetchIcons:(id)arg1 ;
-(TInfoExtractorController*)infoController;
-(id)imageOfCell:(id)arg1 forNode:(const TFENode*)arg2 ofComponents:(int)arg3 iconRelative:(BOOL)arg4 selected:(BOOL)arg5 minimalImage:(BOOL)arg6 inFrame:(CGRect*)arg7 ;
-(id)cellImageForNode:(const TFENode*)arg1 ofComponents:(int)arg2 iconRelative:(BOOL)arg3 selected:(BOOL)arg4 minimalImage:(BOOL)arg5 inFrame:(CGRect*)arg6 ;
-(void)refreshItem:(const TFENode*)arg1 loose:(BOOL)arg2 iconOnly:(BOOL)arg3 ;
-(BOOL)determineSnapToGridState:(TDropOperation*)arg1 ;
-(void)refreshItem:(const TFENode*)arg1 ;
-(void)addItemToSnapFeedbackList:(const TFENode*)arg1 ;
-(void)adjustForOutOfBoundsItems;
-(BOOL)receivePrivateDrag:(TDropOperation*)arg1 draggingInfo:(id)arg2 ;
-(void)cacheIndexesBeingDropped;
-(unsigned long long)draggingUpdated:(id)arg1 dropTargetView:(id)arg2 ;
-(TFENode*)draggingUpdatedCommon:(id)arg1 ;
-(BOOL)getDroppedNodesToTargetsMap:(unordered_map<TFENode, TFENode, std::__1::hash<TFENode>, std::__1::equal_to<TFENode>, std::__1::allocator<std::__1::pair<const TFENode, TFENode> > >*)arg1 ;
-(TFENode*)nodeForDroppedNode:(const TFENode*)arg1 ;
-(char)prepareForDragOperation:(id)arg1 dropTargetView:(id)arg2 ;
-(char)performDragOperation:(id)arg1 dropTargetView:(id)arg2 ;
-(BOOL)receiveDrop:(TDropOperation*)arg1 draggingInfo:(id)arg2 ;
-(BOOL)shouldAnimateDrop;
-(void)updateDraggingItemsForDrop:(id)arg1 ;
-(void)cleanUpDraggingState;
-(void)concludeDragOperation:(id)arg1 dropTargetView:(id)arg2 ;
-(BOOL)finishDropAction;
-(void)clearIndexesBeingDropped;
-(NSRange)imageBrowserRangeForGroup:(unsigned long long)arg1 ;
-(long long)groupStyleHack;
-(id)groupTagImageForNode:(const TFENode*)arg1 ;
-(Class)iconViewClass;
-(CGRect)popoverFrameForNode:(const TFENode*)arg1 ;
-(void)setViewSettingsIconSize:(double)arg1 ;
-(void)setViewSettingsLabelOnBottom:(BOOL)arg1 ;
-(CGSize)cellSizeForIconSize:(double)arg1 ;
-(void)setGridOffset:(CGPoint)arg1 ;
-(void)cmdCleanUpBy:(id)arg1 ;
-(BOOL)validateCleanUpBy:(id)arg1 ;
-(void)cmdCleanUpByName:(id)arg1 ;
-(void)cmdCleanUpByModDate:(id)arg1 ;
-(void)cmdCleanUpByCreationDate:(id)arg1 ;
-(void)cmdCleanUpByLastOpenDate:(id)arg1 ;
-(void)cmdCleanUpByDateAdded:(id)arg1 ;
-(void)cmdCleanUpByPhysicalSize:(id)arg1 ;
-(void)cmdCleanUpByKind:(id)arg1 ;
-(void)cmdCleanUpByLabel:(id)arg1 ;
-(BOOL)validateArrange:(id)arg1 ;
-(BOOL)validateCleanUp:(id)arg1 ;
-(BOOL)validateCleanUpSelection:(id)arg1 ;
-(void)cmdCleanUpSelection:(id)arg1 ;
-(void)cmdKeepArrangedBy:(id)arg1 ;
-(void)cmdKeepArrangedByName:(id)arg1 ;
-(void)cmdKeepArrangedByModDate:(id)arg1 ;
-(void)cmdKeepArrangedByCreationDate:(id)arg1 ;
-(void)cmdKeepArrangedByLastOpenDate:(id)arg1 ;
-(void)cmdKeepArrangedByDateAdded:(id)arg1 ;
-(void)cmdKeepArrangedByPhysicalSize:(id)arg1 ;
-(void)cmdKeepArrangedByKind:(id)arg1 ;
-(void)cmdKeepArrangedByLabel:(id)arg1 ;
-(BOOL)validateSortByDate:(id)arg1 ;
-(BOOL)validateSortByName:(id)arg1 ;
-(BOOL)validateSortByTags:(id)arg1 ;
-(void)setArrangeBy:(int)arg1 ;
-(void)translateIconPositions:(CGSize)arg1 ;
-(void)addOffsetSpatialDataFromNodes:(const TFENodeVector*)arg1 toPropertyList:(vector<TFENodePropertyList, std::__1::allocator<TFENodePropertyList> >*)arg2 ;
-(CGRect)anchoredIconBounds;
-(CGRect)gridFrameClosestToPoint:(CGPoint)arg1 ;
-(void)prepareSnapToGridForUpcomingItems;
-(void)deferredReloadData;
-(void)removeIndexesBeingDropped:(id)arg1 ;
-(void)addSpatialDataForLocationInView:(const CGPoint*)arg1 toPropertyList:(TFENodePropertyList*)arg2 ;
-(CGPoint)gridOffset;
-(int)arrangeBy;
-(TFENode*)nodeAtIndex:(unsigned long long)arg1 ;
-(int)backgroundType;
-(void)imageBrowser:(id)arg1 didValidateVisibleCellsAtIndexes:(id)arg2 ;
-(int)imageBrowserFlavor;
-(id)imageBrowserView;
-(double)gridSpacing;
-(void)setTextSize:(double)arg1 ;
-(id)imageBrowser:(id)arg1 itemAtIndex:(unsigned long long)arg2 ;
-(unsigned long long)numberOfItemsInImageBrowser:(id)arg1 ;
-(unsigned long long)numberOfGroupsInImageBrowser:(id)arg1 ;
-(id)imageBrowser:(id)arg1 groupAtIndex:(unsigned long long)arg2 ;
-(void)updateFreeFormLayout;
-(char)imageBrowser:(id)arg1 moveItemsAtIndexes:(id)arg2 toIndex:(unsigned long long)arg3 ;
-(unsigned long long)imageBrowser:(id)arg1 writeItemsAtIndexes:(id)arg2 toPasteboard:(id)arg3 ;
-(void)imageBrowser:(id)arg1 cellWasRightClickedAtIndex:(unsigned long long)arg2 withEvent:(id)arg3 ;
-(void)imageBrowser:(id)arg1 backgroundWasRightClickedWithEvent:(id)arg2 ;
-(void)imageBrowser:(id)arg1 itemAtIndexMovedOnTop:(unsigned long long)arg2 ;
-(void)imageBrowser:(id)arg1 cellWasDoubleClickedAtIndex:(unsigned long long)arg2 ;
-(char)imageBrowser:(id)arg1 getFreeFormLayoutAtIndexes:(id)arg2 position:(CGPoint*)arg3 scaleFactor:(double*)arg4 zValue:(double*)arg5 ;
-(char)imageBrowser:(id)arg1 willMoveItemsAtIndexes:(id)arg2 ;
-(void)imageBrowser:(id)arg1 didMoveItemsAtIndexes:(id)arg2 ;
-(void)setFreeFormLayoutMode:(BOOL)arg1 ;
-(void)setGridSpacing:(double)arg1 ;
-(void)setShowItemInfo:(BOOL)arg1 ;
-(void)imageBrowserSelectionDidChange:(id)arg1 ;
-(id)selectionIndexesForProposedSelection:(id)arg1 ;
-(id)imageBrowser:(id)arg1 accessibilityItemAtIndex:(unsigned long long)arg2 parentItem:(id)arg3 ;
-(char)imageBrowserShouldValidateEditingOnFocusChange:(id)arg1 ;
-(char)imageBrowser:(id)arg1 titleOfCellAtIndex:(unsigned long long)arg2 shouldBeginEditing:(id)arg3 ;
-(char)imageBrowser:(id)arg1 isDimmedItem:(id)arg2 ;
-(BOOL)showItemInfo;
-(id)imageBrowser:(id)arg1 subtitleOfImageBrowserItem:(id)arg2 ;
-(char)imageBrowser:(id)arg1 itemIsButton:(id)arg2 ;
-(void)setBackgroundColor:(NSColor *)arg1 ;
-(NSColor *)backgroundColor;
-(id)selectedItems;
-(void)reloadData;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(unsigned long long)draggingUpdated:(id)arg1 ;
-(void)draggingExited:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(void)scrollWheel:(id)arg1 ;
-(void)setDataSource:(id)arg1 ;
-(void)setBackgroundType:(int)arg1 ;
-(id)iconView;
-(id)nibName;
-(char)prepareForDragOperation:(id)arg1 ;
-(void)concludeDragOperation:(id)arg1 ;
-(double)iconSize;
-(void)setIconSize:(double)arg1 ;
-(NSImage *)backgroundImage;
-(unsigned long long)itemCount;
-(void)setBackgroundImage:(NSImage *)arg1 ;
-(unsigned)viewStyle;
@end

