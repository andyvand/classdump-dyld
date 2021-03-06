/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SystemAdministration.framework/Versions/A/SystemAdministration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SystemAdministration/SystemAdministration-Structs.h>
@class NSArray, NSMutableDictionary, NSDictionary;

@interface ADMPowerActivityManager : NSObject {

	NSArray* _powerProfiles;
	NSMutableDictionary* _powerPreferences;
	NSDictionary* _activePowerProfiles;
	NSDictionary* _upsShutdownLevels;
	IONotificationPortRef _ioNotificationPort;
	unsigned _ioNotifier;

}
+(id)sharedPowerActivityManager;
-(void)registerPMFeatureChangedNotification;
-(void)unregisterPMFeatureChangedNotification;
-(id)_activePowerProfiles;
-(id)_powerPreferences;
-(id)_powerProfiles;
-(void)setActivePowerProfiles:(id)arg1 ;
-(void)_refreshActivePowerProfiles;
-(id)_valueForKey:(id)arg1 powerSource:(id)arg2 ;
-(void)_setValue:(id)arg1 forKey:(id)arg2 powerSource:(id)arg3 ;
-(void)cancelAllRepeatingPowerEvents;
-(void)scheduleRepeatingPowerEvent:(id)arg1 ;
-(id)upsActivityProfile;
-(void)writeUPSSettings:(id)arg1 forKey:(id)arg2 ;
-(void)refreshUPSShutdownLevels;
-(void)_refreshPowerPreferences;
-(void)_refreshPowerProfiles;
-(id)activityProfile;
-(void)updateProfilesAndSendNotification;
-(unsigned long long)displaySleepsFor:(id)arg1 ;
-(unsigned long long)diskSleeps:(id)arg1 ;
-(unsigned long long)systemSleeps:(id)arg1 ;
-(void)setMinutesUntilDisplaySleeps:(unsigned long long)arg1 for:(id)arg2 ;
-(void)setMinutesUntilDiskSleeps:(unsigned long long)arg1 for:(id)arg2 ;
-(void)setMinutesUntilSystemSleeps:(unsigned long long)arg1 for:(id)arg2 ;
-(char)supportsDarkWakeFor:(id)arg1 ;
-(char)supportsEnablePowerButtonSleepFor:(id)arg1 ;
-(char)supportsWakeOnRingFor:(id)arg1 ;
-(char)supportsAutoRestartFor:(id)arg1 ;
-(char)supportsReducedCPUSpeedFor:(id)arg1 ;
-(char)supportsDynamicPowerStep:(id)arg1 ;
-(char)supportsLowerDisplayBrightnessFor:(id)arg1 ;
-(char)supportsSleepUsesDimFor:(id)arg1 ;
-(char)supportsRestartOnHangFor:(id)arg1 ;
-(char)darkWakeFor:(id)arg1 ;
-(char)enablePowerButtonSleepFor:(id)arg1 ;
-(char)wakesOnRingFor:(id)arg1 ;
-(char)autoRestartsFor:(id)arg1 ;
-(char)reducedCPUSpeedFor:(id)arg1 ;
-(char)dynamicPowerStepFor:(id)arg1 ;
-(char)lowerDisplayBrightnessFor:(id)arg1 ;
-(char)sleepUsesDimFor:(id)arg1 ;
-(char)restartsOnHang:(id)arg1 ;
-(void)setDarkWake:(char)arg1 for:(id)arg2 ;
-(void)setEnablePowerButtonSleep:(char)arg1 for:(id)arg2 ;
-(void)setWakesOnLAN:(char)arg1 for:(id)arg2 ;
-(void)setWakesOnRing:(char)arg1 for:(id)arg2 ;
-(void)setAutoRestarts:(char)arg1 for:(id)arg2 ;
-(void)setReducedCPUSpeed:(char)arg1 for:(id)arg2 ;
-(void)setDynamicPowerStep:(char)arg1 for:(id)arg2 ;
-(void)setLowerDisplayBrightness:(char)arg1 for:(id)arg2 ;
-(void)setSleepUsesDim:(char)arg1 for:(id)arg2 ;
-(void)setRestartsOnHang:(char)arg1 for:(id)arg2 ;
-(id)repeatingPowerEvents;
-(char)hasUPS;
-(char)upsSupportsShutdownKey:(id)arg1 ;
-(char)upsShutdownEnabledForKey:(id)arg1 ;
-(void)setUPSShutdownEnabled:(char)arg1 forKey:(id)arg2 ;
-(unsigned long long)upsShutdownValueForKey:(id)arg1 ;
-(void)setUPSShutdownValue:(unsigned long long)arg1 forKey:(id)arg2 ;
-(double)ratingForPowerProfile:(long long)arg1 powerSource:(id)arg2 ;
-(char)hasBattery;
-(char)wakesOnLANFor:(id)arg1 ;
-(char)supportsWakeOnLANFor:(id)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
@end

