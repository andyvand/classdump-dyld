/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:46 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ViewBridge/NSViewService.h>
#import <ContactsUI/CNContactPickerViewController.h>
#import <ContactsUI/CNContactPickerInternalSetup.h>

@protocol CNContactPickerInternalResponseDelegate;
@class ABAddressBook, CNContactPickerNotificationWatcher, CNContactPickerSearchController, ABPersonEntriesList, CNContactListController, CNGroupListController, CNGroupListEntriesFactory, ABGroupEntriesList, ABPersonListSearchController, CNGroupListView, CNContactListView, ABBookSearchField, NSWindow, NSString;

@interface CNContactPickerViewService : NSViewService <CNContactPickerViewController, CNContactPickerInternalSetup> {

	ABAddressBook* _addressBook;
	CNContactPickerNotificationWatcher* _notificationWatcher;
	CNContactPickerSearchController* _contactSearchController;
	char _needsHostingWindow;
	ABPersonEntriesList* _personEntriesList;
	CNContactListController* _contactListController;
	CNGroupListController* _groupListController;
	CNGroupListEntriesFactory* _groupEntriesFactory;
	ABGroupEntriesList* _groupEntriesList;
	id<CNContactPickerInternalResponseDelegate> _responseDelegate;
	ABPersonListSearchController* _searchController;
	CNGroupListView* _groupListView;
	CNContactListView* _contactListView;
	ABBookSearchField* _searchField;
	NSWindow* _hostingWindow;

}

@property (readonly) CNContactListController * contactListController;                         //@synthesize contactListController=_contactListController - In the implementation block
@property (readonly) ABPersonListSearchController * searchController;                         //@synthesize searchController=_searchController - In the implementation block
@property (getter=isSearchFieldVisible) char searchFieldVisible; 
@property (__weak) CNGroupListView * groupListView;                                           //@synthesize groupListView=_groupListView - In the implementation block
@property (__weak) CNContactListView * contactListView;                                       //@synthesize contactListView=_contactListView - In the implementation block
@property (__weak) ABBookSearchField * searchField;                                           //@synthesize searchField=_searchField - In the implementation block
@property (retain) NSWindow * hostingWindow;                                                  //@synthesize hostingWindow=_hostingWindow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) id<CNContactPickerInternalResponseDelegate> responseDelegate; 
-(void)addSection:(id)arg1 ;
-(void)setResponseDelegate:(id<CNContactPickerInternalResponseDelegate>)arg1 ;
-(void)pickerDidCreate;
-(void)resetUsageStatistics;
-(void)traceUsageStatistics;
-(void)showSectionWithIdentifier:(id)arg1 ;
-(void)registerSectionsForDraggedTypes:(id)arg1 ;
-(void)setSearchFieldVisible:(char)arg1 ;
-(void)setContactListView:(CNContactListView *)arg1 ;
-(unsigned long long)countOfContactsExpanded;
-(CNContactListView *)contactListView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 needsHostingWindow:(char)arg3 ;
-(void)setupContactListController;
-(void)setupGroupListController;
-(void)setupSearchController;
-(void)setupNotificationWatcher;
-(void)setInitialSelection;
-(id)makeGroupListNotificationHandler;
-(id)makePersonListUIReflector;
-(void)setGroupListView:(CNGroupListView *)arg1 ;
-(void)setPickerScope:(id)arg1 ;
-(void)attachViewToHostingWindow:(id)arg1 ;
-(void)setHostingWindow:(NSWindow *)arg1 ;
-(unsigned long long)countOfGroupsViewed;
-(id<CNContactPickerInternalResponseDelegate>)responseDelegate;
-(id)initWithNeedsHostingWindow:(char)arg1 ;
-(char)isSearchFieldVisible;
-(CNContactListController *)contactListController;
-(CNGroupListView *)groupListView;
-(NSWindow *)hostingWindow;
-(ABBookSearchField *)searchField;
-(void)setSearchField:(ABBookSearchField *)arg1 ;
-(void)setAccounts:(id)arg1 ;
-(id)browsingHeadliner;
-(unsigned long long)countOfLocalSearchesPerformed;
-(unsigned long long)countOfServerSearchesPerformed;
-(void)setDisplayedKeys:(id)arg1 ;
-(unsigned long long)awakeFromRemoteView;
-(id)pickerView;
-(id)init;
-(void)setView:(id)arg1 ;
-(void)awakeFromNib;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)nibName;
-(ABPersonListSearchController *)searchController;
@end

