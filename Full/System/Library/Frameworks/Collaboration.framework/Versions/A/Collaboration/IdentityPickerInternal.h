/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Collaboration.framework/Versions/A/Collaboration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Collaboration/Collaboration-Structs.h>
#import <AppKit/NSWindowController.h>

@class NSString, NSArray, NSTimer, CBIdentityQuery, SidebarDataSource, IdentityDataSource, SFPasswordAssistantInspectorController, NSTableView, NSSearchField, NSProgressIndicator, NSButton, NSWindow, NSTextField, NSImageView;

@interface IdentityPickerInternal : NSWindowController {

	id _delegate;
	SEL _didEndSelector;
	NSString* _title;
	NSString* _defaultButtonTitle;
	NSArray* _disabledIdentities;
	NSArray* _identities;
	char _allowsMultipleSelection;
	char _runningModal;
	char _showsHiddenIdentities;
	char _showsSharingOnlyUsers;
	char _showsLocalUsers;
	char _showsLocalGroups;
	char _showsNetworkUsers;
	char _showsNetworkGroups;
	char _showsNewPersonButton;
	char _showsAddressBook;
	char _showsAddressBookGroups;
	char _allNetworkUsersDone;
	char _allNetworkGroupsDone;
	NSTimer* _queryStartTimer;
	NSTimer* _queryUpdateTimer;
	NSTimer* _progressTimer;
	CBIdentityQuery* _userQuery;
	CBIdentityQuery* _groupQuery;
	CBIdentityQuery* _allNetworkUsers;
	CBIdentityQuery* _allNetworkGroups;
	SidebarDataSource* _sidebarDataSource;
	IdentityDataSource* _identityDataSource;
	CFRunLoopSourceRef _dynamicStoreSource;
	SFPasswordAssistantInspectorController* _passwordAssistant;
	NSTableView* _sidebarTableView;
	NSTableView* _identityTableView;
	NSSearchField* _searchField;
	NSProgressIndicator* _progressSpinner;
	NSButton* _shareButton;
	NSButton* _cancelButton;
	NSButton* _newPersonButton;
	NSWindow* _shareModalWindow;
	NSWindow* _newPersonWindow;
	NSTextField* _nameTextField;
	NSTextField* _passwordTextField;
	NSTextField* _verifyTextField;
	NSImageView* _nameWrongImageView;
	NSImageView* _passwordWrongImageView;
	NSImageView* _verifyWrongImageView;
	NSButton* _newPersonHelpButton;
	NSWindow* _addPasswordWindow;
	NSTextField* _addDescriptionTextField;
	NSTextField* _addPasswordTextField;
	NSTextField* _addVerifyTextField;
	NSImageView* _addPasswordWrongImageView;
	NSImageView* _addVerifyWrongImageView;
	NSButton* _addPasswordHelpButton;

}
-(void)runModalForWindow:(id)arg1 modalDelegate:(id)arg2 didEndSelector:(SEL)arg3 contextInfo:(void*)arg4 ;
-(void)setShowsHiddenIdentities:(char)arg1 ;
-(char)showsHiddenIdentities;
-(void)setShowsLocalUsers:(char)arg1 ;
-(char)showsLocalUsers;
-(void)setShowsLocalGroups:(char)arg1 ;
-(char)showsLocalGroups;
-(void)setShowsNetworkUsers:(char)arg1 ;
-(char)showsNetworkUsers;
-(void)setShowsNetworkGroups:(char)arg1 ;
-(char)showsNetworkGroups;
-(void)setShowsGroups:(char)arg1 ;
-(char)showsGroups;
-(void)setShowsUsers:(char)arg1 ;
-(char)showsUsers;
-(void)setShowsLocalIdentities:(char)arg1 ;
-(char)showsLocalIdentities;
-(void)setShowsSharingOnlyUsers:(char)arg1 ;
-(char)showsSharingOnlyUsers;
-(void)setShowsNetworkIdentities:(char)arg1 ;
-(char)showsNetworkIdentities;
-(void)setShowsNewPersonButton:(char)arg1 ;
-(char)showsNewPersonButton;
-(void)setShowsAddressBook:(char)arg1 ;
-(char)showsAddressBook;
-(void)setShowsAddressBookGroups:(char)arg1 ;
-(char)showsAddressBookGroups;
-(void)setDisabledIdentities:(id)arg1 ;
-(id)disabledIdentities;
-(id)currentSidebarSelection;
-(void)updateIdentities;
-(void)updateSearchResults:(id)arg1 ;
-(void)cancelUserQuery;
-(void)cancelGroupQuery;
-(void)startProgressAnimation:(id)arg1 ;
-(void)queryForUsersByName:(id)arg1 authority:(id)arg2 ;
-(void)queryForGroupsByName:(id)arg1 authority:(id)arg2 ;
-(void)searchPolicyChanged;
-(void)queryForIdentitiesByName:(id)arg1 authority:(id)arg2 ;
-(void)startNewUserQuery:(id)arg1 ;
-(void)startNewGroupQuery:(id)arg1 ;
-(void)searchForPeopleByName:(id)arg1 inGroup:(id)arg2 ;
-(void)sidebarTableViewSelectionDidChange:(id)arg1 ;
-(void)installDynamicStoreCallBack;
-(void)uninstallDynamicStoreCallBack;
-(void)cancelAllQueries;
-(void)identityTableViewSelectionDidChange:(id)arg1 ;
-(long long)showAddPassword:(id)arg1 ;
-(void)identityQueryDidFindResults:(id)arg1 moreComing:(char)arg2 ;
-(void)createAccountClicked:(id)arg1 ;
-(void)newPersonClicked:(id)arg1 ;
-(void)helpClicked:(id)arg1 ;
-(void)paswordAssistant:(id)arg1 ;
-(void)searchTextDidChange:(id)arg1 ;
-(id)identities;
-(void)removeObservers;
-(void)addressBookChanged:(id)arg1 ;
-(void)cancelClicked:(id)arg1 ;
-(void)shareClicked:(id)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(long long)runModal;
-(void)setAllowsMultipleSelection:(char)arg1 ;
-(char)allowsMultipleSelection;
-(void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)windowDidLoad;
-(id)defaultButtonTitle;
-(void)setDefaultButtonTitle:(id)arg1 ;
@end
