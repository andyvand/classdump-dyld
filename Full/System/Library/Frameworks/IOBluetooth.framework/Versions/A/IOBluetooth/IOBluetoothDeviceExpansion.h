/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IOBluetoothL2CAPChannel;

@interface IOBluetoothDeviceExpansion : NSObject {

	IOBluetoothL2CAPChannel* channelBeingOpened;
	id openConnectionTarget;
	id remoteNameRequestTarget;
	unsigned short manufacturerName;
	unsigned char lmpVersion;
	unsigned short lmpSubversion;
	unsigned short psm;
	char inquiryRSSI;
	unsigned char addressType;
	char authenticationRequired;
	char findExisting;
	char authenticationRetried;
	char lowEnergyDevice;
	char connecting;
	char nameComplete;
	char connectionRetried;
	long long headsetBatteryPercent;

}

@property (retain) IOBluetoothL2CAPChannel * channelBeingOpened; 
@property (retain) id openConnectionTarget; 
@property (retain) id remoteNameRequestTarget; 
@property (assign) unsigned short manufacturerName; 
@property (assign) unsigned char lmpVersion; 
@property (assign) unsigned short lmpSubversion; 
@property (assign) unsigned short psm; 
@property (assign) char inquiryRSSI; 
@property (assign) unsigned char addressType; 
@property (assign) char authenticationRequired; 
@property (assign) char findExisting; 
@property (assign) char authenticationRetried; 
@property (assign) char lowEnergyDevice; 
@property (assign) char connecting; 
@property (assign) char nameComplete; 
@property (assign) char connectionRetried; 
@property (assign) long long headsetBatteryPercent; 
-(unsigned short)manufacturerName;
-(void)setManufacturerName:(unsigned short)arg1 ;
-(unsigned char)lmpVersion;
-(void)setLmpVersion:(unsigned char)arg1 ;
-(unsigned short)lmpSubversion;
-(void)setLmpSubversion:(unsigned short)arg1 ;
-(id)openConnectionTarget;
-(void)setOpenConnectionTarget:(id)arg1 ;
-(id)remoteNameRequestTarget;
-(void)setRemoteNameRequestTarget:(id)arg1 ;
-(char)authenticationRequired;
-(void)setAuthenticationRequired:(char)arg1 ;
-(unsigned short)psm;
-(void)setPsm:(unsigned short)arg1 ;
-(char)findExisting;
-(void)setFindExisting:(char)arg1 ;
-(IOBluetoothL2CAPChannel *)channelBeingOpened;
-(void)setChannelBeingOpened:(IOBluetoothL2CAPChannel *)arg1 ;
-(char)authenticationRetried;
-(void)setAuthenticationRetried:(char)arg1 ;
-(char)lowEnergyDevice;
-(void)setLowEnergyDevice:(char)arg1 ;
-(char)nameComplete;
-(void)setNameComplete:(char)arg1 ;
-(char)inquiryRSSI;
-(void)setInquiryRSSI:(char)arg1 ;
-(char)connectionRetried;
-(void)setConnectionRetried:(char)arg1 ;
-(char)connecting;
-(void)setConnecting:(char)arg1 ;
-(long long)headsetBatteryPercent;
-(void)setHeadsetBatteryPercent:(long long)arg1 ;
-(unsigned char)addressType;
-(void)setAddressType:(unsigned char)arg1 ;
@end

