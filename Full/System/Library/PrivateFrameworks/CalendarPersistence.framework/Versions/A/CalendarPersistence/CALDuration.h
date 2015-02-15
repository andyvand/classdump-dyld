/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalendarPersistence-Structs.h>
#import <CalendarPersistence/NSSecureCoding.h>

@interface CALDuration : NSObject <NSSecureCoding> {

	double _duration;

}
+(char)supportsSecureCoding;
+(id)durationWithDays:(int)arg1 ;
+(id)durationWithHours:(int)arg1 ;
+(id)durationWithMinutes:(int)arg1 ;
+(id)durationWithSeconds:(int)arg1 ;
+(id)durationWithDays:(int)arg1 hours:(int)arg2 ;
+(id)durationWithDays:(int)arg1 hours:(int)arg2 minutes:(int)arg3 ;
+(id)durationWithDays:(int)arg1 hours:(int)arg2 minutes:(int)arg3 seconds:(int)arg4 ;
+(id)durationWithDurationRoundedToDay:(id)arg1 ;
+(id)durationWithDurationWithoutDayPart:(id)arg1 ;
+(id)durationWithRawInterval:(double)arg1 ;
-(void)inverse;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqualTo:(id)arg1 ;
-(int)daysPart;
-(int)hoursPart;
-(int)minutesPart;
-(int)secondsPart;
-(id)initWithDays:(int)arg1 hours:(int)arg2 minutes:(int)arg3 seconds:(int)arg4 ;
-(id)initWithDurationRoundedToDay:(id)arg1 ;
-(id)initWithDurationWithoutDayPart:(id)arg1 ;
-(double)rawInterval;
-(id)initWithDays:(int)arg1 ;
-(id)initWithRawInterval:(double)arg1 ;
-(id)humanReadableDescriptionIncludeZero:(char)arg1 ;
-(id)humanReadableDescriptionIncludeZero:(char)arg1 abbreviate:(char)arg2 ;
-(id)humanReadableDescriptionIncludeZero:(char)arg1 abbreviate:(char)arg2 allDayEvent:(char)arg3 includeBeforeOrAfter:(char)arg4 ;
-(id)humanReadableDescriptionIncludeZero:(char)arg1 abbreviate:(char)arg2 allDayEvent:(char)arg3 includeBeforeOrAfter:(char)arg4 includeTravel:(char)arg5 includeAlert:(char)arg6 ;
-(id)initWithHours:(int)arg1 ;
-(id)initWithMinutes:(int)arg1 ;
-(id)initWithSeconds:(int)arg1 ;
-(id)initWithDays:(int)arg1 hours:(int)arg2 ;
-(id)initWithDays:(int)arg1 hours:(int)arg2 minutes:(int)arg3 ;
-(id)durationRoundedToDay;
-(void)setRawInterval:(double)arg1 ;
-(char)isLongerThan:(id)arg1 ;
-(char)isNegative;
-(id)humanReadableDescription;
-(id)initWithISO8601String:(const char*)arg1 ;
@end

