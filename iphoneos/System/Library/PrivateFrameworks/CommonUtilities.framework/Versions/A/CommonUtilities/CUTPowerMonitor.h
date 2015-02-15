/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:34 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/Versions/A/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CommonUtilities/CommonUtilities-Structs.h>
@class CUTWeakReference, NSMutableArray;

@interface CUTPowerMonitor : NSObject {

	CUTWeakReference* _iokitDelegate;
	CFRunLoopSourceRef _batteryRunLoopSource;
	IONotificationPortRef _batteryIONotifyPort;
	unsigned _batteryNotificationRef;
	unsigned _pmConnection;
	IONotificationPortRef _pmPort;
	unsigned _pmNotifier;
	NSMutableArray* _delegates;
	double _currentLevel;
	char _isExternalPowerConnected;

}

@property (assign,nonatomic) char isExternalPowerConnected;                 //@synthesize isExternalPowerConnected=_isExternalPowerConnected - In the implementation block
@property (nonatomic,readonly) double batteryPercentRemaining; 
@property (assign,nonatomic) double currentLevel;                           //@synthesize currentLevel=_currentLevel - In the implementation block
+(id)sharedInstance;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(void)updateBatteryLevelWithBatteryEntry:(unsigned)arg1 ;
-(char)_updateBatteryConnectedStateWithBatteryEntry:(unsigned)arg1 ;
-(void)_handlePowerChangedNotificationWithMessageType:(unsigned)arg1 notificationID:(void*)arg2 ;
-(void)updateBatteryConnectedStateWithBatteryEntry:(unsigned)arg1 ;
-(char)isExternalPowerConnected;
-(double)batteryPercentRemaining;
-(double)currentLevel;
-(void)setCurrentLevel:(double)arg1 ;
-(void)setExternalPowerConnected:(char)arg1 ;
-(id)init;
-(void)dealloc;
@end
