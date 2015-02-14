/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPredicate.h>
#import <EventKit/CalDateRangeProtocol.h>

@class NSDate, NSTimeZone, NSString;

@interface EKEventPredicate : EKPredicate <CalDateRangeProtocol> {

	NSDate* _startDate;
	NSDate* _endDate;
	NSTimeZone* _timeZone;
	long long _prefetchHint;

}

@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) NSTimeZone * timeZone; 
@property (nonatomic,readonly) long long prefetchHint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 prefetchHint:(long long)arg5 ;
+(id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendarIdentifiers:(id)arg4 prefetchHint:(long long)arg5 ;
+(id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 ;
-(NSDate *)startDate;
-(long long)prefetchHint;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 prefetchHint:(long long)arg5 ;
-(id)predicateFormat;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)evaluateWithObject:(id)arg1 ;
-(NSTimeZone *)timeZone;
-(NSDate *)endDate;
@end

