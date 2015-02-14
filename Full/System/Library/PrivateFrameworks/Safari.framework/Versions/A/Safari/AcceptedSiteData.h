/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/SheetWithTableController.h>

@class NSSearchField, NSButton, PrivacyPreferences;

@interface AcceptedSiteData : SheetWithTableController {

	NSSearchField* searchField;
	NSButton* doneButton;
	PrivacyPreferences* privacyPreferencesModule;
	Vector<Safari::WebsiteTrackingData *, 0, WTF::CrashOnOverflow>* m_websiteTrackingData;
	Vector<Safari::WebsiteTrackingData *, 0, WTF::CrashOnOverflow>* m_unfilteredWebsiteTrackingData;
	HashSet<Safari::CF::String, Safari::CF::ObjectSubclassHash<Safari::CF::String>, WTF::HashTraits<Safari::CF::String> >* m_selectedSites;

}
-(void)_refreshAllIcons:(id)arg1 ;
-(void)_reloadDataAndRestoreSelection;
-(void)showSheetInWindow:(id)arg1 ;
-(void)hideSheet:(id)arg1 ;
-(void)reloadDataAndRestoreSelectedSites;
-(id)filterStringFromSearchField;
-(void)filterTrackingData:(id)arg1 ;
-(char)_confirmRemoveAllItems;
-(void)removeAllItems:(id)arg1 ;
-(void)websiteTrackingDataUpdated;
-(void)search:(id)arg1 ;
-(void)removeSelectedItems:(id)arg1 ;
-(char)validate_focusContentSearchField:(id)arg1 ;
-(void)focusContentSearchField:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(char)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(int)arg3 ;
-(void)awakeFromNib;
@end

