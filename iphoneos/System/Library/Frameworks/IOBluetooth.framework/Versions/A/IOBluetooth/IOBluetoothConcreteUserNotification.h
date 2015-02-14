/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IOBluetooth/IOBluetoothUserNotification.h>

@interface IOBluetoothConcreteUserNotification : IOBluetoothUserNotification {

	/*function pointer*/void* mCallback;
	void* mRefCon;
	SEL mSelector;
	int mNotificationType;
	id mWatchedObject;
	id mRegisteredObject;
	unsigned char mSelfRegistered;
	int mDirection;
	unsigned char mRFCOMMChannelID;
	unsigned short mL2CAPPSM;

}

@property (assign) unsigned short L2CAPPSM; 
@property (assign) unsigned char RFCOMMChannelID; 
@property (assign) void* refCon; 
@property (assign) /*function pointer*/void* callback; 
@property (assign) SEL selector; 
@property (assign) int notificationType; 
@property (assign) id watchedObject; 
@property (assign) id registeredObject; 
@property (assign) int direction; 
-(void)setNotificationType:(int)arg1 ;
-(int)notificationType;
-(void)unregister;
-(void)setWatchedObject:(id)arg1 ;
-(void)setRegisteredObject:(id)arg1 ;
-(void)objcNotificationRoutine:(id)arg1 ;
-(void)setRefCon:(void*)arg1 ;
-(void)setSelfRegistered;
-(void)notificationRoutine:(id)arg1 ;
-(void)setL2CAPPSM:(unsigned short)arg1 ;
-(void)objcL2CAPNotificationRoutine:(id)arg1 ;
-(void)l2capNotificationRoutine:(id)arg1 ;
-(void)setRFCOMMChannelID:(unsigned char)arg1 ;
-(void)objcRFCOMMNotificationRoutine:(id)arg1 ;
-(void)rfcommNotificationRoutine:(id)arg1 ;
-(void*)refCon;
-(unsigned short)L2CAPPSM;
-(unsigned char)RFCOMMChannelID;
-(id)registeredObject;
-(id)watchedObject;
-(int)direction;
-(void)setDirection:(int)arg1 ;
-(void)setSelector:(SEL)arg1 ;
-(SEL)selector;
-(/*function pointer*/void*)callback;
-(void)setCallback:(/*function pointer*/void*)arg1 ;
@end

