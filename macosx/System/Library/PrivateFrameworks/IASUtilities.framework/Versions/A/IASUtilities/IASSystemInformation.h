/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IASUtilities.framework/Versions/A/IASUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface IASSystemInformation : NSObject
+(id)_userHomeDirectoriesWithSyncEnabledOnVolume:(id)arg1 includingHomes:(id)arg2 ;
+(char)machineHasBattery;
+(char)stageKeychainSyncBuddyAfterRestoreOrMigrationForVolumeAtPath:(id)arg1 includingHomes:(id)arg2 ;
+(char)hasAppleIPAddress;
+(char)runningFromInstallMedia;
+(id)nvramStringForKey:(id)arg1 ;
+(id)localVisibleUsers;
+(char)isRunningOnACPower;
@end
