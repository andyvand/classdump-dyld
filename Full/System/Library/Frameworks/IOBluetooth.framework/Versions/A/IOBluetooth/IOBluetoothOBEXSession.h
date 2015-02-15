/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IOBluetooth/OBEXSession.h>
#import <IOBluetooth/IOBluetoothRFCOMMChannelDelegate.h>

@class IOBluetoothDevice, IOBluetoothRFCOMMChannel;

@interface IOBluetoothOBEXSession : OBEXSession <IOBluetoothRFCOMMChannelDelegate> {

	IOBluetoothDevice* mDevice;
	unsigned char mRFCOMMChannelID;
	IOBluetoothRFCOMMChannel* mRFCOMMChannel;
	char* outBuffer;
	unsigned long long bufferSize;
	unsigned long long currentOffsetInBuffer;
	char waitingForRfcommSpace;
	unsigned mOpenConnectionTimeout;
	SEL mOpenConnectionSelector;
	id mOpenConnectionSelectorTarget;
	void* mOpenConnectionRefCon;
	/*function pointer*/void* mOpenConnectionCallback;
	void* mOpenConnectionCallbackRefCon;

}

@property (retain) IOBluetoothDevice * device; 
@property (retain) IOBluetoothRFCOMMChannel * rfcommChannel; 
@property (assign) unsigned char channelID; 
+(id)withSDPServiceRecord:(id)arg1 ;
+(id)withDevice:(id)arg1 channelID:(unsigned char)arg2 ;
+(id)withIncomingRFCOMMChannel:(id)arg1 eventSelector:(SEL)arg2 selectorTarget:(id)arg3 refCon:(void*)arg4 ;
-(id)getDevice;
-(void)setChannelID:(unsigned char)arg1 ;
-(void)connectionComplete:(id)arg1 status:(int)arg2 ;
-(void)rfcommChannelClosed:(id)arg1 ;
-(void)rfcommChannelOpenComplete:(id)arg1 status:(int)arg2 ;
-(void)rfcommChannelData:(id)arg1 data:(void*)arg2 length:(unsigned long long)arg3 ;
-(void)rfcommChannelQueueSpaceAvailable:(id)arg1 ;
-(void)rfcommChannelWriteComplete:(id)arg1 refcon:(void*)arg2 status:(int)arg3 ;
-(unsigned char)channelID;
-(IOBluetoothRFCOMMChannel *)rfcommChannel;
-(id)initWithSDPServiceRecord:(id)arg1 ;
-(id)initWithDevice:(id)arg1 channelID:(unsigned char)arg2 ;
-(id)initWithIncomingRFCOMMChannel:(id)arg1 eventSelector:(SEL)arg2 selectorTarget:(id)arg3 refCon:(void*)arg4 ;
-(int)openTransportConnection:(SEL)arg1 selectorTarget:(id)arg2 refCon:(void*)arg3 ;
-(void)setRfcommChannel:(IOBluetoothRFCOMMChannel *)arg1 ;
-(int)closeTransportConnection;
-(void)setOpenTransportConnectionAsyncSelector:(SEL)arg1 target:(id)arg2 refCon:(id)arg3 ;
-(int)sendBufferTroughChannel;
-(void)restartTransmission;
-(unsigned char)getRFCOMMChannelID;
-(id)getRFCOMMChannel;
-(char)isSessionTargetAMac;
-(void)setOBEXSessionOpenConnectionCallback:(/*function pointer*/void*)arg1 refCon:(void*)arg2 ;
-(char)hasOpenTransportConnection;
-(int)sendDataToTransport:(void*)arg1 dataLength:(unsigned long long)arg2 ;
-(void)finalize;
-(void)dealloc;
-(IOBluetoothDevice *)device;
-(void)setDevice:(IOBluetoothDevice *)arg1 ;
@end

