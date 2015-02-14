/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdate.framework/Versions/A/SoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SoftwareUpdate/SoftwareUpdate-Structs.h>
@class NSDateFormatter, NSArray, NSSet, NSDictionary;

@interface SUSharedPrefs : NSObject {

	Class _helperProxyClass;
	NSDateFormatter* _formatter;
	NSArray* _inactiveLabels;
	NSArray* _waitingFirmwareProductKeys;
	NSArray* _primedFirmwareProductKeys;
	NSSet* _whitelistedUpdates;
	dispatch_queue_sRef _cacheQueue;
	NSDictionary* _theDefaultsOverridePlist;

}
+(id)sharedPrefManager;
+(id)currentSystemVersion;
+(char)isAdminUser:(unsigned)arg1 ;
-(id)catalogURL;
-(char)okayToUseThirdPartyTestMode;
-(char)enableSpecialTestMode;
-(void)updatePrefsIfNeeded;
-(char)shouldScanAfterSystemVersionChanged;
-(void)reloadPreferences;
-(char)isCheckScheduled;
-(char)doesBackgroundDownload;
-(char)doesAutomaticConfigDataInstall;
-(char)doesAutomaticCriticalUpdateInstall;
-(char)shouldPeriodicCheckFireNow;
-(char)shouldCriticalAndConfigDataCheckFireNow;
-(char)shouldConsiderOnlyStagedUpdates;
-(char)didSkipBackgroundDownloadLackingDiskSpace;
-(void)setDidSkipBackgroundDownloadLackingDiskSpace:(char)arg1 ;
-(void)setLastBackgroundCheckSuccessfulDate:(id)arg1 ;
-(void)setLastBackgroundCriticalAndConfigDataCheckSuccessfulDate:(id)arg1 ;
-(void)setLastSessionCompletedSuccessfully:(char)arg1 ;
-(char)shouldInvertStagedAndActiveStatesForTestingOnProduction;
-(id)inactiveProductLabels;
-(id)recommendedUpdateProductKeys;
-(char)isUpdateWhitelistEnabled;
-(id)productKeysForUpdateWhitelist;
-(id)waitingFirmwareProductKeys;
-(char)shouldAutoInstallCriticalUpdatesNowForDelay:(long long)arg1 ;
-(void)_updateWhitelistFromManagedPrefs:(id)arg1 ;
-(id)objectForAnyUserPreference:(id)arg1 usingManaged:(char)arg2 usingDefaultOverride:(char)arg3 ;
-(void)setObject:(id)arg1 forAnyUserPreference:(id)arg2 ;
-(id)lastCheckAttemptSystemVersion;
-(id)lastBackgroundCheckSuccessfulDate;
-(double)scanFrequencyInterval;
-(char)_shouldCheckUnderCurrentConditionsWithInterval:(double)arg1 sinceLastCheck:(id)arg2 ;
-(id)lastBackgroundCriticalAndConfigDataCheckSuccessfulDate;
-(id)objectForAnyUserPreference:(id)arg1 ;
-(void)clearCriticalUpdateNotificationDate;
-(void)setCheckScheduled:(char)arg1 ;
-(void)setBackgroundDownload:(char)arg1 ;
-(void)setAutomaticConfigDataInstall:(char)arg1 ;
-(void)setAutomaticCriticalUpdateInstall:(char)arg1 ;
-(char)doesAppStoreAutoUpdates;
-(void)setAppStoreAutoUpdates:(char)arg1 ;
-(char)doesOSXAutoUpdates;
-(void)setOSXAutoUpdates:(char)arg1 ;
-(void)setInactiveProductLabels:(id)arg1 ;
-(void)setWaitingFirmwareProductKeys:(id)arg1 ;
-(char)shouldEvaluateCriticalIfUnchanged;
-(void)setRecommendedUpdates:(id)arg1 ;
-(id)recommendedUpdates;
-(id)lastCheckSuccessfulDate;
-(void)setLastCheckSuccessfulDate:(id)arg1 ;
-(id)lastFullCheckSuccessfulDate;
-(void)setLastFullCheckSuccessfulDate:(id)arg1 ;
-(int)lastCheckResultCode;
-(void)setLastCheckResultCode:(int)arg1 ;
-(long long)lastUpdatesAvailable;
-(long long)lastRecommendedUpdatesAvailable;
-(void)addRecommendedUpdates:(id)arg1 ;
-(void)removeRecommendedUpdates:(id)arg1 ;
-(void)removeAllRecommendedUpdates;
-(void)addPrimaryLanguageIfNecessary:(id)arg1 ;
-(void)setLastCheckAttemptSystemVersion;
-(char)lastSessionCompletedSuccessfully;
-(char)shouldSkipContentLocator;
-(void)setShouldSkipContentLocator:(char)arg1 ;
-(id)_valueFromDefaultOverridePlist:(id)arg1 ;
-(char)isValidAnyUserPreference:(id)arg1 ;
-(char)useBackgroundNSURLSession;
-(id)init;
@end

