/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/OSAKit.framework/Versions/A/OSAKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>
#import <OSAKit/NSToolbarDelegate.h>

@class OSADictionaryController, NSSegmentedControl, NSPopUpButton, NSSearchField, OSADictionary, NSMutableDictionary, NSString;

@interface OSADictionaryWindowController : NSWindowController <NSToolbarDelegate> {

	OSADictionaryController* _dictionaryController;
	NSSegmentedControl* _navigationControl;
	NSSegmentedControl* _textSizeControl;
	NSSegmentedControl* _viewModeControl;
	NSPopUpButton* _languageControl;
	NSSearchField* _searchField;
	OSADictionary* _dictionary;
	NSMutableDictionary* _toolbarInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)searchField;
-(void)setSearchField:(id)arg1 ;
-(long long)viewMode;
-(void)setViewMode:(long long)arg1 ;
-(id)navigationControl;
-(void)goBackForward:(id)arg1 ;
-(id)textSizeControl;
-(void)changeTextSize:(id)arg1 ;
-(id)viewModeControl;
-(void)changeViewMode:(id)arg1 ;
-(void)changeSearch:(id)arg1 ;
-(id)languageControl;
-(void)changeLanguage:(id)arg1 ;
-(void)setNavigationControl:(id)arg1 ;
-(void)setTextSizeControl:(id)arg1 ;
-(void)setViewModeControl:(id)arg1 ;
-(void)setLanguageControl:(id)arg1 ;
-(void)dealloc;
-(id)dictionary;
-(id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(char)arg3 ;
-(id)toolbarDefaultItemIdentifiers:(id)arg1 ;
-(id)toolbarAllowedItemIdentifiers:(id)arg1 ;
-(void)awakeFromNib;
-(id)initWithDictionary:(id)arg1 ;
-(void)setDictionary:(id)arg1 ;
-(void)setDictionaryController:(id)arg1 ;
-(id)dictionaryController;
@end

