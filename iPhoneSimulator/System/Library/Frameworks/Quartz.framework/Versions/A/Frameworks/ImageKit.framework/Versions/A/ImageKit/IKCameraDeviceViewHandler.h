/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:37 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <ImageKit/ICCameraDeviceDelegate.h>
#import <ImageKit/NSTableViewDelegate.h>
#import <ImageKit/NSTableViewDataSource.h>

@class IKCameraDeviceView, ICCameraDevice, NSView, IKCameraBackgroundView, IKCameraTableView, IKCameraIconView, NSMenu, NSArray, IKPathPopupButton, NSProgressIndicator, NSString, NSMutableArray, NSArrayController, IKNStatusView, NSURL, NSIndexSet, NSMutableIndexSet;

@interface IKCameraDeviceViewHandler : NSObject <ICCameraDeviceDelegate, NSTableViewDelegate, NSTableViewDataSource> {

	IKCameraDeviceView* _cameraView;
	ICCameraDevice* _cameraDevice;
	char _cameraDeviceHasOpenSession;
	NSView* _container;
	IKCameraBackgroundView* _backgroundView;
	IKCameraTableView* _tableView;
	IKCameraIconView* _iconView;
	NSMenu* _contextualMenu;
	NSArray* _backgroundViewTLO;
	NSArray* _tableViewTLO;
	NSArray* _iconViewTLO;
	NSArray* _containerTLO;
	IKPathPopupButton* _pathPopup;
	NSProgressIndicator* _progressIndicator;
	NSString* _statusText;
	long long _transferMode;
	NSMutableArray* _cameraItems;
	NSArrayController* _cameraItemsController;
	NSArray* _sortDescriptors;
	IKNStatusView* _tableViewStatus;
	id _delegate;
	long long _displayMode;
	char _hasDisplayModeSummary;
	char _hasDisplayModeTable;
	char _hasDisplayModeIcon;
	char _supportsSelection;
	NSString* _downloadAllControlLabel;
	NSString* _downloadAllControlLabelDisplay;
	NSString* _downloadSelectedControlLabel;
	NSString* _downloadSelectedControlLabelDisplay;
	NSString* _noCameraAvailableText;
	unsigned long long _iconSizeIconView;
	unsigned long long _iconSizeTableView;
	char _displaysDownloadsDirectoryControl;
	char _displaysPostProcessApplicationControl;
	char _hidePopupUI;
	char _hidePathControl;
	char _hideModeSelectUI;
	NSURL* _downloadsDirectory;
	NSURL* _postProcessApplication;
	NSIndexSet* _selectionIndexes;
	char _isInInterfaceBuilderApp;
	char _isInInterfaceBuilderSimulator;
	char _canRotateSelectedItemsLeft;
	char _canRotateSelectedItemsRight;
	char _canDeleteSelectedItems;
	char _canDownloadSelectedItems;
	char _cameraSupportsDelete;
	char _canDownloadAll;
	long long _totalSizeToDownload;
	long long _alreadyDownloaded;
	NSMutableIndexSet* _pendingReloadCellIndexSet;
	int _cameraBusyCounter;
	NSMutableArray* _downloadedFiles;
	NSMutableArray* _downloadErrors;
	NSMutableArray* _itemsToDownload;
	NSURL* _dragNDropDestination;
	long long _pendingDownloads;
	long long _numberOfItemsAlreadyDeleted;
	long long _numberOfItemsToDelete;
	long long _clickedIconCellIndex;
	long long _maxIconSize;
	char _isDownloadingAll;
	char _isDownloadingSelected;
	char _isDeletingSelectedItems;
	NSArray* _supportedFileTypes;
	char _allowSingleSelectionOnly;
	char _usesFilterProc;
	NSString* _prefsPrefix;
	char _didSetupWindowNotifications;
	char _windowIsActive;
	char _observingCameraProperties;
	char _didDownloadViaDragAndDrop;
	char _didDownloadViaDoubleClick;
	char _preferPostProcessApplication;
	char _postProcessingAppHandlesSidecarFiles;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) id<IKCameraDeviceViewDelegate><ICCameraDeviceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) ICCameraDevice * cameraDevice;                                                //@synthesize cameraDevice=_cameraDevice - In the implementation block
@property (assign) char cameraDeviceHasOpenSession;                                              //@synthesize cameraDeviceHasOpenSession=_cameraDeviceHasOpenSession - In the implementation block
@property (retain) NSArray * backgroundViewTLO;                                                  //@synthesize backgroundViewTLO=_backgroundViewTLO - In the implementation block
@property (retain) NSArray * tableViewTLO;                                                       //@synthesize tableViewTLO=_tableViewTLO - In the implementation block
@property (retain) NSArray * iconViewTLO;                                                        //@synthesize iconViewTLO=_iconViewTLO - In the implementation block
@property (retain) NSArray * containerTLO;                                                       //@synthesize containerTLO=_containerTLO - In the implementation block
@property (assign) long long transferMode;                                                       //@synthesize transferMode=_transferMode - In the implementation block
@property (assign) long long displayMode;                                                        //@synthesize displayMode=_displayMode - In the implementation block
@property (assign) char hasDisplayModeSummary;                                                   //@synthesize hasDisplayModeSummary=_hasDisplayModeSummary - In the implementation block
@property (assign) char hasDisplayModeTable;                                                     //@synthesize hasDisplayModeTable=_hasDisplayModeTable - In the implementation block
@property (assign) char hasDisplayModeIcon;                                                      //@synthesize hasDisplayModeIcon=_hasDisplayModeIcon - In the implementation block
@property (copy) NSString * downloadAllControlLabel;                                             //@synthesize downloadAllControlLabel=_downloadAllControlLabel - In the implementation block
@property (copy) NSString * downloadAllControlLabelDisplay;                                      //@synthesize downloadAllControlLabelDisplay=_downloadAllControlLabelDisplay - In the implementation block
@property (copy) NSString * downloadSelectedControlLabel;                                        //@synthesize downloadSelectedControlLabel=_downloadSelectedControlLabel - In the implementation block
@property (copy) NSString * downloadSelectedControlLabelDisplay;                                 //@synthesize downloadSelectedControlLabelDisplay=_downloadSelectedControlLabelDisplay - In the implementation block
@property (copy) NSString * noCameraAvailableText;                                               //@synthesize noCameraAvailableText=_noCameraAvailableText - In the implementation block
@property (assign) unsigned long long iconSize; 
@property (assign) unsigned long long iconSizeIconView;                                          //@synthesize iconSizeIconView=_iconSizeIconView - In the implementation block
@property (assign) unsigned long long iconSizeTableView;                                         //@synthesize iconSizeTableView=_iconSizeTableView - In the implementation block
@property (copy) NSString * statusText;                                                          //@synthesize statusText=_statusText - In the implementation block
@property (assign) char isInInterfaceBuilderApp;                                                 //@synthesize isInInterfaceBuilderApp=_isInInterfaceBuilderApp - In the implementation block
@property (assign) char isInInterfaceBuilderSimulator;                                           //@synthesize isInInterfaceBuilderSimulator=_isInInterfaceBuilderSimulator - In the implementation block
@property (assign) char supportsSelection;                                                       //@synthesize supportsSelection=_supportsSelection - In the implementation block
@property (assign) char displaysDownloadsDirectoryControl;                                       //@synthesize displaysDownloadsDirectoryControl=_displaysDownloadsDirectoryControl - In the implementation block
@property (assign) char displaysPostProcessApplicationControl;                                   //@synthesize displaysPostProcessApplicationControl=_displaysPostProcessApplicationControl - In the implementation block
@property (assign) char hidePopupUI;                                                             //@synthesize hidePopupUI=_hidePopupUI - In the implementation block
@property (assign) char hidePathControl;                                                         //@synthesize hidePathControl=_hidePathControl - In the implementation block
@property (assign) char hideModeSelectUI;                                                        //@synthesize hideModeSelectUI=_hideModeSelectUI - In the implementation block
@property (assign) char canDownloadAll;                                                          //@synthesize canDownloadAll=_canDownloadAll - In the implementation block
@property (retain) NSURL * downloadsDirectory;                                                   //@synthesize downloadsDirectory=_downloadsDirectory - In the implementation block
@property (retain) NSURL * postProcessApplication;                                               //@synthesize postProcessApplication=_postProcessApplication - In the implementation block
@property (assign) char preferPostProcessApplication;                                            //@synthesize preferPostProcessApplication=_preferPostProcessApplication - In the implementation block
@property (retain) NSURL * dragNDropDestination;                                                 //@synthesize dragNDropDestination=_dragNDropDestination - In the implementation block
@property (retain) NSIndexSet * selectionIndexes;                                                //@synthesize selectionIndexes=_selectionIndexes - In the implementation block
@property (readonly) long long selectionCount; 
@property (readonly) long long itemCount; 
@property (assign) char canRotateSelectedItemsLeft;                                              //@synthesize canRotateSelectedItemsLeft=_canRotateSelectedItemsLeft - In the implementation block
@property (assign) char canRotateSelectedItemsRight;                                             //@synthesize canRotateSelectedItemsRight=_canRotateSelectedItemsRight - In the implementation block
@property (assign) char canDeleteSelectedItems;                                                  //@synthesize canDeleteSelectedItems=_canDeleteSelectedItems - In the implementation block
@property (assign) char canDownloadSelectedItems;                                                //@synthesize canDownloadSelectedItems=_canDownloadSelectedItems - In the implementation block
@property (assign) char cameraSupportsDelete;                                                    //@synthesize cameraSupportsDelete=_cameraSupportsDelete - In the implementation block
@property (assign) char isDownloadingAll;                                                        //@synthesize isDownloadingAll=_isDownloadingAll - In the implementation block
@property (assign) char isDownloadingSelected;                                                   //@synthesize isDownloadingSelected=_isDownloadingSelected - In the implementation block
@property (assign) char isDeletingSelectedItems;                                                 //@synthesize isDeletingSelectedItems=_isDeletingSelectedItems - In the implementation block
@property (copy) NSArray * supportedFileTypes;                                                   //@synthesize supportedFileTypes=_supportedFileTypes - In the implementation block
@property (assign) char allowSingleSelectionOnly;                                                //@synthesize allowSingleSelectionOnly=_allowSingleSelectionOnly - In the implementation block
@property (assign) char usesFilterProc;                                                          //@synthesize usesFilterProc=_usesFilterProc - In the implementation block
@property (assign) char windowIsActive;                                                          //@synthesize windowIsActive=_windowIsActive - In the implementation block
@property (copy) NSString * prefsPrefix;                                                         //@synthesize prefsPrefix=_prefsPrefix - In the implementation block
@property (retain) NSArray * sortDescriptors;                                                    //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (assign) long long maxIconSize;                                                        //@synthesize maxIconSize=_maxIconSize - In the implementation block
@property (readonly) NSMutableArray * cameraItems;                                               //@synthesize cameraItems=_cameraItems - In the implementation block
-(void)revealInFinder:(id)arg1 ;
-(id)imageBrowser:(id)arg1 itemAtIndex:(unsigned long long)arg2 ;
-(unsigned long long)numberOfItemsInImageBrowser:(id)arg1 ;
-(void)imageBrowser:(id)arg1 cellWasRightClickedAtIndex:(unsigned long long)arg2 withEvent:(id)arg3 ;
-(void)imageBrowser:(id)arg1 cellWasDoubleClickedAtIndex:(unsigned long long)arg2 ;
-(long long)maxIconSize;
-(void)setMaxIconSize:(long long)arg1 ;
-(void)imageBrowserSelectionDidChange:(id)arg1 ;
-(void)rotateLeft:(id)arg1 ;
-(void)rotateRight:(id)arg1 ;
-(char)isInInterfaceBuilderApp;
-(void)setIsInInterfaceBuilderApp:(char)arg1 ;
-(char)isInInterfaceBuilderSimulator;
-(void)setIsInInterfaceBuilderSimulator:(char)arg1 ;
-(id)initWithIKCameraDeviceView:(id)arg1 ;
-(char)hasDisplayModeTable;
-(char)hasDisplayModeIcon;
-(NSString *)downloadAllControlLabel;
-(NSString *)downloadSelectedControlLabel;
-(long long)transferMode;
-(char)displaysDownloadsDirectoryControl;
-(char)displaysPostProcessApplicationControl;
-(void)restoreCurrentSettings;
-(void)setHasDisplayModeTable:(char)arg1 ;
-(void)setHasDisplayModeIcon:(char)arg1 ;
-(void)setTransferMode:(long long)arg1 ;
-(void)setDisplaysDownloadsDirectoryControl:(char)arg1 ;
-(void)setDisplaysPostProcessApplicationControl:(char)arg1 ;
-(void)setDownloadAllControlLabel:(NSString *)arg1 ;
-(void)setDownloadSelectedControlLabel:(NSString *)arg1 ;
-(void)setCameraDevice:(ICCameraDevice *)arg1 ;
-(ICCameraDevice *)cameraDevice;
-(void)setHasDisplayModeSummary:(char)arg1 ;
-(char)hasDisplayModeSummary;
-(void)setDownloadsDirectory:(NSURL *)arg1 ;
-(NSURL *)downloadsDirectory;
-(void)setPostProcessApplication:(NSURL *)arg1 ;
-(NSURL *)postProcessApplication;
-(char)canRotateSelectedItemsLeft;
-(char)canRotateSelectedItemsRight;
-(char)canDeleteSelectedItems;
-(char)canDownloadSelectedItems;
-(void)downloadAllItems:(id)arg1 ;
-(void)downloadSelectedItems:(id)arg1 ;
-(void)deleteSelectedItems:(id)arg1 ;
-(void)deviceDidChangeName;
-(void)deviceDidChangeSharingState;
-(void)setSupportedFileTypes:(NSArray *)arg1 ;
-(void)setAllowSingleSelectionOnly:(char)arg1 ;
-(void)setUsesFilterProc:(char)arg1 ;
-(void)setIconSizeTableView:(unsigned long long)arg1 ;
-(void)saveCurrentSettings;
-(void)installBackgroundView;
-(void)loadSortDescriptors;
-(void)destinationURLChanged:(id)arg1 ;
-(void)destinationURLChangedNoOp:(id)arg1 ;
-(void)setIconSizeIconView:(unsigned long long)arg1 ;
-(void)toggleTableColumn:(id)arg1 ;
-(char)allowSingleSelectionOnly;
-(void)tableViewDoubleClicked:(id)arg1 ;
-(void)setupTableView;
-(void)setupIconView;
-(void)setDownloadAllControlLabelDisplay:(NSString *)arg1 ;
-(long long)selectionCount;
-(void)cameraDevice:(id)arg1 didAddItems:(id)arg2 ;
-(void)cameraDevice:(id)arg1 didAddItem:(id)arg2 ;
-(void)updateItemSorting;
-(void)numberOfItemsChanged;
-(void)setSupportsSelection:(char)arg1 ;
-(void)loadIconSizeFromPrefs;
-(void)setupView;
-(unsigned long long)iconSizeIconView;
-(unsigned long long)iconSizeTableView;
-(void)setNoCameraAvailableText:(NSString *)arg1 ;
-(void)setCanDownloadAll:(char)arg1 ;
-(void)setCameraDeviceHasOpenSession:(char)arg1 ;
-(void)setCameraSupportsDelete:(char)arg1 ;
-(void)updatePrefsPrefix;
-(void)doneWithCamera;
-(void)setIsDownloadingAll:(char)arg1 ;
-(void)setIsDownloadingSelected:(char)arg1 ;
-(void)setIsDeletingSelectedItems:(char)arg1 ;
-(void)cameraDeviceWasAssigned;
-(void)setCanDeleteSelectedItems:(char)arg1 ;
-(void)setCanRotateSelectedItemsLeft:(char)arg1 ;
-(void)setCanRotateSelectedItemsRight:(char)arg1 ;
-(char)usesFilterProc;
-(char)shouldDisplayItem:(id)arg1 ;
-(void)setDownloadSelectedControlLabelDisplay:(NSString *)arg1 ;
-(char)preferPostProcessApplication;
-(void)downloadNextItem;
-(void)downloadDone;
-(void)didDownloadFile:(id)arg1 error:(id)arg2 options:(id)arg3 contextInfo:(void*)arg4 ;
-(id)finalDownloadsDirectory;
-(void)updateHandlesSidecarFile;
-(void)downloadItems:(id)arg1 toURL:(id)arg2 isDragOperation:(char)arg3 isDoubleClick:(char)arg4 ;
-(char)isDownloadingAll;
-(char)isDownloadingSelected;
-(void)startDownloadSelectedItems:(char)arg1 isDoubleClick:(char)arg2 ;
-(void)startDownloadingAfterUserCheck:(char)arg1 isDoubleClick:(char)arg2 ;
-(void)startDownloadAllItems;
-(void)postProcess:(id)arg1 ;
-(void)dumpDownloadErrors;
-(void)checkItemsInDownloadDirectory;
-(char)isDeletingSelectedItems;
-(void)updateItemDisplay:(id)arg1 ;
-(id)placeholderStringForOpenWith;
-(void)setHidePathControl:(char)arg1 ;
-(void)updateHidePathControl;
-(void)setPrefsPrefix:(NSString *)arg1 ;
-(NSString *)prefsPrefix;
-(void)setPreferPostProcessApplication:(char)arg1 ;
-(void)importItems:(id)arg1 ;
-(void)forceItemUpdate:(id)arg1 ;
-(void)fileCheck:(id)arg1 path:(id)arg2 ;
-(void)reloadCellsInIndexSet:(id)arg1 ;
-(void)windowStateActivate:(id)arg1 ;
-(void)windowStateDeactivate:(id)arg1 ;
-(void)appWillQuit:(id)arg1 ;
-(void)windowBackingPropertiesChanged:(id)arg1 ;
-(void)installWindowNotifications:(id)arg1 ;
-(void)setWindowIsActive:(char)arg1 ;
-(void)uninstallWindowNotifications;
-(void)updateBackingScaleFactor;
-(void)saveSortDescriptors;
-(void)setDragNDropDestination:(NSURL *)arg1 ;
-(id)fileNamesForDropDestination:(id)arg1 ;
-(NSURL *)dragNDropDestination;
-(id)dragTypes;
-(void)setupPathControl:(id)arg1 ;
-(id)mediaController;
-(NSMutableArray *)cameraItems;
-(id)itemCountString;
-(id)itemCountSelectionString;
-(void)notifyDelegateAboutAddedItems:(id)arg1 ;
-(id)addItemsFromArray:(id)arg1 ;
-(void)didRemoveItems:(id)arg1 ;
-(void)displayHelp:(id)arg1 ;
-(void)doDownloadSelectedItems:(id)arg1 ;
-(void)doDownloadAllItems:(id)arg1 ;
-(void)noAutomaticTask:(id)arg1 ;
-(void)setHidePopupUI:(char)arg1 ;
-(void)doCheckItemsInDownloadDirectory;
-(char)allowDeleteAfterDownload;
-(void)updateAllItems;
-(void)tableView:(id)arg1 cellClicked:(id)arg2 row:(long long)arg3 ;
-(void)didReceiveDownloadProgressForFile:(id)arg1 downloadedBytes:(long long)arg2 maxBytes:(long long)arg3 ;
-(char)cameraDeviceHasOpenSession;
-(NSString *)downloadAllControlLabelDisplay;
-(NSString *)downloadSelectedControlLabelDisplay;
-(char)hidePopupUI;
-(char)hideModeSelectUI;
-(void)setHideModeSelectUI:(char)arg1 ;
-(char)canDownloadAll;
-(char)hidePathControl;
-(NSString *)noCameraAvailableText;
-(char)supportsSelection;
-(void)setCanDownloadSelectedItems:(char)arg1 ;
-(char)cameraSupportsDelete;
-(NSArray *)supportedFileTypes;
-(char)windowIsActive;
-(NSArray *)backgroundViewTLO;
-(void)setBackgroundViewTLO:(NSArray *)arg1 ;
-(NSArray *)tableViewTLO;
-(void)setTableViewTLO:(NSArray *)arg1 ;
-(NSArray *)iconViewTLO;
-(void)setIconViewTLO:(NSArray *)arg1 ;
-(NSArray *)containerTLO;
-(void)setContainerTLO:(NSArray *)arg1 ;
-(void)didRemoveDevice:(id)arg1 ;
-(void)deviceDidChangeName:(id)arg1 ;
-(void)cameraDevice:(id)arg1 didRemoveItems:(id)arg2 ;
-(void)cameraDevice:(id)arg1 didRemoveItem:(id)arg2 ;
-(void)cameraDevice:(id)arg1 didReceiveThumbnailForItem:(id)arg2 ;
-(char)cameraDevice:(id)arg1 shouldGetThumbnailOfItem:(id)arg2 ;
-(void)shouldGetThumbnailOfItem:(id)arg1 ;
-(void)device:(id)arg1 didOpenSessionWithError:(id)arg2 ;
-(void)device:(id)arg1 didCloseSessionWithError:(id)arg2 ;
-(void)deviceDidBecomeReady:(id)arg1 ;
-(void)deviceDidChangeSharingState:(id)arg1 ;
-(void)device:(id)arg1 didReceiveNotification:(id)arg2 ;
-(void)device:(id)arg1 didEncounterError:(id)arg2 ;
-(void)cameraDevice:(id)arg1 didCompleteDeleteFilesWithError:(id)arg2 ;
-(void)cameraDeviceDidChangeCapability:(id)arg1 ;
-(void)cameraDevice:(id)arg1 didReceiveMetadataForItem:(id)arg2 ;
-(void)cameraDevice:(id)arg1 didRenameItems:(id)arg2 ;
-(void)setDelegate:(id<IKCameraDeviceViewDelegate><ICCameraDeviceDelegate>)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id<IKCameraDeviceViewDelegate><ICCameraDeviceDelegate>)delegate;
-(NSIndexSet *)selectionIndexes;
-(NSArray *)sortDescriptors;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(id)selectedObjects;
-(void)setSelectionIndexes:(NSIndexSet *)arg1 ;
-(void)reloadData;
-(void)draggedImage:(id)arg1 endedAt:(CGPoint)arg2 operation:(unsigned long long)arg3 ;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(unsigned long long)draggingUpdated:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(id)namesOfPromisedFilesDroppedAtDestination:(id)arg1 ;
-(void)viewDidMoveToWindow;
-(long long)mode;
-(void)setMode:(long long)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4 ;
-(char)tableView:(id)arg1 shouldTrackCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4 ;
-(char)tableView:(id)arg1 shouldSelectRow:(long long)arg2 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)tableView:(id)arg1 sortDescriptorsDidChange:(id)arg2 ;
-(char)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3 ;
-(id)tableView:(id)arg1 namesOfPromisedFilesDroppedAtDestination:(id)arg2 forDraggedRowsWithIndexes:(id)arg3 ;
-(void)setDisplayMode:(long long)arg1 ;
-(long long)displayMode;
-(void)windowWillClose:(id)arg1 ;
-(void)menuNeedsUpdate:(id)arg1 ;
-(void)menuWillOpen:(id)arg1 ;
-(unsigned long long)iconSize;
-(void)setIconSize:(unsigned long long)arg1 ;
-(long long)itemCount;
-(void)setStatusText:(NSString *)arg1 ;
-(NSString *)statusText;
-(void)setProgress:(double)arg1 ;
-(void)setup;
-(void)cancelDownload;
-(void)cleanup;
@end

