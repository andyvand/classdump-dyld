/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:22 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <AppKit/NSView.h>

@protocol FIFinderViewDelegate;
@class NSURL, NSArray, FIFinderViewGutsController;

@interface FIFinderView : NSView {

	id<FIFinderViewDelegate> _delegate;
	id _controller;
	id _reserved;
	BOOL _downloadsUbiquitousContents;

}

@property (assign) char treatsFilePackagesAsDirectories; 
@property (assign) char showsHiddenFiles; 
@property (assign) char resolvesAliases; 
@property (assign) char canClickDisabledFiles; 
@property (assign) char allowsExpandingMultipleDirectories; 
@property (assign) char allowsMultipleSelection; 
@property (assign) char isSavePanel; 
@property (assign) char showsNewDocumentButton; 
@property (readonly) CGSize minimumViewSize; 
@property (assign) id<FIFinderViewDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL downloadsUbiquitousContents;                     //@synthesize downloadsUbiquitousContents=_downloadsUbiquitousContents - In the implementation block
@property (retain) NSURL * directoryURL; 
@property (retain) NSURL * rootDirectoryURL; 
@property (assign) int viewStyle; 
@property (readonly) double sidebarWidth; 
@property (copy) NSArray * selectedURLs; 
@property (assign) char hidesSharedSection; 
@property (nonatomic,retain) FIFinderViewGutsController * controller;              //@synthesize controller=_controller - In the implementation block
-(char)isSavePanel;
-(id)activeContainer;
-(void)setIsSavePanel:(char)arg1 ;
-(char)canSaveNewDocument;
-(void)cacheShareButton:(id)arg1 ;
-(void)cacheTagsButton:(id)arg1 ;
-(char)shouldEnableTagsButton;
-(void)_commonFinderViewInitForSaveMode:(long long)arg1 importPanel:(char)arg2 appCentric:(char)arg3 ubiquityContainerURLs:(id)arg4 options:(id)arg5 ;
-(void)ourWindowDidBecomeKey;
-(void)ourWindowWillOrderOnScreen;
-(void)setDelegate:(id<FIFinderViewDelegate>)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)directoryURL;
-(id)initWithFrame:(CGRect)arg1 ;
-(FIFinderViewGutsController *)controller;
-(id<FIFinderViewDelegate>)delegate;
-(char)performKeyEquivalent:(id)arg1 ;
-(void)setAllowsMultipleSelection:(char)arg1 ;
-(char)allowsMultipleSelection;
-(void)viewDidMoveToWindow;
-(void)setController:(FIFinderViewGutsController *)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)setTreatsFilePackagesAsDirectories:(char)arg1 ;
-(void)setDirectoryURL:(NSURL *)arg1 ;
-(void)windowOrderedOut;
-(char)treatsFilePackagesAsDirectories;
-(char)canClickDisabledFiles;
-(char)showsHiddenFiles;
-(char)resolvesAliases;
-(void)setResolvesAliases:(char)arg1 ;
-(void)setShowsHiddenFiles:(char)arg1 ;
-(void)setCanClickDisabledFiles:(char)arg1 ;
-(char)allowsExpandingMultipleDirectories;
-(void)setAllowsExpandingMultipleDirectories:(char)arg1 ;
-(void)hidePreviewPanelIfNecessary;
-(void)windowOrderedIn;
-(void)disableHistoryAndDoWork:(/*^block*/id)arg1 ;
-(void)setHidesSharedSection:(char)arg1 ;
-(char)hidesSharedSection;
-(char)makeNewFolderForSavePanel:(id)arg1 ;
-(char)canCreateNewFolder;
-(void)refreshContents;
-(char)sidebarContainsURL:(id)arg1 ;
-(void)selectFirstKeyView;
-(id)documentsDirectoryURL;
-(id)selectedSeamlessOpenerPreviewItems;
-(char)showGotoWithInitialFilename:(id)arg1 ;
-(void)setMediaBrowserShownTypes:(unsigned long long)arg1 ;
-(NSURL *)rootDirectoryURL;
-(void)setRootDirectoryURL:(NSURL *)arg1 ;
-(NSArray *)selectedURLs;
-(void)setSelectedURLs:(NSArray *)arg1 ;
-(CGSize)minimumViewSize;
-(char)showsNewDocumentButton;
-(void)setShowsNewDocumentButton:(char)arg1 ;
-(BOOL)downloadsUbiquitousContents;
-(void)setDownloadsUbiquitousContents:(BOOL)arg1 ;
-(char)acceptsPreviewPanelControl:(id)arg1 ;
-(void)beginPreviewPanelControl:(id)arg1 ;
-(void)endPreviewPanelControl:(id)arg1 ;
-(char)shouldEnableShareButton;
-(CGRect)seamlessOpener:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2 ;
-(id)seamlessOpener:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(CGRect*)arg3 ;
-(char)shouldShowViewSwitcher;
-(double)sidebarWidth;
-(id)initWithFrame:(CGRect)arg1 options:(id)arg2 ;
-(void)associateWithLocationPopUp:(id)arg1 ;
-(void)cacheViewSwitcher:(id)arg1 ;
-(double)fauxToolbarHeightForAppCentric:(char)arg1 runningAsAService:(char)arg2 ;
-(int)viewStyle;
-(void)setViewStyle:(int)arg1 ;
-(char)isNewFolderDialogRunning;
@end

