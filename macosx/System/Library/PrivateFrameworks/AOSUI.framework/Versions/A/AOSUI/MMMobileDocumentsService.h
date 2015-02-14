/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AOSUI/MMService.h>
#import <AOSUI/MMServicePreflightProtocol.h>
#import <AOSUI/MMMobileDocumentsTableRowDelegate.h>

@class NSWindow, NSTextField, NSTableView, NSButton, NSMutableArray, NSMutableDictionary, NSOutlineView, NSTabView, NSTabViewItem, NSArray, NSDictionary, NSImageView, NSLayoutConstraint, NSTimer, NSString;

@interface MMMobileDocumentsService : MMService <MMServicePreflightProtocol, MMMobileDocumentsTableRowDelegate> {

	NSWindow* _mobileDocumentsOptionsSheet;
	NSTextField* _mobileDocumentsOptionsTitle;
	NSTableView* _mobileDocumentsOptionsTable;
	NSButton* _mobileDocumentDoneButton;
	NSMutableArray* cachedListOfApps;
	NSMutableDictionary* _rowViews;
	NSTextField* _lookMeUpByEmailOptionsTitle;
	NSOutlineView* _liverPoolOptionsTable;
	NSMutableArray* cachedListOfLiverPoolApps;
	NSMutableDictionary* _liverPoolrowViews;
	NSTabView* _optionsTab;
	NSTabViewItem* _documentsAndDataTab;
	NSTabViewItem* _liverpoolTab;
	NSArray* _upgradeDeviceList;
	NSArray* _incompatibleDeviceList;
	unsigned long long _devicesState;
	NSDictionary* _deviceList;
	NSWindow* _upgradeDevicesSheet;
	NSImageView* _upgradeDevicesImageView;
	NSTextField* _upgradeDevicesTitleTextField;
	NSButton* _upgradeDevicesCancelButton;
	NSButton* _upgradeDevicesContinueButton;
	NSTextField* _upgradeDevicesMessageTextField;
	NSTextField* _upgradeDevicesSecondaryMessageTextField;
	NSLayoutConstraint* _upgradeDevicesSingleDeviceTypeConstraint;
	NSLayoutConstraint* _upgradeDevicesSecondaryDeviceTypeConstraint;
	NSTimer* _migrationStatusCheckTimer;

}

@property (retain) NSWindow * mobileDocumentsOptionsSheet;                                        //@synthesize mobileDocumentsOptionsSheet=_mobileDocumentsOptionsSheet - In the implementation block
@property (retain) NSTextField * mobileDocumentsOptionsTitle;                                     //@synthesize mobileDocumentsOptionsTitle=_mobileDocumentsOptionsTitle - In the implementation block
@property (retain) NSTextField * lookMeUpByEmailOptionsTitle;                                     //@synthesize lookMeUpByEmailOptionsTitle=_lookMeUpByEmailOptionsTitle - In the implementation block
@property (retain) NSButton * mobileDocumentDoneButton;                                           //@synthesize mobileDocumentDoneButton=_mobileDocumentDoneButton - In the implementation block
@property (retain) NSTableView * mobileDocumentsOptionsTable;                                     //@synthesize mobileDocumentsOptionsTable=_mobileDocumentsOptionsTable - In the implementation block
@property (retain) NSOutlineView * liverPoolOptionsTable;                                         //@synthesize liverPoolOptionsTable=_liverPoolOptionsTable - In the implementation block
@property (retain) NSTabView * optionsTab;                                                        //@synthesize optionsTab=_optionsTab - In the implementation block
@property (retain) NSTabViewItem * documentsAndDataTab;                                           //@synthesize documentsAndDataTab=_documentsAndDataTab - In the implementation block
@property (retain) NSTabViewItem * liverpoolTab;                                                  //@synthesize liverpoolTab=_liverpoolTab - In the implementation block
@property (retain) NSArray * upgradeDeviceList;                                                   //@synthesize upgradeDeviceList=_upgradeDeviceList - In the implementation block
@property (retain) NSArray * incompatibleDeviceList;                                              //@synthesize incompatibleDeviceList=_incompatibleDeviceList - In the implementation block
@property (assign,nonatomic) unsigned long long devicesState;                                     //@synthesize devicesState=_devicesState - In the implementation block
@property (assign) NSWindow * parentWindow; 
@property (retain) NSDictionary * deviceList;                                                     //@synthesize deviceList=_deviceList - In the implementation block
@property (retain) NSWindow * upgradeDevicesSheet;                                                //@synthesize upgradeDevicesSheet=_upgradeDevicesSheet - In the implementation block
@property (retain) NSImageView * upgradeDevicesImageView;                                         //@synthesize upgradeDevicesImageView=_upgradeDevicesImageView - In the implementation block
@property (retain) NSTextField * upgradeDevicesTitleTextField;                                    //@synthesize upgradeDevicesTitleTextField=_upgradeDevicesTitleTextField - In the implementation block
@property (retain) NSButton * upgradeDevicesCancelButton;                                         //@synthesize upgradeDevicesCancelButton=_upgradeDevicesCancelButton - In the implementation block
@property (retain) NSButton * upgradeDevicesContinueButton;                                       //@synthesize upgradeDevicesContinueButton=_upgradeDevicesContinueButton - In the implementation block
@property (retain) NSTextField * upgradeDevicesMessageTextField;                                  //@synthesize upgradeDevicesMessageTextField=_upgradeDevicesMessageTextField - In the implementation block
@property (retain) NSTextField * upgradeDevicesSecondaryMessageTextField;                         //@synthesize upgradeDevicesSecondaryMessageTextField=_upgradeDevicesSecondaryMessageTextField - In the implementation block
@property (retain) NSLayoutConstraint * upgradeDevicesSingleDeviceTypeConstraint;                 //@synthesize upgradeDevicesSingleDeviceTypeConstraint=_upgradeDevicesSingleDeviceTypeConstraint - In the implementation block
@property (retain) NSLayoutConstraint * upgradeDevicesSecondaryDeviceTypeConstraint;              //@synthesize upgradeDevicesSecondaryDeviceTypeConstraint=_upgradeDevicesSecondaryDeviceTypeConstraint - In the implementation block
@property (readonly) char showSecondaryDeviceTypeField; 
@property (retain) NSTimer * migrationStatusCheckTimer;                                           //@synthesize migrationStatusCheckTimer=_migrationStatusCheckTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyPathsForValuesAffectingShowSecondaryDeviceTypeField;
-(void)_updateConstraints;
-(NSDictionary *)deviceList;
-(id)initWithServiceID:(id)arg1 forAccount:(id)arg2 ;
-(void)setEnabled:(char)arg1 creating:(char)arg2 withWindow:(id)arg3 ;
-(char)canEnable;
-(void)willSelect;
-(void)didBecomeActive;
-(char)preflightForSignout:(id*)arg1 withWindow:(id)arg2 ;
-(void)mobileDocumentsLookMeUpTableRowDidChange:(id)arg1 ;
-(void)mobileDocumentsTableRowDidChange:(id)arg1 ;
-(void)_serviceEnableChanged:(id)arg1 ;
-(void)_loadResourcesIfNeeded;
-(void)endModalDialog:(id)arg1 ;
-(void)stopListeningForACAccountStoreNotifications;
-(char)_areChangesPending;
-(void)_showMigrationConfirmationSheet:(id)arg1 ;
-(char)_isMigrationComplete;
-(void)startListeningForACAccountStoreNotifications;
-(void)_setMigrationCompleteOnAppleAccount;
-(void)showMobileDocumentsOptionsSheet:(id)arg1 ;
-(char)_isSupportedForCurrentUser;
-(id)testingEligibleDevicesList;
-(void)setUpgradeDeviceList:(NSArray *)arg1 ;
-(id)testingNotEligibleDevicesList;
-(void)setIncompatibleDeviceList:(NSArray *)arg1 ;
-(id)_dsid;
-(char)_getMobileDevices;
-(NSArray *)upgradeDeviceList;
-(NSArray *)incompatibleDeviceList;
-(void)_showNoDevicesMigrationConfirmationSheet:(id)arg1 ;
-(void)_loadDevicesSheetResourcesIfNeeded;
-(void)showMultipleDevicesConfirmationSheetWithParentWindow:(id)arg1 ;
-(NSImageView *)upgradeDevicesImageView;
-(NSTextField *)upgradeDevicesTitleTextField;
-(void)_updateSheet;
-(NSButton *)upgradeDevicesContinueButton;
-(NSButton *)upgradeDevicesCancelButton;
-(NSWindow *)upgradeDevicesSheet;
-(NSButton *)mobileDocumentDoneButton;
-(NSTabViewItem *)documentsAndDataTab;
-(NSTabViewItem *)liverpoolTab;
-(NSTableView *)mobileDocumentsOptionsTable;
-(NSOutlineView *)liverPoolOptionsTable;
-(void)reloadLiverPoolOptionsData:(id)arg1 ;
-(void)_updateOptionsUI;
-(NSWindow *)mobileDocumentsOptionsSheet;
-(void)_acaccountStoreChanged:(id)arg1 ;
-(NSTimer *)migrationStatusCheckTimer;
-(void)migrationStatusTimerFireMethod:(id)arg1 ;
-(void)setMigrationStatusCheckTimer:(NSTimer *)arg1 ;
-(void)_updatePrimaryDeviceTypeField;
-(char)showSecondaryDeviceTypeField;
-(void)_updateSecondaryDeviceTypeField;
-(NSLayoutConstraint *)upgradeDevicesSingleDeviceTypeConstraint;
-(NSLayoutConstraint *)upgradeDevicesSecondaryDeviceTypeConstraint;
-(id)incompatibleDevicesDescriptionString;
-(id)_attributedDeviceListString:(id)arg1 lines:(unsigned long long)arg2 ;
-(id)upgradeDevicesDescriptionString;
-(NSTextField *)upgradeDevicesMessageTextField;
-(NSTextField *)upgradeDevicesSecondaryMessageTextField;
-(id)_arrayToCSVString:(id)arg1 ;
-(id)_truncatedDeviceString:(id)arg1 size:(unsigned long long)arg2 ;
-(id)_readDeviceArrayFromDefaults:(id)arg1 ;
-(void)endDevicesConfirmationSheet:(long long)arg1 ;
-(void)setMobileDocumentsOptionsSheet:(NSWindow *)arg1 ;
-(NSTextField *)mobileDocumentsOptionsTitle;
-(void)setMobileDocumentsOptionsTitle:(NSTextField *)arg1 ;
-(void)setMobileDocumentDoneButton:(NSButton *)arg1 ;
-(void)setMobileDocumentsOptionsTable:(NSTableView *)arg1 ;
-(NSTabView *)optionsTab;
-(void)setOptionsTab:(NSTabView *)arg1 ;
-(void)setDocumentsAndDataTab:(NSTabViewItem *)arg1 ;
-(void)setLiverpoolTab:(NSTabViewItem *)arg1 ;
-(NSTextField *)lookMeUpByEmailOptionsTitle;
-(void)setLookMeUpByEmailOptionsTitle:(NSTextField *)arg1 ;
-(void)setLiverPoolOptionsTable:(NSOutlineView *)arg1 ;
-(unsigned long long)devicesState;
-(void)setDevicesState:(unsigned long long)arg1 ;
-(void)setDeviceList:(NSDictionary *)arg1 ;
-(void)setUpgradeDevicesSheet:(NSWindow *)arg1 ;
-(void)setUpgradeDevicesImageView:(NSImageView *)arg1 ;
-(void)setUpgradeDevicesTitleTextField:(NSTextField *)arg1 ;
-(void)setUpgradeDevicesCancelButton:(NSButton *)arg1 ;
-(void)setUpgradeDevicesContinueButton:(NSButton *)arg1 ;
-(void)setUpgradeDevicesMessageTextField:(NSTextField *)arg1 ;
-(void)setUpgradeDevicesSecondaryMessageTextField:(NSTextField *)arg1 ;
-(void)setUpgradeDevicesSingleDeviceTypeConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setUpgradeDevicesSecondaryDeviceTypeConstraint:(NSLayoutConstraint *)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)icon;
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3 ;
-(id)tableView:(id)arg1 rowViewForRow:(long long)arg2 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3 ;
-(id)outlineView:(id)arg1 rowViewForItem:(id)arg2 ;
-(long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2 ;
-(id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3 ;
-(char)outlineView:(id)arg1 isItemExpandable:(id)arg2 ;
-(id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3 ;
-(void)showMoreInfo:(id)arg1 ;
-(void)_updateUI;
@end

