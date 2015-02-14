/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CALOccurrence.h>

@class CALDate, CALDuration, CalEventOccurrence;

@interface CoreEventOccurrence : CALOccurrence {

	CALDate* _cachedEndDate;
	CALDuration* _cachedDuration;
	CalEventOccurrence* _regularOccurrence;

}

@property (nonatomic,retain) CalEventOccurrence * regularOccurrence;              //@synthesize regularOccurrence=_regularOccurrence - In the implementation block
-(void)setStartDate:(id)arg1 ;
-(id)summary;
-(void)dealloc;
-(id)duration;
-(id)objectForKey:(id)arg1 ;
-(void)restore;
-(id)endDate;
-(id)event;
-(id)initWithOccurrableEntity:(id)arg1 withStartDate:(id)arg2 ;
-(void)invalidateCachedEndDate;
-(void)setEndDate:(id)arg1 ;
-(void)moveToStartDate:(id)arg1 ;
-(void)setStartDateAndTimeZone:(id)arg1 ;
-(char)isFullDayOccurrence;
-(id)commitDateTimeChangeWithDelegate:(id)arg1 withEntityTimeZone:(char)arg2 inManagedObjectContext:(id)arg3 ;
-(id)commitWithDelegate:(id)arg1 commitWholeRecurrence:(char)arg2 inManagedObjectContext:(id)arg3 ;
-(void)setStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)timeRangeForFullDayOccurrence;
-(id)commitDateTimeChangeWithDelegate:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(char)deleteWithDelegate:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)makeEntityFromOccurrence;
-(id)commitWithDelegate:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(CalEventOccurrence *)regularOccurrence;
-(void)setRegularOccurrence:(CalEventOccurrence *)arg1 ;
-(id)startNSCalendarDate;
-(id)transformIntoTodo;
@end

