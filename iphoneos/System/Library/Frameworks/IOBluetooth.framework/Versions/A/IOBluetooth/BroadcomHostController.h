/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IOBluetooth/IOBluetooth-Structs.h>
#import <IOBluetooth/IOBluetoothHostController.h>

@interface BroadcomHostController : IOBluetoothHostController
+(id)defaultController;
-(int)BluetoothHCIBroadcomBFCResume:(unsigned short)arg1 inDeviceAddress:(const BluetoothDeviceAddress*)arg2 inBFCResume:(BluetoothBroadcomBFCReconnectData*)arg3 ;
-(int)BluetoothHCIBroadcomReadRawRSSI:(unsigned short)arg1 outRSSI:(char*)arg2 ;
-(int)readVerboseConfigVersionInfo:(char*)arg1 outTargetID:(char*)arg2 outBaseline:(unsigned short*)arg3 outBuild:(unsigned short*)arg4 ;
-(int)BluetoothHCIBroadcomTagLEA:(unsigned long long)arg1 connectionHandle:(unsigned short)arg2 input:(char)arg3 channel:(char)arg4 ;
-(void)processRawEventData:(const void*)arg1 dataSize:(unsigned long long)arg2 ;
-(int)getControllerManufacturerName;
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
-(int)BluetoothHCIBroadcomARMMemoryPoke:(unsigned)arg1 inValue:(unsigned)arg2 outValue:(char*)arg3 ;
-(int)BluetoothHCIBroadcomARMMemoryPeek:(unsigned)arg1 outValue:(char*)arg2 ;
-(int)BluetoothHCIBroadcomSetTransmitPowerRange:(unsigned short)arg1 inMaxTxPower:(char)arg2 inMinTxPower:(char)arg3 ;
-(int)BluetoothHCIBroadcomRSSIMeasurements:(unsigned)arg1 inFrequency:(unsigned short)arg2 inAGCGainSetting:(unsigned char)arg3 outRSSIValue:(char*)arg4 ;
-(int)BluetoothHCIBroadcomDownloadMiniDriver;
-(int)BluetoothHCIBroadcomLaunchRAM:(unsigned)arg1 ;
-(int)BluetoothHCIBroadcomFactoryCommitBDADDR:(const BluetoothDeviceAddress*)arg1 inCommitBTWSecurityKey:(unsigned char)arg2 inBTWSecurityKey:(char*)arg3 ;
-(int)BluetoothHCIBroadcomSetTransmitCarrierFrequencyARM:(unsigned char)arg1 inCarrierFrequencyEncoded:(unsigned char)arg2 inMode:(unsigned char)arg3 inModulationType:(unsigned char)arg4 inTransmitPower:(unsigned char)arg5 inTXPowerdBm:(unsigned char)arg6 inTXPowerTableIndex:(unsigned char)arg7 ;
-(int)BluetoothHCIBroadcomWriteRAM:(unsigned)arg1 inLength:(unsigned char)arg2 inData:(char*)arg3 ;
-(int)BluetoothHCIBroadcomReadRAM:(unsigned)arg1 inLength:(unsigned char)arg2 outData:(char*)arg3 ;
-(int)BluetoothHCIBroadcomFactoryCalSetTxPower:(unsigned char)arg1 inChannel:(unsigned char)arg2 inTransmitPower:(unsigned char)arg3 inPadVal:(unsigned char)arg4 outPadVal:(char*)arg5 ;
-(int)BluetoothHCIBroadcomFactoryCalTrimTxPower:(unsigned char)arg1 outPadVal:(char*)arg2 ;
-(int)BluetoothHCIBroadcomFactoryCalReadTemp:(char*)arg1 ;
-(int)BluetoothHCIBroadcomFactoryCalUpdateTxTable:(char*)arg1 ;
-(int)BluetoothHCIBroadcomFactoryCalReadTable:(unsigned char)arg1 outChoice:(char*)arg2 outTable:(char*)arg3 ;
-(int)BluetoothHCIBroadcomFactoryCalRxRSSITest:(unsigned char)arg1 inChannel:(unsigned char)arg2 inPower:(unsigned char)arg3 inGainRange:(unsigned char)arg4 inMode:(unsigned char)arg5 outCalStatus:(char*)arg6 outTCARSSIIL0P1db:(char*)arg7 ;
-(int)BluetoothHCIBroadcomFactoryCalRxRSSITable:(char*)arg1 ;
-(int)BluetoothHCIBroadcomStoreFactoryCalibrationData:(unsigned char)arg1 inVersion:(unsigned char)arg2 inLength:(unsigned short)arg3 inCalData:(char*)arg4 ;
-(int)BluetoothHCIBroadcomSectorErase:(unsigned)arg1 ;
-(int)BluetoothHCIBroadcomUARTSetSleepmodeParam:(unsigned char)arg1 inIdleThresholdHost:(unsigned char)arg2 inIdleThresholdHC:(unsigned char)arg3 inBTWAKEActiveMode:(unsigned char)arg4 inHOSTWAKEActiveMode:(unsigned char)arg5 inAllowHostSleepDuringSCO:(unsigned char)arg6 inCombineSleepModeAndLPM:(unsigned char)arg7 inEnableTristateControlOfUARTTxLine:(unsigned)arg8 inPulsedHOSTWAKE:(unsigned char)arg9 ;
-(id)init;
@end

