/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CalendarStore.framework/Versions/A/CalendarStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarStore/CalendarStore-Structs.h>
#import <CalendarStore/CalCalendarItem.h>

@class NSDate;

@interface CalTask : CalCalendarItem {

	NSDate* _dueDate;
	unsigned long long _priority;
	NSDate* _completedDate;

}

@property (copy) NSDate * dueDate;                           //@synthesize dueDate=_dueDate - In the implementation block
@property (assign) unsigned long long priority;              //@synthesize priority=_priority - In the implementation block
@property (assign) char isCompleted; 
@property (copy) NSDate * completedDate;                     //@synthesize completedDate=_completedDate - In the implementation block
+(id)task;
+(id)exchangeConversionLocalizedMessage;
+(id)exchangeConversionLocalizedInfo;
+(id)exchangeConversionLocalizedPluralMessage;
+(id)exchangeConversionLocalizedPluralInfo;
+(id)taskFromRemoteManagedObject:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPriority:(unsigned long long)arg1 ;
-(unsigned long long)priority;
-(char)isExchangeCompatible;
-(NSDate *)dueDate;
-(char)isCompleted;
-(void)setDueDate:(NSDate *)arg1 ;
-(void)makeExchangeCompatible;
-(NSDate *)completedDate;
-(void)setCompletedDate:(NSDate *)arg1 ;
-(id)remoteManagedTaskFromTask;
-(id)initWithTitle:(id)arg1 UID:(id)arg2 ;
-(id)nextAlarmDate;
-(void)setIsCompleted:(char)arg1 ;
@end

