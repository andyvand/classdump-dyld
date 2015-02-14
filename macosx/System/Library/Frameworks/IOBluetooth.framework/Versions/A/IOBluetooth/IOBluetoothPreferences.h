/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSUserDefaults, NSString, NSArray, NSDictionary;

@interface IOBluetoothPreferences : NSObject {

	NSUserDefaults* bluetoothPrefs;
	NSString* _AVRCPDefaultPlayer;

}

@property (readonly) char isServer; 
@property (assign) char discoverable; 
@property (assign) char poweredOn; 
@property (assign) char isLocked; 
@property (assign) char remoteWakeEnabled; 
@property (readonly) NSArray * favoriteDevices; 
@property (readonly) NSArray * pairedDevices; 
@property (readonly) NSArray * BRPairedDevices; 
@property (readonly) NSArray * LEPairedDevices; 
@property (readonly) NSArray * configuredDevices; 
@property (readonly) NSArray * hidDevices; 
@property (readonly) NSArray * panDevices; 
@property (readonly) NSArray * idsPairedDevices; 
@property (readonly) NSArray * idsPairedDevicesForUser; 
@property (readonly) NSArray * serialDevices; 
@property (readonly) NSArray * disallowRoleSwitchDevices; 
@property (readonly) NSDictionary * deviceAccessTimes; 
@property (readonly) NSDictionary * deviceCache; 
@property (assign) char fileTransferServicesEnabled; 
@property (copy) NSString * OBEXPushDestinationDirectory; 
@property (copy) NSString * OBEXBrowseRootDirectory; 
@property (assign) int OBEXFileHandling; 
@property (assign) int OBEXBrowseConnectionHandling; 
@property (assign) unsigned OBEXOtherDataDisposition; 
@property (assign) char OBEXFTPRequiresPairing; 
@property (assign) char OBEXFileTransferAllowsDelete; 
@property (assign) char OBEXObjectPushRequiresPairing; 
@property (assign) char autoSeekKeyboard; 
@property (assign) char autoSeekPointingDevice; 
@property (assign) char loggingEnabled; 
@property (copy) NSString * AVRCPDefaultPlayer;                                  //@synthesize AVRCPDefaultPlayer=_AVRCPDefaultPlayer - In the implementation block
@property (readonly) char disableUIServerLegacyPairingConfirmation; 
@property (readonly) char disableUIServerSSPConfirmation; 
@property (readonly) NSArray * launchableApplications; 
@property (assign) char wasUpdated; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)sharedPreferences;
-(void)setPoweredOn:(char)arg1 ;
-(char)poweredOn;
-(NSArray *)pairedDevices;
-(NSArray *)favoriteDevices;
-(void)addFavoriteDevice:(id)arg1 ;
-(void)removeFavoriteDevice:(id)arg1 ;
-(NSArray *)configuredDevices;
-(NSArray *)hidDevices;
-(NSArray *)panDevices;
-(NSArray *)serialDevices;
-(NSDictionary *)deviceAccessTimes;
-(NSArray *)idsPairedDevices;
-(NSArray *)BRPairedDevices;
-(NSArray *)LEPairedDevices;
-(id)attributesForDevice:(id)arg1 ;
-(void)deviceWasUpdated:(id)arg1 ;
-(void)addLaunchableApplication:(id)arg1 ;
-(NSArray *)disallowRoleSwitchDevices;
-(id)systemPreferenceForKey:(id)arg1 ;
-(char)discoverable;
-(void)setDiscoverable:(char)arg1 ;
-(char)remoteWakeEnabled;
-(void)setRemoteWakeEnabled:(char)arg1 ;
-(char)autoSeekKeyboard;
-(char)autoSeekPointingDevice;
-(char)OBEXFTPRequiresPairing;
-(void)setOBEXFTPRequiresPairing:(char)arg1 ;
-(char)OBEXObjectPushRequiresPairing;
-(void)setOBEXObjectPushRequiresPairing:(char)arg1 ;
-(int)OBEXFileHandling;
-(void)setOBEXFileHandling:(int)arg1 ;
-(int)OBEXBrowseConnectionHandling;
-(void)setOBEXBrowseConnectionHandling:(int)arg1 ;
-(unsigned)OBEXOtherDataDisposition;
-(void)setOBEXOtherDataDisposition:(unsigned)arg1 ;
-(NSString *)OBEXPushDestinationDirectory;
-(void)setOBEXPushDestinationDirectory:(NSString *)arg1 ;
-(NSString *)OBEXBrowseRootDirectory;
-(void)setOBEXBrowseRootDirectory:(NSString *)arg1 ;
-(void)setFileTransferServicesEnabled:(char)arg1 ;
-(char)fileTransferServicesEnabled;
-(NSDictionary *)deviceCache;
-(char)isServer;
-(void)postPreferencesChangedNotification;
-(void)setWasUpdated:(char)arg1 ;
-(void)setPreference:(id)arg1 forKey:(id)arg2 ;
-(void)updatePreferencesInBlued;
-(NSArray *)launchableApplications;
-(char)safeToPowerOff:(char)arg1 ;
-(char)userReallyWantsBTOff;
-(void)_setPoweredOn:(char)arg1 ;
-(void)setIsLocked:(char)arg1 ;
-(void)removeLaunchableApplication:(id)arg1 ;
-(NSArray *)idsPairedDevicesForUser;
-(void)updateDeviceAccessTime:(id)arg1 ;
-(char)OBEXFileTransferAllowsDelete;
-(void)setOBEXFileTransferAllowsDelete:(char)arg1 ;
-(void)setAutoSeekKeyboard:(char)arg1 ;
-(void)setAutoSeekPointingDevice:(char)arg1 ;
-(void)setDefaultInquiryTime:(unsigned char)arg1 ;
-(void)setInquiryThreshold:(char)arg1 ;
-(char)disableUIServerLegacyPairingConfirmation;
-(char)disableUIServerSSPConfirmation;
-(NSString *)AVRCPDefaultPlayer;
-(void)setAVRCPDefaultPlayer:(NSString *)arg1 ;
-(void)setLoggingEnabled:(char)arg1 ;
-(char)loggingEnabled;
-(id)init;
-(oneway void)release;
-(id)retain;
-(id)autorelease;
-(void)dealloc;
-(void)synchronize;
-(char)isLocked;
-(char)wasUpdated;
@end

