/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:52:00 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/aosnotifyd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, AVController, NSTimer, NSArray, AOSFlasher;

@interface AOSUserNotificationMgr_iOS : NSObject {

	NSMutableDictionary* _activeUserNotifications;
	NSMutableDictionary* _activeCFNotificationsByCategory;
	AVController* _avController;
	NSTimer* _stopSoundTimer;
	NSArray* _captureDevices;
	AOSFlasher* _flasher;

}

@property (nonatomic,retain) NSMutableDictionary * activeUserNotifications;                      //@synthesize activeUserNotifications=_activeUserNotifications - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activeCFNotificationsByCategory;              //@synthesize activeCFNotificationsByCategory=_activeCFNotificationsByCategory - In the implementation block
@property (nonatomic,retain) AVController * avController;                                        //@synthesize avController=_avController - In the implementation block
@property (nonatomic,retain) NSTimer * stopSoundTimer;                                           //@synthesize stopSoundTimer=_stopSoundTimer - In the implementation block
@property (nonatomic,retain) NSArray * captureDevices;                                           //@synthesize captureDevices=_captureDevices - In the implementation block
@property (nonatomic,retain) AOSFlasher * flasher;                                               //@synthesize flasher=_flasher - In the implementation block
+(id)sharedInstance;
-(void)stopAllSounds;
-(id)initSingleton;
-(void)activateNotification:(id)arg1 ;
-(void)setActiveUserNotifications:(id)arg1 ;
-(void)setActiveCFNotificationsByCategory:(id)arg1 ;
-(void)setCaptureDevices:(id)arg1 ;
-(id)stopSoundTimer;
-(id)activeCFNotificationsByCategory;
-(id)activeUserNotifications;
-(id)_xpcTransactionNameFor:(id)arg1 ;
-(void)_startFlashingLEDFor:(id)arg1 ;
-(void)_playSoundFor:(id)arg1 ;
-(void)_stopFlashingLED;
-(void)stopSound;
-(void)setFlasher:(id)arg1 ;
-(id)flasher;
-(void)setAvController:(id)arg1 ;
-(void)_stopSoundTimerFired:(id)arg1 ;
-(void)setStopSoundTimer:(id)arg1 ;
-(id)captureDevices;
-(void)dealloc;
-(id)init;
-(id)avController;
-(void).cxx_destruct;
@end
