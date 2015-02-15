/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:10:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Chameleon Wizard.app/Contents/Frameworks/Sparkle.framework/Sparkle
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSTimer, SUUpdateDriver, SUHost;

@interface SUUpdater : NSObject {

	NSTimer* checkTimer;
	SUUpdateDriver* driver;
	SUHost* host;
	id delegate;

}
+(id)sharedUpdater;
+(id)updaterForBundle:(id)arg1 ;
-(id)hostBundle;
-(void)setSendsSystemProfile:(char)arg1 ;
-(void)setAutomaticallyDownloadsUpdates:(char)arg1 ;
-(void)resetUpdateCycle;
-(void)checkForUpdateInformation;
-(void)checkForUpdates:(id)arg1 ;
-(void)checkForUpdatesInBackground;
-(void)updateDriverDidFinish:(id)arg1 ;
-(void)updatePermissionPromptFinishedWithResult:(int)arg1 ;
-(id)lastUpdateCheckDate;
-(void)scheduleNextUpdateCheck;
-(char)sendsSystemProfile;
-(char)automaticallyChecksForUpdates;
-(double)updateCheckInterval;
-(id)parameterizedFeedURL;
-(void)checkForUpdatesWithDriver:(id)arg1 ;
-(void)setUpdateCheckInterval:(double)arg1 ;
-(char)updateInProgress;
-(char)automaticallyDownloadsUpdates;
-(void)unregisterAsObserver;
-(void)setAutomaticallyChecksForUpdates:(char)arg1 ;
-(id)initForBundle:(id)arg1 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(id)feedURL;
-(void)setFeedURL:(id)arg1 ;
-(void)registerAsObserver;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)delegate;
-(char)validateMenuItem:(id)arg1 ;
@end
