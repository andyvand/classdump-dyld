/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:40:30 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSSpecifier, NSMutableArray, NSString;

@interface AAKeychainSyncViewController : PSListController {

	PSSpecifier* _switchCellSpecifier;
	NSMutableArray* _approvalSpecifiers;
	int _keychainSyncStatus;
	int _keychainSyncNotificationToken;
	BOOL _isTogglingKeychainSync;
	NSString* _pendingApprovalText;
	id _restrictionChangeNotificationObserver;

}
-(void)_registerForKeychainSyncStatusChangeNotification;
-(void)_stopListeningForKeychainSyncStatusChangeNotification;
-(BOOL)_updateKeychainSyncStatus;
-(int)_keychainSyncStatus;
-(void)_addApprovalPendingSpecifierIfNecessary;
-(id)_specifierForKeychainSwitchCell;
-(id)_specifierForPendingApprovalTextWithSecureBackupEnabled:(BOOL)arg1 ;
-(id)_specifierForApproveButton;
-(id)_specifierForResetKeychainButton;
-(id)_pendingApprovalTextWithSecureBackupEnabled:(BOOL)arg1 ;
-(void)_showApproveWithSecurityCodeDialog:(id)arg1 ;
-(void)_showResetKeychainDialog:(id)arg1 ;
-(void)_setKeychainSyncEnabled:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_isKeychainSyncEnabledForSpecifier:(id)arg1 ;
-(void)_handleKeychainSyncEnablingCompletionWithNewState:(int)arg1 error:(id)arg2 ;
-(void)_handleKeychainSyncDisablingCompletionWithError:(id)arg1 ;
-(void)_reloadParentSpecifier;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)specifiers;
-(void).cxx_destruct;
@end
