/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:05 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalendarPersistence-Structs.h>
#import <CalendarPersistence/NSSecureCoding.h>

@class CALDate, CALDuration;

@interface CALTimeRange : NSObject <NSSecureCoding> {

	CALDate* _startDate;
	CALDate* _endDate;
	CALDuration* _duration;

}
+(char)supportsSecureCoding;
+(id)timeRangeWithStartDate:(id)arg1 withEndDate:(id)arg2 ;
+(id)timeRangeForDayEnglobing:(id)arg1 ;
+(id)timeRangeWithStartDate:(id)arg1 withDuration:(id)arg2 ;
+(id)timeRangeFromTimeRangeRoundedToFullDays:(id)arg1 ;
+(id)timeRangeUnboundedWithStartDate:(id)arg1 ;
+(id)timeRangeUnboundedWithEndDate:(id)arg1 ;
+(id)timeRangeFromTimeRange:(id)arg1 withShift:(id)arg2 ;
+(id)timeRangeUnbounded;
+(id)simplifyOverlappingTimeRanges:(id)arg1 ;
+(id)timeRangeForRecurrencesFromDate:(id)arg1 ;
+(id)timeRangeWithStartNSCalendarDate:(id)arg1 withEndNSCalendarDate:(id)arg2 ;
-(id)startDate;
-(void)dealloc;
-(id)duration;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqualTo:(id)arg1 ;
-(id)endDate;
-(id)initForDayEnglobing:(id)arg1 ;
-(id)initWithStartDate:(id)arg1 withDuration:(id)arg2 ;
-(id)initWithStartDate:(id)arg1 withEndDate:(id)arg2 ;
-(id)initUnboundedWithStartDate:(id)arg1 ;
-(id)initUnboundedWithEndDate:(id)arg1 ;
-(id)initFromTimeRange:(id)arg1 withShift:(id)arg2 ;
-(char)includesDate:(id)arg1 ;
-(char)intersectsTimeRangeExcludingBounds:(id)arg1 ;
-(char)includesDateExcludingBounds:(id)arg1 ;
-(char)intersectsTimeRange:(id)arg1 ;
-(char)includesOrEqualsTimeRange:(id)arg1 ;
-(id)initAsUnbounded;
-(char)isZeroDuration;
-(char)includesDateExcludingEndDate:(id)arg1 ;
-(char)intersectsTimeRangeExcludingUpperBound:(id)arg1 ;
-(char)strictlyIncludesTimeRange:(id)arg1 ;
-(long long)compareStartDate:(id)arg1 ;
-(id)union:(id)arg1 ;
-(id)intersection:(id)arg1 ;
-(id)minus:(id)arg1 ;
-(char)isInfinite;
@end

