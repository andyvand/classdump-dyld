/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/Versions/A/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iCalendar/ICSDateValue.h>
#import <iCalendar/NSCoding.h>

@interface ICSDateTimeValue : ICSDateValue <NSCoding> {

	long long _hour;
	long long _minute;
	long long _second;

}

@property (readonly) long long hour;                //@synthesize hour=_hour - In the implementation block
@property (readonly) long long minute;              //@synthesize minute=_minute - In the implementation block
@property (readonly) long long second;              //@synthesize second=_second - In the implementation block
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)components;
-(long long)hour;
-(long long)minute;
-(long long)second;
-(int)dateType;
-(id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 ;
-(id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 ;
@end

