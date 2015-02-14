/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <AppKit/NSRuleEditorDelegate.h>
#import <AppKit/NSComboBoxDataSource.h>
#import <AppKit/NSFileManagerDelegate.h>

@class NSWindow, NSRuleEditor, NSArrayController, NSPopUpButton, NSMenuItem, NSView, NSComboBox, NSTokenField, NSButton, NSTextField, NSMutableArray, NSArray, NSMetadataQuery, NSString;

@interface NSNavAdvancedSearchController : NSViewController <NSRuleEditorDelegate, NSComboBoxDataSource, NSFileManagerDelegate> {

	NSWindow* _editSearchTermsWindow;
	NSRuleEditor* _ruleEditor;
	NSArrayController* _searchTermsArrayController;
	NSPopUpButton* _rootItem;
	NSPopUpButton* _extraRootItems;
	NSPopUpButton* _kindPopUpButton;
	NSMenuItem* _anyAttributeMenuItem;
	NSView* _plainTextFieldView;
	NSView* _textFieldWithOptionsView;
	NSView* _booleanOptionsView;
	NSView* _dateOptionsView;
	NSView* _numberOptionsView;
	NSComboBox* _keywordsComboBox;
	NSComboBox* _kindsComboBox;
	NSTokenField* _keywordsTokenField;
	NSWindow* _saveSearchWindow;
	NSButton* _saveForAllAppsButton;
	NSTextField* _saveAsTextField;
	NSButton* _saveQueryButton;
	char _seperatorAdded;
	char _canShowAttributes;
	char _addingAnyAttributeItem;
	long long _updateCount;
	NSView* _ruleItemsView;
	NSMutableArray* _availableSearchAttributes;
	NSArray* _searchKeywords;
	NSArray* _searchKinds;
	NSMetadataQuery* _searchKeywordsQuery;
	NSMetadataQuery* _searchKindQuery;
	id _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)delegate;
-(void)loadView;
-(void)controlTextDidChange:(id)arg1 ;
-(long long)numberOfItemsInComboBox:(id)arg1 ;
-(id)comboBox:(id)arg1 objectValueForItemAtIndex:(long long)arg2 ;
-(id)ruleEditor;
-(id)queryString;
-(void)setCriteriaSlices:(id)arg1 anyAttributeString:(id)arg2 ;
-(id)anyAttributeString;
-(id)criteriaSlices;
-(void)runPromptToSaveQueryWithName:(id)arg1 modalForWindow:(id)arg2 ;
-(id)tokenField:(id)arg1 completionsForSubstring:(id)arg2 indexOfToken:(long long)arg3 indexOfSelectedItem:(long long*)arg4 ;
-(long long)ruleEditor:(id)arg1 numberOfChildrenForCriterion:(id)arg2 withRowType:(unsigned long long)arg3 ;
-(id)ruleEditor:(id)arg1 child:(long long)arg2 forCriterion:(id)arg3 withRowType:(unsigned long long)arg4 ;
-(id)ruleEditor:(id)arg1 displayValueForCriterion:(id)arg2 inRow:(long long)arg3 ;
-(void)ruleEditorRowsDidChange:(id)arg1 ;
-(void)_setSearchSlice:(int)arg1 toHaveAttributeName:(id)arg2 inButton:(id)arg3 ;
-(void)_createAttributeNameMapping;
-(void)_searchTermsWindowBecameKey:(id)arg1 ;
-(void)_customFieldWindowSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(id)_findItemWithAttributeName:(id)arg1 inMenu:(id)arg2 ;
-(void)_addRootSeperatorIfNeeded;
-(id)_otherMenuItemForAttributeName:(id)arg1 ;
-(void)_createRowForCriteriaSlice:(id)arg1 ;
-(void)_reloadComboBoxWithTag:(long long)arg1 ;
-(id)_createValueListQueryForAttribute:(id)arg1 ;
-(void)_editOtherSliceKind:(id)arg1 ;
-(void)_updateQueryString:(id)arg1 ;
-(void)_loadKeywords;
-(void)_loadSearchKinds;
-(void)_saveQuerySheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)_searchTermsOkClick:(id)arg1 ;
-(void)_searchTermsCancelClick:(id)arg1 ;
-(id)availableSearchAttributes;
-(id)searchKeywords;
-(void)_saveQueryClick:(id)arg1 ;
-(void)_cancelSaveQueryClick:(id)arg1 ;
@end

