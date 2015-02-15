/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Directory Utility.app/Contents/PlugIns/Active Directory.daplug/Contents/MacOS/Active Directory
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSPanel, ADSAuthenticate, NSButton, CollapsibleView, NSTabView, NSTableView, NSProgressIndicator, NSTextField, NSString, NSMutableDictionary, NSMutableArray, NSBundle, ODNode, PluginAPIImplementor;

@interface ADSv1Panel : NSObject {

	NSPanel* _dialog;
	ADSAuthenticate* _addWindow;
	ADSAuthenticate* _removeWindow;
	NSButton* bindButton;
	NSButton* okayButton;
	NSButton* cancelButton;
	CollapsibleView* _advancedSettingsView;
	NSTabView* _tabView;
	NSButton* _expandCollapseButton;
	NSTableView* _adminTableView;
	NSProgressIndicator* progressIndicator;
	NSTextField* _computerIDField;
	NSString* adminUsername;
	NSString* adminPassword;
	NSMutableDictionary* _extraInfo;
	NSMutableDictionary* _configDict;
	NSMutableArray* _adminList;
	NSBundle* _bundle;
	int _pluginVersion;
	char _expanded;
	char _authorized;
	char _settingsRead;
	ODNode* _odNode;
	PluginAPIImplementor* mAPIImplementor;

}
-(void)adminRemoveAction:(id)arg1 ;
-(void)adminAddAction:(id)arg1 ;
-(void)runModalRelativeToWindow:(id)arg1 ;
-(id)errorWindowTitle:(int)arg1 ;
-(void)okayAction:(id)arg1 ;
-(int)sendConfig:(id)arg1 customCode:(int)arg2 ;
-(void)readCurrentSettings;
-(id)bindOptions;
-(void)bindAction:(id)arg1 ;
-(void)setAPIImplementor:(id)arg1 ;
-(void)setExpanded:(char)arg1 withAnimation:(char)arg2 ;
-(char)initValues;
-(void)updatedDictionary;
-(void)toggleExpandedState:(id)arg1 ;
-(id)errorMessage:(int)arg1 ;
-(void)cancelAction:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4 ;
-(void)controlTextDidChange:(id)arg1 ;
-(void)awakeFromNib;
-(void)sheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void*)arg3 ;
-(char)tableView:(id)arg1 writeRows:(id)arg2 toPasteboard:(id)arg3 ;
@end

