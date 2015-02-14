/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/MacOS/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <iBooks/BKLibraryMigrationService.h>
#import <iBooks/BKAssetHandler.h>
#import <iBooks/AEAnnotationProviderDelegate.h>
#import <iBooks/IMAssetViewerDelegate.h>
#import <iBooks/NSApplicationDelegate.h>
#import <iBooks/NSMenuDelegate.h>
#import <iBooks/ISUIHostProtocol.h>

@protocol IMBookStoreController, IMBookshelfController;
@class NSURL, BKBookKeeperManager, BKLibrary, AEAnnotationProvider, BKLibraryAssetIsNewManager, BKLibraryAssetModificationDateManager, BKLibraryAssetPostProcessor, NSMenu, NSMenuItem, IMWindow, NSOpenPanel, IMPlatformAbstraction, NSMutableDictionary, NSMutableSet, NSArray, NSString;

@interface BKAppDelegate : NSObject <BKLibraryMigrationService, BKAssetHandler, AEAnnotationProviderDelegate, IMAssetViewerDelegate, NSApplicationDelegate, NSMenuDelegate, ISUIHostProtocol> {

	char _bookstoreDisabled;
	char _isFinishedLaunching;
	BKBookKeeperManager* _bookKeeperManager;
	BKLibrary* _library;
	AEAnnotationProvider* _sharedAnnotationProvider;
	BKLibraryAssetIsNewManager* _libraryAssetIsNewManager;
	BKLibraryAssetModificationDateManager* _libraryAssetModificationDateManager;
	BKLibraryAssetPostProcessor* _libraryAssetPostProcessor;
	NSMenu* _openRecentsMenu;
	NSMenu* _shareMenu;
	NSMenu* _goMenu;
	NSMenuItem* _windowMenuItem;
	IMWindow* _libraryWindow;
	IMWindow* _bookstoreWindow;
	NSOpenPanel* _importPanel;
	IMPlatformAbstraction* _platform;
	NSMutableDictionary* _uncompressedTemporaryAssets;
	id _preferenceDidChangeObservation;
	id<IMBookStoreController> _storeController;
	id<IMBookshelfController> _bookshelfController;
	NSMutableSet* _warnedDesktopSupportAssetIDs;
	NSURL* _targetURLPostLaunch;
	NSArray* _targetFilePathsPostLaunch;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) char iTunesSupportsMigration; 
@property (readonly) char iTunesAlreadyMigrated; 
@property (readonly) char iTunesHasMigratableBooks; 
@property (readonly) NSURL * booksDirectory; 
@property (nonatomic,retain) BKBookKeeperManager * bookKeeperManager;                                                  //@synthesize bookKeeperManager=_bookKeeperManager - In the implementation block
@property (nonatomic,retain) BKLibrary * library;                                                                      //@synthesize library=_library - In the implementation block
@property (nonatomic,retain) AEAnnotationProvider * sharedAnnotationProvider;                                          //@synthesize sharedAnnotationProvider=_sharedAnnotationProvider - In the implementation block
@property (nonatomic,retain) BKLibraryAssetIsNewManager * libraryAssetIsNewManager;                                    //@synthesize libraryAssetIsNewManager=_libraryAssetIsNewManager - In the implementation block
@property (nonatomic,retain) BKLibraryAssetModificationDateManager * libraryAssetModificationDateManager;              //@synthesize libraryAssetModificationDateManager=_libraryAssetModificationDateManager - In the implementation block
@property (nonatomic,retain) BKLibraryAssetPostProcessor * libraryAssetPostProcessor;                                  //@synthesize libraryAssetPostProcessor=_libraryAssetPostProcessor - In the implementation block
@property (assign,nonatomic,__weak) NSMenu * openRecentsMenu;                                                          //@synthesize openRecentsMenu=_openRecentsMenu - In the implementation block
@property (assign,nonatomic,__weak) NSMenu * shareMenu;                                                                //@synthesize shareMenu=_shareMenu - In the implementation block
@property (assign,nonatomic,__weak) NSMenu * goMenu;                                                                   //@synthesize goMenu=_goMenu - In the implementation block
@property (assign,nonatomic,__weak) NSMenuItem * windowMenuItem;                                                       //@synthesize windowMenuItem=_windowMenuItem - In the implementation block
@property (nonatomic,retain) IMWindow * libraryWindow;                                                                 //@synthesize libraryWindow=_libraryWindow - In the implementation block
@property (assign,nonatomic,__weak) IMWindow * bookstoreWindow;                                                        //@synthesize bookstoreWindow=_bookstoreWindow - In the implementation block
@property (assign,nonatomic,__weak) NSOpenPanel * importPanel;                                                         //@synthesize importPanel=_importPanel - In the implementation block
@property (nonatomic,retain) IMPlatformAbstraction * platform;                                                         //@synthesize platform=_platform - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * uncompressedTemporaryAssets;                                        //@synthesize uncompressedTemporaryAssets=_uncompressedTemporaryAssets - In the implementation block
@property (assign,nonatomic) char bookstoreDisabled;                                                                   //@synthesize bookstoreDisabled=_bookstoreDisabled - In the implementation block
@property (nonatomic,retain) id preferenceDidChangeObservation;                                                        //@synthesize preferenceDidChangeObservation=_preferenceDidChangeObservation - In the implementation block
@property (assign,nonatomic,__weak) id<IMBookStoreController> storeController;                                         //@synthesize storeController=_storeController - In the implementation block
@property (assign,nonatomic,__weak) id<IMBookshelfController> bookshelfController;                                     //@synthesize bookshelfController=_bookshelfController - In the implementation block
@property (nonatomic,retain) NSMutableSet * warnedDesktopSupportAssetIDs;                                              //@synthesize warnedDesktopSupportAssetIDs=_warnedDesktopSupportAssetIDs - In the implementation block
@property (assign) char isFinishedLaunching;                                                                           //@synthesize isFinishedLaunching=_isFinishedLaunching - In the implementation block
@property (retain) NSURL * targetURLPostLaunch;                                                                        //@synthesize targetURLPostLaunch=_targetURLPostLaunch - In the implementation block
@property (retain) NSArray * targetFilePathsPostLaunch;                                                                //@synthesize targetFilePathsPostLaunch=_targetFilePathsPostLaunch - In the implementation block
+(char)isFileLocked:(id)arg1 manager:(id)arg2 ;
+(void)initialize;
-(void)signOut:(id)arg1 ;
-(void)signIn:(id)arg1 ;
-(void)checkForAvailableDownloads:(id)arg1 ;
-(void)handleGetURLEvent:(id)arg1 withReplyEvent:(id)arg2 ;
-(void)loadStorefront;
-(void)setPlatform:(IMPlatformAbstraction *)arg1 ;
-(IMPlatformAbstraction *)platform;
-(char)annotationProvider:(id)arg1 acknowledgeMergingAnnotationsWithAssetVersionMismatch:(id)arg2 assetID:(id)arg3 ;
-(void)pluginWillCloseForAsset:(id)arg1 ;
-(void)performWindowClose:(id)arg1 ;
-(char)closeAsset:(id)arg1 flags:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)openAsset:(id)arg1 sender:(id)arg2 usingImage:(id)arg3 fromScreenRect:(CGRect)arg4 selectLocation:(id)arg5 ;
-(void)updateAsset:(id)arg1 ;
-(void)showFrontmostAssetInStore:(id)arg1 ;
-(void)library:(id)arg1 ;
-(char)bookstoreDisabled;
-(void)setBookstoreDisabled:(char)arg1 ;
-(char)openStorePageForAsset:(id)arg1 sender:(id)arg2 error:(id*)arg3 ;
-(void)handleAppleEvent:(id)arg1 withReplyEvent:(id)arg2 ;
-(void)provideFeedback:(id)arg1 ;
-(void)setIsFinishedLaunching:(char)arg1 ;
-(void)showKeyboardShortcuts:(id)arg1 ;
-(void)showInfo:(id)arg1 ;
-(void)_resetWarnedAboutDesktopSupport;
-(void)assetHasPendingUpdate:(id)arg1 ;
-(void)_updateBookstoreAvailability;
-(void)p_saveOpenBooksToDefaults;
-(char)bookLibraryAvailable;
-(void)setSharedAnnotationProvider:(AEAnnotationProvider *)arg1 ;
-(AEAnnotationProvider *)sharedAnnotationProvider;
-(void)setBookKeeperManager:(BKBookKeeperManager *)arg1 ;
-(void)setLibraryAssetIsNewManager:(BKLibraryAssetIsNewManager *)arg1 ;
-(BKBookKeeperManager *)bookKeeperManager;
-(BKLibraryAssetIsNewManager *)libraryAssetIsNewManager;
-(void)setLibraryAssetModificationDateManager:(BKLibraryAssetModificationDateManager *)arg1 ;
-(BKLibraryAssetModificationDateManager *)libraryAssetModificationDateManager;
-(void)setLibraryAssetPostProcessor:(BKLibraryAssetPostProcessor *)arg1 ;
-(BKLibraryAssetPostProcessor *)libraryAssetPostProcessor;
-(NSArray *)targetFilePathsPostLaunch;
-(NSURL *)targetURLPostLaunch;
-(void)setTargetURLPostLaunch:(NSURL *)arg1 ;
-(void)_openOrAddFilePaths:(id)arg1 ;
-(void)setTargetFilePathsPostLaunch:(NSArray *)arg1 ;
-(void)p_openBooksSavedToDefaultsCompletion:(/*^block*/id)arg1 ;
-(void)_addFilePath:(id)arg1 openBook:(char)arg2 ;
-(void)_revealAndOpenAsset:(id)arg1 sender:(id)arg2 ;
-(void)_retryAddingFilePath:(id)arg1 openBook:(char)arg2 originalName:(id)arg3 retryCount:(unsigned long long)arg4 fileManager:(id)arg5 ;
-(id<IMBookshelfController>)bookshelfController;
-(void)revealAsset:(id)arg1 select:(char)arg2 ;
-(NSMenu *)goMenu;
-(IMWindow *)libraryWindow;
-(IMWindow *)bookstoreWindow;
-(NSMenu *)openRecentsMenu;
-(void)openRecentBook:(id)arg1 ;
-(void)viewMyAppleID:(id)arg1 ;
-(void)ib_signInOut:(id)arg1 ;
-(void)migrateBooks:(id)arg1 ;
-(void)migrateBooksFromITunes:(id)arg1 ;
-(char)iTunesSupportsMigration;
-(NSOpenPanel *)importPanel;
-(void)crashDuringMigration:(id)arg1 ;
-(void)cacheBuster:(id)arg1 ;
-(void)openRecents:(id)arg1 ;
-(void)importBooks:(id)arg1 ;
-(void)showTitles:(id)arg1 ;
-(void)purchases:(id)arg1 ;
-(void)newCollection:(id)arg1 ;
-(void)newCollectionFromSelection:(id)arg1 ;
-(void)openAsset:(id)arg1 sender:(id)arg2 ;
-(id)_showBookStore;
-(id<IMBookStoreController>)storeController;
-(void)setLibraryWindow:(IMWindow *)arg1 ;
-(void)showBookstore:(id)arg1 ;
-(char)openStorePageForAsset:(id)arg1 error:(id*)arg2 ;
-(id)localizedStringForPlistURL:(id)arg1 ;
-(void)setBookstoreWindow:(IMWindow *)arg1 ;
-(id)_appleEventDescriptorForURLEvent:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)storeURLForSeriesID:(id)arg1 ;
-(id)storeURLForAsset:(id)arg1 ;
-(void)setWarnedDesktopSupportAssetIDs:(NSMutableSet *)arg1 ;
-(NSMutableSet *)warnedDesktopSupportAssetIDs;
-(void)_enumerateOpenAssets:(/*^block*/id)arg1 ;
-(char)areCitationsAllowedForAsset:(id)arg1 ;
-(char)hasUpsellPageForAsset:(id)arg1 isPictureBook:(char)arg2 ;
-(void)showCorruptBookAndClose:(id)arg1 ;
-(void)warnAboutDesktopSupportForAsset:(id)arg1 ;
-(void)_displaySelectedWindow:(id)arg1 ;
-(void)showApplicationInfo:(id)arg1 ;
-(void)addToLibrary:(id)arg1 ;
-(void)specialCharacters:(id)arg1 ;
-(void)storeHome:(id)arg1 ;
-(void)authorizeThisComputer:(id)arg1 ;
-(void)deauthorizeThisComputer:(id)arg1 ;
-(void)checkForBookUpdates:(id)arg1 ;
-(void)bookTitle:(id)arg1 ;
-(void)openServiceAndSupport:(id)arg1 ;
-(char)openStorePageForSeriesID:(id)arg1 error:(id*)arg2 ;
-(void)setOpenRecentsMenu:(NSMenu *)arg1 ;
-(void)setGoMenu:(NSMenu *)arg1 ;
-(void)setWindowMenuItem:(NSMenuItem *)arg1 ;
-(void)setImportPanel:(NSOpenPanel *)arg1 ;
-(NSMutableDictionary *)uncompressedTemporaryAssets;
-(void)setUncompressedTemporaryAssets:(NSMutableDictionary *)arg1 ;
-(id)preferenceDidChangeObservation;
-(void)setPreferenceDidChangeObservation:(id)arg1 ;
-(void)setStoreController:(id<IMBookStoreController>)arg1 ;
-(void)setBookshelfController:(id<IMBookshelfController>)arg1 ;
-(NSURL *)booksDirectory;
-(void)_volumeDidUnmountNotification:(id)arg1 ;
-(char)booksToMigrate:(id*)arg1 allocatedSize:(unsigned long long*)arg2 error:(id*)arg3 ;
-(char)_readMigrationLog:(id*)arg1 ;
-(void)performBookMigration:(id)arg1 ;
-(void)_chooseLibraryDirectory:(id)arg1 withAllocatedSize:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(char)iTunesAlreadyMigrated;
-(char)iTunesHasMigratableBooks;
-(void)chooseDirectoryToMigrateBooksWithTotalAllocatedSize:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(char)_alertShouldUpdateWithImportCount:(unsigned long long)arg1 replaceCount:(unsigned long long)arg2 ;
-(void)_processURLs:(id)arg1 shouldUpdate:(char)arg2 completion:(/*^block*/id)arg3 ;
-(char)traverseDirectoryOnImport:(id)arg1 ;
-(char)_alertShouldImportDuplicatesCount:(unsigned long long)arg1 ;
-(void)importURLs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)_enoughFreeSpaceToOpenBook:(id)arg1 ;
-(id)_locationForFragment:(id)arg1 ;
-(char)_preflightOpenAsset:(id)arg1 authorizeIfNeeded:(char)arg2 retryBlock:(/*^block*/id)arg3 ;
-(char)pathRepresentsImageSupportedForCoverArt:(id)arg1 ;
-(void)importForDevelopment:(id)arg1 ;
-(char)openStorePageForSeriesID:(id)arg1 sender:(id)arg2 error:(id*)arg3 ;
-(void)moveAssetsToDefaultCollections:(id)arg1 sender:(id)arg2 ;
-(char)deleteAssets:(id)arg1 sender:(id)arg2 exhaustive:(char)arg3 ;
-(id)coverArtURLIfAvailableFromDropURLs:(id)arg1 ;
-(void)_importProofAtURL:(id)arg1 withAssetIDString:(id)arg2 andOpenToPage:(unsigned long long)arg3 ;
-(void)sortBy:(id)arg1 ;
-(void)applicationWillFinishLaunching:(id)arg1 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(void)applicationDidResignActive:(id)arg1 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)showPreferences:(id)arg1 ;
-(NSMenuItem *)windowMenuItem;
-(NSMenu *)shareMenu;
-(void)setShareMenu:(NSMenu *)arg1 ;
-(void)share:(id)arg1 ;
-(void)addToCollection:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)windowDidBecomeKey:(id)arg1 ;
-(void)application:(id)arg1 openFiles:(id)arg2 ;
-(char)application:(id)arg1 openFile:(id)arg2 ;
-(void)startDictation:(id)arg1 ;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(char)applicationShouldHandleReopen:(id)arg1 hasVisibleWindows:(char)arg2 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)windowWillClose:(id)arg1 ;
-(void)menuWillOpen:(id)arg1 ;
-(void)clearRecentDocuments:(id)arg1 ;
-(void)windowDidBecomeMain:(id)arg1 ;
-(void)windowDidEnterFullScreen:(id)arg1 ;
-(void)windowDidExitFullScreen:(id)arg1 ;
-(char)isFinishedLaunching;
-(BKLibrary *)library;
-(void)setLibrary:(BKLibrary *)arg1 ;
-(void)serviceDisplayDialog:(id)arg1 ;
-(void)serviceDisplayDialog:(id)arg1 withServiceDelegate:(id)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)serviceDismissDialog:(id)arg1 withExitCode:(long long)arg2 ;
@end

