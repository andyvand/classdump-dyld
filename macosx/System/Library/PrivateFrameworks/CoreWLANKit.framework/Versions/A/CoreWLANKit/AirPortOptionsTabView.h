/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreWLANKit.framework/Versions/A/CoreWLANKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSView.h>

@class NSScrollView, NSSegmentedControl, NSMutableArray, NSWindowController;

@interface AirPortOptionsTabView : NSView {

	id _owner;
	id _networksTableLabel;
	id _networksTable;
	NSScrollView* _networksScrollView;
	NSSegmentedControl* _addRemoveEditButton;
	id _alwaysRemember;
	id _requireAdminIBSSCreationCheckbox;
	id _requireAdminPowerToggleCheckbox;
	id _requireAdminNetworkChangeCheckbox;
	id _airportID;
	id _airportIDLabel;
	NSMutableArray* _networksArray;
	NSMutableArray* _removeNetworks;
	NSWindowController* _currentDialog;

}

@property (retain) NSMutableArray * removePreferredNetworks;              //@synthesize removeNetworks=_removeNetworks - In the implementation block
@property (retain) NSMutableArray * preferredNetworks;                    //@synthesize networksArray=_networksArray - In the implementation block
@property (retain) NSWindowController * currentDialog;                    //@synthesize currentDialog=_currentDialog - In the implementation block
-(void)setHasUnsavedChanges:(char)arg1 ;
-(NSMutableArray *)preferredNetworks;
-(void)checkboxAction:(id)arg1 ;
-(void)setPreferredNetworks:(NSMutableArray *)arg1 ;
-(void)setRemovePreferredNetworks:(NSMutableArray *)arg1 ;
-(void)setCurrentDialog:(NSWindowController *)arg1 ;
-(void)showDupicateAlertWithEntry:(id)arg1 ;
-(void)showBrowseDialog;
-(void)showAddDialogWithNetwork:(id)arg1 ;
-(void)selectedNetwork:(id)arg1 interface:(id)arg2 ;
-(NSWindowController *)currentDialog;
-(id)__cachedScanResults;
-(id)__cachedPasspointANQPElements;
-(void)showAddDialogWithNetworkProfile:(id)arg1 ;
-(void)removePreferredNetworksWithIndexSet:(id)arg1 selectionIndexSet:(id)arg2 requireUserConfirmation:(char)arg3 ;
-(void)addButtonPressed:(id)arg1 ;
-(void)removeButtonPressed:(id)arg1 ;
-(void)addProfileDialogCancelled:(id)arg1 ;
-(void)addProfileDialog:(id)arg1 didConfigureOpenProfile:(id)arg2 interface:(id)arg3 ;
-(void)addProfileDialog:(id)arg1 didConfigurePasswordProfile:(id)arg2 password:(id)arg3 interface:(id)arg4 ;
-(void)addProfileDialog:(id)arg1 didConfigureEnterpriseProfile:(id)arg2 username:(id)arg3 password:(id)arg4 identity:(id)arg5 interface:(id)arg6 ;
-(void)addProfileDialogSelectedChooseNetwork:(id)arg1 ;
-(void)startScanningForNetworksWithInterface:(id)arg1 ;
-(void)stopScanningForNetworksWithInterface:(id)arg1 ;
-(void)selectedPasspointNetwork:(id)arg1 profile:(id)arg2 interface:(id)arg3 ;
-(void)performScanWithSSIDList:(id)arg1 ;
-(void)addRemoveEditButtonPressed:(id)arg1 ;
-(void)setAirPortID:(id)arg1 ;
-(void)setAlwaysRemember:(char)arg1 ;
-(char)alwaysRemember;
-(void)setRequiresAdminIBSSCreation:(char)arg1 ;
-(char)requiresAdminIBSSCreation;
-(void)setRequiresAdminNetworkChange:(char)arg1 ;
-(char)requiresAdminNetworkChange;
-(void)setRequiresAdminPowerToggle:(char)arg1 ;
-(char)requiresAdminPowerToggle;
-(id)getBundle;
-(NSMutableArray *)removePreferredNetworks;
-(id)localizedStringForKey:(id)arg1 ;
-(void)dealloc;
-(void)setEnabled:(char)arg1 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4 ;
-(unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4 ;
-(char)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4 ;
-(void)awakeFromNib;
-(char)tableView:(id)arg1 writeRows:(id)arg2 toPasteboard:(id)arg3 ;
@end

