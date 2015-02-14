/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSNumber, NSArray, NSDate;


@protocol EKProtocolRecurrenceRule <NSObject>
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
@required
-(NSArray *)daysOfTheYear;
-(NSArray *)weeksOfTheYear;
-(NSNumber *)firstDayOfTheWeekNumber;
-(NSNumber *)frequencyNumber;
-(NSNumber *)intervalNumber;
-(NSNumber *)countNumber;
-(NSArray *)daysOfTheWeek;
-(NSArray *)daysOfTheMonth;
-(NSArray *)monthsOfTheYear;
-(NSArray *)setPositions;
-(NSDate *)endDate;

@end

