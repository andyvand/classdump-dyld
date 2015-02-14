/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSPanel.h>
#import <AppKit/NSWindowDelegate.h>

@protocol NSFindPatternField;
@class NSComboBox, NSTextField, NSButton, NSPopUpButton, NSTextView, NSMutableArray, NSString;

@interface NSFindPanel : NSPanel <NSWindowDelegate> {

	NSComboBox*<NSFindPatternField> _findComboBox;
	NSComboBox*<NSFindPatternField> _replaceComboBox;
	NSTextField* _statusField;
	NSButton* _ignoreCaseButton;
	NSButton* _replaceAllButton;
	NSButton* _replaceButton;
	NSButton* _findNextButton;
	NSButton* _findPreviousButton;
	NSButton* _replaceAndFindButton;
	NSButton* _wrapAroundButton;
	NSPopUpButton* _matchPopUp;
	NSTextView* _fe;
	NSMutableArray* _recentFindStrings;
	NSMutableArray* _recentFindOptions;
	NSMutableArray* _recentReplaceStrings;
	long long _numberOfRecentStrings;
	char _caseInsensitiveSearchDefault;
	long long _substringMatchDefault;
	char _lastFindWasSuccessful;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_isLoaded;
+(id)sharedFindPanel;
-(void)dealloc;
-(void)awakeFromNib;
-(long long)numberOfItemsInComboBox:(id)arg1 ;
-(id)comboBox:(id)arg1 objectValueForItemAtIndex:(long long)arg2 ;
-(void)setSearchOptions:(unsigned long long)arg1 ;
-(void)setSubstringMatchType:(long long)arg1 ;
-(unsigned long long)searchOptions;
-(void)_restoreDefaultSearchOptions;
-(long long)substringMatchType;
-(void)windowDidUpdate:(id)arg1 ;
-(long long)_defaultSubstringMatchType;
-(void)_setDefaultSubstringMatchType:(long long)arg1 ;
-(char)_caseInsensitiveSearchDefault;
-(void)_setCaseInsensitiveSearchDefault:(char)arg1 ;
-(void)_makeCurrentSearchOptionsDefault;
-(void)_setLastFindWasSuccessful:(char)arg1 ;
-(void)_findNextAndOrderFindPanelOut:(id)arg1 ;
-(void)_setDefaultSearchOptions:(id)arg1 ;
@end

