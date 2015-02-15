/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:57:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/sbin/bluetoothaudiod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AVStreamEndpoint, NSMutableArray, NSMutableDictionary;

@interface AVStreamConfiguration : NSObject {

	AVStreamEndpoint* _SEP;
	char _isConfigured;
	char _isInitialized;
	char _configIsLocked;
	NSMutableArray* _boolOnlyKeys;
	NSMutableArray* _firstRunKeys;
	NSMutableArray* _SBCCodecKeys;
	NSMutableArray* _MPEG24CodecKeys;
	NSMutableArray* _aptXCodecKeys;
	NSMutableArray* _reconfigurableKeys;
	NSMutableArray* _nonConfigurableKeys;
	NSMutableDictionary* _capabilities;
	NSMutableDictionary* _configuration;
	NSMutableDictionary* _reconfiguration;
	NSMutableDictionary* _testConfiguration;
	unsigned mBitpoolMax;
	unsigned mBitpoolMin;
	unsigned mBitpoolCurrent;

}
-(id)initWithSEP:(id)arg1 ;
-(int)resetCapabilities;
-(int)setCapability:(id)arg1 forKey:(id)arg2 ;
-(char)confirmCapabilities;
-(int)mergeCapabilitiesWith:(id)arg1 ;
-(char*)configurationAsData:(unsigned*)arg1 ;
-(char*)reconfigurationAsData:(unsigned*)arg1 ;
-(int)setCapabilitiesFromData:(char*)arg1 dataSize:(unsigned)arg2 ;
-(id)keyForServiceCategory:(int)arg1 ;
-(char)confirmConfiguration;
-(id)configurationForKey:(id)arg1 ;
-(id)setConfigurationFromData:(char*)arg1 dataSize:(unsigned)arg2 ;
-(char)confirmReconfiguration;
-(char*)capabilitiesAsData:(unsigned*)arg1 ;
-(int)validateConfiguration:(char*)arg1 dataSize:(unsigned)arg2 ;
-(int)serviceCategoryForKey:(id)arg1 ;
-(int)validateReconfigureCapabilities:(char*)arg1 dataSize:(unsigned)arg2 ;
-(id)setReconfigurationFromData:(char*)arg1 dataSize:(unsigned)arg2 ;
-(void)loadBitpoolValues;
-(id)capabilityForKey:(id)arg1 ;
-(char*)getDataFromDictionary:(id)arg1 dataSize:(char*)arg2 ;
-(int)parseData:(char*)arg1 withSize:(int)arg2 intoDictionary:(id)arg3 ;
-(id)setConfigurationFromData:(char*)arg1 dataSize:(unsigned)arg2 applyChanges:(char)arg3 ;
-(int)setConfiguration:(id)arg1 forKey:(id)arg2 ;
-(int)resetConfigurations;
-(id)getKeysFromDictionary:(id)arg1 ;
-(id)capabilityKeys;
-(id)reconfigurationKeys;
-(id)configurationKeys;
-(id)getStringsFromDictionary:(id)arg1 ;
-(id)reconfigurationForKey:(id)arg1 ;
-(int)setReconfiguration:(id)arg1 forKey:(id)arg2 ;
-(char)hasCapabilities;
-(id)verifyCodecProperty:(id)arg1 forKey:(id)arg2 ;
-(char)isConfigured;
-(void)dealloc;
-(id)description;
@end
