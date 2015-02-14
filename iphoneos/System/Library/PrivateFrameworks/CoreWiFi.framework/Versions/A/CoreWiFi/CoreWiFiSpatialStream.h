/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:47 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/Versions/A/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CoreWiFiSpatialStream : NSObject {

	char txEnabled;
	char rxEnabled;
	long long txPowerOffset;
	char allowAck;
	char allowThermalThrottle;
	long long rssiControl;
	long long rssiExtension;
	long long noiseControl;
	long long noiseExtension;

}

@property (assign,nonatomic) char txEnabled; 
@property (assign,nonatomic) char rxEnabled; 
@property (assign,nonatomic) long long txPowerOffset; 
@property (assign,nonatomic) char allowAck; 
@property (assign,nonatomic) char allowThermalThrottle; 
@property (assign,nonatomic) long long rssiControl; 
@property (assign,nonatomic) long long rssiExtension; 
@property (assign,nonatomic) long long noiseControl; 
@property (assign,nonatomic) long long noiseExtension; 
-(id)initWithSkeleton:(id)arg1 ;
-(char)txEnabled;
-(void)setTxEnabled:(char)arg1 ;
-(char)rxEnabled;
-(void)setRxEnabled:(char)arg1 ;
-(long long)txPowerOffset;
-(void)setTxPowerOffset:(long long)arg1 ;
-(char)allowAck;
-(void)setAllowAck:(char)arg1 ;
-(char)allowThermalThrottle;
-(void)setAllowThermalThrottle:(char)arg1 ;
-(long long)rssiControl;
-(void)setRssiControl:(long long)arg1 ;
-(long long)rssiExtension;
-(void)setRssiExtension:(long long)arg1 ;
-(long long)noiseControl;
-(void)setNoiseControl:(long long)arg1 ;
-(long long)noiseExtension;
-(void)setNoiseExtension:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)skeleton;
@end

