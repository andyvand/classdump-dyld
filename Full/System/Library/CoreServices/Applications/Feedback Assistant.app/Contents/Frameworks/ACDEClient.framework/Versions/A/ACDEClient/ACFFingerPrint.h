/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:50:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Feedback Assistant.app/Contents/Frameworks/ACDEClient.framework/Versions/A/ACDEClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ACDEClient/ACFObject.h>

@class NSString, NSDictionary, NSNumber;

@interface ACFFingerPrint : ACFObject {

	NSString* _checksum;
	NSString* _machineComputerName;
	NSString* _machineBonjourName;
	NSString* _machineModelName;
	NSString* _machineSerialNumber;
	NSDictionary* _machineMACAddresses;
	NSString* _machinePrimaryMACAddress;
	NSString* _machineBuildVersion;
	NSDictionary* _bootVolumeID;
	NSString* _hostUUID;
	NSString* _language;
	NSString* _timeZone;
	NSString* _region;
	NSNumber* _privateBrowsingEnabled;
	NSString* _productVersionKey;
	NSString* _productVersion;
	NSString* _ipAddress;

}

@property (retain) NSString * checksum;                              //@synthesize checksum=_checksum - In the implementation block
@property (retain) NSString * machineComputerName;                   //@synthesize machineComputerName=_machineComputerName - In the implementation block
@property (retain) NSString * machineBonjourName;                    //@synthesize machineBonjourName=_machineBonjourName - In the implementation block
@property (retain) NSString * machineModelName;                      //@synthesize machineModelName=_machineModelName - In the implementation block
@property (retain) NSString * machineSerialNumber;                   //@synthesize machineSerialNumber=_machineSerialNumber - In the implementation block
@property (retain) NSDictionary * machineMACAddresses;               //@synthesize machineMACAddresses=_machineMACAddresses - In the implementation block
@property (retain) NSString * machinePrimaryMACAddress;              //@synthesize machinePrimaryMACAddress=_machinePrimaryMACAddress - In the implementation block
@property (retain) NSString * machineBuildVersion;                   //@synthesize machineBuildVersion=_machineBuildVersion - In the implementation block
@property (retain) NSDictionary * bootVolumeID;                      //@synthesize bootVolumeID=_bootVolumeID - In the implementation block
@property (retain) NSString * hostUUID;                              //@synthesize hostUUID=_hostUUID - In the implementation block
@property (retain) NSString * language;                              //@synthesize language=_language - In the implementation block
@property (retain) NSString * timeZone;                              //@synthesize timeZone=_timeZone - In the implementation block
@property (retain) NSString * region;                                //@synthesize region=_region - In the implementation block
@property (retain) NSNumber * privateBrowsingEnabled;                //@synthesize privateBrowsingEnabled=_privateBrowsingEnabled - In the implementation block
@property (retain) NSString * productVersionKey;                     //@synthesize productVersionKey=_productVersionKey - In the implementation block
@property (retain) NSString * productVersion;                        //@synthesize productVersion=_productVersion - In the implementation block
@property (retain) NSString * ipAddress;                             //@synthesize ipAddress=_ipAddress - In the implementation block
+(id)fingerPrint;
+(id)keys;
-(NSString *)machinePrimaryMACAddress;
-(NSString *)machineModelName;
-(NSString *)machineBuildVersion;
-(id)dictionaryWithFields:(long long)arg1 ;
-(NSString *)machineComputerName;
-(NSString *)machineBonjourName;
-(NSDictionary *)machineMACAddresses;
-(NSDictionary *)bootVolumeID;
-(NSString *)productVersionKey;
-(NSString *)hostUUID;
-(id)stringRepresentationWithPlistFormat:(unsigned long long)arg1 ;
-(id)stringRepresentationWithPlistFormat:(unsigned long long)arg1 fields:(long long)arg2 ;
-(void)setChecksum:(NSString *)arg1 ;
-(void)setMachineComputerName:(NSString *)arg1 ;
-(void)setMachineBonjourName:(NSString *)arg1 ;
-(void)setMachineModelName:(NSString *)arg1 ;
-(void)setMachineSerialNumber:(NSString *)arg1 ;
-(void)setMachineMACAddresses:(NSDictionary *)arg1 ;
-(void)setMachinePrimaryMACAddress:(NSString *)arg1 ;
-(void)setMachineBuildVersion:(NSString *)arg1 ;
-(void)setBootVolumeID:(NSDictionary *)arg1 ;
-(void)setHostUUID:(NSString *)arg1 ;
-(void)setProductVersionKey:(NSString *)arg1 ;
-(void)setProductVersion:(NSString *)arg1 ;
-(NSString *)productVersion;
-(void)setPrivateBrowsingEnabled:(NSNumber *)arg1 ;
-(NSString *)machineSerialNumber;
-(NSString *)region;
-(id)stringRepresentation;
-(NSNumber *)privateBrowsingEnabled;
-(NSString *)checksum;
-(void)setIpAddress:(NSString *)arg1 ;
-(NSString *)ipAddress;
-(id)init;
-(void)dealloc;
-(id)dictionary;
-(NSString *)timeZone;
-(void)setTimeZone:(NSString *)arg1 ;
-(NSString *)language;
-(void)setRegion:(NSString *)arg1 ;
-(void)setLanguage:(NSString *)arg1 ;
@end
