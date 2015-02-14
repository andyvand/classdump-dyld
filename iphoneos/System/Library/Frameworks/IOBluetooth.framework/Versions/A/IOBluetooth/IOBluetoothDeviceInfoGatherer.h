/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IOBluetoothDevice, IOBluetoothRFCOMMChannel, NSMutableData, NSTimer;

@interface IOBluetoothDeviceInfoGatherer : NSObject {

	char mInfoGathered;
	IOBluetoothDevice* mDevice;
	IOBluetoothRFCOMMChannel* mRFCOMMChannel;
	unsigned mATCommandState;
	unsigned char mChannelID;
	NSMutableData* mPhoneGMI;
	NSMutableData* mPhoneGMM;
	NSMutableData* mPhoneManufacturer;
	NSMutableData* mPhoneModelNumber;
	NSMutableData* mPhoneRevisionID;
	NSMutableData* mPhoneIMSI;
	NSTimer* mATCommandTimer;
	char* mLastCommandPtr;
	SEL mProgressSelector;
	id mProgressSelectorTarget;
	char mGetATCommandInfo;
	char mGetSDPInfo;
	void** expansionData[4];

}
-(void)clearAllData;
-(void)sdpQueryComplete:(id)arg1 status:(int)arg2 ;
-(void)connectionComplete:(id)arg1 status:(int)arg2 ;
-(void)rfcommChannelClosed:(id)arg1 ;
-(void)rfcommChannelOpenComplete:(id)arg1 status:(int)arg2 ;
-(void)rfcommChannelData:(id)arg1 data:(void*)arg2 length:(unsigned long long)arg3 ;
-(void)postProgressToTarget:(int)arg1 ;
-(void)startSDPQuery;
-(void)startDeviceInfoGatheringDelayed:(id)arg1 ;
-(void)deviceInfoGatheringComplete;
-(void)startATCommandTimeout;
-(void)stopATCommandTimeout;
-(id)getManufacturer;
-(id)getModelNumber;
-(id)getRevision;
-(id)getIMSI;
-(id)getPhoneGMM;
-(id)getPhoneGMI;
-(void)ATCommandTimerFired;
-(void)processNextPhoneQuery;
-(id)initWithDevice:(id)arg1 progressSelector:(SEL)arg2 andTarget:(id)arg3 ;
-(void)setProgressSelector:(SEL)arg1 andTarget:(id)arg2 ;
-(void)startDeviceInfoGathering;
-(void)setGetSDPInfo:(char)arg1 ;
-(void)setGetATCommandInfo:(char)arg1 ;
-(void)setOnlyGetSDPInfo:(char)arg1 ;
-(void)finalize;
-(void)dealloc;
@end

