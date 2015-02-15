/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPredicateCalendarItem.h>

@class NSString, NSDate;

@interface EKReminderPredicate : EKPredicateCalendarItem {

	char _limitToCompletedOrIncomplete;
	char _completed;
	char _useDueDateAsCompletionDate;
	char _useCompletionDateAsAlternate;
	int _sortOrder;
	NSString* _title;
	NSString* _calendarTitle;
	NSDate* _dueAfter;
	NSDate* _dueBefore;
	NSString* _searchTerm;
	unsigned long long _maxResults;

}

@property (assign,nonatomic) char limitToCompletedOrIncomplete;              //@synthesize limitToCompletedOrIncomplete=_limitToCompletedOrIncomplete - In the implementation block
@property (assign,nonatomic) char completed;                                 //@synthesize completed=_completed - In the implementation block
@property (nonatomic,retain) NSDate * dueAfter;                              //@synthesize dueAfter=_dueAfter - In the implementation block
@property (nonatomic,retain) NSDate * dueBefore;                             //@synthesize dueBefore=_dueBefore - In the implementation block
@property (assign,nonatomic) char useCompletionDateAsAlternate;              //@synthesize useCompletionDateAsAlternate=_useCompletionDateAsAlternate - In the implementation block
@property (assign,nonatomic) char useDueDateAsCompletionDate;                //@synthesize useDueDateAsCompletionDate=_useDueDateAsCompletionDate - In the implementation block
+(id)predicateWithCalendars:(id)arg1 ;
-(void)setUseDueDateAsCompletionDate:(char)arg1 ;
-(void)setLimitToCompletedOrIncomplete:(char)arg1 ;
-(void)setDueAfter:(NSDate *)arg1 ;
-(void)setDueBefore:(NSDate *)arg1 ;
-(void)setUseCompletionDateAsAlternate:(char)arg1 ;
-(void)setSearchTerm:(id)arg1 ;
-(id)initWithCalendars:(id)arg1 ;
-(char)hasFastPathWithStore:(id)arg1 ;
-(id)fastPathResultWithStore:(id)arg1 ;
-(id)searchTerm;
-(char)isEventQuery;
-(id)mdQueryString;
-(char)_includeCalendarTitleInSearchTerm;
-(char)limitToCompletedOrIncomplete;
-(NSDate *)dueAfter;
-(NSDate *)dueBefore;
-(char)useCompletionDateAsAlternate;
-(char)useDueDateAsCompletionDate;
-(char)_isReminderCompletionExactly;
-(char)_isCalendarsExactly;
-(char)_isRemindersWithDueDatesExactly;
-(char)_isSubsetOfRemindersWithDueDatesExactly;
-(char)_isSubsetOfRemindersCompletionExactly;
-(unsigned long long)maxResults;
-(void)setMaxResults:(unsigned long long)arg1 ;
-(void)setSortOrder:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(char)evaluateWithObject:(id)arg1 ;
-(int)sortOrder;
-(char)completed;
-(void)setCompleted:(char)arg1 ;
-(Class)entityClass;
-(void)setCalendarTitle:(id)arg1 ;
-(id)calendarTitle;
@end

