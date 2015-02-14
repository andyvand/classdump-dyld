/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>
#import <AppKit/NSNavFileBrowser.h>
#import <AppKit/FIFinderViewDelegate.h>

@protocol FIFinderViewProtocol, NSNavFileBrowserDelegate;
@class FIFinderView, NSURL, NSArray, NSString;

@interface NSNavFinderViewFileBrowser : NSView <NSNavFileBrowser, FIFinderViewDelegate> {

	FIFinderView*<FIFinderViewProtocol> _finderView;
	id<NSNavFileBrowserDelegate> _delegate;
	NSURL* _lastDirectoryURL;
	NSArray* _lastSelectedURLs;

}

@property (readonly) FIFinderView * finderView;                          //@synthesize finderView=_finderView - In the implementation block
@property (assign) char treatsFilePackagesAsDirectories; 
@property (assign) char showsHiddenFiles; 
@property (assign) char resolvesAliases; 
@property (assign) char canClickDisabledFiles; 
@property (assign) char allowsExpandingMultipleDirectories; 
@property (retain) NSURL * directoryURL; 
@property (retain) NSURL * rootDirectoryURL; 
@property (retain) NSURL * lastDirectoryURL;                             //@synthesize lastDirectoryURL=_lastDirectoryURL - In the implementation block
@property (assign) int fileListMode; 
@property (assign) id<NSNavFileBrowserDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (assign) char hidesSharedSection; 
@property (assign) char allowsMultipleSelection; 
@property (copy) NSArray * selectedURLs; 
@property (copy) NSArray * lastSelectedURLs;                             //@synthesize lastSelectedURLs=_lastSelectedURLs - In the implementation block
@property (assign) char showsNewDocumentButton; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) CGSize minimumViewSize; 
@property (assign) char downloadsUbiquitousContents; 
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)setDelegate:(id<NSNavFileBrowserDelegate>)arg1 ;
-(void)dealloc;
-(NSURL *)directoryURL;
-(id<NSNavFileBrowserDelegate>)delegate;
-(char)performKeyEquivalent:(id)arg1 ;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)setAllowsMultipleSelection:(char)arg1 ;
-(char)allowsMultipleSelection;
-(id)savePanel;
-(void)setTreatsFilePackagesAsDirectories:(char)arg1 ;
-(void)setDirectoryURL:(NSURL *)arg1 ;
-(void)windowOrderedOut;
-(int)fileListMode;
-(char)treatsFilePackagesAsDirectories;
-(char)canClickDisabledFiles;
-(void)setFileListMode:(int)arg1 ;
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
-(double)fauxToolbarHeightForWindow:(id)arg1 appCentric:(char)arg2 hasMessageView:(char)arg3 runningAsAService:(char)arg4 verticalSpaceAbove:(double*)arg5 ;
-(void)setSavePanel:(id)arg1 ;
-(void)makeNewFolderForSavePanel:(id)arg1 ;
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
-(char)downloadsUbiquitousContents;
-(void)setDownloadsUbiquitousContents:(char)arg1 ;
-(FIFinderView *)finderView;
-(CGRect)seamlessOpener:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2 ;
-(id)seamlessOpener:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(CGRect*)arg3 ;
-(id)initWithFrame:(CGRect)arg1 options:(id)arg2 ;
-(void)setLastDirectoryURL:(NSURL *)arg1 ;
-(void)setLastSelectedURLs:(NSArray *)arg1 ;
-(NSURL *)lastDirectoryURL;
-(NSArray *)lastSelectedURLs;
-(char)isNewFolderDialogRunning;
-(char)finderView:(id)arg1 canSelectURL:(id)arg2 ;
-(char)finderView:(id)arg1 shouldEnableURL:(id)arg2 ;
-(char)finderView:(id)arg1 shouldEnableURL:(id)arg2 itemIsContainer:(char)arg3 itemIsPackage:(char)arg4 ;
-(char)finderView:(id)arg1 canSelectURL:(id)arg2 itemIsContainer:(char)arg3 itemIsPackage:(char)arg4 ;
-(char)finderView:(id)arg1 showAsPackageForURL:(id)arg2 ;
-(void)finderView:(id)arg1 didChangeToDirectoryURL:(id)arg2 ;
-(void)finderViewSelectionDidChange:(id)arg1 ;
-(char)finderViewOpenSelection:(id)arg1 ;
-(void)finderView:(id)arg1 populationInProgress:(char)arg2 ;
-(void)finderView:(id)arg1 clickedOnDisabledURL:(id)arg2 ;
-(id)finderViewRequestRecentPlaces:(id)arg1 ;
-(void)finderViewViewStyleChanged:(id)arg1 ;
-(void)finderView:(id)arg1 scopeChanged:(char)arg2 ;
-(void)finderView:(id)arg1 configureForGotoWithFilename:(id)arg2 ;
-(char)finderView:(id)arg1 acceptsPreviewPanelControl:(id)arg2 ;
-(id)finderViewQuerySearchUTIs:(id)arg1 ;
@end

