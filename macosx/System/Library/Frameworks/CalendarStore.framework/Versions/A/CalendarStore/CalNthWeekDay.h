/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CalendarStore.framework/Versions/A/CalendarStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarStore/CalendarStore-Structs.h>
#import <CalendarStore/NSCopying.h>

@interface CalNthWeekDay : NSObject <NSCopying> {

	unsigned long long _dayOfTheWeek;
	long long _weekNumber;

}

@property (readonly) unsigned long long dayOfTheWeek;              //@synthesize dayOfTheWeek=_dayOfTheWeek - In the implementation block
@property (readonly) long long weekNumber;                         //@synthesize weekNumber=_weekNumber - In the implementation block
+(id)nthWeekDayWithDayOfTheWeek:(unsigned long long)arg1 weekNumber:(long long)arg2 ;
-(id)initWithDayOfTheWeek:(unsigned long long)arg1 weekNumber:(long long)arg2 ;
-(unsigned long long)dayOfTheWeek;
-(long long)weekNumber;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
