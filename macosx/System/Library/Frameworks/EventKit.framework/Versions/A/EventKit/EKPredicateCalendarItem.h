/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKPredicate.h>

@class NSString;

@interface EKPredicateCalendarItem : EKPredicate {

	char _disableBackingStoreUpdate;
	int _sortOrder;
	NSString* _title;
	NSString* _calendarTitle;
	unsigned long long _maxResults;
	NSString* _searchTerm;

}

@property (nonatomic,retain) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * calendarTitle;                    //@synthesize calendarTitle=_calendarTitle - In the implementation block
@property (assign,nonatomic) unsigned long long maxResults;               //@synthesize maxResults=_maxResults - In the implementation block
@property (nonatomic,retain) NSString * searchTerm;                       //@synthesize searchTerm=_searchTerm - In the implementation block
@property (assign,nonatomic) int sortOrder;                               //@synthesize sortOrder=_sortOrder - In the implementation block
@property (assign,nonatomic) char disableBackingStoreUpdate;              //@synthesize disableBackingStoreUpdate=_disableBackingStoreUpdate - In the implementation block
+(id)predicateWithCalendars:(id)arg1 ;
+(char)string:(id)arg1 containsSubstring:(id)arg2 ;
-(void)setSearchTerm:(NSString *)arg1 ;
-(id)initWithCalendars:(id)arg1 ;
-(NSString *)searchTerm;
-(char)disableBackingStoreUpdate;
-(char)isEventQuery;
-(id)mdQueryString;
-(char)_includeCalendarTitleInSearchTerm;
-(void)setDisableBackingStoreUpdate:(char)arg1 ;
-(unsigned long long)maxResults;
-(void)setMaxResults:(unsigned long long)arg1 ;
-(void)setSortOrder:(int)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(char)evaluateWithObject:(id)arg1 ;
-(int)sortOrder;
-(Class)entityClass;
-(void)setCalendarTitle:(NSString *)arg1 ;
-(NSString *)calendarTitle;
@end

