/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/FibreChannel.prefPane/Contents/MacOS/FibreChannel
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FibreChannel/FibreChannel-Structs.h>
#import <PreferencePanes/NSAdminPreference.h>

@class NSTableView, NSScrollView, NSPopUpButton, NSPanel, NSTextField, NSButton, NSArrayController, NSMatrix, NSMutableArray, NSDictionary;

@interface FibreChannelPref : NSAdminPreference {

	NSTableView* _statusTable;
	NSScrollView* _statusTableScrollView;
	NSPopUpButton* _portMenu;
	NSPanel* _hardLoopIDSheet;
	NSPopUpButton* _portSpeedMenu;
	NSPopUpButton* _portTopologyMenu;
	NSTextField* _nodeWWNN;
	NSTextField* _portWWNN;
	NSTextField* _hardLoopID;
	NSButton* _hardLoopIDCheckbox;
	NSButton* _hardLoopChooseButton;
	NSTextField* _hardLoopIDLabel;
	NSArrayController* _portArrayController;
	NSMatrix* _loopIDs;
	NSMutableArray* _fibreChannelPorts;
	NSDictionary* _marketingMapping;
	IONotificationPortRef _notificationPort;
	long long _currentHardLoopRow;
	long long _currentHardLoopColumn;
	long long _originalHardLoopID;
	char _isAuthorized;

}
+(void)initialize;
-(void)applySettings:(id)arg1 ;
-(char)isAuthorized;
-(void)makeSelectedCellBold:(id)arg1 makeBold:(char)arg2 ;
-(void)changeHardLoopID:(id)arg1 ;
-(id)selectedFibreChannelPort;
-(id)fibreChannelPorts;
-(void)processFibreConfigHelperError:(int)arg1 ;
-(void)setIsAuthorized:(char)arg1 ;
-(void)addCardEntryToDataSource:(id)arg1 ;
-(void)setUpAuthenticationRights;
-(void)hardLoopSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(id)findFibreChannelPortWithWWPN:(CFDataRef)arg1 ;
-(void)setupHardLoopIDCells:(id)arg1 ;
-(id)displayValueForKey:(id)arg1 inDictionary:(id)arg2 ;
-(long long)buildCardsList;
-(void)setPortSpeed:(id)arg1 ;
-(void)showHardLoopIDSheet:(id)arg1 ;
-(void)enableHardLoopID:(id)arg1 ;
-(void)setPortTopology:(id)arg1 ;
-(void)setFibreChannelPorts:(id)arg1 ;
-(void)setupNotifications;
-(void)mainViewDidLoad;
-(void)authorizationViewDidAuthorize:(id)arg1 ;
-(char)authorizationViewShouldDeauthorize:(id)arg1 ;
-(void)authorizationViewDidDeauthorize:(id)arg1 ;
-(void)cancelClicked:(id)arg1 ;
-(void)okClicked:(id)arg1 ;
-(void)stopNotifications;
-(void)finalize;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4 ;
-(double)tableView:(id)arg1 heightOfRow:(long long)arg2 ;
@end
