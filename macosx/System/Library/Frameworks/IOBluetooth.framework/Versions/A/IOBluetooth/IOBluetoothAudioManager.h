/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IOBluetooth/IOBluetooth-Structs.h>
@class IOBluetoothDevice, NSMutableArray, CWWiFiClient;

@interface IOBluetoothAudioManager : NSObject {

	IOBluetoothDevice* _audioDeviceConnecting;
	NSMutableArray* _audioDevicesToConnect;
	int _audioConnectAttempt;
	CWWiFiClient* _WiFiClient;

}

@property (retain) CWWiFiClient * WiFiClient;                              //@synthesize WiFiClient=_WiFiClient - In the implementation block
@property (retain) IOBluetoothDevice * audioDeviceConnecting;              //@synthesize audioDeviceConnecting=_audioDeviceConnecting - In the implementation block
@property (retain) NSMutableArray * audioDevicesToConnect;                 //@synthesize audioDevicesToConnect=_audioDevicesToConnect - In the implementation block
+(void)configureAndSwitchAudioDevice:(id)arg1 ;
+(unsigned)defaultDeviceIDForOutput:(char)arg1 ;
+(unsigned)serviceForAddressString:(id)arg1 ;
+(char)isBluetoothDevice:(unsigned)arg1 ;
+(unsigned)currentSystemOutput;
+(unsigned)currentSystemInput;
+(void)audioState:(dispatch_queue_sRef)arg1 callback:(/*^block*/id)arg2 ;
+(void)configureAudioDevice:(id)arg1 ;
+(id)sharedAudioManager;
+(id)bluetoothDevice:(unsigned)arg1 ;
+(char)setAudioDevice:(unsigned)arg1 isOutput:(char)arg2 ;
+(void)disconnectAudioDevice:(id)arg1 ;
+(void)audioState:(/*^block*/id)arg1 ;
+(void)getDefaults:(/*^block*/id)arg1 ;
+(void)setDefaultInteger:(long long)arg1 forKey:(id)arg2 ;
+(void)setDefaultDouble:(double)arg1 forKey:(id)arg2 ;
+(void)resetDefaults;
-(void)connectionComplete:(id)arg1 status:(int)arg2 ;
-(void)setWiFiClient:(CWWiFiClient *)arg1 ;
-(CWWiFiClient *)WiFiClient;
-(void)setAudioDevicesToConnect:(NSMutableArray *)arg1 ;
-(NSMutableArray *)audioDevicesToConnect;
-(void)setAudioDeviceConnecting:(IOBluetoothDevice *)arg1 ;
-(IOBluetoothDevice *)audioDeviceConnecting;
-(void)connectToAudioDevice;
-(void)connectToAudioDevice:(id)arg1 ;
-(void)cancelConnectToAudioDevice;
@end
