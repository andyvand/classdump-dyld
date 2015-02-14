/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, CALDate;

@interface CALvCALRecurrence : NSObject {

	int _type;
	long long _interval;
	char _has_duration;
	long long _duration;
	NSMutableArray* _occurrencelist;
	NSMutableArray* _daynumberlist;
	char _has_monthlist;
	NSMutableArray* _monthlist;
	NSMutableArray* _daylist;
	NSMutableArray* _weekday_list;
	CALDate* _end_date;

}
-(id)init;
-(void)dealloc;
-(int)type;
-(char)decode_daily:(const char**)arg1 ;
-(char)decode_weekly:(const char**)arg1 ;
-(char)decode_monthly_by_pos:(const char**)arg1 ;
-(char)decode_monthly_by_day:(const char**)arg1 ;
-(char)decode_yearly_by_month:(const char**)arg1 ;
-(char)decode_yearly_by_day:(const char**)arg1 ;
-(char)decode_interval:(const char**)arg1 ;
-(char)decode_duration:(const char**)arg1 ;
-(char)decode_weekday_list:(const char**)arg1 ;
-(char)decode_occurrencelist:(const char**)arg1 ;
-(char)decode_daynumberlist:(const char**)arg1 ;
-(char)decode_monthlist:(const char**)arg1 ;
-(char)decode_daylist:(const char**)arg1 ;
-(char)decode_digits:(const char**)arg1 withResult:(long long*)arg2 ;
-(id)initWithStr:(const char*)arg1 withGlobalTz:(id)arg2 ;
@end

