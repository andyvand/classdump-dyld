/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/Versions/A/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarFoundation/CalendarFoundation-Structs.h>
#import <CalendarFoundation/NSCopying.h>
#import <CalendarFoundation/CalDateRangeProtocol.h>
#import <CalendarFoundation/NSSecureCoding.h>

@class NSDate, NSString;

@interface CalDateRange : NSObject <NSCopying, CalDateRangeProtocol, NSSecureCoding> {

	NSDate* _startDate;
	NSDate* _endDate;

}

@property (retain) NSDate * startDate;                              //@synthesize startDate=_startDate - In the implementation block
@property (retain) NSDate * endDate;                                //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) double duration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)rangeByExpandingRange:(id)arg1 direction:(long long)arg2 duration:(double)arg3 ;
+(id)rangeWithRange:(id)arg1 ;
+(id)rangeByExpandingRange:(id)arg1 direction:(long long)arg2 multiplier:(unsigned long long)arg3 ;
+(char)supportsSecureCoding;
+(id)rangeWithStartDate:(id)arg1 endDate:(id)arg2 ;
+(id)rangeWithStartDate:(id)arg1 duration:(double)arg2 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(char)intersectsRangeWithStartDate:(id)arg1 endDate:(id)arg2 allowSinglePointIntersection:(char)arg3 ;
-(id)initWithStartDate:(id)arg1 duration:(double)arg2 ;
-(char)intersectsRange:(id)arg1 allowSinglePointIntersection:(char)arg2 ;
-(id)_calculateMidnightsInCalendar:(id)arg1 ;
-(void)setStartDate:(id)arg1 duration:(double)arg2 ;
-(void)setDuration:(double)arg1 ;
-(double)duration;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isValid;
-(NSDate *)endDate;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setStartDate:(id)arg1 endDate:(id)arg2 ;
-(char)containsDate:(id)arg1 ;
-(char)containsRange:(id)arg1 ;
-(char)intersectsRange:(id)arg1 ;
-(id)intersectionWithRange:(id)arg1 ;
-(id)unionRange:(id)arg1 ;
-(id)briefDescription;
-(id)midpoint;
-(id)subtractRange:(id)arg1 ;
-(id)midnightsForRangeInTimeZoneString:(id)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
@end

