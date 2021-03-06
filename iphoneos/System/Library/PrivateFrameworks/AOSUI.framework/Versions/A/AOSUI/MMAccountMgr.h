/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, MMTermsOfServiceController, NSWindow;

@interface MMAccountMgr : NSObject {

	NSMutableDictionary* _accounts;
	MMTermsOfServiceController* _termsOfServiceController;
	NSWindow* _parentWindow;

}

@property (retain) NSWindow * parentWindow; 
@property (nonatomic,retain) MMTermsOfServiceController * termsOfServiceController;              //@synthesize termsOfServiceController=_termsOfServiceController - In the implementation block
+(id)sharedMgr;
+(void)showSignInError:(id)arg1 usingWindow:(id)arg2 forAccountID:(id)arg3 andPassword:(id)arg4 ;
-(void)signInCompleted:(id)arg1 ;
-(void)signOutCompleted:(id)arg1 ;
-(void)signInFailed:(id)arg1 ;
-(void)signOutFailed:(id)arg1 ;
-(void)tosDeniedFailed:(id)arg1 ;
-(void)verifyCompleted:(id)arg1 ;
-(void)verifyFailed:(id)arg1 ;
-(void)accountDataChanged:(id)arg1 ;
-(void)serviceEnableChanged:(id)arg1 ;
-(void)serviceDataChanged:(id)arg1 ;
-(void)serviceStatusChanged:(id)arg1 ;
-(void)deactivateCompleted:(id)arg1 ;
-(void)deactivateFailed:(id)arg1 ;
-(void)contactsChanged:(id)arg1 ;
-(void)deregisterNotifications;
-(void)didSelect;
-(void)didUnselect;
-(void)willSelect;
-(void)willUnselect;
-(void)signOutAccount:(id)arg1 withOptions:(id)arg2 ;
-(id)accountWithID:(id)arg1 createIfMissing:(char)arg2 ;
-(void)deactivateAccount:(id)arg1 ;
-(void)signOutAccount:(id)arg1 ;
-(void)signInAccount:(id)arg1 withPassword:(id)arg2 context:(id)arg3 ;
-(MMTermsOfServiceController *)termsOfServiceController;
-(void)setTermsOfServiceController:(MMTermsOfServiceController *)arg1 ;
-(void)signInFailedCompletion;
-(void)showTOSSheet:(id)arg1 usingWindow:(id)arg2 forAccountID:(id)arg3 andPassword:(id)arg4 ;
-(void)_closeTermsOfServiceDialog;
-(void)_handleTermsOfServiceCancel:(id)arg1 ;
-(void)mmTermOfServiceControllerDidCancel:(id)arg1 ;
-(void)mmTermOfServiceControllerDidSucceed:(id)arg1 ;
-(char)completeSignin:(id)arg1 withPassword:(id)arg2 delegatePlist:(id)arg3 ;
-(void)authenticateAccount:(id)arg1 withPassword:(id)arg2 delegatePlist:(id)arg3 ;
-(char)completeAquaSessionSetupForAccount:(id)arg1 andPassword:(id)arg2 ;
-(void)finishedSetup:(id)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(NSWindow *)parentWindow;
-(void)setParentWindow:(NSWindow *)arg1 ;
@end

