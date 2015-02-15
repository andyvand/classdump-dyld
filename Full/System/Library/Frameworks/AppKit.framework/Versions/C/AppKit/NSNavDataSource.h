/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSNavView, NSNavNode, NSString, NSMutableDictionary, NSMutableArray;

@interface NSNavDataSource : NSObject {

	NSNavView* _navView;
	NSNavNode* _rootNode;
	Class _navNodeClass;
	int _fileListMode;
	int _lastNonNaughtFileListMode;
	NSString* _fileListOrderedByFileProperty;
	unsigned _resolvesAliases : 1;
	unsigned _showsHiddenFiles : 1;
	unsigned _canClickDisabledFiles : 1;
	unsigned _allowsMultipleSelection : 1;
	unsigned _treatsFilePackagesAsDirectories : 1;
	unsigned _treatsDirectoryAliasesAsDirectories : 1;
	unsigned _calculatesAllSizes : 1;
	unsigned _isFileListOrderedDescending : 1;
	unsigned _isFileListOrderedCaseSensitive : 1;
	unsigned _allowsExpandingMultipleDirectories : 1;
	unsigned _isReloading : 1;
	unsigned _creatingDelegate : 1;
	unsigned _padding : 20;
	NSMutableDictionary* _sortedChildren;
	NSMutableArray* _history;
	long long _currentHistoryPosition;
	long long _makeHistoryDisabledCount;
	NSMutableArray* _fileDelegates;
	int _lastFileListMode;
	NSMutableArray* _expandedNodes;
	NSMutableDictionary* _replacedNodes;

}

@property (nonatomic,retain) NSNavNode * rootNode; 
@property (assign) int lastFileListMode; 
-(void)finalize;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)_sortDescriptors;
-(id)sortDescriptors;
-(void)setAllowsMultipleSelection:(char)arg1 ;
-(char)allowsMultipleSelection;
-(id)browser;
-(id)iconView;
-(void)setTreatsFilePackagesAsDirectories:(char)arg1 ;
-(NSNavNode *)rootNode;
-(id)canBrowseNode:(id)arg1 allowInteraction:(char)arg2 ;
-(id)cachedChildrenForNode:(id)arg1 ;
-(void)replaceExpandedNode:(id)arg1 withNode:(id)arg2 ;
-(void)addExpandedNode:(id)arg1 ;
-(void)setCurrentBrowsingNodePath:(id)arg1 ;
-(id)expandedNodes;
-(unsigned long long)indexOfNode:(id)arg1 inCachedChildrenForNode:(id)arg2 ;
-(id)selectedNodesIncludingDirectories;
-(void)handleDelegateChangedSelection;
-(char)isDirectoryNode:(id)arg1 ;
-(id)currentDirectoryNode;
-(void)setCurrentDirectoryNode:(id)arg1 ;
-(char)canChooseNode:(id)arg1 ;
-(void)handleDelegateChangedCurrentDirectory;
-(Class)previewControllerClass;
-(Class)sharedServerControllerClass;
-(int)displayStateForNode:(id)arg1 ;
-(void)handleDelegateClickedFauxDisabledNode:(id)arg1 ;
-(void)setRootNode:(NSNavNode *)arg1 ;
-(id)selectedNodes;
-(void)handleDelegateConfirmedSelection;
-(void)removeAllExpandedNodes;
-(void)removeExpandedNodesStartingWithIndex:(long long)arg1 ;
-(char)shouldShowPreviewColumn:(id)arg1 ;
-(void)windowOrderedOut;
-(id)currentBrowsingNodePath;
-(id)visualRootNode;
-(int)fileListMode;
-(void)_fetchOrderedByFileProperty:(id*)arg1 orderedAscending:(char*)arg2 ;
-(void)_handleNodePropertyChanged:(id)arg1 ;
-(void)_stopObservingAllChildren;
-(char)acceptsRootNodeOrWarn:(id)arg1 usingParent:(char)arg2 ;
-(void)_loadAndRestoreCurrentBrowsingNodePath:(id)arg1 selectedNodes:(id)arg2 ;
-(char)isMakeHistoryEnabled;
-(void)_makeHistory;
-(id)navView;
-(void)setRootNode:(id)arg1 makeHistory:(char)arg2 notify:(char)arg3 ;
-(Class)navNodeClass;
-(void)_prepareForReloadChildrenForNode:(id)arg1 ;
-(void)_reloadChildrenForNode:(id)arg1 ;
-(void)_concludeReloadChildrenForNode:(id)arg1 ;
-(id)_cachedChildrenForNode:(id)arg1 createIfNeeded:(char)arg2 ;
-(void)_sortNodes:(id)arg1 withSortDescriptors:(id)arg2 ;
-(char)isExpandedNode:(id)arg1 ;
-(void)_resortCachedChildrenForNode:(id)arg1 withSortDescriptors:(id)arg2 ;
-(void)_stopObservingChildrenForNode:(id)arg1 ;
-(id)activeFileListDelegate;
-(void)_setCurrentDirectoryNode:(id)arg1 makeHistory:(char)arg2 notify:(char)arg3 ;
-(void)disableMakeHistory;
-(void)enableMakeHistory;
-(void)_setCurrentBrowsingNodePath:(id)arg1 makeHistory:(char)arg2 notify:(char)arg3 ;
-(void)showNodeInCurrentDirectoryWithFilename:(id)arg1 selectIfEnabled:(char)arg2 ;
-(void)showNodeInCurrentDirectoryWithDisplayNamePrefix:(id)arg1 selectIfEnabled:(char)arg2 ;
-(void)setLastFileListMode:(int)arg1 ;
-(char)isFileListOrderedAscending;
-(void)setFileListOrderedByFileProperty:(id)arg1 ascending:(char)arg2 ;
-(id)fileListOrderedByFileProperty;
-(void)setFileListOrderedByFileProperty:(id)arg1 ascending:(char)arg2 caseSensitive:(char)arg3 ;
-(char)isFileListOrderedCaseSensitive;
-(void)_storeOrderedByFileProperty:(id)arg1 orderedAscending:(char)arg2 ;
-(void)_resortCachedChildren;
-(void)reloadRootNode;
-(char)canChooseFiles;
-(char)treatsDirectoryAliasesAsDirectories;
-(char)_isFauxFilePackageNode:(id)arg1 ;
-(char)treatsFilePackagesAsDirectories;
-(char)canClickDisabledFiles;
-(char)calculatesAllSizes;
-(Class)delegateClassForMode:(int)arg1 ;
-(void)_setPropertiesForDelegate:(id)arg1 ;
-(id)outline;
-(id)_createBrowserDelegate;
-(id)_createOutlineDelegate;
-(id)_createNaughtDelegate;
-(id)_createIconViewDelegate;
-(id)_createMediaBrowserDelegate;
-(id)_processedChildrenOfNode:(id)arg1 ;
-(void)setFileListMode:(int)arg1 ;
-(char)canGoBack;
-(void)_goToHistoryState:(id)arg1 ;
-(char)canGoForward;
-(id)_actualOrderingFilePropertyAscending:(char*)arg1 ;
-(unsigned long long)_leftmostInsertionIndexForNode:(id)arg1 inOrderedNodes:(id)arg2 withSortDescriptors:(id)arg3 ;
-(void)_handleAddedChildNode:(id)arg1 toExpandedNode:(id)arg2 ;
-(unsigned long long)_indexOfNode:(id)arg1 inOrderedNodes:(id)arg2 ;
-(char)showsHiddenFiles;
-(id)_rawChildrenOfNode:(id)arg1 ;
-(id)_queryHitResultsFilterUTIs;
-(char)_showsNode:(id)arg1 ;
-(unsigned long long)_leftmostInsertionIndexForNode:(id)arg1 inOrderedNodes:(id)arg2 ;
-(char)_updateNodeList:(id)arg1 byAddingNode:(id)arg2 ;
-(char)_updateNodeList:(id)arg1 byRemovingNode:(id)arg2 sendPrepareMessageWithParentNode:(id)arg3 ;
-(void)_flushCachedChildrenForNode:(id)arg1 ;
-(void)_handleChangedAllChildrenInExpandedNode:(id)arg1 ;
-(void)_handleRemovedChildNode:(id)arg1 fromExpandedNode:(id)arg2 ;
-(void)goBack;
-(char)_updateNodeList:(id)arg1 forChangedProperty:(id)arg2 ofNode:(id)arg3 ;
-(int)lastFileListMode;
-(id)initWithNavView:(id)arg1 ;
-(void)_setNavView:(id)arg1 ;
-(void)setNavNodeClass:(Class)arg1 ;
-(void)setRootPath:(id)arg1 ;
-(void)showNode:(id)arg1 selectIfEnabled:(char)arg2 ;
-(void)clearFileListMode;
-(char)canChooseFileAtURL:(id)arg1 ;
-(void)setFileListOrderedByFileProperty:(id)arg1 ;
-(void)setIsFileListOrderedAscending:(char)arg1 ;
-(void)setIsFileListOrderedCaseSensitive:(char)arg1 ;
-(char)resolvesAliases;
-(void)setResolvesAliases:(char)arg1 ;
-(void)setShowsHiddenFiles:(char)arg1 ;
-(void)setCanClickDisabledFiles:(char)arg1 ;
-(void)setTreatsDirectoryAliasesAsDirectories:(char)arg1 ;
-(void)setCalculatesAllSizes:(char)arg1 ;
-(char)allowsExpandingMultipleDirectories;
-(void)setAllowsExpandingMultipleDirectories:(char)arg1 ;
-(char)isReloading;
-(char)isFauxDisabledNode:(id)arg1 ;
-(char)isSizeDisplayedForNode:(id)arg1 ;
-(Class)NSNavOutlineDelegateClass;
-(Class)NSNavIconViewDelegateClass;
-(id)_expandedNodesForObservedNode:(id)arg1 ;
-(long long)countOfCachedChildrenForNode:(id)arg1 createIfNeeded:(char)arg2 ;
-(void)willChangeExpandedNodes;
-(void)didChangeExpandedNodes;
-(void)removeExpandedNode:(id)arg1 ;
-(void)goForward;
-(void)goUpDirectory;
-(id)currentLocalSearchScopeNode;
-(unsigned long long)indexOfBestMatchForDisplayNamePrefix:(id)arg1 inCachedChildrenForNode:(id)arg2 ;
-(void)_debug;
@end

