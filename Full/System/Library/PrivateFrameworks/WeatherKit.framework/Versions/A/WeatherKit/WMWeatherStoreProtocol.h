/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:00 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/WeatherKit.framework/Versions/A/WeatherKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WMWeatherStoreProtocol <NSObject>
@required
-(void)weatherForCoordinate:(SCD_Struct_WM1)arg1 atDate:(id)arg2 result:(/*^block*/id)arg3;
-(void)almanacWeatherForCoordinate:(SCD_Struct_WM1)arg1 atDate:(id)arg2 result:(/*^block*/id)arg3;
-(void)historicalWeatherForCoordinate:(SCD_Struct_WM1)arg1 atDate:(id)arg2 result:(/*^block*/id)arg3;
-(void)forecastForCoordinate:(SCD_Struct_WM1)arg1 atDate:(id)arg2 result:(/*^block*/id)arg3;
-(void)currentDailyForecastForCoordinate:(SCD_Struct_WM1)arg1 result:(/*^block*/id)arg2;
-(void)currentHourlyForecastForCoordinate:(SCD_Struct_WM1)arg1 result:(/*^block*/id)arg2;
-(void)currentConditionsForCoordinate:(SCD_Struct_WM1)arg1 result:(/*^block*/id)arg2;

@end
