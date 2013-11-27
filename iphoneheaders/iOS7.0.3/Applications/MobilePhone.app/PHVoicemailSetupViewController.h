/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:35:34 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <MobilePhoneSettings/TPSetPINViewControllerDelegate.h>
#import <MobilePhone/PHVoicemailGreetingViewControllerDelegate.h>

@protocol PHVoicemailSetupViewControllerDelegate;
@class PHVoicemailNavigationController, NSTimer, , PhoneNavigationController;

@interface PHVoicemailSetupViewController : UIViewController <TPSetPINViewControllerDelegate, PHVoicemailGreetingViewControllerDelegate> {

	PHVoicemailNavigationController* _navigationController;
	NSTimer* _passwordChangeTimedOutTimer;
	<PHVoicemailSetupViewControllerDelegate>* _voicemailSetupDelegate;
	PhoneNavigationController* _setupPINAndGreetingNavigationController;

}

@property (assign) PHVoicemailNavigationController * navigationController;                           //@synthesize navigationController=_navigationController - In the implementation block
@property (assign) <PHVoicemailSetupViewControllerDelegate> * voicemailSetupDelegate;                //@synthesize voicemailSetupDelegate=_voicemailSetupDelegate - In the implementation block
@property (retain) PhoneNavigationController * setupPINAndGreetingNavigationController;              //@synthesize setupPINAndGreetingNavigationController=_setupPINAndGreetingNavigationController - In the implementation block
-(void)voicemailGreetingViewControllerFinished:(id)arg1 ;
-(void)_setupNoContentViewForInitialSetup;
-(BOOL)_hasValidProvisionalPIN;
-(void)setSetupPINAndGreetingNavigationController:(id)arg1 ;
-(id)setupPINAndGreetingNavigationController;
-(void)_handleVoicemailPasswordChangeTimedOut;
-(void)_voicemailSetupButtonTapped;
-(id)voicemailSetupDelegate;
-(void)setVoicemailSetupDelegate:(id)arg1 ;
-(id)initWithNavigationController:(id)arg1 ;
-(void)dealloc;
-(id)navigationController;
-(void)loadView;
-(void)reset;
-(void)_handleVoicemailPasswordChangeTaskNotification:(id)arg1 ;
-(void)setNavigationController:(id)arg1 ;
-(void)setPINViewControllerFinished:(id)arg1 success:(BOOL)arg2 oldPIN:(id)arg3 newPIN:(id)arg4 ;
@end
