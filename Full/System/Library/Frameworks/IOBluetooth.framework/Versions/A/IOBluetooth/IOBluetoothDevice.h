/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IOBluetooth/IOBluetooth-Structs.h>
#import <IOBluetooth/IOBluetoothObject.h>
#import <IOBluetooth/CBCentralManagerDelegate.h>
#import <IOBluetooth/NSCoding.h>
#import <IOBluetooth/NSSecureCoding.h>

@class NSString, NSDate, NSArray, IOBluetoothRFCOMMConnection, IOBluetoothSDPServiceRecord, NSURL, NSDictionary;

@interface IOBluetoothDevice : IOBluetoothObject <CBCentralManagerDelegate, NSCoding, NSSecureCoding> {

	id mServerDevice;
	unsigned mDeviceConnectNotification;
	BluetoothDeviceAddress mAddress;
	NSString* mName;
	NSDate* mLastNameUpdate;
	unsigned mClassOfDevice;
	unsigned char mPageScanRepetitionMode;
	unsigned char mPageScanPeriodMode;
	unsigned char mPageScanMode;
	unsigned short mClockOffset;
	NSDate* mLastInquiryUpdate;
	unsigned short mConnectionHandle;
	unsigned char mLinkType;
	unsigned char mEncryptionMode;
	NSArray* mServiceArray;
	NSDate* mLastServicesUpdate;
	IOBluetoothRFCOMMConnection* mRFCOMMConnection;
	id _mReserved;

}

@property (readonly) IOBluetoothSDPServiceRecord * PnPSDPRecord; 
@property (readonly) char PnPSupported; 
@property (readonly) unsigned short PnPSpecificationID; 
@property (readonly) unsigned short PnPVendorID; 
@property (readonly) unsigned short PnPProductID; 
@property (readonly) unsigned short PnPVersion; 
@property (readonly) unsigned short PnPVendorIDSource; 
@property (readonly) NSURL * PnPClientExecutableURL; 
@property (readonly) NSString * PnPServiceDescription; 
@property (readonly) NSURL * PnPDocumentationURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) IOBluetoothSDPServiceRecord * HIDServiceRecord; 
@property (readonly) NSDictionary * HIDDeviceDictionary; 
@property (readonly) char HIDProfileSupported; 
@property (readonly) char HIDNormallyConnectable; 
@property (readonly) char HIDSupportsVirtualCable; 
@property (readonly) char HIDSupportsRemoteWake; 
@property (readonly) char HIDBootDevice; 
@property (readonly) char HIDReconnectInitiate; 
@property (readonly) unsigned char HIDCountryCode; 
@property (readonly) unsigned char HIDDeviceSubclass; 
@property (readonly) unsigned short HIDSupervisionTimeout; 
@property (readonly) unsigned short HIDSSRHostMaxLatency; 
@property (readonly) unsigned short HIDSSRHostMinTimeout; 
@property (readonly) unsigned HIDQoSLatency; 
@property (assign) unsigned classOfDevice; 
@property (readonly) unsigned serviceClassMajor; 
@property (readonly) unsigned deviceClassMajor; 
@property (readonly) unsigned deviceClassMinor; 
@property (copy) NSString * name; 
@property (readonly) NSString * nameOrAddress; 
@property (retain) NSDate * lastNameUpdate; 
@property (readonly) NSString * addressString; 
@property (readonly) unsigned short connectionHandle; 
@property (retain) NSArray * services; 
@property (readonly) unsigned long long deviceID; 
@property (readonly) unsigned char connectionMode; 
@property (readonly) unsigned short connectionModeInterval; 
@property (readonly) unsigned short SCOConnectionHandle; 
@property (assign,getter=isLowEnergyDevice,nonatomic) char lowEnergyDevice; 
@property (nonatomic,readonly) char isLowEnergyConnection; 
@property (assign,nonatomic) unsigned char addressType; 
@property (assign,getter=isConnecting,nonatomic) char connecting; 
@property (assign,getter=headsetBattery,nonatomic) long long headsetBatteryPercent; 
@property (nonatomic,readonly) unsigned char linkLevelEncryption; 
@property (assign,nonatomic) char highPriority; 
@property (readonly) char isTBFCSuspended; 
@property (readonly) char isConnnectionLLREnabled; 
@property (readonly) char isTBFCCapable; 
@property (readonly) char isTBFCPageCapable; 
+(id)pairedDevices;
+(id)withAddressString:(id)arg1 ;
+(id)favoriteDevices;
+(id)configuredDevices;
+(id)deviceWithAddress:(const BluetoothDeviceAddress*)arg1 ;
+(id)connectedDevices;
+(id)getUniqueDeviceWithAddress:(const BluetoothDeviceAddress*)arg1 ;
+(id)deviceWithAddressString:(id)arg1 ;
+(id)recentDevices:(unsigned long long)arg1 ;
+(char)isAnyPairedDevicesSupportTBFCPage;
+(void)tbfcResumeConnectedDevices;
+(id)registerForConnectNotifications:(id)arg1 selector:(SEL)arg2 ;
+(id)withAddress:(const BluetoothDeviceAddress*)arg1 ;
+(id)withDeviceRef:(OpaqueIOBluetoothObjectRefRef)arg1 ;
+(id)deviceWithID:(unsigned long long)arg1 ;
+(id)keyPathsForValuesAffectingNameOrAddress;
+(id)getUniqueObjectDictionary:(char)arg1 ;
+(id)getKeyForIOService:(unsigned)arg1 ;
+(id)deviceWithConnectionHandle:(unsigned short)arg1 ;
+(char)isL2CAPPSMInUse:(unsigned short)arg1 isIncoming:(char)arg2 ;
+(char)isRFCOMMChannelInUse:(unsigned char)arg1 isIncoming:(char)arg2 ;
+(id)keyPathsForValuesAffectingIsConnected;
+(char)supportsSecureCoding;
-(NSArray *)services;
-(void)setLowEnergyDevice:(char)arg1 ;
-(char)inquiryRSSI;
-(void)setInquiryRSSI:(char)arg1 ;
-(void)setConnecting:(char)arg1 ;
-(void)setHeadsetBatteryPercent:(long long)arg1 ;
-(void)sdpQueryComplete:(id)arg1 status:(int)arg2 ;
-(unsigned)classOfDevice;
-(unsigned)serviceClassMajor;
-(unsigned)deviceClassMajor;
-(unsigned)deviceClassMinor;
-(unsigned short)connectionHandle;
-(NSDate *)lastNameUpdate;
-(char)isiCloudPaired;
-(char)isBRPaired;
-(char)isPaired;
-(char)isHeadsetDevice;
-(char)isHandsFreeDevice;
-(char)isMac;
-(char)isA2DPSink;
-(void)autoconfigureServices;
-(int)performSDPQuery:(id)arg1 ;
-(char)isAudioSink;
-(id)getServiceRecordForUUID:(id)arg1 ;
-(int)addToFavorites;
-(void)addBluetoothDUNPort:(id)arg1 ;
-(void)addBluetoothSerialPort:(id)arg1 ;
-(const BluetoothDeviceAddress*)getAddress;
-(int)removeFromFavorites;
-(int)setAttributeObject:(id)arg1 forKey:(id)arg2 ;
-(char)isLowEnergyDevice;
-(char)isLowEnergyConnection;
-(id)attributeObjectForKey:(id)arg1 ;
-(char)isTBFCPageCapable;
-(char)isTBFCSuspended;
-(char)isFavorite;
-(char)isRecent;
-(int)openConnection:(id)arg1 ;
-(int)openConnection:(id)arg1 withPageTimeout:(unsigned short)arg2 authenticationRequired:(char)arg3 ;
-(int)openConnection:(id)arg1 withPageTimeout:(unsigned short)arg2 authenticationRequired:(char)arg3 allowRoleSwitch:(char)arg4 ;
-(int)remoteNameRequest:(id)arg1 withPageTimeout:(unsigned short)arg2 ;
-(unsigned char)getPageScanRepetitionMode;
-(unsigned short)getClockOffset;
-(id)initWithIOService:(unsigned)arg1 ;
-(int)openL2CAPChannelSync:(id*)arg1 withPSM:(unsigned short)arg2 withConfiguration:(id)arg3 delegate:(id)arg4 ;
-(int)openL2CAPChannelAsync:(id*)arg1 withPSM:(unsigned short)arg2 withConfiguration:(id)arg3 delegate:(id)arg4 ;
-(int)instantiateChannel:(unsigned short)arg1 findExisting:(char)arg2 newChannel:(id)arg3 ;
-(int)openRFCOMMChannelAsync:(id*)arg1 withChannelID:(unsigned char)arg2 delegate:(id)arg3 ;
-(int)openRFCOMMChannelSync:(id*)arg1 withChannelID:(unsigned char)arg2 delegate:(id)arg3 ;
-(int)sendL2CAPEchoRequest:(void*)arg1 length:(unsigned short)arg2 withFlags:(unsigned)arg3 ;
-(id)getDisplayName;
-(NSString *)nameOrAddress;
-(int)removeAttributeObjectForKey:(id)arg1 ;
-(int)performSDPQuery:(id)arg1 uuids:(id)arg2 ;
-(int)_performSDPQuery:(id)arg1 uuids:(id)arg2 ;
-(id)getAddressNSData;
-(id)getKey;
-(void)updateFromServer;
-(void)updateFromAttributeDict:(id)arg1 ;
-(id)initWithIOService:(unsigned)arg1 address:(const BluetoothDeviceAddress*)arg2 ;
-(char)isAppleDevice;
-(unsigned short)productID;
-(char)connectionComplete;
-(void)callConnectionCompleteCallback:(id)arg1 ;
-(void)callConnectionCompleteCallback:(id)arg1 status:(int)arg2 ;
-(void)destroyServerConnection;
-(oneway void)updateName:(nO@)arg1 lastUpdate:(nO@)arg2 ;
-(void)setPageScanRepetitionMode:(unsigned char)arg1 ;
-(void)setPageScanPeriodMode:(unsigned char)arg1 ;
-(void)setPageScanMode:(unsigned char)arg1 ;
-(void)setClassOfDevice:(unsigned)arg1 ;
-(void)setClockOffset:(unsigned short)arg1 ;
-(void)setRemoteVersionInfo:(unsigned short)arg1 lmpVersion:(unsigned char)arg2 lmpSubversion:(unsigned short)arg3 ;
-(void)setConnectionHandle:(unsigned short)arg1 ;
-(void)setLastNameUpdate:(NSDate *)arg1 ;
-(id)newMatchingDictionary;
-(void)updateName:(id)arg1 lastUpdate:(id)arg2 postNotification:(char)arg3 ;
-(oneway void)updateServices:(nO@)arg1 lastUpdate:(nO@)arg2 ;
-(char)isPointingDevice;
-(void)checkRetainCount;
-(char)isKeyboardDevice;
-(char)requiresAuthenticationEncryption:(unsigned short)arg1 ;
-(int)instantiateChannelContinue:(unsigned short)arg1 findExisting:(char)arg2 newChannel:(id)arg3 ;
-(void)removeLinkKey;
-(unsigned short)PnPVendorIDSource;
-(unsigned short)PnPVendorID;
-(unsigned short)PnPProductID;
-(id)getMacAttributesDictionary;
-(char)isL2CAPPSMInUse:(unsigned short)arg1 isIncoming:(char)arg2 ;
-(char)isRFCOMMChannelInUse:(unsigned char)arg1 isIncoming:(char)arg2 ;
-(unsigned)getClassOfDevice;
-(id)getServices;
-(unsigned)getServiceClassMajor;
-(unsigned)getDeviceClassMajor;
-(unsigned)getDeviceClassMinor;
-(unsigned short)getConnectionHandle;
-(id)getLastNameUpdate;
-(char)isConfigured;
-(char)isConfiguredHIDDevice;
-(unsigned)configuredServices;
-(void)addSerialPortForDevice:(id)arg1 ;
-(void)forceRemove;
-(id)recentAccessDate;
-(char)isLEPaired;
-(char)shouldHideDevice;
-(long long)headsetBattery;
-(char)isConnnectionLLREnabled;
-(char)isTBFCCapable;
-(char)highPriority;
-(void)setHighPriority:(char)arg1 ;
-(unsigned char)linkLevelEncryption;
-(char)isInitiator;
-(char)isAddressRandomResolvable;
-(OpaqueIOBluetoothObjectRefRef)getDeviceRef;
-(long long)compareNamesAndAddresses:(id)arg1 ;
-(long long)compareNoNamesFirst:(id)arg1 ;
-(long long)comparePreferredFirstThenNamed:(id)arg1 ;
-(int)remoteNameRequest:(id)arg1 ;
-(void)BluetoothHCIRemoteNameRequestComplete:(id)arg1 inStatus:(int)arg2 inRemoteNameRequestResults:(BluetoothHCIEventRemoteNameRequestResults*)arg3 ;
-(int)requestAuthentication;
-(id)l2capChannels;
-(int)openL2CAPChannelSync:(id*)arg1 withPSM:(unsigned short)arg2 delegate:(id)arg3 ;
-(int)openL2CAPChannelAsync:(id*)arg1 withPSM:(unsigned short)arg2 delegate:(id)arg3 ;
-(int)openL2CAPChannel:(unsigned short)arg1 findExisting:(char)arg2 newChannel:(id*)arg3 ;
-(int)openRFCOMMChannel:(unsigned char)arg1 channel:(id*)arg2 ;
-(int)sendL2CAPEchoRequest:(void*)arg1 length:(unsigned short)arg2 ;
-(id)getName;
-(id)getNameOrAddress;
-(id)getAddressString;
-(unsigned char)getPageScanPeriodMode;
-(unsigned char)getPageScanMode;
-(id)getLastInquiryUpdate;
-(unsigned char)getLinkType;
-(unsigned char)getEncryptionMode;
-(id)getLastServicesUpdate;
-(char)rawRSSI;
-(id)registerForDisconnectNotification:(id)arg1 selector:(SEL)arg2 ;
-(int)setSupervisionTimeout:(unsigned short)arg1 ;
-(void)BluetoothHCIConnectionComplete:(id)arg1 inStatus:(int)arg2 inConnectionResults:(BluetoothHCIEventConnectionCompleteResults*)arg3 ;
-(int)closeConnectionWhenIdle;
-(int)destroyConnection;
-(void)ioServiceAdded:(unsigned)arg1 ;
-(void)updateFromNewIOService:(unsigned)arg1 ;
-(int)destroyRFCOMMChannel:(unsigned char)arg1 ;
-(void)getAddress:(BluetoothDeviceAddress*)arg1 ;
-(oneway void)updateInquiryInfo:(n{IOBluetoothHCIUnifiedInquiryResult={BluetoothHCIInquiryResult={BluetoothDeviceAddress=[6C]}CCCIS}C{BluetoothHCIExtendedInquiryResponse=[240C]}Cc}*)arg1 lastUpdate:(nO@)arg2 ;
-(void)setConnectionInfo:(unsigned short)arg1 linkType:(unsigned char)arg2 encryptionMode:(unsigned char)arg3 ;
-(void)getRemoteVersionInfo:(unsigned short*)arg1 lmpVersion:(char*)arg2 lmpSubversion:(unsigned short*)arg3 ;
-(oneway void)updateServicesArchive:(nO@)arg1 lastUpdate:(nO@)arg2 ;
-(char)matchesSearchAttributes:(const IOBluetoothDeviceSearchAttributes*)arg1 ignoreDeviceNameIfNil:(char)arg2 ;
-(void)BluetoothHCIAuthenticationComplete:(id)arg1 inStatus:(int)arg2 inAuthenticationResults:(BluetoothHCIEventAuthenticationCompleteResults*)arg3 ;
-(unsigned char)connectionMode;
-(unsigned short)connectionModeInterval;
-(unsigned short)SCOConnectionHandle;
-(id)getL2CAPObjectsWithPSM:(unsigned short)arg1 ;
-(unsigned short)maxACLPacketSize;
-(void)setMaxACLPacketSize:(unsigned short)arg1 ;
-(void)setAllowedPacketTypes:(unsigned short)arg1 ;
-(void)deviceWasUpdated:(id)arg1 ;
-(unsigned long long)totalBytesSent;
-(unsigned)lastBytesSentTimestamp;
-(unsigned)lastBytesReceivedTimestamp;
-(char)isSpecialMicrosoftMouse;
-(char)isiPhone;
-(char)isiPad;
-(IOBluetoothSDPServiceRecord *)PnPSDPRecord;
-(char)PnPSupported;
-(unsigned short)PnPSpecificationID;
-(unsigned short)PnPVersion;
-(NSURL *)PnPClientExecutableURL;
-(NSString *)PnPServiceDescription;
-(NSURL *)PnPDocumentationURL;
-(unsigned)inputAudioDeviceID;
-(unsigned)outputAudioDeviceID;
-(void)isLEAPeripheral:(/*^block*/id)arg1 ;
-(char)HIDSupportsVirtualCable;
-(char)HIDProfileSupported;
-(IOBluetoothSDPServiceRecord *)HIDServiceRecord;
-(char)HIDBootDevice;
-(unsigned char)HIDCountryCode;
-(unsigned short)HIDSupervisionTimeout;
-(unsigned)HIDQoSLatency;
-(NSDictionary *)HIDDeviceDictionary;
-(char)HIDNormallyConnectable;
-(char)HIDSupportsRemoteWake;
-(char)HIDReconnectInitiate;
-(unsigned char)HIDDeviceSubclass;
-(unsigned short)HIDSSRHostMaxLatency;
-(unsigned short)HIDSSRHostMinTimeout;
-(char)isHandsFreeAudioGateway;
-(id)handsFreeAudioGatewayServiceRecord;
-(id)handsFreeDeviceServiceRecord;
-(id)handsFreeAudioGatewayDriverID;
-(id)handsFreeDeviceDriverID;
-(unsigned)audioDeviceID:(char)arg1 ;
-(char)isA2DPSource;
-(unsigned)serviceForDevice;
-(void)audioCodecString:(/*^block*/id)arg1 ;
-(void)batteryLevel:(/*^block*/id)arg1 ;
-(id)headsetAudioGatewayServiceRecord;
-(id)headsetDeviceServiceRecord;
-(char)isHeadsetAudioGateway;
-(char)RSSI;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(char)isConnecting;
-(NSString *)addressString;
-(char)isIncoming;
-(id)shortDescription;
-(unsigned long long)totalBytesReceived;
-(int)openConnection;
-(int)closeConnection;
-(unsigned char)addressType;
-(void)setAddressType:(unsigned char)arg1 ;
-(void)setServices:(NSArray *)arg1 ;
-(id)init;
-(void)release;
-(id)retain;
-(void)finalize;
-(void)dealloc;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)name;
-(char)isConnected;
-(id)processName;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(void)setDisplayName:(id)arg1 ;
-(void)remove;
-(unsigned long long)deviceID;
-(unsigned short)vendorID;
-(id)initWithAddress:(const BluetoothDeviceAddress*)arg1 ;
-(void)setAddress:(const BluetoothDeviceAddress*)arg1 ;
@end

