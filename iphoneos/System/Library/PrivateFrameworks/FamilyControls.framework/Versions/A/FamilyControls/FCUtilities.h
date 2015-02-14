/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:47 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FamilyControls.framework/Versions/A/FamilyControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface FCUtilities : NSObject
+(id)timeSpanStringWithFromHour:(int)arg1 fromMinute:(int)arg2 toHour:(int)arg3 toMinute:(int)arg4 ;
+(id)timeDurationStringForSeconds:(int)arg1 ;
+(id)shortTimeDurationStringForSeconds:(int)arg1 includeSeconds:(char)arg2 ;
+(id)timeStringWithHourIndex:(int)arg1 ;
+(id)timeStringWithHourIndex:(int)arg1 minuteIndex:(int)arg2 twentyFour:(char)arg3 ;
+(void)fcdReadOverridesFor:(unsigned)arg1 ;
+(void)fcdResetUsageDataFor:(unsigned)arg1 ;
+(void)fcdReadSettingsFor:(unsigned)arg1 ;
+(void)fcdSaveUsageDataFor:(unsigned)arg1 ;
+(void)fcdListeningStatusChanged;
+(void)kickMCXDForUID:(unsigned)arg1 ;
@end

