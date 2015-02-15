/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:33:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/SystemProfiler/SPAirPortReporter.spreporter/Contents/MacOS/SPAirPortReporter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, SPAirPortNetwork, NSMutableArray, NSNumber, NSMutableString;

@interface SPAirPortInterface : NSObject {

	NSString* name;
	char networkServiceActive;
	char interfacePowered;
	char supportsWoW;
	char supportsAirDrop;
	SPAirPortNetwork* currentNetwork;
	NSMutableArray* localWirelessNetworks;
	NSString* wirelessCardType;
	NSString* locale;
	NSString* countryCode;
	NSString* fwVersion;
	NSString* status;
	NSNumber* txRate;
	NSNumber* mcs;
	NSString* macAddress;
	NSMutableString* supportedPHYModes;
	NSMutableArray* supportedChannels;

}

@property (retain) SPAirPortNetwork * currentNetwork; 
@property (retain) NSMutableArray * localWirelessNetworks; 
@property (assign) char interfacePowered; 
@property (assign) char networkServiceActive; 
@property (assign) char supportsWoW; 
@property (assign) char supportsAirDrop; 
@property (retain) NSString * wirelessCardType; 
@property (retain) NSString * locale; 
@property (retain) NSString * countryCode; 
@property (retain) NSString * fwVersion; 
@property (retain) NSString * name; 
@property (retain) NSString * status; 
@property (retain) NSString * macAddress; 
@property (retain) NSNumber * txRate; 
@property (retain) NSNumber * mcs; 
@property (retain) NSMutableArray * supportedChannels; 
@property (retain) NSMutableString * supportedPHYModes; 
+(id)interfaceWithName:(id)arg1 ;
-(void)populateIORegistryInfo;
-(void)setNetworkServiceActive:(char)arg1 ;
-(NSMutableArray *)supportedChannels;
-(NSString *)fwVersion;
-(void)populateDriverInfo;
-(void)setMacAddress:(NSString *)arg1 ;
-(void)setSupportedChannels:(NSMutableArray *)arg1 ;
-(NSNumber *)mcs;
-(id)locStringForWirelessCardLocale:(id)arg1 ;
-(void)setFwVersion:(NSString *)arg1 ;
-(NSMutableString *)supportedPHYModes;
-(char)supportsAirDrop;
-(void)setSupportsWoW:(char)arg1 ;
-(NSString *)wirelessCardType;
-(char)interfacePowered;
-(char)supportsWoW;
-(void)setLocalWirelessNetworks:(NSMutableArray *)arg1 ;
-(char)networkServiceActive;
-(void)setTxRate:(NSNumber *)arg1 ;
-(NSMutableArray *)localWirelessNetworks;
-(void)setSupportsAirDrop:(char)arg1 ;
-(void)performBroadcastScan;
-(NSString *)macAddress;
-(void)setInterfacePowered:(char)arg1 ;
-(void)setSupportedPHYModes:(NSMutableString *)arg1 ;
-(void)setMcs:(NSNumber *)arg1 ;
-(void)setWirelessCardType:(NSString *)arg1 ;
-(NSNumber *)txRate;
-(NSString *)countryCode;
-(SPAirPortNetwork *)currentNetwork;
-(void)setCurrentNetwork:(SPAirPortNetwork *)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)status;
-(void)setLocale:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 ;
-(NSString *)locale;
-(void)setStatus:(NSString *)arg1 ;
@end
