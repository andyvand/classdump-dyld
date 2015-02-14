/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SocialUI/SocialUI-Structs.h>
#import <SocialUI/SOChatViewController.h>
#import <SocialUI/CNAutocompleteFetchDelegate.h>
#import <SocialUI/IDSBatchIDQueryControllerDelegate.h>
#import <SocialUI/NSTextFieldDelegate.h>
#import <SocialUI/NSTableViewDataSource.h>
#import <SocialUI/NSTableViewDelegate.h>

@protocol CNCancelable;
@class NSString, NSMutableArray, NSTimer, IDSBatchIDQueryController, NSMutableDictionary, NSMutableSet, NSMutableOrderedSet, NSProgressIndicator, IMHandle, SOCompletionWindow, SOCompletionTableView, NSTableColumn, NSTextField, IMAccount, SOCompletionResult;

@interface SOAddRecipientFieldViewController : SOChatViewController <CNAutocompleteFetchDelegate, IDSBatchIDQueryControllerDelegate, NSTextFieldDelegate, NSTableViewDataSource, NSTableViewDelegate> {

	long long _selectedRow;
	NSString* _searchString;
	unsigned _skipCompletionRebuilding : 1;
	NSMutableArray* _autoCompleteResults;
	BOOL _canShowCompletionResults;
	NSTimer* _showCompletionResultsTimer;
	IDSBatchIDQueryController* _batchIDQueryController;
	NSMutableDictionary* _validatedIDQueryResults;
	NSMutableSet* _idsIDsToValidate;
	char _completionWindowVisible;
	char _isSearchingServer;
	char _foundResults;
	NSMutableOrderedSet* _searchResults;
	NSProgressIndicator* _addRecipientProgressIndicator;
	IMHandle* _addRecipientInvitedHandle;
	NSTimer* _addRecipientIDSCheckTimer;
	SOCompletionWindow* _completionWindow;
	SOCompletionTableView* _completionTableView;
	long long _completionWindowLevel;
	NSTableColumn* _accountTableColumn;
	id<CNCancelable> _currentSearchRequest;
	id _showingMenuForRepresentedObject;

}

@property (readonly) NSTextField * addRecipientField; 
@property (retain) NSProgressIndicator * addRecipientProgressIndicator;                          //@synthesize addRecipientProgressIndicator=_addRecipientProgressIndicator - In the implementation block
@property (retain) IMHandle * addRecipientInvitedHandle;                                         //@synthesize addRecipientInvitedHandle=_addRecipientInvitedHandle - In the implementation block
@property (retain) NSTimer * addRecipientIDSCheckTimer;                                          //@synthesize addRecipientIDSCheckTimer=_addRecipientIDSCheckTimer - In the implementation block
@property (readonly) IMAccount * autocompleteAccount; 
@property (getter=isCompletionWindowVisible,readonly) char completionWindowVisible;              //@synthesize completionWindowVisible=_completionWindowVisible - In the implementation block
@property (retain) SOCompletionWindow * completionWindow;                                        //@synthesize completionWindow=_completionWindow - In the implementation block
@property (retain) SOCompletionTableView * completionTableView;                                  //@synthesize completionTableView=_completionTableView - In the implementation block
@property (assign) long long completionWindowLevel;                                              //@synthesize completionWindowLevel=_completionWindowLevel - In the implementation block
@property (assign) char showsAccountTableColumn; 
@property (retain) NSTableColumn * accountTableColumn;                                           //@synthesize accountTableColumn=_accountTableColumn - In the implementation block
@property (readonly) NSMutableOrderedSet * searchResults;                                        //@synthesize searchResults=_searchResults - In the implementation block
@property (readonly) SOCompletionResult * selectedCompletionResult; 
@property (assign) char isSearchingServer;                                                       //@synthesize isSearchingServer=_isSearchingServer - In the implementation block
@property (assign) char foundResults;                                                            //@synthesize foundResults=_foundResults - In the implementation block
@property (nonatomic,retain) id<CNCancelable> currentSearchRequest;                              //@synthesize currentSearchRequest=_currentSearchRequest - In the implementation block
@property (retain) id showingMenuForRepresentedObject;                                           //@synthesize showingMenuForRepresentedObject=_showingMenuForRepresentedObject - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_stringForAutocompleteResultSourceType:(unsigned long long)arg1 ;
+(void)_presentUnregisteredErrorForHandle:(id)arg1 ;
-(void)dismissCompletionUI;
-(void)setCompletionWindow:(SOCompletionWindow *)arg1 ;
-(SOCompletionTableView *)completionTableView;
-(void)setCompletionTableView:(SOCompletionTableView *)arg1 ;
-(void)idStatusUpdatedForDestinations:(id)arg1 ;
-(NSMutableOrderedSet *)searchResults;
-(void)chatDisplayControllerWillChange:(id)arg1 ;
-(void)_startAutocompletionWithServer:(char)arg1 ;
-(id)_sharedCompletionWindow;
-(long long)_knownIMessageIDStatusForIDSID:(id)arg1 ;
-(void)_invalidateShowCompletionResultsTimer;
-(void)setCurrentSearchRequest:(id<CNCancelable>)arg1 ;
-(id)_sharedCompletionTableView;
-(void)_cleanupBatchIDQueryResults;
-(void)_addIMHandleIDToDanglingHandlesForHandleGUID:(id)arg1 typedString:(id)arg2 ;
-(void)_showCompletionResultsTimerFired:(id)arg1 ;
-(void)showCompletionsAndSelectCompletionResult:(id)arg1 ;
-(id<CNCancelable>)currentSearchRequest;
-(void)_updateAutoCompleteUI;
-(id)_imHandleFromCompletionResult:(id)arg1 ;
-(long long)completionWindowLevel;
-(SOCompletionResult *)selectedCompletionResult;
-(id)_evaluateCompletionResultForName:(id)arg1 iMessageID:(id)arg2 personID:(id)arg3 ;
-(void)_addSearchResult:(id)arg1 ;
-(id)_additionalSearchAccountsToHandleIDs;
-(id)_searchStringMatchForAlternativeCombinationsOfFirstName:(id)arg1 lastName:(id)arg2 ;
-(char)_searchStringMatchesWithHandleID:(id)arg1 ;
-(void)_queryIDSIMessageDestinations;
-(void)_sortSearchResults;
-(void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2 ;
-(void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2 ;
-(void)autocompleteFetchDidFinish:(id)arg1 ;
-(void)setCompletionWindowLevel:(long long)arg1 ;
-(char)isSearchingServer;
-(void)setIsSearchingServer:(char)arg1 ;
-(char)foundResults;
-(void)setFoundResults:(char)arg1 ;
-(NSTextField *)addRecipientField;
-(char)showsAccountTableColumn;
-(NSTableColumn *)accountTableColumn;
-(NSTimer *)addRecipientIDSCheckTimer;
-(void)setAddRecipientIDSCheckTimer:(NSTimer *)arg1 ;
-(void)setAddRecipientInvitedHandle:(IMHandle *)arg1 ;
-(NSProgressIndicator *)addRecipientProgressIndicator;
-(void)_cleanupIDSCheckTimer;
-(void)_cleanupIDSCheckUI;
-(IMAccount *)autocompleteAccount;
-(void)_idsCheckTimerDidFire:(id)arg1 ;
-(IMHandle *)addRecipientInvitedHandle;
-(void)addRecipient:(id)arg1 ;
-(void)setAccountTableColumn:(NSTableColumn *)arg1 ;
-(void)setShowsAccountTableColumn:(char)arg1 ;
-(void)_commonAddRecipientFieldViewControllerInit;
-(void)setAddRecipientProgressIndicator:(NSProgressIndicator *)arg1 ;
-(char)isCompletionWindowVisible;
-(id)showingMenuForRepresentedObject;
-(void)setShowingMenuForRepresentedObject:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4 ;
-(char)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3 ;
-(char)tableView:(id)arg1 shouldTrackCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4 ;
-(char)tableView:(id)arg1 shouldSelectRow:(long long)arg2 ;
-(char)control:(id)arg1 textShouldEndEditing:(id)arg2 ;
-(char)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3 ;
-(id)control:(id)arg1 textView:(id)arg2 completions:(id)arg3 forPartialWordRange:(NSRange)arg4 indexOfSelectedItem:(long long*)arg5 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)controlTextDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)setSearchString:(id)arg1 ;
-(NSRange)rangeForUserCompletion;
-(SOCompletionWindow *)completionWindow;
@end

