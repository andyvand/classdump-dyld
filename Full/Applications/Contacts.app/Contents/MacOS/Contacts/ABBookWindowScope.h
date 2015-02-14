/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Contacts.app/Contents/MacOS/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABMainWindowController, ABPersonMergingControllerDelegate, ABPrintingDelegate, ABShareKitTransitionProvider;
@class NSWindow, ABAddressBook, ABCleanSplitViewController, ABMainWindowViewModel, ABGroupListView, ABGroupEntriesList, ABGroupListController, ABBookGroupHelperFactory, ABCommandExecutor, ABPersonListSearchController, ABMainListOutlineView, ABPersonListController, ABCardView, ABCardViewController, ABCardEditModeController, NSMenu, ABExportArchiveService;

@interface ABBookWindowScope : NSObject {

	NSWindow* _window;
	ABAddressBook* _browsingAddressBook;
	id<ABMainWindowController> _mainWindowController;
	id<ABPersonMergingControllerDelegate> _mergeDelegate;
	id<ABPrintingDelegate> _printingDelegate;
	ABCleanSplitViewController* _splitViewController;
	ABMainWindowViewModel* _mainWindowViewModel;
	ABGroupListView* _groupListView;
	ABGroupEntriesList* _groupEntriesList;
	ABGroupListController* _groupListController;
	ABBookGroupHelperFactory* _helperFactory;
	ABCommandExecutor* _commandExecutor;
	ABPersonListSearchController* _searchController;
	ABMainListOutlineView* _personListView;
	ABPersonListController* _personListController;
	ABCardView* _cardView;
	ABCardViewController* _cardViewConroller;
	ABCardEditModeController* _cardEditModeController;
	id<ABShareKitTransitionProvider> _shareKitTransitionProvider;
	NSMenu* _addDropDownMenu;
	ABCardViewController* _cardViewController;
	ABExportArchiveService* _exportArchiveService;

}

@property (assign) NSWindow * window;                                                        //@synthesize window=_window - In the implementation block
@property (assign) ABAddressBook * browsingAddressBook;                                      //@synthesize browsingAddressBook=_browsingAddressBook - In the implementation block
@property (assign) id<ABMainWindowController> mainWindowController;                          //@synthesize mainWindowController=_mainWindowController - In the implementation block
@property (assign) id<ABPersonMergingControllerDelegate> mergeDelegate;                      //@synthesize mergeDelegate=_mergeDelegate - In the implementation block
@property (assign) id<ABPrintingDelegate> printingDelegate;                                  //@synthesize printingDelegate=_printingDelegate - In the implementation block
@property (assign) ABCleanSplitViewController * splitViewController;                         //@synthesize splitViewController=_splitViewController - In the implementation block
@property (assign) ABMainWindowViewModel * mainWindowViewModel;                              //@synthesize mainWindowViewModel=_mainWindowViewModel - In the implementation block
@property (assign) ABGroupListView * groupListView;                                          //@synthesize groupListView=_groupListView - In the implementation block
@property (assign) ABGroupEntriesList * groupEntriesList;                                    //@synthesize groupEntriesList=_groupEntriesList - In the implementation block
@property (assign) ABGroupListController * groupListController;                              //@synthesize groupListController=_groupListController - In the implementation block
@property (assign) ABBookGroupHelperFactory * helperFactory;                                 //@synthesize helperFactory=_helperFactory - In the implementation block
@property (assign) ABCommandExecutor * commandExecutor;                                      //@synthesize commandExecutor=_commandExecutor - In the implementation block
@property (assign) ABPersonListSearchController * searchController;                          //@synthesize searchController=_searchController - In the implementation block
@property (assign) ABMainListOutlineView * personListView;                                   //@synthesize personListView=_personListView - In the implementation block
@property (assign) ABPersonListController * personListController;                            //@synthesize personListController=_personListController - In the implementation block
@property (assign) ABCardView * cardView;                                                    //@synthesize cardView=_cardView - In the implementation block
@property (assign) ABCardViewController * cardViewController;                                //@synthesize cardViewController=_cardViewController - In the implementation block
@property (assign) ABCardEditModeController * cardEditModeController;                        //@synthesize cardEditModeController=_cardEditModeController - In the implementation block
@property (assign) id<ABShareKitTransitionProvider> shareKitTransitionProvider;              //@synthesize shareKitTransitionProvider=_shareKitTransitionProvider - In the implementation block
@property (assign) ABExportArchiveService * exportArchiveService;                            //@synthesize exportArchiveService=_exportArchiveService - In the implementation block
@property (assign) NSMenu * addDropDownMenu;                                                 //@synthesize addDropDownMenu=_addDropDownMenu - In the implementation block
-(id<ABMainWindowController>)mainWindowController;
-(ABMainWindowViewModel *)mainWindowViewModel;
-(id<ABPersonMergingControllerDelegate>)mergeDelegate;
-(ABGroupListController *)groupListController;
-(ABCleanSplitViewController *)splitViewController;
-(ABCardEditModeController *)cardEditModeController;
-(ABExportArchiveService *)exportArchiveService;
-(NSMenu *)addDropDownMenu;
-(id<ABShareKitTransitionProvider>)shareKitTransitionProvider;
-(id<ABPrintingDelegate>)printingDelegate;
-(void)setMergeDelegate:(id<ABPersonMergingControllerDelegate>)arg1 ;
-(void)setMainWindowController:(id<ABMainWindowController>)arg1 ;
-(void)setPrintingDelegate:(id<ABPrintingDelegate>)arg1 ;
-(void)setSplitViewController:(ABCleanSplitViewController *)arg1 ;
-(void)setMainWindowViewModel:(ABMainWindowViewModel *)arg1 ;
-(void)setAddDropDownMenu:(NSMenu *)arg1 ;
-(void)setGroupListController:(ABGroupListController *)arg1 ;
-(void)setPersonListView:(ABMainListOutlineView *)arg1 ;
-(void)setCardViewController:(ABCardViewController *)arg1 ;
-(void)setCardEditModeController:(ABCardEditModeController *)arg1 ;
-(void)setShareKitTransitionProvider:(id<ABShareKitTransitionProvider>)arg1 ;
-(void)setExportArchiveService:(ABExportArchiveService *)arg1 ;
-(ABMainListOutlineView *)personListView;
-(void)setGroupListView:(ABGroupListView *)arg1 ;
-(ABGroupListView *)groupListView;
-(ABGroupEntriesList *)groupEntriesList;
-(void)setBrowsingAddressBook:(ABAddressBook *)arg1 ;
-(void)setGroupEntriesList:(ABGroupEntriesList *)arg1 ;
-(void)setHelperFactory:(ABBookGroupHelperFactory *)arg1 ;
-(void)setCardView:(ABCardView *)arg1 ;
-(ABCardView *)cardView;
-(ABCardViewController *)cardViewController;
-(ABCommandExecutor *)commandExecutor;
-(void)setPersonListController:(ABPersonListController *)arg1 ;
-(void)setCommandExecutor:(ABCommandExecutor *)arg1 ;
-(ABPersonListController *)personListController;
-(ABAddressBook *)browsingAddressBook;
-(ABBookGroupHelperFactory *)helperFactory;
-(NSWindow *)window;
-(void)setWindow:(NSWindow *)arg1 ;
-(ABPersonListSearchController *)searchController;
-(void)setSearchController:(ABPersonListSearchController *)arg1 ;
@end

