/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:30:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Dictionary.app/Contents/MacOS/Dictionary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Dictionary/Dictionary-Structs.h>
@class NSWindow, NSMutableArray, NSIndexSet, WebView, NSView, NSScrollView, NSURL, DictionaryObj;

@interface PreferenceController : NSObject {

	NSWindow* _preferenceWindow;
	CGSize _minContentSizeWithoutWebView;
	NSMutableArray* _dictionariesWithFlags;
	NSIndexSet* _dictionaryListSet;
	WebView* _dictPrefWebView;
	NSView* _enclosingWebView;
	NSScrollView* _dictionaryScrollView;
	NSURL* _emptyPrefsHTMLURL;
	DictionaryObj* _lastSelectedDictionary;
	long long _numberOfDictionaries;
	char _loadingHTML;
	char _windowWillCloseDone;
	char _preferenceWasChanged;
	unsigned long long _modifiersInOpen;
	ULocaleDisplayNamesRef _icuLanguageNameContext;
	NSMutableArray* _childNameArchive;

}
+(id)sharedPreferenceWithCreate:(char)arg1 ;
-(void)prepareToQuit;
-(id)_displayLanguageNameForDictionary:(id)arg1 ;
-(id)_normalizedLanguageNameForLanguageCode:(id)arg1 ;
-(void)_updateWithCurrentList;
-(void)_checkAndUpdateApplicationPreference:(char)arg1 ;
-(char)_updateCurrentDictionaryPrefs;
-(void)_setPrefsToHTML:(id)arg1 withCopyright:(id)arg2 ;
-(void)_updatePreferredLanguageInfoWithDictionaries:(CFArrayRef)arg1 ;
-(id)_retrievePrefsFromHTML;
-(id)_copyrightHTML:(id)arg1 withFontSize:(id)arg2 ;
-(id)dictionaryInfoArray;
-(void)setDictionariesWithFlags:(id)arg1 ;
-(void)setDictionaryListSet:(id)arg1 ;
-(void)checkboxClicked:(id)arg1 ;
-(void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(char)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3 ;
-(unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4 ;
-(char)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4 ;
-(void)windowWillClose:(id)arg1 ;
-(void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 ;
-(void)show;
@end
