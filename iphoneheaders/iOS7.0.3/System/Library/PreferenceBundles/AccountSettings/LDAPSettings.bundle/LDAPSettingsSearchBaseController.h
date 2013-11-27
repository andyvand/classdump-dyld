/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:29:43 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/LDAPSettings.bundle/LDAPSettings
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@class LDAPAccount, LDAPSearchSettings, LDAPSettingsAccountsUIController;

@interface LDAPSettingsSearchBaseController : PSListController <UIActionSheetDelegate, UIAlertViewDelegate> {

	LDAPAccount* _account;
	LDAPSearchSettings* _searchSettings;
	LDAPSettingsAccountsUIController* _accountController;
	id _confirmDeleteSettingsSheetOrAlert;

}
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)confirmDeleteSettings:(id)arg1 ;
-(void)_checkScopeCell;
-(void)_updateDescriptionFromSearchBase:(id)arg1 ;
-(BOOL)_isNewSearchSettings;
-(BOOL)_searchSettingsAreEmpty;
-(void)didConfirmDeleteSettings:(BOOL)arg1 ;
-(void)_confirmationView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)setAccountIntProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(void)setAccountProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(id)accountPropertyWithSpecifier:(id)arg1 ;
-(id)specifiers;
@end
