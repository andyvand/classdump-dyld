/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CALWeekDayNumber : NSObject {

	int _number;
	unsigned long long _day;

}
+(id)weekDayNumberWithDay:(unsigned long long)arg1 withNumber:(int)arg2 ;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)day;
-(id)setDay:(unsigned long long)arg1 ;
-(long long)number;
-(id)initWithDay:(unsigned long long)arg1 withNumber:(int)arg2 ;
-(id)setNumber:(long long)arg1 ;
-(long long)compareDay:(id)arg1 ;
@end

