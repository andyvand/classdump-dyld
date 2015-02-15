/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Directory Utility.app/Contents/PlugIns/LDAPv3.daplug/Contents/MacOS/LDAPv3
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <LDAPv3/LDAPv3OKCancelDialog.h>

@class NSTableView, NSMatrix, NSSearchField, NSButton, LDAPv3ServerDialog, NSMutableArray;

@interface LDAPv3StandardTypeDialog : LDAPv3OKCancelDialog {

	NSTableView* _typeTable;
	NSMatrix* _recordAttributeMatrix;
	NSSearchField* _searchField;
	NSButton* _showAllCheckBox;
	LDAPv3ServerDialog* _serverDialog;
	char _showingRecordTypes;
	char _forceRecordType;
	char _showingAllTypes;
	NSMutableArray* _standardRecordTypes;
	NSMutableArray* _filteredRecordTypes;
	NSMutableArray* _standardAttributeTypes;
	NSMutableArray* _filteredAttributeTypes;
	NSMutableArray* _recommendedAttributeTypes;

}
-(void)dismiss:(int)arg1 ;
-(void)initValues;
-(void)chooseType:(id)arg1 ;
-(void)switchShowAll:(id)arg1 ;
-(char)forceRecordType;
-(char)showingRecordTypes;
-(void)setRecordTypeArray:(id)arg1 omitting:(id)arg2 ;
-(void)setRecommendedAttributeTypeArray:(id)arg1 omitting:(id)arg2 ;
-(id)selectedTypes;
-(id)selectedTypesEnumerator;
-(void)setShowingRecordTypes:(char)arg1 ;
-(void)setAttributeTypeArray:(id)arg1 omitting:(id)arg2 ;
-(void)setForceRecordType:(char)arg1 ;
-(void)searchTextChanged:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)awakeFromNib;
@end

