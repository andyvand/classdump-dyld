/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/Ink.prefPane/Contents/MacOS/Ink
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Ink/Ink-Structs.h>
#import <Ink/NSTableViewDelegate.h>
#import <Ink/NSTableViewDataSource.h>
#import <Ink/NSTextFieldDelegate.h>

@class InkPref, NSTableView, NSPanel, NSTextField, NSButton, NSMutableArray, NSBundle, NSTabViewItem, NSString, InkLanguageController;

@interface WordListTabController : NSObject <NSTableViewDelegate, NSTableViewDataSource, NSTextFieldDelegate> {

	InkPref* _inkPref;
	id _addButton;
	id _deleteButton;
	id _editButton;
	id _revertButton;
	id _saveButton;
	NSTableView* _wordlistTableView;
	NSPanel* _enterWordPanel;
	NSTextField* _enterTextField;
	NSButton* _enterOKButton;
	NSButton* _enterCancelButton;
	NSPanel* _editWordPanel;
	NSTextField* _editTextField;
	NSButton* _editOKButton;
	NSButton* _editCancelButton;
	NSMutableArray* _gWordList;
	char _editing;
	char _saved;
	NSBundle* _theBundle;
	unsigned char _inited;
	unsigned char _needReplyToShouldUnselect;
	unsigned char _inlineEditing;
	int _inlineEditingRow;
	NSTabViewItem* _nextTabViewItem;
	NSString* _prevString;
	int _stateLanguage;
	char _newEntryDialog;
	InkLanguageController* _languageController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedWordListTabControllerInstance;
+(char)wordList:(id)arg1 containsWord:(id)arg2 omittingWord:(char)arg3 atIndex:(unsigned)arg4 ;
-(void)revertButtonAction:(id)arg1 ;
-(void)enterOKButtonAction:(id)arg1 ;
-(void)deleteButtonAction:(id)arg1 ;
-(void)actionProc;
-(void)editOKButtonAction:(id)arg1 ;
-(void)saveButtonAction:(id)arg1 ;
-(void)doubleClickActionProc:(id)arg1 ;
-(char)okToSwitch:(id)arg1 ;
-(void)updateLangData;
-(void)revertWordList;
-(void)setPrevString:(id)arg1 ;
-(void)askUserRevertPanelDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void*)arg3 ;
-(void)reloadWordListViewDataRereadingWordList:(char)arg1 ;
-(void)alertSheetForWordValidationResult:(unsigned)arg1 withWord:(id)arg2 andCancelButtonSelector:(SEL)arg3 sender:(id)arg4 ;
-(void)editOrEnterOKButtonActionWithPanel:(id)arg1 cancelButtonSelector:(SEL)arg2 andTargetWord:(id)arg3 sender:(id)arg4 ;
-(void)askUserPanelDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void*)arg3 ;
-(void)updateEditAndDeleteButtons;
-(void)setupWordListTabController;
-(void)updateForHRState:(id)arg1 ;
-(void)populateGWordList;
-(void)prefsChangedNotification;
-(id)getPrevString;
-(void)setOKButton:(char)arg1 ;
-(void)editButtonAction:(id)arg1 ;
-(void)editCancelButtonAction:(id)arg1 ;
-(void)enterCancelButtonAction:(id)arg1 ;
-(int)shouldUnselect;
-(void)addButtonAction:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(int)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(int)arg3 ;
-(void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4 ;
@end
