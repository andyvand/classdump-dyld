/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 1:23:06 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/Keychain Access.app/Contents/Resources/Keychain.menu/Contents/MacOS/Keychain
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SystemUIPlugin/NSMenuExtra.h>

@class NSImage, NSString;

@interface AppleKeychainExtra : NSMenuExtra {

	NSImage* _lockIcon;
	NSImage* _selectedLockIcon;
	NSImage* _unlockIcon;
	NSImage* _selectedUnlockIcon;
	char _locked;
	char _isUnlocking;
	char _isBuildingMenu;
	char _reserved;
	unsigned _lockFlags;
	unsigned _keyFlags;
	NSString* _keychainMenuExtraString;
	NSString* _lockedStatusString;
	NSString* _unlockedStatusString;
	NSString* _unlockKeychainString;
	NSString* _lockKeychainString;
	NSString* _unlockNamedKeychainString;
	NSString* _lockNamedKeychainString;
	NSString* _lockAllKeychainsString;
	NSString* _openKeychainAccessString;
	NSString* _openSecurityPrefsString;
	NSString* _lockScreenString;
	NSString* _keychainAppNameString;
	NSString* _securityPrefsPathString;
	NSString* _loginKeychainNameString;
	NSString* _loginKeychainUserNameString;
	NSString* _systemKeychainNameString;
	NSString* _anchorsKeychainNameString;

}
-(char)convertedForNewUI;
-(id)AXDescription;
-(id)AXValue;
-(void)_receiveScreenSleepNotification:(id)arg1 ;
-(void)createMenu;
-(unsigned)curKeyFlags;
-(void)_unlockKeychain:(id)arg1 ;
-(void)updateMenuState;
-(void)_openKeychainAccessMenuHit:(id)arg1 ;
-(char)loadNibFromMyBundle:(id)arg1 nibName:(id)arg2 owner:(id)arg3 ;
-(void)_receiveComputerSleepNotification:(id)arg1 ;
-(void)_toggleLockStateMenuHit:(id)arg1 ;
-(void)_lockScreenMenuHit:(id)arg1 ;
-(void)_securityPreferencesMenuHit:(id)arg1 ;
-(void)_lockAllKeychainsMenuHit:(id)arg1 ;
-(void)releaseStringTemplates;
-(void)createStringTemplates;
-(id)initWithBundle:(id)arg1 ;
-(void)dealloc;
@end
