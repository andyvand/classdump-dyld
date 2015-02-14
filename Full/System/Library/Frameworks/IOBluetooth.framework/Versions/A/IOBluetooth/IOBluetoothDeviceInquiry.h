/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IOBluetooth/IOBluetooth-Structs.h>
@class NSMutableArray, NSArray;

@interface IOBluetoothDeviceInquiry : NSObject {

	void* _nameRequestHintType;
	IOBluetoothDeviceSearchAttributes* _searchAttributes;
	void* _deviceAttributes;
	id _mReserved;
	id _mUnused000;
	id _mUnused001;
	id _mUnused002;
	id _delegate;
	unsigned _serviceClassMajor;
	unsigned _deviceClassMajor;
	unsigned _deviceClassMinor;
	unsigned char _inquiryLength;
	unsigned char _inquiryMaxItems;
	NSMutableArray* _deviceResults;
	NSMutableArray* _devicesPendingNames;
	unsigned char _currentActivity;
	char _remoteNameRequestInProgress;
	char _infSearch;
	char _sendDuplicates;
	char _aborted;
	char _updateNewDeviceNames;

}

@property (assign) id delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign) unsigned char inquiryLength;                  //@synthesize inquiryLength=_inquiryLength - In the implementation block
@property (assign) unsigned searchType; 
@property (assign) char updateNewDeviceNames;                    //@synthesize updateNewDeviceNames=_updateNewDeviceNames - In the implementation block
@property (assign) char searchesUntilCancelled;                  //@synthesize infSearch=_infSearch - In the implementation block
@property (assign) char returnDuplicates;                        //@synthesize sendDuplicates=_sendDuplicates - In the implementation block
@property (assign) unsigned char inquiryMaxResults;              //@synthesize inquiryMaxItems=_inquiryMaxItems - In the implementation block
@property (assign) char rssiThreshold; 
@property (copy) NSArray * searchUUIDs; 
+(id)inquiryWithDelegate:(id)arg1 ;
-(void)setSearchCriteria:(unsigned)arg1 majorDeviceClass:(unsigned)arg2 minorDeviceClass:(unsigned)arg3 ;
-(void)setSearchesUntilCancelled:(char)arg1 ;
-(void)setUpdateNewDeviceNames:(char)arg1 ;
-(void)setInquiryLength:(unsigned char)arg1 ;
-(void)setSearchUUIDs:(NSArray *)arg1 ;
-(NSArray *)searchUUIDs;
-(unsigned)searchType;
-(void)setSearchType:(unsigned)arg1 ;
-(char)rssiThreshold;
-(void)setRssiThreshold:(char)arg1 ;
-(int)removeInquiryFromDaemon;
-(int)startInquiryInDaemon;
-(void)stopInquiryInDaemon;
-(void)updateDaemonInquiryAttributes;
-(void)setSearchAttributes:(const IOBluetoothDeviceSearchAttributes*)arg1 ;
-(int)addInquiryToDaemon;
-(void)addInquiryResult:(id)arg1 ;
-(void)clearFoundDevices;
-(id)foundDevices;
-(void)setReturnDuplicates:(char)arg1 ;
-(IOBluetoothDeviceSearchAttributes*)searchAttributes;
-(void)setNameRequestPriorityHintType:(unsigned)arg1 ;
-(oneway void)deviceInquiryStarted;
-(oneway void)deviceFound:(n@)arg1 classOfDevice:(unsigned)arg2 rssi:(char)arg3 eirDictionary:(id)arg4 ;
-(oneway void)deviceInquiryUpdatingDeviceNamesStarted:(int)arg1 ;
-(oneway void)deviceInquiryNameRequestUpdateStarted:(n@)arg1 devicesRemaining:(int)arg2 ;
-(oneway void)deviceNameUpdated:(n@)arg1 devicesRemaining:(int)arg2 ;
-(oneway void)inquiryComplete:(unsigned char)arg1 ;
-(unsigned char)inquiryLength;
-(char)updateNewDeviceNames;
-(char)returnDuplicates;
-(char)searchesUntilCancelled;
-(unsigned char)inquiryMaxResults;
-(void)setInquiryMaxResults:(unsigned char)arg1 ;
-(int)abort;
-(void)setCurrentActivity:(unsigned char)arg1 ;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(int)stop;
-(int)start;
-(id)delegate;
-(id)initWithDelegate:(id)arg1 ;
@end

