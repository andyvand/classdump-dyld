/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/BKBookshelf.bundle/Contents/MacOS/BKBookshelf
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BKBookshelf/BKBookshelfCategoryContentViewController.h>
#import <BKBookshelf/BKLibraryMigrationDelegate.h>

@class NSView, NSImageView, NSButton, IMProgressView, NSTextField, NSMatrix, NSArray, NSTimer, CKAccountStore, NSDictionary, NSString;

@interface BKBookshelfCategoryWelcomeViewController : BKBookshelfCategoryContentViewController <BKLibraryMigrationDelegate> {

	NSView* _storeArrowView;
	NSImageView* _imageView;
	NSView* _welcomeContainerView;
	NSButton* _welcomeWelcomeButton;
	NSView* _gatheringContainerView;
	IMProgressView* _gatheringProgressIndicator;
	NSTextField* _gatheringTaskTextField;
	NSView* _diskFullContainerView;
	NSMatrix* _diskFullChoiceMatrix;
	NSButton* _diskFullChooseButton;
	NSButton* _diskFullContinueButton;
	NSTextField* _diskFullDirectoryTextField;
	NSView* _signInContainerView;
	NSButton* _signInSignInButton;
	NSButton* _signInNotNowButton;
	NSView* _noBooksContainerView;
	NSButton* _noBooksGoToStoreButton;
	long long _state;
	NSView* _subviewLoadedWeakRef;
	NSArray* _booksToMigrate;
	unsigned long long _booksToMigrateCount;
	unsigned long long _migrationSize;
	unsigned long long _booksMigrated;
	unsigned long long _booksPrepared;
	char _movingLibrary;
	double _gatheringProgress;
	NSTimer* _gatheringTimer;
	NSTimer* _waitingForBooksToArriveTimer;
	CKAccountStore* _accountStore;
	char _userDidChooseDirectory;
	char _alreadyDisplayedWelcomeExperience;
	char _remigrateOnly;
	char _forceCheckForMigratableBooks;
	NSDictionary* _iTunesSecurePrefs;

}

@property (assign,nonatomic) char remigrateOnly;                             //@synthesize remigrateOnly=_remigrateOnly - In the implementation block
@property (assign,nonatomic) char forceCheckForMigratableBooks;              //@synthesize forceCheckForMigratableBooks=_forceCheckForMigratableBooks - In the implementation block
@property (retain) NSDictionary * iTunesSecurePrefs;                         //@synthesize iTunesSecurePrefs=_iTunesSecurePrefs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)iTunesSupportsMigration;
-(void)openRecents:(id)arg1 ;
-(void)migrationCompleted;
-(void)migrationPreparationSucceeded:(id)arg1 ;
-(void)migrationPreparationFinished;
-(void)migrationFailed:(id)arg1 withError:(id)arg2 ;
-(void)migrationSucceeded:(id)arg1 ;
-(void)migrationPreviouslyMigrated:(id)arg1 ;
-(void)diskFullViewChooseLocationAction:(id)arg1 ;
-(void)welcomeViewContinueAction:(id)arg1 ;
-(char)iTunesWantsExplicitBookContentRestricted;
-(char)iTunesWantsParentalPreferencesLocked;
-(void)gotoSignInState;
-(id)selectedAssets;
-(char)hasNoBooks;
-(void)setRemigrateOnly:(char)arg1 ;
-(void)setForceCheckForMigratableBooks:(char)arg1 ;
-(void)stylizeWelcomeButton:(id)arg1 isPrimary:(char)arg2 ;
-(void)noBooksGoToBookstoreAction:(id)arg1 ;
-(void)decideHowToHandleRemigration;
-(void)gotoWelcomeToIBooksState;
-(void)libraryOwnershipDidChange:(id)arg1 ;
-(void)welcomeExperienceCompleteGoToDefaultCategory;
-(char)enoughFreeSpaceForMigration;
-(void)gotoGatheringInformationState;
-(void)completeRemigrationNotEnoughSpace;
-(void)completeRemigration;
-(void)decideHowToProceedPostSignInAndWait:(char)arg1 ;
-(void)loadSubviewForCurrentState;
-(void)waitingForBooksToArriveTimedOut:(id)arg1 ;
-(void)gotoNoBooksState;
-(NSDictionary *)iTunesSecurePrefs;
-(void)setITunesSecurePrefs:(NSDictionary *)arg1 ;
-(id)_iTunesPerUserSecurePreferences;
-(void)gotoStartupDiskFullState;
-(void)decideHowToProceedPostMigration;
-(void)showProgressTimerMethod:(id)arg1 ;
-(void)updateProgressTimerMethod:(id)arg1 ;
-(void)updateDiskFullUI;
-(void)libraryWillImport:(id)arg1 ;
-(void)libraryDidImport:(id)arg1 ;
-(char)remigrateOnly;
-(void)diskFullViewContinueAction:(id)arg1 ;
-(void)signInViewSignInAction:(id)arg1 ;
-(void)diskFullViewChooseMatrixAction:(id)arg1 ;
-(void)signInViewNotNowAction:(id)arg1 ;
-(char)forceCheckForMigratableBooks;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)dealloc;
-(void)undo:(id)arg1 ;
-(void)redo:(id)arg1 ;
-(void)awakeFromNib;
@end
