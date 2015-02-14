/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IOBluetooth/IOBluetooth-Structs.h>
@class IOBluetoothDevice;

@interface IOBluetoothDevicePair : NSObject {

	id _delegate;
	IOBluetoothDevice* _device;
	char _busy;
	char _isHandlerSetup;
	char _triedSpecNULLPIN;
	char _SDPQueryComplete;
	int _connectionCompleteStatus;
	unsigned _totalAttempts;
	id _expansion;

}

@property (assign) id delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (retain) IOBluetoothDevice * device;                        //@synthesize device=_device - In the implementation block
@property (assign) unsigned short connectionPageTimeout; 
+(id)pairWithDevice:(id)arg1 ;
-(void)sdpQueryComplete:(id)arg1 status:(int)arg2 ;
-(void)connectionComplete:(id)arg1 status:(int)arg2 ;
-(void)BluetoothHCIAuthenticationComplete:(id)arg1 inStatus:(int)arg2 inAuthenticationResults:(BluetoothHCIEventAuthenticationCompleteResults*)arg3 ;
-(void)l2capChannelClosed:(id)arg1 ;
-(void)l2capChannelData:(id)arg1 data:(void*)arg2 length:(unsigned long long)arg3 ;
-(void)newBluetoothHIDDevice:(id)arg1 ;
-(void)replyPINCode:(unsigned long long)arg1 PINCode:(BluetoothPINCode*)arg2 ;
-(void)BluetoothHCIEventNotificationMessage:(id)arg1 inNotificationMessage:(const IOBluetoothHCIEventNotificationMessage*)arg2 ;
-(int)openPairingConnection;
-(void)connectionCompleteContinue:(id)arg1 status:(int)arg2 ;
-(void)connectionCompleteContinue:(id)arg1 ;
-(void)setAppleDeviceName:(id)arg1 ;
-(unsigned short)connectionPageTimeout;
-(void)setConnectionPageTimeout:(unsigned short)arg1 ;
-(void)replyUserConfirmation:(char)arg1 ;
-(void)linkKeyRequest:(char)arg1 ;
-(void)pinCodeRequest:(BluetoothDeviceAddress*)arg1 ;
-(void)userConfirmationRequest:(BluetoothDeviceAddress*)arg1 numericValue:(unsigned)arg2 ;
-(void)userPasskeyNotification:(BluetoothDeviceAddress*)arg1 passkey:(unsigned)arg2 ;
-(void)simplePairingComplete:(BluetoothDeviceAddress*)arg1 status:(unsigned char)arg2 ;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)stop;
-(int)start;
-(id)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(IOBluetoothDevice *)device;
-(void)setDevice:(IOBluetoothDevice *)arg1 ;
@end

