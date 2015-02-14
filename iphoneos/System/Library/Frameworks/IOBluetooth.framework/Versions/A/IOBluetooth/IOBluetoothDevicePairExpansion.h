/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IOBluetoothHostController, IOBluetoothL2CAPChannel, BluetoothHIDDeviceController;

@interface IOBluetoothDevicePairExpansion : NSObject {

	unsigned short pageTimeout;
	IOBluetoothHostController* hostController;
	char supportsAuthentication;
	char isNonSSPKeypressNotificationCapable;
	IOBluetoothL2CAPChannel* channel;
	char Q6BDAddrRange;
	char isWiiRemote;
	char isNeuroSwitch;
	char _isWiiUProController;
	BluetoothHIDDeviceController* bluetoothHIDDeviceController;
	char isPolyVision;

}

@property (assign) unsigned short pageTimeout; 
@property (retain) IOBluetoothHostController * hostController; 
@property (assign) char supportsAuthentication; 
@property (assign) char isNonSSPKeypressNotificationCapable; 
@property (retain) IOBluetoothL2CAPChannel * channel; 
@property (assign) char Q6BDAddrRange; 
@property (assign) char isWiiRemote; 
@property (assign) char isNeuroSwitch; 
@property (assign) char isWiiUProController;                                                 //@synthesize isWiiUProController=_isWiiUProController - In the implementation block
@property (retain) BluetoothHIDDeviceController * bluetoothHIDDeviceController; 
@property (assign) char isPolyVision; 
-(unsigned short)pageTimeout;
-(void)setPageTimeout:(unsigned short)arg1 ;
-(IOBluetoothHostController *)hostController;
-(void)setHostController:(IOBluetoothHostController *)arg1 ;
-(char)supportsAuthentication;
-(void)setSupportsAuthentication:(char)arg1 ;
-(char)isNonSSPKeypressNotificationCapable;
-(void)setIsNonSSPKeypressNotificationCapable:(char)arg1 ;
-(IOBluetoothL2CAPChannel *)channel;
-(void)setChannel:(IOBluetoothL2CAPChannel *)arg1 ;
-(char)Q6BDAddrRange;
-(void)setQ6BDAddrRange:(char)arg1 ;
-(char)isWiiRemote;
-(void)setIsWiiRemote:(char)arg1 ;
-(char)isNeuroSwitch;
-(void)setIsNeuroSwitch:(char)arg1 ;
-(BluetoothHIDDeviceController *)bluetoothHIDDeviceController;
-(void)setBluetoothHIDDeviceController:(BluetoothHIDDeviceController *)arg1 ;
-(char)isWiiUProController;
-(void)setIsWiiUProController:(char)arg1 ;
-(char)isPolyVision;
-(void)setIsPolyVision:(char)arg1 ;
@end

