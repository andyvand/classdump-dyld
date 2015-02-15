/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:11 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Safari/Safari-Structs.h>
@interface DefaultBrowserPromptingManager : NSObject {

	char _safariWasLaunchedFromTrySafariNotification;
	unique_ptr<Safari::AutomaticTerminationDisabler, std::__1::default_delete<Safari::AutomaticTerminationDisabler> >* _automaticTerminationDisabler;
	char _shouldAdvanceStateWhenMakingSafariDefaultBrowserOnQuit;
	char _shouldMakeSafariDefaultBrowserOnQuit;
	int _promptingState;

}

@property (assign,nonatomic) int promptingState;                                     //@synthesize promptingState=_promptingState - In the implementation block
@property (assign,nonatomic) char shouldMakeSafariDefaultBrowserOnQuit;              //@synthesize shouldMakeSafariDefaultBrowserOnQuit=_shouldMakeSafariDefaultBrowserOnQuit - In the implementation block
+(id)sharedManager;
-(void)registerTrySafariEventHandler;
-(void)makeSafariDefaultBrowserOnQuitIfNecessary;
-(void)performDelayedLaunchOperations;
-(void)willHideDefaultBrowserBanner;
-(void)_intializePromptingStateFromUserDefaults;
-(void)_handleTrySafariEvent:(id)arg1 withReplyEvent:(id)arg2 ;
-(void)setPromptingState:(int)arg1 ;
-(void)setShouldMakeSafariDefaultBrowserOnQuit:(char)arg1 ;
-(void)_showDefaultBrowserBannerIfNecessary;
-(void)_advancePromptingState;
-(void)_willPowerOff:(id)arg1 ;
-(void)_registerForTestDriveNotifications;
-(double)_intervalToWaitBeforeThirdPrompt;
-(double)_intervalToWaitBeforeFourthPrompt;
-(void)_setDateOfLastPromptToNow;
-(char)_shouldShowDefaultBrowserBanner;
-(void)_testDriveWillPromptOrAttemptedToSetSafariAsDefaultBrowser:(id)arg1 ;
-(void)_hideDefaultBrowserBanner;
-(void)scheduleMakingSafariDefaultBrowserOnQuitFromTestDriveEnding;
-(int)promptingState;
-(char)shouldMakeSafariDefaultBrowserOnQuit;
-(id)init;
-(void)dealloc;
@end

