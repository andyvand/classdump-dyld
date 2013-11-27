/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:41:45 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
#import <iap2d/iap2d-Structs.h>
@class iAP2MediaLibrary, iAP2NowPlaying, iAP2MsgWifi, iAP2MsgTelephony, iAP2MsgLocation, iAP2MsgVehicleStatus, iAP2MsgDigitalAudio, iAP2HIDManager, iAP2IdentificationInfo, NSMutableDictionary, iAP2PowerUpdates, iAP2MsgAssistiveTouch, iAP2MsgVoiceOver, iAP2MsgSiri, NSObject, NSTimer, iAP2Port, iAP2Session, iAP2AuthenticationController, iAP2iPodOutController, iAP2AppLaunchController;

@interface iAP2Connection : NSObject {

	iAP2MediaLibrary* _mediaLibrary;
	iAP2NowPlaying* _nowPlaying;
	iAP2MsgWifi* _msgWifi;
	iAP2MsgTelephony* _msgTelephony;
	iAP2MsgLocation* _msgLocation;
	iAP2MsgVehicleStatus* _msgVehicleStatus;
	iAP2MsgDigitalAudio* _msgDigitalAudio;
	iAP2HIDManager* _iap2hidManager;
	iAP2IdentificationInfo* _IdentificationInfo;
	NSMutableDictionary* _AccessoryDictionary;
	iAP2PowerUpdates* _powerUpdates;
	iAP2MsgAssistiveTouch* _assistiveTouch;
	iAP2MsgVoiceOver* _voiceOver;
	iAP2MsgSiri* _siri;
	int _identificationState;
	NSObject<OS_dispatch_queue>* _serializeQ;
	NSObject<OS_dispatch_semaphore>* _waitForFreeBufferIdSem;
	NSTimer* _identifyTimer;
	CFUserNotificationRef _accessoryNotSupportedAlert;
	CFUserNotificationRef _noAppForAccessoryAlert;
	/*function pointer*/ void* _callbackForNoAppForAccessory;
	BOOL _findAppForAccessoryAlertDelayedForLockScreen;
	iAP2FileTransfer_st* _testRecvFile;
	NSMutableDictionary* _testSendFileList;
	bool _isInList;
	bool _shuttingDown;
	bool _failed;
	unsigned _magic;
	unsigned _connectionID;
	iAP2Port* _port;
	iAP2Session* _controlSession;
	NSObject<OS_dispatch_queue>* _serviceBuffersQ;
	NSMutableDictionary* _serviceBuffers;
	NSMutableDictionary* _serviceTests;
	iAP2AuthenticationController* _authStatus;
	iAP2iPodOutController* _iPodOutController;
	iAP2AppLaunchController* _appLaunchController;
	SCD_Struct_iA3* accessoryPowerManager;

}

@property (nonatomic,readonly) unsigned Magic;                                             //@synthesize magic=_magic - In the implementation block
@property (nonatomic,readonly) unsigned ConnectionID;                                      //@synthesize connectionID=_connectionID - In the implementation block
@property (nonatomic,readonly) iAP2Port * Port;                                            //@synthesize port=_port - In the implementation block
@property (nonatomic,readonly) bool IsInList;                                              //@synthesize isInList=_isInList - In the implementation block
@property (nonatomic,readonly) bool ShuttingDown;                                          //@synthesize shuttingDown=_shuttingDown - In the implementation block
@property (nonatomic,readonly) bool Failed;                                                //@synthesize failed=_failed - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * AccessoryDictionary; 
@property (nonatomic,readonly) iAP2Session * ControlSession;                               //@synthesize controlSession=_controlSession - In the implementation block
@property (nonatomic,readonly) NSObject<OS_dispatch_queue> * ServiceBuffersQ;              //@synthesize serviceBuffersQ=_serviceBuffersQ - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * ServiceBuffers;                       //@synthesize serviceBuffers=_serviceBuffers - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * ServiceTests;                         //@synthesize serviceTests=_serviceTests - In the implementation block
@property (nonatomic,readonly) iAP2AuthenticationController * AuthStatus;                  //@synthesize authStatus=_authStatus - In the implementation block
@property (nonatomic,readonly) iAP2MediaLibrary * MediaLibrary; 
@property (nonatomic,readonly) iAP2MsgWifi * MsgWifi; 
@property (nonatomic,readonly) iAP2NowPlaying * NowPlaying; 
@property (nonatomic,readonly) iAP2MsgTelephony * MsgTelephony; 
@property (nonatomic,readonly) iAP2MsgLocation * MsgLocation; 
@property (nonatomic,readonly) iAP2MsgVehicleStatus * MsgVehicleStatus; 
@property (nonatomic,readonly) iAP2MsgDigitalAudio * MsgDigitalAudio; 
@property (nonatomic,readonly) iAP2HIDManager * IAP2HIDManager; 
@property (nonatomic,readonly) iAP2IdentificationInfo * IdentificationInfo; 
@property (nonatomic,readonly) iAP2PowerUpdates * PowerUpdates; 
@property (nonatomic,readonly) iAP2MsgAssistiveTouch * MsgAssistiveTouch; 
@property (nonatomic,readonly) iAP2MsgVoiceOver * MsgVoiceOver; 
@property (nonatomic,readonly) iAP2MsgSiri * MsgSiri; 
@property (nonatomic,readonly) iAP2iPodOutController * iPodOutController;                  //@synthesize iPodOutController=_iPodOutController - In the implementation block
@property (nonatomic,readonly) iAP2AppLaunchController * appLaunchController;              //@synthesize appLaunchController=_appLaunchController - In the implementation block
@property (nonatomic,readonly) SCD_Struct_iA3* accessoryPowerManager; 
@property (assign,nonatomic) int identificationState;                                      //@synthesize identificationState=_identificationState - In the implementation block
@property (nonatomic,readonly) bool IsSupportedIPodOut; 
@property (nonatomic,readonly) bool IsSupportedUSBAudioOut; 
@property (nonatomic,readonly) bool DoesAccessorySupportAccessibility; 
@property (assign,nonatomic) iAP2FileTransfer_st* TestRecvFile;                            //@synthesize testRecvFile=_testRecvFile - In the implementation block
@property (assign,nonatomic) NSMutableDictionary * TestSendFileList;                       //@synthesize testSendFileList=_testSendFileList - In the implementation block
+(void)ConnectionListPerform:(/*^block*/ id)arg1 ;
+(void)ConnectionListPerformAsync:(/*^block*/ id)arg1 ;
+(bool)IsValidConnection:(id)arg1 ;
+(id)ConnectionFromID:(unsigned)arg1 ;
+(void)handleGoToSleep;
+(void)handleWakeUp;
+(id)connectedAccessories;
-(unsigned)ConnectionID;
-(iAP2Link_st*)iAP2Link;
-(long)EventNotify:(int)arg1 param:(void*)arg2 ;
-(bool)ShuttingDown;
-(void)SetupSessionsAfterLinkInitialization;
-(void)connectionDown;
-(int)serviceTypeForSessionID:(unsigned char)arg1 ;
-(id)IdentificationInfo;
-(id)MainQueue;
-(bool)SendDataForSession:(unsigned char)arg1 Data:(char*)arg2 Len:(unsigned)arg3 ;
-(bool)SendDataForSession:(unsigned char)arg1 Data:(char*)arg2 Len:(unsigned)arg3 andNotify:(/*^block*/ id)arg4 withContext:(void*)arg5 onQueue:(id)arg6 ;
-(bool)ProcessControlSession:(unsigned char)arg1 Data:(char*)arg2 Len:(unsigned)arg3 ;
-(bool)ProcessBufferSession:(unsigned char)arg1 Data:(char*)arg2 Len:(unsigned)arg3 ;
-(bool)ProcessEASession:(unsigned char)arg1 Data:(char*)arg2 Len:(unsigned)arg3 ;
-(id)AuthStatus;
-(bool)ProcessTestSession:(unsigned char)arg1 Data:(char*)arg2 Len:(unsigned)arg3 ;
-(unsigned)Magic;
-(bool)IsInList;
-(id)AccessoryDictionary;
-(void)_shouldPostNoAppAlertIfHoldSwitchOff;
-(void)processAuthChangeNotification:(id)arg1 ;
-(void)tearDownFindAppForAccessoryAlert;
-(void)_connectionShutdown;
-(unsigned char)GenerateBufferIdForSession:(unsigned char)arg1 ;
-(void)processDeviceStateNotifications:(id)arg1 ;
-(int)identificationState;
-(void)connectionFailed;
-(void)postNoAppForAccessoryAlertWithCallback:(/*function pointer*/ void*)arg1 ;
-(id)MsgSiri;
-(id)MsgVoiceOver;
-(id)MsgAssistiveTouch;
-(id)PowerUpdates;
-(void)ClearIdentificationInfo;
-(id)MsgDigitalAudio;
-(id)MsgVehicleStatus;
-(id)MsgLocation;
-(id)MsgTelephony;
-(id)MsgWifi;
-(id)MediaLibrary;
-(id)NowPlaying;
-(id)IAP2HIDManager;
-(id)appLaunchController;
-(void)SetNotInListShuttingDown;
-(void)IAP2TimeSyncSetParamsThreshold:(unsigned long long)arg1 interval:(unsigned)arg2 ;
-(void)IAP2TimeSyncInfoDictPerformBlock:(/*^block*/ id)arg1 ;
-(void)IAP2TimeSyncResetKalmanFilter;
-(void)SetupSessionsAfterIdentification;
-(void)setIsShuttingDown;
-(unsigned char)sessionIDForServiceType:(int)arg1 ;
-(bool)IsSupportedIPodOut;
-(bool)IsSupportedUSBAudioOut;
-(bool)DoesAccessorySupportAccessibility;
-(void)ReleaseBufferId:(unsigned char)arg1 forSession:(unsigned char)arg2 ;
-(unsigned char)WaitForAvailableBufferIdForSession:(unsigned char)arg1 timeout:(unsigned)arg2 shouldEnd:(/*^block*/ id)arg3 ;
-(void)registerForSystemNotifications;
-(int)checkIdentificationInfo:(id)arg1 ;
-(void)postAccessoryNotSupportedNotification;
-(bool)Failed;
-(id)ControlSession;
-(id)ServiceBuffersQ;
-(id)ServiceBuffers;
-(id)ServiceTests;
-(id)iPodOutController;
-(SCD_Struct_iA3*)accessoryPowerManager;
-(void)setIdentificationState:(int)arg1 ;
-(iAP2FileTransfer_st*)TestRecvFile;
-(void)setTestRecvFile:(iAP2FileTransfer_st*)arg1 ;
-(id)TestSendFileList;
-(void)setTestSendFileList:(id)arg1 ;
-(id)Port;
-(void)dealloc;
-(id)description;
-(id)initWithPort:(id)arg1 ;
@end
