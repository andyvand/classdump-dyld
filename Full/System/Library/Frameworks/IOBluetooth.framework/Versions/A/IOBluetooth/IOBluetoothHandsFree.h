/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IOBluetooth/IOBluetooth-Structs.h>
@class IOBluetoothRFCOMMChannel, IOBluetoothUserNotification, IOBluetoothDevice, NSMutableArray, IOBluetoothHandsFreeExpansion, NSDate, IOBluetoothHostController;

@interface IOBluetoothHandsFree : NSObject {

	IOBluetoothRFCOMMChannel* _rfcommChannel;
	IOBluetoothUserNotification* _rfcommChannelNotification;
	unsigned _supportedFeatures;
	void* _reserved1;
	float _previousInputVolume;
	float _previousOutputVolume;
	char _previousOutputMuted;
	IOBluetoothDevice* _device;
	unsigned char _deviceRFCOMMChannelID;
	unsigned _deviceSupportedFeatures;
	unsigned _deviceCallHoldModes;
	unsigned _deviceSupportedSMSServices;
	NSMutableArray* _statusIndicators;
	int _handsFreeState;
	unsigned long long _SMSMode;
	char _SMSEnabled;
	char _connectSCOAfterSLCConnected;
	IOBluetoothHandsFreeExpansion* _reserved;

}

@property (assign) unsigned supportedFeatures;                                           //@synthesize supportedFeatures=_supportedFeatures - In the implementation block
@property (assign) float inputVolume; 
@property (getter=isInputMuted) char inputMuted; 
@property (assign) float outputVolume; 
@property (getter=isOutputMuted) char outputMuted; 
@property (retain) IOBluetoothDevice * device;                                           //@synthesize device=_device - In the implementation block
@property (assign) unsigned deviceSupportedFeatures;                                     //@synthesize deviceSupportedFeatures=_deviceSupportedFeatures - In the implementation block
@property (assign) unsigned deviceSupportedSMSServices;                                  //@synthesize deviceSupportedSMSServices=_deviceSupportedSMSServices - In the implementation block
@property (assign) unsigned deviceCallHoldModes;                                         //@synthesize deviceCallHoldModes=_deviceCallHoldModes - In the implementation block
@property (setter=MSMode) unsigned long long SMSMode;                                    //@synthesize SMSMode=_SMSMode - In the implementation block
@property (setter=MSEnabled,getter=isSMSEnabled) char SMSEnabled;                        //@synthesize SMSEnabled=_SMSEnabled - In the implementation block
@property (assign) id<IOBluetoothHandsFreeDelegate> delegate; 
@property (retain) IOBluetoothRFCOMMChannel * rfcommChannel;                             //@synthesize rfcommChannel=_rfcommChannel - In the implementation block
@property (retain) IOBluetoothUserNotification * rfcommChannelNotification;              //@synthesize rfcommChannelNotification=_rfcommChannelNotification - In the implementation block
@property (assign) float previousInputVolume;                                            //@synthesize previousInputVolume=_previousInputVolume - In the implementation block
@property (assign) float previousOutputVolume;                                           //@synthesize previousOutputVolume=_previousOutputVolume - In the implementation block
@property (assign) char previousOutputMuted;                                             //@synthesize previousOutputMuted=_previousOutputMuted - In the implementation block
@property (retain) NSDate * lastUpdatedInputVolume; 
@property (retain) NSDate * lastUpdatedOutputVolume; 
@property (assign) unsigned char deviceRFCOMMChannelID;                                  //@synthesize deviceRFCOMMChannelID=_deviceRFCOMMChannelID - In the implementation block
@property (assign) unsigned short SCOConnectionHandle; 
@property (retain) NSMutableArray * statusIndicators;                                    //@synthesize statusIndicators=_statusIndicators - In the implementation block
@property (assign) int handsFreeState;                                                   //@synthesize handsFreeState=_handsFreeState - In the implementation block
@property (assign) char connectSCOAfterSLCConnected;                                     //@synthesize connectSCOAfterSLCConnected=_connectSCOAfterSLCConnected - In the implementation block
@property (assign) char disconnectAfterDisconnectingSCO; 
@property (retain) IOBluetoothHostController * hostController; 
+(id)localUUID;
+(id)localServiceRecord;
+(unsigned char)rfcommChannelID;
+(id)deviceUUID;
-(void)sdpQueryComplete:(id)arg1 status:(int)arg2 ;
-(unsigned short)SCOConnectionHandle;
-(void)rfcommChannelClosed:(id)arg1 ;
-(void)rfcommChannelOpenComplete:(id)arg1 status:(int)arg2 ;
-(void)rfcommChannelData:(id)arg1 data:(void*)arg2 length:(unsigned long long)arg3 ;
-(IOBluetoothRFCOMMChannel *)rfcommChannel;
-(void)setRfcommChannel:(IOBluetoothRFCOMMChannel *)arg1 ;
-(unsigned)inputDeviceID;
-(unsigned)outputDeviceID;
-(void)addAudioListeners;
-(void)removeAudioListeners;
-(id)indicatorDictionary:(id)arg1 ;
-(void)setIndicator:(id)arg1 value:(int)arg2 ;
-(id)initWithDevice:(id)arg1 delegate:(id)arg2 ;
-(void)createIndicator:(id)arg1 min:(int)arg2 max:(int)arg3 currentValue:(int)arg4 ;
-(void)setSupportedFeatures:(unsigned)arg1 ;
-(int)handsFreeState;
-(void)processIncomingData:(char*)arg1 length:(unsigned long long)arg2 ;
-(NSDate *)lastUpdatedInputVolume;
-(void)sendInputVolume;
-(void)setLastUpdatedInputVolume:(NSDate *)arg1 ;
-(float)inputVolume;
-(NSDate *)lastUpdatedOutputVolume;
-(void)sendOutputVolume;
-(void)setLastUpdatedOutputVolume:(NSDate *)arg1 ;
-(float)outputVolume;
-(void)setDeviceSupportedFeatures:(unsigned)arg1 ;
-(unsigned)supportedFeatures;
-(NSMutableArray *)statusIndicators;
-(void)setHandsFreeState:(int)arg1 ;
-(void)setPreviousInputVolume:(float)arg1 ;
-(float)previousInputVolume;
-(void)setInputVolume:(float)arg1 ;
-(void)setPreviousOutputVolume:(float)arg1 ;
-(float)previousOutputVolume;
-(void)setOutputVolume:(float)arg1 ;
-(id)driverID;
-(void)BluetoothHCIEventNotificationMessage:(id)arg1 inNotificationMessage:(const IOBluetoothHCIEventNotificationMessage*)arg2 ;
-(IOBluetoothHostController *)hostController;
-(void)setHostController:(IOBluetoothHostController *)arg1 ;
-(void)disconnectSCO;
-(int)indicator:(id)arg1 ;
-(unsigned)deviceSupportedFeatures;
-(unsigned)deviceCallHoldModes;
-(void)connectSCO;
-(char)isSMSEnabled;
-(unsigned long long)SMSMode;
-(id)encodePDU:(id)arg1 message:(id)arg2 ;
-(void)setSMSEnabled:(char)arg1 ;
-(char)hasData:(id)arg1 ;
-(id)parseList:(id)arg1 ;
-(id)stripParenthesis:(id)arg1 ;
-(void)setDeviceCallHoldModes:(unsigned)arg1 ;
-(void)setDeviceSupportedSMSServices:(unsigned)arg1 ;
-(unsigned)deviceSupportedSMSServices;
-(void)setSMSMode:(unsigned long long)arg1 ;
-(id)decodePDU:(id)arg1 ;
-(void)handleDeviceDisconnectedNotification:(id)arg1 ;
-(char)disconnectAfterDisconnectingSCO;
-(void)setDisconnectAfterDisconnectingSCO:(char)arg1 ;
-(void)setSCOConnectionHandle:(unsigned short)arg1 ;
-(id)deviceServiceRecord;
-(void)setConnectSCOAfterSLCConnected:(char)arg1 ;
-(char)connectSCOAfterSLCConnected;
-(void)handleIncomingRFCOMMChannelOpened:(id)arg1 channel:(id)arg2 ;
-(void)setRfcommChannelNotification:(IOBluetoothUserNotification *)arg1 ;
-(IOBluetoothUserNotification *)rfcommChannelNotification;
-(void)setDeviceRFCOMMChannelID:(unsigned char)arg1 ;
-(void)openRFCOMMChannel;
-(char)isSCOConnected;
-(unsigned char)deviceRFCOMMChannelID;
-(unsigned)readOctet:(id)arg1 ;
-(id)decodeNumber:(id)arg1 isSCA:(char)arg2 type:(unsigned*)arg3 ;
-(id)decodeUserData:(long long)arg1 userData:(id)arg2 length:(unsigned)arg3 ;
-(id)encodeUserData:(id)arg1 ;
-(char)isInputMuted;
-(void)setInputMuted:(char)arg1 ;
-(void)setOutputMuted:(char)arg1 ;
-(char)previousOutputMuted;
-(void)setPreviousOutputMuted:(char)arg1 ;
-(void)setStatusIndicators:(NSMutableArray *)arg1 ;
-(void)disconnect;
-(void)connect;
-(char)isOutputMuted;
-(void)setDelegate:(id<IOBluetoothHandsFreeDelegate>)arg1 ;
-(void)finalize;
-(void)dealloc;
-(char)isConnected;
-(id<IOBluetoothHandsFreeDelegate>)delegate;
-(IOBluetoothDevice *)device;
-(void)setDevice:(IOBluetoothDevice *)arg1 ;
-(id)encodeNumber:(id)arg1 ;
@end

