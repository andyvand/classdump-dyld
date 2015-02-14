/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:42 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/Versions/A/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iCalendar/ICSComponent.h>

@class NSString;

@interface ICSTimeZone : ICSComponent {

	id _systemTimeZone;

}

@property (nonatomic,retain) NSString * tzid; 
+(id)timeZoneWithSystemTimeZoneName:(id)arg1 ;
+(id)blocksAfterDate:(id)arg1 untilDate:(id)arg2 forTimeZone:(id)arg3 ;
+(long long)matchTypeForSubarray:(id)arg1 inTZChangeArray:(id)arg2 ;
+(id)quickTimeZoneNames;
+(id)slowTimeZoneNames;
+(char)perfectMatchForSubarray:(id)arg1 inTZChangeArray:(id)arg2 ;
+(id)name;
-(id)initWithTimeZone:(id)arg1 fromDate:(id)arg2 options:(int)arg3 ;
-(id)getNSTimeZone:(id)arg1 ;
-(NSString *)tzid;
-(void)setTzid:(NSString *)arg1 ;
-(id)_previousDSTTransitionForDate:(id)arg1 timezone:(id)arg2 ;
-(id)initWithSystemTimeZone:(id)arg1 ;
-(id)computeTimeZoneChangeListFromDate:(id)arg1 toDate:(id)arg2 ;
-(id)getNSTimeZoneFromDate:(id)arg1 toDate:(id)arg2 ;
-(char)isEqualToNSTimeZone:(id)arg1 forDate:(id)arg2 ;
-(void)dealloc;
-(id)systemTimeZoneForDate:(id)arg1 ;
-(id)initWithSystemTimeZone:(id)arg1 fromDate:(id)arg2 options:(int)arg3 ;
@end

