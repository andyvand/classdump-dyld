/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdate.framework/Versions/A/SoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SUHelperDProtocol
@required
-(int)prepareForLogoutAndInstall;
-(char)stashLoginCredentialsEnablingFLO:(char)arg1;
-(char)commitLoginCredentialsDisablingFLO:(char)arg1;
-(char)getDigest:(id*)arg1 forPackageAtURL:(id)arg2;
-(char)setObject:(id)arg1 forAnyUserPreference:(id)arg2;
-(char)setAppStoreAutoUpdate:(char)arg1;
-(char)setOSXAutoUpdate:(char)arg1;
-(char)clearCriticalUpdateNotificationDate;
-(char)clearAnyUserPreference:(id)arg1;
-(char)updateAnyUserPreferences;
-(char)moveMetadataCacheToUpdatesFromPath:(id)arg1;
-(void)authorizeTool:(AuthorizationOpaqueRefRef)arg1 forRights:(long long)arg2;
-(char)registerProductFile:(id)arg1 forProductKey:(id)arg2 firmware:(char)arg3 trustLevel:(int*)arg4 keepOriginal:(char)arg5;
-(char)makeQueues;
-(char)moveInstalledPrintersToLibraryFromPath:(id)arg1;
-(char)removeMetadataCacheFromUpdates;
-(char)movePPDVersionCacheToUpdatesFromPath:(id)arg1;
-(char)removeIndexFromUpdates;
-(id)readUpdatesIndex;
-(char)writeUpdatesIndex:(id)arg1;
-(char)removeDistForProductKey:(id)arg1 withFilename:(id)arg2;
-(char)createDirectoryForProductKey:(id)arg1 Firmware:(char)arg2;
-(char)removeProductDirectoryForKey:(id)arg1;
-(char)createUpdatesAvailableCookie;
-(char)removeUpdatesAvailableCookie;
-(char)restoreDefaultCatalog;
-(id)lookupURLCredentialInSystemKeychainForHost:(id)arg1 port:(long long)arg2;

@end

