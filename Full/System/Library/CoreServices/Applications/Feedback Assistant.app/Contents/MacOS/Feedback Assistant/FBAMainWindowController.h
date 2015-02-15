/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Feedback Assistant.app/Contents/MacOS/Feedback Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Feedback Assistant/Feedback Assistant-Structs.h>
#import <AppKit/NSWindowController.h>
#import <Feedback Assistant/NSTableViewDataSource.h>
#import <Feedback Assistant/NSTableViewDelegate.h>
#import <Feedback Assistant/NSOutlineViewDelegate.h>
#import <Feedback Assistant/NSPopoverDelegate.h>
#import <Feedback Assistant/NSUserInterfaceValidations.h>
#import <Feedback Assistant/NSTextFieldDelegate.h>
#import <Feedback Assistant/NSWindowDelegate.h>

@protocol FBAWindowDelegate;
@class NSToolbarItem, FBAJSONEncoding, FBAProject, FBADataStack, FBARestInterface, FBAAttributesWindowController, FBAToolbarPopoverViewController, NSPopover, NSSplitView, NSOutlineView, NSScrollView, NSView, NSTreeController, NSArrayController, NSArray, NSTableView, NSPopUpButton, NSPredicate, NSSearchField, FBADetailViewController, FBAFormResponse, NSString;

@interface FBAMainWindowController : NSWindowController <NSTableViewDataSource, NSTableViewDelegate, NSOutlineViewDelegate, NSPopoverDelegate, NSUserInterfaceValidations, NSTextFieldDelegate, NSWindowDelegate> {

	char _windowIsLoaded;
	id<FBAWindowDelegate> _delegate;
	NSToolbarItem* _attributesToolbarItem;
	FBAJSONEncoding* _JSONContext;
	FBAProject* _selectedDetailedProject;
	FBADataStack* _dataStack;
	FBARestInterface* _restInterface;
	/*^block*/id _deleteCompletionHandler;
	FBAAttributesWindowController* _attributesWindowController;
	FBAToolbarPopoverViewController* _popoverViewController;
	NSPopover* _toolbarPopover;
	NSSplitView* _splitView;
	NSOutlineView* _sidebarView;
	NSScrollView* _sidebarScrollview;
	NSView* _sidebarContainer;
	NSTreeController* _sidebarTreeController;
	NSArrayController* _projectsArrayController;
	NSArray* _projectSidebarNodes;
	NSArray* _projectSortDescriptors;
	NSTableView* _tableView;
	NSArrayController* _mailboxDisplayController;
	NSArrayController* _mailboxArrayController;
	NSArray* _mailboxSortDescriptors;
	NSPopUpButton* _startFeedbackButton;
	NSArray* _bugFormSortDescriptors;
	NSArrayController* _searchArrayController;
	NSPredicate* _searchPredicate;
	NSSearchField* _searchField;
	FBADetailViewController* _detailViewController;
	NSView* _responseContainer;
	FBAFormResponse* _loadingFormResponse;

}

@property (__weak) id<FBAWindowDelegate> delegate;                                                    //@synthesize delegate=_delegate - In the implementation block
@property (__weak) NSToolbarItem * attributesToolbarItem;                                             //@synthesize attributesToolbarItem=_attributesToolbarItem - In the implementation block
@property (nonatomic,retain) FBAJSONEncoding * JSONContext;                                           //@synthesize JSONContext=_JSONContext - In the implementation block
@property (retain) FBAProject * selectedDetailedProject;                                              //@synthesize selectedDetailedProject=_selectedDetailedProject - In the implementation block
@property (retain) FBADataStack * dataStack;                                                          //@synthesize dataStack=_dataStack - In the implementation block
@property (retain) FBARestInterface * restInterface;                                                  //@synthesize restInterface=_restInterface - In the implementation block
@property (copy) id deleteCompletionHandler;                                                          //@synthesize deleteCompletionHandler=_deleteCompletionHandler - In the implementation block
@property (nonatomic,retain) FBAAttributesWindowController * attributesWindowController;              //@synthesize attributesWindowController=_attributesWindowController - In the implementation block
@property (retain) FBAToolbarPopoverViewController * popoverViewController;                           //@synthesize popoverViewController=_popoverViewController - In the implementation block
@property (retain) NSPopover * toolbarPopover;                                                        //@synthesize toolbarPopover=_toolbarPopover - In the implementation block
@property (__weak) NSSplitView * splitView;                                                           //@synthesize splitView=_splitView - In the implementation block
@property (__weak) NSOutlineView * sidebarView;                                                       //@synthesize sidebarView=_sidebarView - In the implementation block
@property (__weak) NSScrollView * sidebarScrollview;                                                  //@synthesize sidebarScrollview=_sidebarScrollview - In the implementation block
@property (__weak) NSView * sidebarContainer;                                                         //@synthesize sidebarContainer=_sidebarContainer - In the implementation block
@property (retain) NSTreeController * sidebarTreeController;                                          //@synthesize sidebarTreeController=_sidebarTreeController - In the implementation block
@property (retain) NSArrayController * projectsArrayController;                                       //@synthesize projectsArrayController=_projectsArrayController - In the implementation block
@property (retain) NSArray * projectSidebarNodes;                                                     //@synthesize projectSidebarNodes=_projectSidebarNodes - In the implementation block
@property (retain) NSArray * projectSortDescriptors;                                                  //@synthesize projectSortDescriptors=_projectSortDescriptors - In the implementation block
@property (retain) NSTableView * tableView;                                                           //@synthesize tableView=_tableView - In the implementation block
@property (retain) NSArrayController * mailboxDisplayController;                                      //@synthesize mailboxDisplayController=_mailboxDisplayController - In the implementation block
@property (retain) NSArrayController * mailboxArrayController;                                        //@synthesize mailboxArrayController=_mailboxArrayController - In the implementation block
@property (retain) NSArray * mailboxSortDescriptors;                                                  //@synthesize mailboxSortDescriptors=_mailboxSortDescriptors - In the implementation block
@property (__weak) NSPopUpButton * startFeedbackButton;                                               //@synthesize startFeedbackButton=_startFeedbackButton - In the implementation block
@property (retain) NSArray * bugFormSortDescriptors;                                                  //@synthesize bugFormSortDescriptors=_bugFormSortDescriptors - In the implementation block
@property (retain) NSArrayController * searchArrayController;                                         //@synthesize searchArrayController=_searchArrayController - In the implementation block
@property (retain) NSPredicate * searchPredicate;                                                     //@synthesize searchPredicate=_searchPredicate - In the implementation block
@property (__weak) NSSearchField * searchField;                                                       //@synthesize searchField=_searchField - In the implementation block
@property (retain) FBADetailViewController * detailViewController;                                    //@synthesize detailViewController=_detailViewController - In the implementation block
@property (__weak) NSView * responseContainer;                                                        //@synthesize responseContainer=_responseContainer - In the implementation block
@property (retain) FBAFormResponse * loadingFormResponse;                                             //@synthesize loadingFormResponse=_loadingFormResponse - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)createBugReport:(id)arg1 ;
-(void)createEnhancementRequest:(id)arg1 ;
-(void)createLocalizationFeedback:(id)arg1 ;
-(void)createSurveyWithFormID:(id)arg1 ;
-(void)closeForLogOut;
-(void)updateUIForNewData;
-(void)didPresentGenericErrorWithRecovery:(char)arg1 contextInfo:(void*)arg2 ;
-(void)tryToCloseWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)reloadDataFromServer;
-(void)editDraftFormResponseWithID:(id)arg1 ;
-(void)didPresentDetailLoadErrorWithRecovery:(char)arg1 contextInfo:(void*)arg2 ;
-(FBAJSONEncoding *)JSONContext;
-(void)setJSONContext:(FBAJSONEncoding *)arg1 ;
-(void)configureYosemiteSidebar;
-(FBAAttributesWindowController *)attributesWindowController;
-(void)setPopoverViewController:(FBAToolbarPopoverViewController *)arg1 ;
-(NSOutlineView *)sidebarView;
-(NSArrayController *)mailboxArrayController;
-(void)setMailboxDisplayController:(NSArrayController *)arg1 ;
-(void)openResponseFromTableDoubleClick:(id)arg1 ;
-(NSView *)responseContainer;
-(FBADetailViewController *)detailViewController;
-(NSPopUpButton *)startFeedbackButton;
-(NSScrollView *)sidebarScrollview;
-(char)deleteSelectedResponses;
-(id)selectedMailboxItem;
-(void)viewOrEditMailboxItem:(id)arg1 ;
-(FBADataStack *)dataStack;
-(FBARestInterface *)restInterface;
-(void)handlePresentErrorWithRecovery:(char)arg1 contextInfo:(void*)arg2 ;
-(char)canDeleteSelectedResponses;
-(void)exportDocument:(id)arg1 ;
-(char)canExportSelectedItem;
-(NSArrayController *)mailboxDisplayController;
-(void)showAttributesSheet:(id)arg1 ;
-(char)canCreateBugReport;
-(char)canCreateLocalizationFeedback;
-(char)canCreateEnhancementRequest;
-(void)startFeedbackFromPullDown:(id)arg1 ;
-(char)validateCreateFeedbackMenuItemForType:(long long)arg1 ;
-(FBAProject *)selectedDetailedProject;
-(void)viewSubmittedFormResponseWithID:(id)arg1 ;
-(void)startResponseWithBugFormID:(id)arg1 ;
-(long long)roleOfTableObjectAtRow:(long long)arg1 ;
-(id)tableObjectAtRow:(long long)arg1 ;
-(NSPopover *)toolbarPopover;
-(NSToolbarItem *)attributesToolbarItem;
-(void)setToolbarPopover:(NSPopover *)arg1 ;
-(FBAToolbarPopoverViewController *)popoverViewController;
-(void)setLoadingFormResponse:(FBAFormResponse *)arg1 ;
-(void)setSelectedDetailedProject:(FBAProject *)arg1 ;
-(void)setProjectSidebarNodes:(NSArray *)arg1 ;
-(void)createFeedbackOfType:(long long)arg1 ;
-(void)createFeedbackOfType:(long long)arg1 formID:(id)arg2 ;
-(char)canCloseImmediately;
-(NSTreeController *)sidebarTreeController;
-(void)switchToProject:(id)arg1 ;
-(void)updateSearchState;
-(void)selectLastMailboxItem;
-(void)updateNewFeedbackButton;
-(id)indexesOfDeletableResponses;
-(void)setDeleteCompletionHandler:(id)arg1 ;
-(void)predeleteAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(id)deleteCompletionHandler;
-(NSArrayController *)searchArrayController;
-(NSArray *)bugFormSortDescriptors;
-(NSArrayController *)projectsArrayController;
-(NSArray *)projectSidebarNodes;
-(NSArray *)projectSortDescriptors;
-(void)selectItemWithKind:(id)arg1 ID:(id)arg2 ;
-(void)didPresentLoadErrorWithRecovery:(char)arg1 contextInfo:(void*)arg2 ;
-(void)selectLastProject;
-(void)updateDockBadge;
-(void)openItem:(id)arg1 ;
-(void)showAttributesPopover;
-(void)setAttributesToolbarItem:(NSToolbarItem *)arg1 ;
-(void)setDataStack:(FBADataStack *)arg1 ;
-(void)setRestInterface:(FBARestInterface *)arg1 ;
-(void)setAttributesWindowController:(FBAAttributesWindowController *)arg1 ;
-(void)setSidebarView:(NSOutlineView *)arg1 ;
-(void)setSidebarScrollview:(NSScrollView *)arg1 ;
-(void)setSidebarTreeController:(NSTreeController *)arg1 ;
-(void)setProjectsArrayController:(NSArrayController *)arg1 ;
-(void)setProjectSortDescriptors:(NSArray *)arg1 ;
-(void)setMailboxArrayController:(NSArrayController *)arg1 ;
-(NSArray *)mailboxSortDescriptors;
-(void)setMailboxSortDescriptors:(NSArray *)arg1 ;
-(void)setStartFeedbackButton:(NSPopUpButton *)arg1 ;
-(void)setBugFormSortDescriptors:(NSArray *)arg1 ;
-(void)setSearchArrayController:(NSArrayController *)arg1 ;
-(void)setDetailViewController:(FBADetailViewController *)arg1 ;
-(void)setResponseContainer:(NSView *)arg1 ;
-(FBAFormResponse *)loadingFormResponse;
-(void)updateSidebar;
-(void)search:(id)arg1 ;
-(NSSearchField *)searchField;
-(void)setSearchField:(NSSearchField *)arg1 ;
-(void)clearSearch;
-(NSPredicate *)searchPredicate;
-(void)setSearchPredicate:(NSPredicate *)arg1 ;
-(id)init;
-(void)setDelegate:(id<FBAWindowDelegate>)arg1 ;
-(NSTableView *)tableView;
-(id<FBAWindowDelegate>)delegate;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(void)keyDown:(id)arg1 ;
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3 ;
-(id)tableView:(id)arg1 rowViewForRow:(long long)arg2 ;
-(id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2 ;
-(char)tableView:(id)arg1 isGroupRow:(long long)arg2 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(char)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3 ;
-(char)windowShouldClose:(id)arg1 ;
-(CGRect)window:(id)arg1 willPositionSheet:(id)arg2 usingRect:(CGRect)arg3 ;
-(void)windowDidLoad;
-(NSSplitView *)splitView;
-(void)setSplitView:(NSSplitView *)arg1 ;
-(void)delete:(id)arg1 ;
-(id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3 ;
-(char)outlineView:(id)arg1 shouldSelectItem:(id)arg2 ;
-(char)outlineView:(id)arg1 isGroupItem:(id)arg2 ;
-(char)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2 ;
-(void)outlineViewSelectionDidChange:(id)arg1 ;
-(void)setTableView:(NSTableView *)arg1 ;
-(NSView *)sidebarContainer;
-(void)setSidebarContainer:(NSView *)arg1 ;
-(void)reload:(id)arg1 ;
@end

