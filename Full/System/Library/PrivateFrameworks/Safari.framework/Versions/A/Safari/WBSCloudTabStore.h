/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary, NSArray;

@interface WBSCloudTabStore : NSObject {

	NSMutableArray* _syncedCloudTabDevices;
	NSMutableDictionary* _deviceUUIDsToCloseRequests;

}

@property (nonatomic,copy,readonly) NSArray * syncedCloudTabDevices; 
-(NSArray *)syncedCloudTabDevices;
-(char)closeAllTabsOnDevice:(id)arg1 ;
-(char)closeTab:(id)arg1 onDevice:(id)arg2 ;
-(void)resetSyncedCloudTabDevicesAndCloseRequests;
-(void)createSyncedCloudTabDevicesAndCloseRequests;
-(void)handleCloseTabRequests;
-(void)pruneExpiredDevices;
-(char)closeTabs:(id)arg1 onDevice:(id)arg2 ;
-(id)_currentDeviceUUID;
-(id)_keyValueStoreDictionaryRepresentation:(long long)arg1 ;
-(void)_setDictionaryInKeyValueStore:(long long)arg1 dictionary:(id)arg2 forKey:(id)arg3 ;
-(void)_removeObjectFromKeyValueStore:(long long)arg1 forKey:(id)arg2 ;
-(void)_closeRequestedTabIfPossible:(id)arg1 ;
-(void)_addDeviceDictionary:(id)arg1 deviceUUID:(id)arg2 ;
-(void)_addCloseRequestDictionary:(id)arg1 requestUUID:(id)arg2 ;
-(void)_pruneOrphanedCloseRequests;
-(void)_removeSyncedCloudTabsWithOutstandingCloseRequests;
-(char)_writeCloseRequestForTab:(id)arg1 onDevice:(id)arg2 ;
-(char)_closeTabs:(id)arg1 onDevice:(id)arg2 ;
-(id)_deviceWithTabsWithOutstandingCloseRequestsRemoved:(id)arg1 ;
@end

