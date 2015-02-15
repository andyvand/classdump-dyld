/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>

@class NSButton, NSView;

@interface BrowserDataImportPanelController : NSWindowController {

	long long _source;
	NSButton* _importButton;
	NSView* _checkboxContainer;
	NSButton* _bookmarksCheckbox;
	NSButton* _historyCheckbox;
	NSButton* _passwordsCheckbox;

}

@property (assign,nonatomic,__weak) NSButton * importButton;                 //@synthesize importButton=_importButton - In the implementation block
@property (assign,nonatomic,__weak) NSView * checkboxContainer;              //@synthesize checkboxContainer=_checkboxContainer - In the implementation block
@property (nonatomic,retain) NSButton * bookmarksCheckbox;                   //@synthesize bookmarksCheckbox=_bookmarksCheckbox - In the implementation block
@property (nonatomic,retain) NSButton * historyCheckbox;                     //@synthesize historyCheckbox=_historyCheckbox - In the implementation block
@property (nonatomic,retain) NSButton * passwordsCheckbox;                   //@synthesize passwordsCheckbox=_passwordsCheckbox - In the implementation block
+(unsigned long long)_supportedImportDataTypesForSource:(long long)arg1 ;
+(void)_importDataTypes:(unsigned long long)arg1 fromSource:(long long)arg2 ;
+(void)runModalPanelForSource:(long long)arg1 ;
+(unsigned long long)_supportedPreconfiguredDataTypesForSource:(long long)arg1 ;
-(void)_updateCheckboxVisibility;
-(void)_updateWindowTitle;
-(id)_initWithImportSource:(long long)arg1 ;
-(void)_performImportAfterModalStop;
-(void)_updateImportButtonEnabled;
-(unsigned long long)_supportedImportDataTypes;
-(void)_importFromBrowser;
-(id)_checkboxesForDataTypes:(unsigned long long)arg1 ;
-(unsigned long long)_defaultSelectedDataTypes;
-(char)_isAnyCheckboxChecked;
-(id)_allCheckboxes;
-(id)_visibleCheckboxes;
-(void)_addConstraintsForCheckboxes:(id)arg1 ;
-(id)_defaultSelectedCheckboxes;
-(char)_checkboxIsAvailableAndChecked:(id)arg1 ;
-(unsigned long long)_selectedDataTypes;
-(id)_windowTitle;
-(void)checkboxToggled:(id)arg1 ;
-(void)importClicked:(id)arg1 ;
-(NSButton *)importButton;
-(void)setImportButton:(NSButton *)arg1 ;
-(NSView *)checkboxContainer;
-(void)setCheckboxContainer:(NSView *)arg1 ;
-(NSButton *)bookmarksCheckbox;
-(void)setBookmarksCheckbox:(NSButton *)arg1 ;
-(NSButton *)historyCheckbox;
-(void)setHistoryCheckbox:(NSButton *)arg1 ;
-(NSButton *)passwordsCheckbox;
-(void)setPasswordsCheckbox:(NSButton *)arg1 ;
-(void)close;
-(void)awakeFromNib;
-(id)windowNibName;
-(void)close:(id)arg1 ;
@end

