/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/FaceTime.app/Contents/MacOS/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface AccountController : NSObject {

	char _accountIsValid;
	NSArray* _storedAliases;

}

@property (nonatomic,retain) NSArray * storedAliases;              //@synthesize storedAliases=_storedAliases - In the implementation block
+(id)sharedInstance;
-(void)_updateSetupAnimated:(char)arg1 ;
-(void)_updateAccountControllerVersion;
-(void)_clearExtraFaceTimeAccounts;
-(char)_shouldOfferPhoneNumberActivation;
-(void)_requestPendingInvitesDone:(id)arg1 ;
-(void)_enabledStatusChanged:(id)arg1 ;
-(void)_profileValidationStatusChanged:(id)arg1 ;
-(void)_accountWasAdded:(id)arg1 ;
-(void)_accountWasRemoved:(id)arg1 ;
-(void)_daemonConnectionChanged:(id)arg1 ;
-(void)contactListDidBecomeVisible:(id)arg1 ;
-(char)_shouldShowRegionChooser;
-(void)_setupComplete;
-(void)bringUpAccount;
-(void)_showSetup;
-(void)aliasSetupHasNoChanges:(id)arg1 ;
-(NSArray *)storedAliases;
-(void)setStoredAliases:(NSArray *)arg1 ;
-(void)_registrationStatusChanged:(id)arg1 ;
-(id)account;
@end

