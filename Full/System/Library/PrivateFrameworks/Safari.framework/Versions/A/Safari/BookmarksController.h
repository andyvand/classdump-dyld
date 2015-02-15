/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/NSMenuDelegate.h>
#import <Safari/OldSpotlightDataSource.h>

@class NSMenu, NSMutableDictionary, NSMutableSet, NSMenuItem, NSTimer, NSMutableArray, WebBookmark, NSString;

@interface BookmarksController : NSObject <NSMenuDelegate, OldSpotlightDataSource> {

	BookmarksControllerOld* _controller;
	NSMenu* _bookmarksMenu;
	char _menuGood;
	char _menuIncludesBonjour;
	NSMutableDictionary* _proxiesByIdentifier;
	NSMutableSet* _parentalControlDomains;
	NSMutableSet* _pendingSpotlightCacheAdditions;
	NSMutableSet* _pendingSpotlightCacheDeletions;
	double _bookmarksFileTimeForSpotlight;
	unsigned long long _bookmarksFileSizeForSpotlight;
	char _registeredWithSpotlightCacheController;
	unsigned long long _bookmarksFileSize;
	double _bookmarksFileTime;
	NSMenuItem* _lastBuiltInBookmarksMenuItem;
	unique_ptr<Safari::FileLocker, std::__1::default_delete<Safari::FileLocker> >* _fileLocker;
	NSTimer* _pendingSaveTimer;
	NSMutableArray* _migratedNonSafariBookmarkFiles;
	char _didFillWithBuiltInBookmarks;
	char _reloadingBookmarks;
	char _savePending;
	WebBookmark* _bookmarksBarCollection;
	WebBookmark* _bookmarksMenuCollection;
	SHA256Hash _builtInBookmarksStateHash;

}

@property (nonatomic,retain,readonly) WebBookmark * bookmarksBarCollection;                    //@synthesize bookmarksBarCollection=_bookmarksBarCollection - In the implementation block
@property (nonatomic,retain,readonly) WebBookmark * bookmarksMenuCollection;                   //@synthesize bookmarksMenuCollection=_bookmarksMenuCollection - In the implementation block
@property (assign,nonatomic) SHA256Hash builtInBookmarksStateHash;                             //@synthesize builtInBookmarksStateHash=_builtInBookmarksStateHash - In the implementation block
@property (assign,nonatomic) char didFillWithBuiltInBookmarks;                                 //@synthesize didFillWithBuiltInBookmarks=_didFillWithBuiltInBookmarks - In the implementation block
@property (assign,getter=isReloadingBookmarks,nonatomic) char reloadingBookmarks;              //@synthesize reloadingBookmarks=_reloadingBookmarks - In the implementation block
@property (assign,getter=isSavePending,nonatomic) char savePending;                            //@synthesize savePending=_savePending - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)bookmarksBarContainsProxy:(id)arg1 ;
+(id)standardBookmarksFileLockPath;
+(id)standardBookmarksFilePath;
+(void)notifySyncClientOfBookmarkChanges;
+(id)imageForBookmark:(id)arg1 ;
+(id)bookmarkSourceForProxyIdentifier:(id)arg1 ;
+(id)addMenuItemForBookmarkFolder:(id)arg1 toMenu:(id)arg2 ;
+(id)recursivelyAddMenuItemsForChildFoldersOfBookmark:(id)arg1 toMenu:(id)arg2 withIndentationLevel:(unsigned)arg3 ;
+(id)_bookmarksBarCollectionTitle;
+(id)_bookmarksMenuCollectionTitle;
+(void)tellUserThatSyncWon;
+(void)tellUserThatExternalChangePreemptedLocalChange;
+(id)bookmarkTitleForProxyIdentifier:(id)arg1 ;
+(id)_migratedBookmarksFolder;
+(void)_deleteMigratedBookmarksDirectoryIfContainsNoMigratableFiles;
+(id)_validBookmarkBarProxyIdentifiers;
+(char)removeBookmarksBarProxy:(id)arg1 ;
+(char)addBookmarksBarProxy:(id)arg1 ;
+(void)setReadOnly:(char)arg1 ;
+(char)isBookmarksURLString:(id)arg1 ;
+(char)isHistoryURLString:(id)arg1 ;
+(long long)indexOfBookmark:(id)arg1 withinMenu:(id)arg2 ;
+(id)allBookmarksBarProxies;
+(void)toggleBookmarksBarContainsProxy:(id)arg1 ;
+(id)sharedController;
-(char)reloadBookmarksFromFileIfChanged;
-(void)exportBookmarks;
-(void)savePendingChanges;
-(id)addMenuItemForBookmark:(id)arg1 withTabPlacementHint:(const TabPlacementHint*)arg2 toMenu:(id)arg3 ;
-(id)allBookmarks;
-(WebBookmark *)bookmarksBarCollection;
-(void)bookmarksWereReloadedInGroup:(id)arg1 ;
-(id)_initWithBookmarksMenu:(id)arg1 ;
-(WebBookmark *)bookmarksMenuCollection;
-(void)_updateDisplayedTitlesForBuiltInBookmarks:(id)arg1 ;
-(void)addChildrenOfBookmark:(id)arg1 withTabPlacementHint:(const TabPlacementHint*)arg2 toMenu:(id)arg3 ;
-(void)addBookmarksMenuFolderItems;
-(void)addFavoritesSubmenu;
-(void)addSubmenuForBookmarkSource:(id)arg1 ;
-(char)_doesTopLevelBookmarkContainPresentableInMenuBookmarks;
-(void)addSpecialBookmarkSourcesToMenu;
-(void)_addBookmarksToMenu;
-(void)_pendingSaveTimerFired:(id)arg1 ;
-(char)isReloadingBookmarks;
-(void)setReloadingBookmarks:(char)arg1 ;
-(char)_bookmarksFileHasChanged;
-(void)_rememberBookmarksFileInfo;
-(id)bookmarkSourceWithRole:(id)arg1 bookmarkIndex:(unsigned long long*)arg2 ;
-(id)_createBookmarkSourceIfNeededWithStoredTitle:(id)arg1 displayedTitle:(id)arg2 unlocalizedDisplayedTitle:(id)arg3 indexInBookmarkSources:(unsigned long long)arg4 fileNeedsUpdate:(char*)arg5 ;
-(id)bookmarkSourceWithStoredTitle:(id)arg1 displayedTitle:(id)arg2 unlocalizedDisplayedTitle:(id)arg3 bookmarkIndex:(unsigned long long*)arg4 fileNeedsUpdate:(char*)arg5 ;
-(char)didFillWithBuiltInBookmarks;
-(SHA256Hash)builtInBookmarksStateHash;
-(char)isSavePending;
-(void)setSavePending:(char)arg1 ;
-(void)unlockFileLocker;
-(void)setDidFillWithBuiltInBookmarks:(char)arg1 ;
-(void)_schedulePendingSaveTimer;
-(int)lockFileLocker;
-(void)didSavePendingChanges;
-(void)_deleteMigratedNonSafariBookmarkFiles;
-(id)bookmarkForPersistentIdentifier:(id)arg1 ;
-(void)_removeAllBookmarksFromMenu;
-(char)_favoritesContainsBookmark:(id)arg1 ;
-(char)savePendingChangesSoon;
-(void)_sendFavoritesChangedNotification;
-(void)_resetMenu;
-(void)_updateBookmarkSources;
-(void)_registerWithSpotlightCacheController;
-(int)_importMigratedSafariBookmarks;
-(void)_fillWithBuiltInBookmarks;
-(void)_importMigratedNonSafariBookmarks;
-(void)_fillBookmarksBarWithBuiltInBookmarksIfNecessary;
-(void)_receivedBookmarksChangedNotification:(id)arg1 ;
-(void)_receivedDefaultsChangedNotification:(id)arg1 ;
-(void)_bookmarksFileChangedNotification:(id)arg1 ;
-(void)_updateSpotlightCacheIfFileHasChanged;
-(id)builtInBookmarks;
-(void)_copyChildBookmarksFromBookmark:(id)arg1 toBookmark:(id)arg2 ;
-(void)setBuiltInBookmarksStateHash:(SHA256Hash)arg1 ;
-(id)_builtInBookmarksBarBookmark;
-(void)clearProxiesByIdentifier;
-(void)insertProxyBookmarkWithIdentifier:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)addTopLevelBookmark:(id)arg1 ;
-(void)goToNthFavoriteLeaf:(int)arg1 ;
-(void)_addLeafBookmark:(id)arg1 toSpotlightCacheArray:(id)arg2 ;
-(void)_addBookmark:(id)arg1 toSpotlightCacheArray:(id)arg2 ;
-(void)_addBookmarksFromArray:(id)arg1 toSpotlightCacheArray:(id)arg2 ;
-(void)_addBookmarkToTopSites:(id)arg1 customizedTitle:(id)arg2 ;
-(void)_addBookmark:(id)arg1 parent:(id)arg2 ;
-(id)itemsToAddForSpotlightDataType:(id)arg1 ;
-(id)itemsToDeleteForSpotlightDataType:(id)arg1 ;
-(id)allItemsForSpotlightDataType:(id)arg1 ;
-(void)resetAdditionsAndDeletionsForSpotlightDataType:(id)arg1 ;
-(void)updateWillBeginForSpotlightDataType:(id)arg1 ;
-(void)updateDidEndForSpotlightDataType:(id)arg1 ;
-(id)_createBookmarkSourceIfNeededWithRole:(id)arg1 title:(id)arg2 indexInBookmarkSource:(unsigned long long)arg3 fileNeedsUpdate:(char*)arg4 ;
-(FileLocker*)fileLocker;
-(char)fileLockerIsLocked;
-(id)persistentIdentifierForBookmark:(id)arg1 ;
-(id)bookmarkForNewWindowTabsPreference;
-(id)historyCollection;
-(char)_menuContainsBookmark:(id)arg1 ;
-(void)addTopLevelBookmark:(id)arg1 title:(id)arg2 ;
-(char)visitFavoriteBookmarkFromKeyEvent:(id)arg1 ;
-(void)displayNewBookmarksSheetForBookmark:(id)arg1 inWindow:(id)arg2 ;
-(void)removeAllTestDriveBookmarks;
-(void)makePermanentAllTestDriveBookmarks;
-(void)dealloc;
-(void)menuNeedsUpdate:(id)arg1 ;
-(char)menuHasKeyEquivalent:(id)arg1 forEvent:(id)arg2 target:(id*)arg3 action:(SEL*)arg4 ;
@end

