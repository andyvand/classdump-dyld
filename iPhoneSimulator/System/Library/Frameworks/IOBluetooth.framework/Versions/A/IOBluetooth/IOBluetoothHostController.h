/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:00 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IOBluetooth/IOBluetooth-Structs.h>
@class NSTimer;

@interface IOBluetoothHostController : NSObject {

	unsigned long long _eventCodeMask;
	unsigned _cachedClassOfDevice;
	id _delegate;
	NSTimer* _timerClassOfDeviceSetting;
	void* _eventListener;
	id _mReserved;
	id _mUnused000;
	id _mUnused001;
	id _mUnused002;

}

@property (assign) id delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) int powerState; 
+(id)getPropertyObjectFromIOServiceNamed:(const char*)arg1 forKey:(id)arg2 ;
+(id)controllers;
+(void)initialize;
+(id)defaultController;
+(void)enableNotifications;
-(char)isReady;
-(unsigned)classOfDevice;
-(int)BluetoothHCIReadLinkPolicySettings:(unsigned short)arg1 outLinkPolicySettings:(unsigned short*)arg2 ;
-(int)BluetoothHCIWriteLinkPolicySettings:(unsigned short)arg1 inLinkPolicySettings:(unsigned short)arg2 ;
-(int)BluetoothHCIBroadcomBFCResume:(unsigned short)arg1 inDeviceAddress:(const BluetoothDeviceAddress*)arg2 inBFCResume:(BluetoothBroadcomBFCReconnectData*)arg3 ;
-(int)BluetoothHCIRemoteNameRequest:(const BluetoothDeviceAddress*)arg1 inPageScanRepetitionMode:(unsigned char)arg2 inReserved:(unsigned char)arg3 inClockOffset:(unsigned short)arg4 outRemoteNameRequestCompleteResults:(BluetoothHCIEventRemoteNameRequestResults*)arg5 ;
-(int)BluetoothHCIWritePageTimeout:(unsigned short)arg1 ;
-(int)BluetoothHCIAuthenticationRequested:(unsigned short)arg1 outAuthenticationCompleteResults:(BluetoothHCIEventAuthenticationCompleteResults*)arg2 ;
-(int)BluetoothHCIReadRSSI:(unsigned short)arg1 outRSSI:(char*)arg2 ;
-(int)BluetoothHCICSRReadRawRSSI:(unsigned short)arg1 outRSSI:(char*)arg2 ;
-(int)BluetoothHCIBroadcomReadRawRSSI:(unsigned short)arg1 outRSSI:(char*)arg2 ;
-(int)BluetoothHCIAtherosReadRawRSSI:(const BluetoothDeviceAddress*)arg1 outRSSI:(char*)arg2 ;
-(int)BluetoothHCIWriteLinkSupervisionTimeout:(unsigned short)arg1 inLinkSupervisionTimeout:(unsigned short)arg2 ;
-(int)BluetoothHCIReadPageTimeout:(unsigned short*)arg1 ;
-(int)BluetoothHCIWriteAuthenticationEnable:(unsigned char)arg1 ;
-(char)tbfcSupported;
-(int)BluetoothHCICreateConnection:(const BluetoothDeviceAddress*)arg1 inPacketType:(unsigned short)arg2 inPageScanRepetitionMode:(unsigned char)arg3 inReserved:(unsigned char)arg4 inClockOffset:(unsigned short)arg5 inAllowRoleSwitch:(unsigned char)arg6 outConnectionCompleteResults:(BluetoothHCIEventConnectionCompleteResults*)arg7 ;
-(int)BluetoothHCIReadLocalSupportedFeatures:(BluetoothHCISupportedFeatures*)arg1 ;
-(int)BluetoothHCIReadLocalExtendedFeatures:(unsigned char)arg1 outMaximumPageNumber:(char*)arg2 outExtendedLMPFeatures:(BluetoothHCISupportedFeatures*)arg3 ;
-(int)BluetoothHCIReadRemoteSupportedFeatures:(unsigned short)arg1 outReadRemoteSupportedFeaturesCompleteResults:(BluetoothHCIEventReadRemoteSupportedFeaturesResults*)arg2 ;
-(int)BluetoothHCIReadRemoteExtendedFeatures:(unsigned short)arg1 inPageNumber:(unsigned char)arg2 outReadRemoteExtendedFeaturesCompleteResults:(BluetoothHCIEventReadRemoteExtendedFeaturesResults*)arg3 ;
-(int)BluetoothHCISetConnectionEncryption:(unsigned short)arg1 inEncryptionEnable:(unsigned char)arg2 outEncryptionChangeResults:(BluetoothHCIEventEncryptionChangeResults*)arg3 ;
-(int)BluetoothHCIChangeConnectionPacketType:(unsigned short)arg1 inPacketType:(unsigned short)arg2 outConnectionPacketTypeChangedResults:(BluetoothHCIEventConnectionPacketTypeResults*)arg3 ;
-(int)getAddress:(BluetoothDeviceAddress*)arg1 ;
-(unsigned short)USBProductID;
-(unsigned short)USBVendorID;
-(int)BluetoothHCIExitSniffMode:(unsigned short)arg1 outModeChangeResults:(BluetoothHCIEventModeChangeResults*)arg2 ;
-(int)BluetoothHCIReadLocalVersionInformation:(char*)arg1 outHCIRevision:(unsigned short*)arg2 outLMPVersion:(char*)arg3 outManufacturerName:(unsigned short*)arg4 outLMPSubversion:(unsigned short*)arg5 ;
-(int)readVerboseConfigVersionInfo:(char*)arg1 outTargetID:(char*)arg2 outBaseline:(unsigned short*)arg3 outBuild:(unsigned short*)arg4 ;
-(int)configState;
-(int)BluetoothHCIBroadcomTagLEA:(unsigned long long)arg1 connectionHandle:(unsigned short)arg2 input:(char)arg3 channel:(char)arg4 ;
-(int)BluetoothHCILEConnectionUpdate:(unsigned short)arg1 connectionIntervalMin:(unsigned short)arg2 connectionIntervalMax:(unsigned short)arg3 connectionLatency:(unsigned short)arg4 supervisionTimeout:(unsigned short)arg5 minimumCELength:(unsigned short)arg6 maximumCELength:(unsigned short)arg7 ;
-(char)powerChangeSupported;
-(int)powerState;
-(BluetoothHCISupportedFeatures)supportedFeatures;
-(void)stopHCIEventListener;
-(int)BluetoothHCIReadDeviceAddress:(BluetoothDeviceAddress*)arg1 ;
-(int)BluetoothHCIReadLocalName:(unsigned char)arg1 ;
-(int)BluetoothHCIReadClassOfDevice:(unsigned*)arg1 ;
-(int)BluetoothHCIWriteClassOfDevice:(unsigned)arg1 ;
-(char)lowEnergySupported;
-(void)processRawEventData:(const void*)arg1 dataSize:(unsigned long long)arg2 ;
-(void)sendInquiryResultToDelegate:(IOBluetoothHCIEventNotificationMessage*)arg1 ;
-(id)getDeviceForHCIRequestID:(unsigned)arg1 removeIfFound:(char)arg2 ;
-(int)getDiagnosticInfo;
-(int)getControllerManufacturerName;
-(int)softwareVersion:(NumVersion*)arg1 firmwareVersion:(BluetoothHCIVersionInfo*)arg2 ;
-(int)enableRemoteWake:(char)arg1 ;
-(id)addressAsString;
-(id)nameAsString;
-(unsigned)featureFlags;
-(int)setClassOfDevice:(unsigned)arg1 forTimeInterval:(double)arg2 ;
-(unsigned)requestWithTimeout:(int)arg1 isSynchronous:(char)arg2 device:(id)arg3 ;
-(void)releaseRequest:(unsigned)arg1 ;
-(int)BluetoothHCIInquiry:(unsigned)arg1 inInquiryLength:(unsigned char)arg2 inNumResponses:(unsigned char)arg3 outInquiryResults:(BluetoothHCIInquiryResults*)arg4 ;
-(int)BluetoothHCIInquiryCancel;
-(int)BluetoothHCIPeriodicInquiryMode:(unsigned char)arg1 inMinPeriodLength:(unsigned char)arg2 inLAP:(unsigned)arg3 inInquiryLength:(unsigned char)arg4 inNumResponses:(unsigned char)arg5 outInquiryResults:(BluetoothHCIInquiryResults*)arg6 ;
-(int)BluetoothHCIExitPeriodicInquiryMode;
-(int)BluetoothHCIDisconnect:(unsigned short)arg1 inReason:(unsigned char)arg2 outDisconnectionCompleteResults:(BluetoothHCIEventDisconnectionCompleteResults*)arg3 ;
-(int)BluetoothHCICreateConnectionCancel:(const BluetoothDeviceAddress*)arg1 ;
-(int)BluetoothHCIAcceptConnectionRequest:(const BluetoothDeviceAddress*)arg1 inRole:(unsigned char)arg2 outConnectionCompleteResults:(BluetoothHCIEventConnectionCompleteResults*)arg3 ;
-(int)BluetoothHCIRejectConnectionRequest:(const BluetoothDeviceAddress*)arg1 inReason:(unsigned char)arg2 outConnectionCompleteResults:(BluetoothHCIEventConnectionCompleteResults*)arg3 ;
-(int)BluetoothHCILinkKeyRequestReply:(const BluetoothDeviceAddress*)arg1 inLinkKey:(const BluetoothKey*)arg2 ;
-(int)BluetoothHCILinkKeyRequestNegativeReply:(const BluetoothDeviceAddress*)arg1 ;
-(int)BluetoothHCIPINCodeRequestReply:(const BluetoothDeviceAddress*)arg1 inPINCodeLength:(unsigned long long)arg2 inPINCode:(const BluetoothPINCode*)arg3 ;
-(int)BluetoothHCIPINCodeRequestNegativeReply:(const BluetoothDeviceAddress*)arg1 ;
-(int)BluetoothHCIChangeConnectionLinkKey:(unsigned short)arg1 outChangeConnectionLinkKeyCompleteResults:(BluetoothHCIEventChangeConnectionLinkKeyCompleteResults*)arg2 ;
-(int)BluetoothHCIMasterLinkKey:(unsigned char)arg1 outMasterLinkKeyCompleteResults:(BluetoothHCIEventMasterLinkKeyCompleteResults*)arg2 ;
-(int)BluetoothHCIRemoteNameRequestCancel:(const BluetoothDeviceAddress*)arg1 ;
-(int)BluetoothHCIReadRemoteVersionInformation:(unsigned short)arg1 outReadRemoteVersionInformationCompleteResults:(BluetoothHCIEventReadRemoteVersionInfoResults*)arg2 ;
-(int)BluetoothHCIReadClockOffset:(unsigned short)arg1 outReadClockOffsetCompleteResults:(unsigned short*)arg2 ;
-(int)BluetoothHCIReadLMPHandle:(unsigned short)arg1 outReadLMPHandleResults:(BluetoothHCIReadLMPHandleResults*)arg2 ;
-(int)BluetoothHCISetupSynchronousConnection:(unsigned short)arg1 inTransmitBandwidth:(unsigned)arg2 inReceiveBandwidth:(unsigned)arg3 inMaxLatency:(unsigned short)arg4 inVoiceSetting:(unsigned short)arg5 inRetransmissionEffort:(unsigned char)arg6 inPacketType:(unsigned short)arg7 outSynchronousConnectionCompleteResults:(BluetoothHCIEventSynchronousConnectionCompleteResults*)arg8 ;
-(int)BluetoothHCIAcceptSynchronousConnectionRequest:(const BluetoothDeviceAddress*)arg1 inTransmitBandwidth:(unsigned)arg2 inReceiveBandwidth:(unsigned)arg3 inMaxLatency:(unsigned short)arg4 inContentFormat:(unsigned short)arg5 inRetransmissionEffort:(unsigned char)arg6 inPacketType:(unsigned short)arg7 outSynchronousConnectionCompleteResults:(BluetoothHCIEventSynchronousConnectionCompleteResults*)arg8 ;
-(int)BluetoothHCIRejectSynchronousConnectionRequest:(const BluetoothDeviceAddress*)arg1 inReason:(unsigned char)arg2 outSynchronousConnectionCompleteResults:(BluetoothHCIEventSynchronousConnectionCompleteResults*)arg3 ;
-(int)BluetoothHCIIOCapabilityRequestReply:(const BluetoothDeviceAddress*)arg1 inIOCapability:(unsigned char)arg2 inOOBDataPresent:(unsigned char)arg3 inAuthenticationRequirements:(unsigned char)arg4 ;
-(int)BluetoothHCIUserConfirmationRequestReply:(const BluetoothDeviceAddress*)arg1 ;
-(int)BluetoothHCIUserConfirmationRequestNegativeReply:(const BluetoothDeviceAddress*)arg1 ;
-(int)BluetoothHCIUserPasskeyRequestReply:(const BluetoothDeviceAddress*)arg1 inNumericValue:(unsigned)arg2 ;
-(int)BluetoothHCIUserPasskeyRequestNegativeReply:(const BluetoothDeviceAddress*)arg1 ;
-(int)BluetoothHCIRemoteOOBDataRequestReply:(const BluetoothDeviceAddress*)arg1 inC:(const BluetoothHCISimplePairingOOBData*)arg2 inR:(const BluetoothHCISimplePairingOOBData*)arg3 ;
-(int)BluetoothHCIRemoteOOBDataRequestNegativeReply:(const BluetoothDeviceAddress*)arg1 ;
-(int)BluetoothHCIIOCapabilityRequestNegativeReply:(const BluetoothDeviceAddress*)arg1 inReason:(unsigned char)arg2 ;
-(int)BluetoothHCIHoldMode:(unsigned short)arg1 inHoldModeMaxInterval:(unsigned short)arg2 inHoldModeMinInterval:(unsigned short)arg3 outModeChangeResults:(BluetoothHCIEventModeChangeResults*)arg4 ;
-(int)BluetoothHCISniffMode:(unsigned short)arg1 inSniffMaxInterval:(unsigned short)arg2 inSniffMinInterval:(unsigned short)arg3 inSniffAttempt:(unsigned short)arg4 inSniffTimeout:(unsigned short)arg5 outModeChangeResults:(BluetoothHCIEventModeChangeResults*)arg6 ;
-(int)BluetoothHCIParkState:(unsigned short)arg1 inBeaconMaxInterval:(unsigned short)arg2 inBeaconMinInterval:(unsigned short)arg3 outModeChangeResults:(BluetoothHCIEventModeChangeResults*)arg4 ;
-(int)BluetoothHCIExitParkState:(unsigned short)arg1 outModeChangeResults:(BluetoothHCIEventModeChangeResults*)arg2 ;
-(int)BluetoothHCIQoSSetup:(unsigned short)arg1 inFlags:(unsigned char)arg2 inServiceType:(unsigned char)arg3 inTokenRate:(unsigned)arg4 inPeakBandwidth:(unsigned)arg5 inLatency:(unsigned)arg6 inDelayVariation:(unsigned)arg7 outQoSSetupCompleteResults:(BluetoothHCIEventQoSSetupCompleteResults*)arg8 ;
-(int)BluetoothHCIRoleDiscovery:(unsigned short)arg1 outCurrentRole:(char*)arg2 ;
-(int)BluetoothHCISwitchRole:(const BluetoothDeviceAddress*)arg1 inRole:(unsigned char)arg2 outRoleChangeResults:(BluetoothHCIEventRoleChangeResults*)arg3 ;
-(int)BluetoothHCIReadDefaultLinkPolicySettings:(unsigned short*)arg1 ;
-(int)BluetoothHCIWriteDefaultLinkPolicySettings:(unsigned short)arg1 ;
-(int)BluetoothHCIFlowSpecification:(BluetoothHCIEventFlowSpecificationData*)arg1 outFlowSpecificationCompleteResults:(BluetoothHCIEventFlowSpecificationData*)arg2 ;
-(int)BluetoothHCISniffSubrating:(unsigned short)arg1 inMaximumLatency:(unsigned short)arg2 inMinimumRemoteTimeout:(unsigned short)arg3 inMinimumLocalTimeout:(unsigned short)arg4 outConnectionHandle:(unsigned short*)arg5 ;
-(int)BluetoothHCISetEventMask:(const BluetoothSetEventMask*)arg1 ;
-(int)BluetoothHCIReset;
-(int)BluetoothHCISetEventFilter:(unsigned char)arg1 inFilterConditionType:(unsigned char)arg2 inCondition:(BluetoothEventFilterCondition*)arg3 ;
-(int)BluetoothHCIFlush:(unsigned short)arg1 ;
-(int)BluetoothHCIReadPINType:(char*)arg1 ;
-(int)BluetoothHCIWritePINType:(unsigned char)arg1 ;
-(int)BluetoothHCICreateNewUnitKey;
-(int)BluetoothHCIReadStoredLinkKey:(const BluetoothDeviceAddress*)arg1 inReadAllFlag:(unsigned char)arg2 outStoredLinkKeysInfo:(BluetoothHCIStoredLinkKeysInfo*)arg3 ;
-(int)BluetoothHCIWriteStoredLinkKey:(unsigned)arg1 inDeviceAddress:(const BluetoothDeviceAddress*)arg2 inLinkKey:(const BluetoothKey*)arg3 outNumKeysWritten:(char*)arg4 ;
-(int)BluetoothHCIDeleteStoredLinkKey:(const BluetoothDeviceAddress*)arg1 inDeleteAllFlag:(unsigned char)arg2 outNumKeysDeleted:(unsigned short*)arg3 ;
-(int)BluetoothHCIWriteLocalName:(unsigned char)arg1 ;
-(int)BluetoothHCIReadConnectionAcceptTimeout:(unsigned short*)arg1 ;
-(int)BluetoothHCIWriteConnectionAcceptTimeout:(unsigned short)arg1 ;
-(int)BluetoothHCIReadScanEnable:(char*)arg1 ;
-(int)BluetoothHCIWriteScanEnable:(unsigned char)arg1 ;
-(int)BluetoothHCIReadPageScanActivity:(unsigned short*)arg1 outPageScanWindow:(unsigned short*)arg2 ;
-(int)BluetoothHCIWritePageScanActivity:(unsigned short)arg1 inPageScanWindow:(unsigned short)arg2 ;
-(int)BluetoothHCIReadInquiryScanActivity:(unsigned short*)arg1 outInquiryScanWindow:(unsigned short*)arg2 ;
-(int)BluetoothHCIWriteInquiryScanActivity:(unsigned short)arg1 inInquiryScanWindow:(unsigned short)arg2 ;
-(int)BluetoothHCIReadAuthenticationEnable:(char*)arg1 ;
-(int)BluetoothHCIReadVoiceSetting:(unsigned short*)arg1 ;
-(int)BluetoothHCIWriteVoiceSetting:(unsigned short)arg1 ;
-(int)BluetoothHCIReadAutomaticFlushTimeout:(unsigned short)arg1 outFlushTimeout:(unsigned short*)arg2 ;
-(int)BluetoothHCIWriteAutomaticFlushTimeout:(unsigned short)arg1 inFlushTimeout:(unsigned short)arg2 ;
-(int)BluetoothHCIReadNumBroadcastRetransmissions:(char*)arg1 ;
-(int)BluetoothHCIWriteNumBroadcastRetransmissions:(unsigned char)arg1 ;
-(int)BluetoothHCIReadHoldModeActivity:(char*)arg1 ;
-(int)BluetoothHCIWriteHoldModeActivity:(unsigned char)arg1 ;
-(int)BluetoothHCIReadTransmitPowerLevel:(unsigned short)arg1 inType:(unsigned char)arg2 outTransmitPowerLevel:(char*)arg3 ;
-(int)BluetoothHCIReadSynchronousFlowControlEnable:(char*)arg1 ;
-(int)BluetoothHCIWriteSynchronousFlowControlEnable:(unsigned char)arg1 ;
-(int)BluetoothHCISetControllerToHostFlowControl:(unsigned char)arg1 ;
-(int)BluetoothHCIHostBufferSize:(unsigned short)arg1 inHostSynchronousDataPacketLength:(unsigned char)arg2 inHostTotalNumACLDataPackets:(unsigned short)arg3 inHostTotalNumSynchronousDataPackets:(unsigned short)arg4 ;
-(int)BluetoothHCIHostNumberOfCompletedPackets:(unsigned char)arg1 inHandle:(const unsigned short*)arg2 inHostNumOfCompletedPackets:(const unsigned short*)arg3 ;
-(int)BluetoothHCIReadLinkSupervisionTimeout:(unsigned short)arg1 outLinkSupervisionTimeout:(unsigned short*)arg2 ;
-(int)BluetoothHCIReadNumberOfSupportedIAC:(char*)arg1 ;
-(int)BluetoothHCIReadCurrentIACLAP:(BluetoothHCICurrentInquiryAccessCodes*)arg1 ;
-(int)BluetoothHCIWriteCurrentIACLAP:(const BluetoothHCICurrentInquiryAccessCodes*)arg1 ;
-(int)BluetoothHCISetAFHHostChannelClassification:(const BluetoothAFHHostChannelClassification*)arg1 ;
-(int)BluetoothHCIReadInquiryScanType:(char*)arg1 ;
-(int)BluetoothHCIWriteInquiryScanType:(unsigned char)arg1 ;
-(int)BluetoothHCIReadInquiryMode:(char*)arg1 ;
-(int)BluetoothHCIWriteInquiryMode:(unsigned char)arg1 ;
-(int)BluetoothHCIReadPageScanType:(char*)arg1 ;
-(int)BluetoothHCIWritePageScanType:(unsigned char)arg1 ;
-(int)BluetoothHCIReadAFHChannelAssessmentMode:(char*)arg1 ;
-(int)BluetoothHCIWriteAFHChannelAssessmentMode:(unsigned char)arg1 ;
-(int)BluetoothHCIReadExtendedInquiryResponse:(char*)arg1 outExtendedInquiryResponse:(BluetoothHCIExtendedInquiryResponse*)arg2 ;
-(int)BluetoothHCIWriteExtendedInquiryResponse:(unsigned char)arg1 inExtendedInquiryResponse:(const BluetoothHCIExtendedInquiryResponse*)arg2 ;
-(int)BluetoothHCIRefreshEncryptionKey:(unsigned short)arg1 outRefreshEncryptionKeyResults:(BluetoothHCIEventEncryptionKeyRefreshCompleteResults*)arg2 ;
-(int)BluetoothHCIReadSimplePairingMode:(char*)arg1 ;
-(int)BluetoothHCIWriteSimplePairingMode:(unsigned char)arg1 ;
-(int)BluetoothHCIReadLocalOOBData:(BluetoothHCISimplePairingOOBData*)arg1 outR:(BluetoothHCISimplePairingOOBData*)arg2 ;
-(int)BluetoothHCIReadInquiryResponseTransmitPowerLevel:(char*)arg1 ;
-(int)BluetoothHCIWriteInquiryTransmitPowerLevel:(char)arg1 ;
-(int)BluetoothHCISendKeypressNotification:(const BluetoothDeviceAddress*)arg1 inNotificationType:(unsigned char)arg2 ;
-(int)BluetoothHCIReadDefaultErroneousDataReporting:(char*)arg1 ;
-(int)BluetoothHCIWriteDefaultErroneousDataReporting:(unsigned char)arg1 ;
-(int)BluetoothHCIEnhancedFlush:(unsigned short)arg1 inPacketType:(unsigned char)arg2 outConnectionHandle:(unsigned short*)arg3 ;
-(int)BluetoothHCIReadLEHostSupported:(char*)arg1 simultaneousLEHost:(char*)arg2 ;
-(int)BluetoothHCIWriteLEHostSupported:(unsigned char)arg1 simultaneousLEHost:(unsigned char)arg2 ;
-(int)BluetoothHCIReadLocalSupportedCommands:(BluetoothHCISupportedCommands*)arg1 ;
-(int)BluetoothHCIReadBufferSize:(unsigned short*)arg1 outHCSynchronousDataPacketLength:(char*)arg2 outHCTotalNumACLDataPackets:(unsigned short*)arg3 outHCTotalNumSynchronousDataPackets:(unsigned short*)arg4 ;
-(int)BluetoothHCIReadFailedContactCounter:(unsigned short)arg1 outFailedContactCounter:(unsigned short*)arg2 ;
-(int)BluetoothHCIResetFailedContactCounter:(unsigned short)arg1 ;
-(int)BluetoothHCIReadLinkQuality:(unsigned short)arg1 outLinkQuality:(char*)arg2 ;
-(int)BluetoothHCIReadAFHChannelMap:(unsigned short)arg1 outAFHMode:(char*)arg2 outAFHChannelMap:(unsigned char)arg3 ;
-(int)BluetoothHCIReadClock:(unsigned short)arg1 inWhichClock:(unsigned char)arg2 outReadClockInfo:(BluetoothReadClockInfo*)arg3 ;
-(int)BluetoothHCIReadLoopbackMode:(char*)arg1 ;
-(int)BluetoothHCIWriteLoopbackMode:(unsigned char)arg1 ;
-(int)BluetoothHCIEnableDeviceUnderTestMode;
-(int)BluetoothHCIWriteSimplePairingDebugMode:(unsigned char)arg1 ;
-(void)BluetoothHCIEventNotification:(const IOBluetoothHCIEventNotificationMessage*)arg1 ;
-(int)BluetoothHCILESetEventMask:(unsigned long long)arg1 ;
-(int)BluetoothHCILEReadBufferSize:(unsigned short*)arg1 totalNumberLEDataPackets:(char*)arg2 ;
-(int)BluetoothHCILEReadLocalSupportedFeatures:(unsigned long long*)arg1 ;
-(int)BluetoothHCILESetRandomAddress:(BluetoothDeviceAddress*)arg1 ;
-(int)BluetoothHCILESetAdvertisingParameters:(unsigned short)arg1 advertisingIntervalMax:(unsigned short)arg2 advertisingType:(unsigned char)arg3 ownAddressType:(unsigned char)arg4 directAddressType:(unsigned char)arg5 directAddress:(BluetoothDeviceAddress*)arg6 advertisingChannelMap:(unsigned char)arg7 advertisingFilterPolicy:(unsigned char)arg8 ;
-(int)BluetoothHCILEReadAdvertisingChannelTxPower:(char*)arg1 ;
-(int)BluetoothHCILESetAdvertisingData:(unsigned char)arg1 advertsingData:(char*)arg2 ;
-(int)BluetoothHCILESetScanResponseData:(unsigned char)arg1 scanResponseData:(char*)arg2 ;
-(int)BluetoothHCILESetAdvertiseEnable:(unsigned char)arg1 ;
-(int)BluetoothHCILESetScanParameters:(unsigned char)arg1 LEScanInterval:(unsigned short)arg2 LEScanWindow:(unsigned short)arg3 ownAddressType:(unsigned char)arg4 scanningFilterPolicy:(unsigned char)arg5 ;
-(int)BluetoothHCILESetScanEnable:(unsigned char)arg1 filterDuplicates:(unsigned char)arg2 ;
-(int)BluetoothHCILECreateConnection:(unsigned short)arg1 LEScanWindow:(unsigned short)arg2 initiatorFilterPolicy:(unsigned char)arg3 peerAddressType:(unsigned char)arg4 peerAddress:(BluetoothDeviceAddress*)arg5 ownAddressType:(unsigned char)arg6 connectionIntervalMin:(unsigned short)arg7 connectionIntervalMax:(unsigned short)arg8 connectionLatency:(unsigned short)arg9 supervisionTimeout:(unsigned short)arg10 minimumCELength:(unsigned short)arg11 maximumCELength:(unsigned short)arg12 ;
-(int)BluetoothHCILECreateConnectionCancel;
-(int)BluetoothHCILEReadWhiteListSize:(char*)arg1 ;
-(int)BluetoothHCILEClearWhiteList;
-(int)BluetoothHCILEAddDeviceToWhiteList:(unsigned char)arg1 address:(const BluetoothDeviceAddress*)arg2 ;
-(int)BluetoothHCILERemoveDeviceFromWhiteList:(unsigned char)arg1 address:(const BluetoothDeviceAddress*)arg2 ;
-(int)BluetoothHCILESetHostChannelClassification:(unsigned long long)arg1 ;
-(int)BluetoothHCILEReadChannelMap:(unsigned short)arg1 channelMap:(unsigned long long*)arg2 ;
-(int)BluetoothHCILEReadRemoteUsedFeatures:(unsigned short)arg1 ;
-(int)BluetoothHCILEEncrypt:(char*)arg1 plaintextData:(char*)arg2 encryptedData:(char*)arg3 ;
-(int)BluetoothHCILERand:(unsigned long long*)arg1 ;
-(int)BluetoothHCILEStartEncryption:(unsigned short)arg1 randomNumber:(unsigned long long)arg2 encryptedDiversifier:(unsigned short)arg3 longTermKey:(char*)arg4 ;
-(int)BluetoothHCILELongTermKeyRequestReply:(unsigned short)arg1 longTermKey:(char*)arg2 ;
-(int)BluetoothHCILELongTermKeyRequestNegativeReply:(unsigned short)arg1 ;
-(int)BluetoothHCILEReadSupportedStates:(unsigned long long*)arg1 ;
-(int)BluetoothHCILEReceiverTest:(unsigned char)arg1 ;
-(int)BluetoothHCILETransmitterTest:(unsigned char)arg1 lengthOfTestData:(unsigned char)arg2 packetPayload:(unsigned char)arg3 ;
-(int)BluetoothHCILETestEnd:(unsigned short*)arg1 ;
-(int)setPowerState:(int)arg1 ;
-(unsigned char)cachedHCIVersion;
-(id)cachedDeviceAddress;
-(id)cachedDeviceAddressString;
-(char)concurrentCreateConnectionSupported;
-(char)tbfcPageSupported;
-(char)pairedDeviceSupportTBFCPage;
-(char)isLEASupported;
-(int)BluetoothHCIBroadcomBFCSuspend:(unsigned short)arg1 ;
-(int)BluetoothHCIBroadcomBFCReadParams:(BluetoothBroadcomBFCParams*)arg1 ;
-(int)BluetoothHCIBroadcomBFCSetParams:(BluetoothBroadcomBFCParams*)arg1 ;
-(int)BluetoothHCIBroadcomSetTransmitPower:(unsigned short)arg1 inPower:(char)arg2 ;
-(int)BluetoothHCIBroadcomBFCReadRemoteBPCSFeatures:(unsigned short)arg1 outBPCSFeatures:(BluetoothBroadcomBFCRemoteBPCSFeatures*)arg2 ;
-(int)BluetoothHCIBroadcomBFCWriteScanEnable:(unsigned char)arg1 ;
-(int)BluetoothHCIBroadcomBFCReadScanEnable:(char*)arg1 ;
-(int)BluetoothHCIBroadcomBFCCreateConnection:(const BluetoothDeviceAddress*)arg1 inPacketType:(unsigned short)arg2 outConnectionCompleteResults:(BluetoothHCIEventConnectionCompleteResults*)arg3 ;
-(int)BluetoothHCIBroadcomSetEventMask:(const BluetoothBroadcomSetEventMask*)arg1 ;
-(int)BluetoothHCIBroadcomReadLocalFirmwareInfo:(unsigned char)arg1 outLocalFirmwareInfo:(BluetoothBroadcomLocalFirmwareInfo*)arg2 ;
-(int)BluetoothHCIBroadcomBFCIsConnectionTBFCSuspended:(unsigned short)arg1 outBFCConnectionInfo:(BluetoothBroadcomBFCConnectionTBFCSuspendedInfo*)arg2 ;
-(int)BluetoothHCIBroadcomGetBasicRateACLConnectionStats;
-(int)BluetoothHCIBroadcomResetBasicRateACLConnectionStats;
-(int)BluetoothHCIBroadcomGetEDRACLConnectionStats;
-(int)BluetoothHCIBroadcomIgnoreUSBReset:(char*)arg1 ;
-(int)BluetoothHCIBroadcomSetUSBAutoResume:(unsigned short)arg1 ;
-(int)BluetoothHCIBroadcomChangeLNAGainCoexsECI:(unsigned char)arg1 ;
-(int)BluetoothHCIBroadcomTurnOFFDynamicPowerControl:(unsigned char)arg1 inDeviceAddress:(const BluetoothDeviceAddress*)arg2 ;
-(int)BluetoothHCIBroadcomIncreaseDecreasePowerLevel:(const BluetoothDeviceAddress*)arg1 increase:(unsigned char)arg2 ;
-(int)BluetoothHCIBroadcomReadRetransmissionStatus:(unsigned char)arg1 inConnectionHandle:(unsigned short)arg2 inNotificationEnable:(unsigned char)arg3 inNotificationThreshold:(unsigned char)arg4 outConnectionHandle:(unsigned short*)arg5 outRetransmissionCounter:(unsigned*)arg6 outRetransmissionPercentage:(char*)arg7 ;
-(int)BluetoothHCIBroadcomSetProximityTable:(const BluetoothDeviceAddress*)arg1 inPowerSteps:(unsigned char)arg2 inAwayTriggerValues:(BluetoothBroadcomRSSITriggerValue*)arg3 inPresentTriggerValues:(BluetoothBroadcomRSSITriggerValue*)arg4 ;
-(int)BluetoothHCIBroadcomSetProximityTrigger:(unsigned char)arg1 inEnableAwayTrigger:(unsigned char)arg2 ;
-(int)readRawRSSIForDevice:(id)arg1 ;
-(int)setTransmitPowerForDevice:(id)arg1 toLevel:(unsigned char)arg2 ;
-(int)startReceiveTest:(BluetoothDeviceAddress*)arg1 reportPeriod:(unsigned short)arg2 frequency:(unsigned char)arg3 modulationType:(unsigned char)arg4 logicalChannel:(unsigned char)arg5 packetType:(unsigned char)arg6 packetLength:(unsigned short)arg7 ;
-(int)startTransmitTest:(BluetoothDeviceAddress*)arg1 hoppingMode:(unsigned char)arg2 frequency:(unsigned char)arg3 modulationType:(unsigned char)arg4 logicalChannel:(unsigned char)arg5 packetType:(unsigned char)arg6 packetLength:(unsigned short)arg7 transmitPower:(unsigned char)arg8 transmitPowerdBm:(unsigned char)arg9 transmitPowerTableIndex:(unsigned char)arg10 transmitConnectionInterval:(unsigned char)arg11 ;
-(int)triStateEnabled:(char)arg1 ;
-(int)addHIDEmulationDevice:(BluetoothDeviceAddress)arg1 classOfDevice:(unsigned)arg2 linkKey:(BluetoothKey)arg3 ;
-(int)readHIDEmulationDevices;
-(int)removeHIDEmulationDevice:(BluetoothDeviceAddress)arg1 ;
-(int)superPeekPoke:(unsigned char)arg1 address:(unsigned)arg2 outValue:(unsigned*)arg3 ;
-(int)BluetoothHCILEBroadcomEnableCustomerSpecificFeatures:(unsigned)arg1 outLEextOpcode:(char*)arg2 ;
-(int)BluetoothHCILEBroadcomAddIRKToList:(char*)arg1 addressType:(unsigned char)arg2 address:(BluetoothDeviceAddress*)arg3 outLEextOpcode:(char*)arg4 outIRKListAvailableSpace:(char*)arg5 ;
-(int)BluetoothHCILEBroadcomRemoveIRKFromList:(unsigned char)arg1 address:(BluetoothDeviceAddress*)arg2 outLEextOpcode:(char*)arg3 outIRKListAvailableSpace:(char*)arg4 ;
-(int)BluetoothHCILEBroadcomClearIRKList:(char*)arg1 outIRKListAvailableSpace:(char*)arg2 ;
-(int)BluetoothHCILEBroadcomReadIRKList:(unsigned char)arg1 outLEextOpcode:(char*)arg2 outIRKListIndex:(char*)arg3 outIRK:(char*)arg4 outAddressType:(char*)arg5 outAddress:(BluetoothDeviceAddress*)arg6 outResolvedPrivateAddress:(BluetoothDeviceAddress*)arg7 ;
-(int)BluetoothHCILEAdvPacketContentFilterFeatureSectionWrite:(BluetoothDeviceAddress*)arg1 addressType:(unsigned char)arg2 featureSelection:(unsigned)arg3 logicalType:(unsigned char)arg4 outLEextOpcode:(char*)arg5 outAction:(char*)arg6 ;
-(int)BluetoothHCILEAdvPacketContentFilterFeatureSectionRead:(BluetoothDeviceAddress*)arg1 addressType:(unsigned char)arg2 outLEextOpcode:(char*)arg3 outAction:(char*)arg4 outFeatureSelection:(unsigned*)arg5 outLogicalType:(char*)arg6 ;
-(int)BluetoothHCILEAdvPacketContentFilterFeatureSectionClear:(BluetoothDeviceAddress*)arg1 addressType:(unsigned char)arg2 outLEextOpcode:(char*)arg3 outAction:(char*)arg4 ;
-(int)BluetoothHCILEScanRSSIThresholdRead:(char*)arg1 outMode:(char*)arg2 outRSSIThreshold:(char*)arg3 ;
-(int)BluetoothHCILEScanRSSIThresholdWrite:(unsigned char)arg1 rssiThresdhold:(char)arg2 outAction:(char*)arg3 ;
-(int)BluetoothHCILEAdvPacketPacketFilterServiceUUIDWrite:(BluetoothDeviceAddress*)arg1 addressType:(unsigned char)arg2 logicalType:(unsigned char)arg3 outLEextOpcode:(char*)arg4 outAction:(char*)arg5 UUID:(char*)arg6 ;
-(int)BluetoothHCILEAdvPacketPacketFilterServiceUUIDClear:(BluetoothDeviceAddress*)arg1 addressType:(unsigned char)arg2 outLEextOpcode:(char*)arg3 outAction:(char*)arg4 ;
-(int)BluetoothHCILEExtendedDuplicateFilter:(char*)arg1 outAction:(unsigned char)arg2 ;
-(int)BluetoothHCILETrackSensor:(BluetoothDeviceAddress*)arg1 addressType:(unsigned char)arg2 timeoutValue:(unsigned char)arg3 outLEextOpcode:(char*)arg4 ;
-(int)BroadcomHCILEResetAdvancedMatchingRules:(char*)arg1 matchingRemaining:(char*)arg2 ;
-(int)BroadcomHCILEAddAdvancedMatchingRule:(SCD_Struct_IO10)arg1 mask:(SCD_Struct_IO10)arg2 RSSIThreshold:(char)arg3 packetType:(unsigned char)arg4 matchingCapacity:(char*)arg5 matchingRemaining:(char*)arg6 ;
-(int)BroadcomHCILERemoveAdvancedMatchingRule:(SCD_Struct_IO10)arg1 mask:(SCD_Struct_IO10)arg2 RSSIThreshold:(char)arg3 packetType:(unsigned char)arg4 matchingCapacity:(char*)arg5 matchingRemaining:(char*)arg6 ;
-(int)BroadcomHCILEAddAdvancedMatchingRuleWithAddress:(char)arg1 address:(BluetoothDeviceAddress*)arg2 blob:(SCD_Struct_IO10)arg3 mask:(SCD_Struct_IO10)arg4 RSSIThreshold:(char)arg5 packetType:(unsigned char)arg6 matchingCapacity:(char*)arg7 matchingRemaining:(char*)arg8 ;
-(int)BroadcomHCILERemoveAdvancedMatchingRuleWithAddress:(char)arg1 address:(BluetoothDeviceAddress*)arg2 blob:(SCD_Struct_IO10)arg3 mask:(SCD_Struct_IO10)arg4 RSSIThreshold:(char)arg5 packetType:(unsigned char)arg6 matchingCapacity:(char*)arg7 matchingRemaining:(char*)arg8 ;
-(int)BluetoothHCILERemoveExtendedAdvertisingInstance:(unsigned char)arg1 outLEextOpcode:(char*)arg2 ;
-(int)BluetoothHCILECreateExtendedAdvertisingInstance:(unsigned char)arg1 address:(BluetoothDeviceAddress*)arg2 outLEextOpcode:(char*)arg3 outHandle:(char*)arg4 ;
-(int)BluetoothHCILESetExtendedAdvertisingParameters:(unsigned char)arg1 advertisingIntervalMin:(unsigned short)arg2 advertisingIntervalMax:(unsigned short)arg3 advertisingType:(unsigned char)arg4 advertisingChannelMap:(unsigned char)arg5 advertisingFilterPolicy:(unsigned char)arg6 ;
-(int)BluetoothHCILESetExtendedAdvertisingData:(unsigned char)arg1 advertisingDataLength:(unsigned char)arg2 advertsingData:(char*)arg3 ;
-(int)BluetoothHCILESetExtendedScanResponseData:(unsigned char)arg1 scanResponseDataLength:(unsigned char)arg2 scanResponseData:(char*)arg3 ;
-(int)BluetoothHCILESetExtendedAdvertiseEnable:(unsigned char)arg1 advertiseEnable:(unsigned char)arg2 timeout:(unsigned)arg3 timeoutEvent:(unsigned char)arg4 ;
-(int)BluetoothHCICommandWriteClass15PowerTable:(unsigned char)arg1 radioTXPowerMode:(unsigned char)arg2 powerTableLength:(unsigned char)arg3 testModePowerTableLength:(unsigned char)arg4 powerTable:(char*)arg5 testPowerTable:(char*)arg6 ;
-(void)addDeviceToOutstandingRequests:(id)arg1 forHCIRequestID:(unsigned)arg2 ;
-(void)asyncHCIEventNotificationWithRef:(OpaqueIOBluetoothNotificationRefRef)arg1 subClass:(unsigned)arg2 data:(const void*)arg3 dataSize:(unsigned long long)arg4 ;
-(void)BluetoothHostControllerSetupCompleted;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)delegate;
-(int)setProperty:(id)arg1 forKey:(id)arg2 ;
@end

