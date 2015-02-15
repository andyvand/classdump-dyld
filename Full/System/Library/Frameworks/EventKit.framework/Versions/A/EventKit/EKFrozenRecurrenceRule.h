/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKFrozenObject.h>
#import <EventKit/EKProtocolRecurrenceRule.h>

@class NSNumber, NSArray, NSDate, NSString;

@interface EKFrozenRecurrenceRule : EKFrozenObject <EKProtocolRecurrenceRule> {

	NSNumber* countNumber;
	NSArray* daysOfTheMonth;
	NSArray* daysOfTheWeek;
	NSArray* daysOfTheYear;
	NSDate* endDate;
	NSNumber* firstDayOfTheWeekNumber;
	NSNumber* frequencyNumber;
	NSNumber* intervalNumber;
	NSArray* monthsOfTheYear;
	NSArray* setPositions;
	NSArray* weeksOfTheYear;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSNumber * countNumber; 
@property (nonatomic,copy,readonly) NSArray * daysOfTheMonth; 
@property (nonatomic,copy,readonly) NSArray * daysOfTheWeek; 
@property (nonatomic,copy,readonly) NSArray * daysOfTheYear; 
@property (nonatomic,copy,readonly) NSDate * endDate; 
@property (nonatomic,copy,readonly) NSNumber * firstDayOfTheWeekNumber; 
@property (nonatomic,copy,readonly) NSNumber * frequencyNumber; 
@property (nonatomic,copy,readonly) NSNumber * intervalNumber; 
@property (nonatomic,copy,readonly) NSArray * monthsOfTheYear; 
@property (nonatomic,copy,readonly) NSArray * setPositions; 
@property (nonatomic,copy,readonly) NSArray * weeksOfTheYear; 
+(id)ruleWithRule:(id)arg1 ;
+(Class)meltedClass;
+(int)ekFrequencyFromICSFrequency:(int)arg1 ;
+(int)intervalFromICSDate:(id)arg1 inTimezone:(id)arg2 ;
-(NSArray *)daysOfTheYear;
-(NSArray *)weeksOfTheYear;
-(NSNumber *)firstDayOfTheWeekNumber;
-(NSNumber *)frequencyNumber;
-(NSNumber *)intervalNumber;
-(NSNumber *)countNumber;
-(id)initWithRuleString:(id)arg1 ;
-(NSArray *)daysOfTheWeek;
-(NSArray *)daysOfTheMonth;
-(NSArray *)monthsOfTheYear;
-(NSArray *)setPositions;
-(NSDate *)endDate;
@end

