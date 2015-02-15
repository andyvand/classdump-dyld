/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Finder
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Finder/Finder-Structs.h>
#import <AppKit/NSResponder.h>
#import <Finder/TDesktopInlinePreviewDataSource.h>
#import <Finder/TDesktopViewDataSourceDelegateProtocol.h>
#import <Finder/TDesktopViewControllerDelegateProtocol.h>
#import <Finder/TGroupAsFolderDelegate.h>

@class TNodeViewSettings, NSString;

@interface TDesktopMultiViewController : NSResponder <TDesktopInlinePreviewDataSource, TDesktopViewDataSourceDelegateProtocol, TDesktopViewControllerDelegateProtocol, TGroupAsFolderDelegate> {

	TNSRef<NSMutableArray *> _desktopViewControllers;
	TMutex _desktopViewControllersLock;
	TNSRef<TDesktopViewDataSource *> _dataSource;
	TNSRef<TDesktopGridLayoutController *> _gridLayoutController;
	TNSRef<TDesktopIconSpatialDataController *> _spatialDataController;
	TNSRef<TDesktopBandSelectionController *> _bandSelectionController;
	TNSRef<TDesktopInlinePreviewController *> _inlinePreviewController;
	TNSRef<TGroupInFolderAnimationController *> _groupAsFolderAnimationController;
	TFENode* _nodeClickedOnMouseDown;
	BOOL _deselectOnBandSelect;
	TNSRef<NSEvent *> _mouseDownEventForDrag;
	TNSRef<TDesktopViewController *> _viewControllerForDrag;
	TNSRef<TNodeViewSettings *> _viewSettings;
	long long _validatorID;

}

@property (nonatomic,retain,readonly) TNodeViewSettings * viewSettings; 
@property (assign,nonatomic) int sortBy; 
@property (assign,nonatomic) BOOL showIconPreview; 
@property (assign,nonatomic) BOOL showItemInfo; 
@property (assign,nonatomic) unsigned long long iconSize; 
@property (assign,nonatomic) unsigned long long textSize; 
@property (assign,nonatomic) double gridSpacing; 
@property (assign,getter=isTitleOnBottom,nonatomic) BOOL titleOnBottom; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)thumbnailScaleFactorHintForNode:(const TFENode*)arg1 ;
-(void)syncWithScreens:(id)arg1 ;
-(void)getDesktopSpatialData:(vector<DataBrowserItemSpatialData, std::__1::allocator<DataBrowserItemSpatialData> >*)arg1 forNodes:(const TFENodeVector*)arg2 ;
-(void)setDesktopSpatialData:(const vector<DataBrowserItemSpatialData, std::__1::allocator<DataBrowserItemSpatialData> >*)arg1 forNodes:(const TFENodeVector*)arg2 ;
-(void)setBandSelectionController:(id)arg1 ;
-(BOOL)isTitleOnBottom;
-(void)setTitleOnBottom:(BOOL)arg1 ;
-(id)accessibilitySelectedChildrenAttributeValue;
-(id)bandSelectionController;
-(void)cmdGroupAsFolder:(id)arg1 ;
-(BOOL)handleValidateSelectStartupDisk;
-(void)handleCmdSelectStartupDisk:(id)arg1 ;
-(BOOL)validateSelectStartupDisk:(id)arg1 ;
-(void)cmdSelectStartupDisk:(id)arg1 ;
-(void)removeViewController:(id)arg1 ;
-(CGRect)accessibilityFrameAttributeValue;
-(BOOL)validateGroupAsFolder:(id)arg1 ;
-(void)groupAsFolderCompleted:(TNodeTask*)arg1 withFolder:(const TFENode*)arg2 status:(int)arg3 ;
-(void)groupAsFolderUndoCompleted:(TNodeTask*)arg1 forGroupFolder:(const TFENode*)arg2 nodes:(const TFENodeVector*)arg3 status:(int)arg4 ;
-(void)groupAsFolderStarted;
-(void)groupAsFolder:(TNodeTask*)arg1 createdGroupFolder:(const TFENode*)arg2 ;
-(void)groupAsFolderUndoStarted:(TNodeTask*)arg1 forFolder:(const TFENode*)arg2 ;
-(BOOL)inlinePreviewLayerIsInWindowServer;
-(id)inlinePreviewPropertiesForItem:(id)arg1 ;
-(CGRect)inlinePreviewFrameForItem:(id)arg1 inHostingView:(id)arg2 ;
-(CGRect)inlinePreviewContentFrameForItem:(id)arg1 inHostingView:(id)arg2 ;
-(void)inlinePreviewWillLoadForItem:(id)arg1 ;
-(void)inlinePreviewIsVisible:(BOOL)arg1 forItem:(id)arg2 ;
-(void)desktopViewController:(id)arg1 snapNodeToGridNowOrLater:(const TFENode*)arg2 ;
-(BOOL)desktopViewController:(id)arg1 startEditingNodeNowOrLater:(const TFENode*)arg2 renameOp:(id)arg3 ;
-(void)desktopViewController:(id)arg1 shrinkToFitTextViewAboutToCloseForNode:(const TFENode*)arg2 ;
-(void)desktopViewController:(id)arg1 updateDraggingItemsForSnapToGrid:(id)arg2 dropTargetView:(id)arg3 ;
-(BOOL)desktopViewController:(id)arg1 receivePrivateDrag:(id)arg2 dropTargetView:(id)arg3 ;
-(void)desktopViewController:(id)arg1 finishSnapToGrid:(id)arg2 dropTargetView:(id)arg3 ;
-(CGRect)desktopViewController:(id)arg1 dragFlockingFrameForNode:(const TFENode*)arg2 dropTargetView:(id)arg3 ;
-(id)firstViewControllerWhileLocked;
-(id)viewControllerAtIndexWhileLocked:(unsigned long long)arg1 ;
-(id)viewControllerForNodeWhileLocked:(const TFENode*)arg1 ;
-(void)_getViewController:(id*)arg1 desktopAnchorPoint:(CGPoint*)arg2 forNode:(const TFENode*)arg3 ;
-(void)syncViewSettingsToViewController:(id)arg1 ;
-(id)copyDesktopViewControllers;
-(id)firstViewController;
-(void)updateInlinePreviewEnabledState;
-(void)updateSpatialDataAfterGridSizeChange:(const CGSize*)arg1 oldFirstDesktopIconAnchorPoint:(const CGPoint*)arg2 ;
-(CGPoint)desktopAnchorPointForNodeWhileLocked:(const TFENode*)arg1 ;
-(void)getDesktopAnchorPointsFromSpatialData:(vector<CGPoint, std::__1::allocator<CGPoint> >*)arg1 forNodes:(const TFENodeVector*)arg2 ;
-(id)viewControllerForNode:(const TFENode*)arg1 ;
-(void)cleanUpAnchorPointsForNodes:(const TFENodeVector*)arg1 ;
-(CGPoint)desktopAnchorPointForGroupAsFolder:(const TFENodeVector*)arg1 ;
-(id)viewControllerAtGlobalPoint:(const CGPoint*)arg1 ;
-(void)getDesktopAnchorPoints:(vector<CGPoint, std::__1::allocator<CGPoint> >*)arg1 forNodes:(const TFENodeVector*)arg2 ;
-(void)getPotentiallyObscuringWindowFrames:(vector<CGRect, std::__1::allocator<CGRect> >*)arg1 ;
-(BOOL)isDesktopAnchorPoint:(const CGPoint*)arg1 obscuredByWindowFrames:(const vector<CGRect, std::__1::allocator<CGRect> >*)arg2 ;
-(BOOL)isDesktopAnchoredFrame:(const CGRect*)arg1 obscuredByWindowFrames:(const vector<CGRect, std::__1::allocator<CGRect> >*)arg2 ;
-(void)bandSelect:(id)arg1 ;
-(void)moveSelectionAnchor:(int)arg1 byExtendingSelection:(BOOL)arg2 ;
-(void)accessibilitySetSelectedChildrenAttributeValue:(id)arg1 ;
-(void)cleanUpAllAnchorPoints;
-(id)viewControllerAtIndex:(unsigned long long)arg1 ;
-(CGPoint)desktopAnchorPointForNode:(const TFENode*)arg1 ;
-(CGPoint)desktopAnchorPointsFromSpatialDataForNode:(const TFENode*)arg1 ;
-(unsigned long long)textSize;
-(void)selectNodesNowOrLater:(const TFENodeVector*)arg1 ;
-(long long)validatorID;
-(void)aboutToTearDown;
-(TNodeViewSettings *)viewSettings;
-(int)sortBy;
-(void)bindViewSettings;
-(BOOL)showIconPreview;
-(void)setSortBy:(int)arg1 ;
-(void)unbindViewSettings;
-(BOOL)validateEditTags:(id)arg1 ;
-(void)cmdEditTags:(id)arg1 ;
-(void)setShowIconPreview:(BOOL)arg1 ;
-(void)cmdCleanUp:(id)arg1 ;
-(void)cleanUpBy:(int)arg1 ;
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
-(BOOL)validateCleanUp:(id)arg1 ;
-(BOOL)validateCleanUpSelection:(id)arg1 ;
-(void)cmdCleanUpSelection:(id)arg1 ;
-(CGRect)globalFrameForNode:(const TFENode*)arg1 ;
-(CGRect)globalIconFrameForNode:(const TFENode*)arg1 ;
-(id)accessibilityChildrenAttributeValue;
-(double)gridSpacing;
-(void)setTextSize:(unsigned long long)arg1 ;
-(void)setGridSpacing:(double)arg1 ;
-(void)setShowItemInfo:(BOOL)arg1 ;
-(BOOL)showItemInfo;
-(id)init;
-(void)clear;
-(char)accessibilityIsIgnored;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)accessibilityActionDescription:(id)arg1 ;
-(char)accessibilityShouldUseUniqueId;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2 ;
-(id)accessibilityActionNames;
-(void)accessibilityPerformAction:(id)arg1 ;
-(void)rightMouseDown:(id)arg1 ;
-(char)validateMenuItem:(id)arg1 ;
-(void)keyDown:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(unsigned long long)iconSize;
-(void)setIconSize:(unsigned long long)arg1 ;
-(void)selectionChanged;
-(void)addViewController:(id)arg1 ;
@end
