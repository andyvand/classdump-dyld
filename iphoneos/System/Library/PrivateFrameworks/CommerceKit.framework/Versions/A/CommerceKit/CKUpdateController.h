/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/CommerceKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommerceKit/CKServiceInterface.h>

@interface CKUpdateController : CKServiceInterface {

	/*^block*/id _dialogHandler;

}

@property (copy) id dialogHandler;              //@synthesize dialogHandler=_dialogHandler - In the implementation block
+(id)sharedUpdateController;
-(id)dialogHandler;
-(void)setDialogHandler:(id)arg1 ;
-(void)startAppUpdates:(id)arg1 andOSUpdates:(id)arg2 withDelegate:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_updateFailureDialogWithAuditInfo:(id)arg1 ;
-(void)installAllAvailableUpdates;
-(char)_otherUsersAreLoggedIn;
-(id)availableUpdateWithItemIdentifier:(unsigned long long)arg1 ;
-(id)incompatibleUpdates;
-(unsigned long long)availableUpdatesBadgeCount;
-(id)addAvailableUpdatesObserverWithBlock:(/*^block*/id)arg1 ;
-(void)checkForUpdatesWithUserHasSeenUpdates:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)shouldOfferDoItLater;
-(id)osUpdatesToBeInstalledAfterLogout;
-(id)osUpdatesToBeInstalledLater;
-(id)appUpdatesToBeInstalledLater;
-(void)showUpdateFailureWithAuditToken:(id)arg1 ;
-(char)osUpdateScanInProgress;
-(id)observerOSUpdateScansWithProgressHandler:(/*^block*/id)arg1 ;
-(void)stopObservingOSUpdateScansWithCallback:(id)arg1 ;
-(id)observerOSUpdateProgressWithProgressHandler:(/*^block*/id)arg1 ;
-(void)stopObservingOSUpdateProgressWithCallback:(id)arg1 ;
-(long long)softwareUpdateCatalogTrustLevel;
-(char)softwareUpdateCatalogIsSeedCatalog;
-(id)installedUpdatesJournal;
-(char)isAutoUpdatedEnabled;
-(char)shouldPromptForAutoUpdateOptIn;
-(int)catalogTrustLevel;
-(id)catalogHostName;
-(id)availableUpdates;
-(id)init;
-(void)removeAvailableUpdatesObserver:(id)arg1 ;
-(void)startOSUpdateScanWithForceFullScan:(char)arg1 reportProgressImmediately:(char)arg2 launchedFromNotification:(char)arg3 userHasSeenAllUpdates:(char)arg4 checkForOtherUpdates:(char)arg5 ;
-(void)removeUpdateFromInstallLaterWithBundleID:(id)arg1 ;
-(void)installAvailableUpdatesLaterWithMode:(long long)arg1 ;
-(void)cancelUpdatesToBeInstalledLater;
-(void)promptUserToOptInForAutoUpdateWithShowNotification:(char)arg1 ;
@end

