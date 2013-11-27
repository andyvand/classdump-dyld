/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:45:57 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface NotificationManager : NSObject {

	int* listThermalSensorToken;
	int thermalStatusToken;
	int thermalPressureLevelToken;
	int totalSensors;
	BOOL includeSolarInfo;

}

@property (assign,nonatomic) BOOL includeSolarInfo; 
-(void)updateThermalNotification:(unsigned long long)arg1 ;
-(void)updateThermalPressureLevelNotification:(unsigned long long)arg1 ;
-(void)updateNotifyTokens;
-(void)updateMaxValueToken:(unsigned long long)arg1 ;
-(id)init:(int)arg1 withSolarInfo:(BOOL)arg2 ;
-(BOOL)includeSolarInfo;
-(void)setIncludeSolarInfo:(BOOL)arg1 ;
-(void)dealloc;
@end
