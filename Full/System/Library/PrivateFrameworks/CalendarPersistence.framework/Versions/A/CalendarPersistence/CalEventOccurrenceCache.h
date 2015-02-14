/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSManagedObjectContext, CalDateRange, CalEventOccurrenceCacheData, NSSet;

@interface CalEventOccurrenceCache : NSObject {

	NSManagedObjectContext* _managedObjectContext;
	CalDateRange* _range;
	CalDateRange* _bufferRange;
	long long _directionOfRangeChange;
	char _prefetchAttendees;
	char _foregroundResetCompleted;
	char _isMainWindowCache;
	unsigned long long _generationCounter;
	CalEventOccurrenceCacheData* _cacheData;
	NSSet* _calendarIDs;
	char _bestGuessCalendarIDs;

}

@property (assign) char prefetchAttendees;                                     //@synthesize prefetchAttendees=_prefetchAttendees - In the implementation block
@property (retain) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (retain) NSSet * calendarIDs;                                        //@synthesize calendarIDs=_calendarIDs - In the implementation block
@property (assign) char bestGuessCalendarIDs;                                  //@synthesize bestGuessCalendarIDs=_bestGuessCalendarIDs - In the implementation block
@property (readonly) double duration; 
@property (copy) CalDateRange * range;                                         //@synthesize range=_range - In the implementation block
@property (copy) CalDateRange * bufferRange;                                   //@synthesize bufferRange=_bufferRange - In the implementation block
@property (readonly) char everFilledCache; 
@property (assign) char foregroundResetCompleted;                              //@synthesize foregroundResetCompleted=_foregroundResetCompleted - In the implementation block
@property (assign) char isMainWindowCache;                                     //@synthesize isMainWindowCache=_isMainWindowCache - In the implementation block
@property (assign) unsigned long long generationCounter;                       //@synthesize generationCounter=_generationCounter - In the implementation block
+(void)initialize;
+(unsigned long long)weeksNotPrunedBehindDirectionOfRangeChange;
+(id)calendarsFromIDs:(id)arg1 withContext:(id)arg2 ;
+(id)occurrencesBetweenStartDate:(id)arg1 endDate:(id)arg2 onCalendars:(id)arg3 prefetchAttendees:(char)arg4 inManagedObjectContext:(id)arg5 drainPool:(char)arg6 ;
+(id)fetchForEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 usingTimeZone:(id)arg3 localUIDs:(id)arg4 excludingLocalUIDs:(id)arg5 inCalendars:(id)arg6 managedObjectContext:(id)arg7 ;
+(id)eventsBetweenStartDate:(id)arg1 endDate:(id)arg2 usingTimeZone:(id)arg3 localUIDs:(id)arg4 excludingLocalUIDs:(id)arg5 inCalendars:(id)arg6 prefetchAttendees:(char)arg7 managedObjectContext:(id)arg8 ;
+(id)eventsBetweenStartDate:(id)arg1 endDate:(id)arg2 localUIDs:(id)arg3 excludingLocalUIDs:(id)arg4 inCalendars:(id)arg5 prefetchAttendees:(char)arg6 managedObjectContext:(id)arg7 ;
+(id)occurrencesBetweenStartDate:(id)arg1 endDate:(id)arg2 onCalendars:(id)arg3 prefetchAttendees:(char)arg4 inManagedObjectContext:(id)arg5 ;
+(id)occurrencesBetweenStartDate:(id)arg1 endDate:(id)arg2 onCalendars:(id)arg3 prefetchAttendees:(char)arg4 inManagedObjectContext:(id)arg5 sortWithSelector:(SEL)arg6 ;
+(void)setWeeksNotPrunedBehindDirectionOfRangeChange:(unsigned long long)arg1 ;
+(void)setLowWaterWeeksBuffer:(unsigned long long)arg1 ;
+(void)setHighWaterWeeksBuffer:(unsigned long long)arg1 ;
-(void)finalize;
-(void)dealloc;
-(unsigned long long)count;
-(double)duration;
-(id)description;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(void)reset;
-(char)isValid;
-(CalDateRange *)range;
-(NSManagedObjectContext *)managedObjectContext;
-(void)managedObjectContextDidSave:(id)arg1 ;
-(char)setStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)setRange:(CalDateRange *)arg1 ;
-(void)setCalendarIDs:(NSSet *)arg1 ;
-(void)setPrefetchAttendees:(char)arg1 ;
-(void)setGenerationCounter:(unsigned long long)arg1 ;
-(void)managedObjectContextDidChange:(id)arg1 ;
-(void)managedObjectContextDidMergeChanges:(id)arg1 ;
-(void)managedObjectContextDidAddChildContext:(id)arg1 ;
-(void)managedObjectContextDidRemoveChildContext:(id)arg1 ;
-(void)calendarStoreReset:(id)arg1 ;
-(void)setIsMainWindowCache:(char)arg1 ;
-(id)initWithRange:(id)arg1 calendars:(id)arg2 inManagedObjectContext:(id)arg3 ;
-(id)occurrencesInRange:(id)arg1 withCalendarIDs:(id)arg2 ;
-(id)occurrenceForOccurrenceID:(id)arg1 ;
-(unsigned long long)lowWaterWeeksBuffer;
-(CalDateRange *)bufferRange;
-(unsigned long long)highWaterWeeksBuffer;
-(id)fullRange;
-(NSSet *)calendarIDs;
-(void)setBestGuessCalendarIDs:(char)arg1 ;
-(void)setBufferRange:(CalDateRange *)arg1 ;
-(id)_lowWaterBufferForNewRange:(id)arg1 ;
-(void)requestRange:(id)arg1 fromReset:(char)arg2 ;
-(id)_highWaterBufferForNewRange:(id)arg1 ;
-(char)setStartDate:(id)arg1 endDate:(id)arg2 calendarIDs:(id)arg3 ;
-(char)bestGuessCalendarIDs;
-(void)logForStartDate:(id)arg1 message:(id)arg2 ;
-(unsigned long long)generationCounter;
-(id)cacheSerialQueue;
-(char)_stillWantsRange:(id)arg1 ;
-(id)_guessMainWindowCalendarsInContext:(id)arg1 ;
-(char)prefetchAttendees;
-(void)_notifySimpleRangeChange:(id)arg1 ;
-(id)_setOfIdentifiersToReplaceForIdentifiers:(id)arg1 ;
-(void)_replaceOccurrencesForLocalUIDs:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(char)isMainWindowCache;
-(id)initWithStartDate:(id)arg1 duration:(double)arg2 calendars:(id)arg3 inManagedObjectContext:(id)arg4 isMainWindowCache:(char)arg5 ;
-(id)occurrencesForOccurrenceIDs:(id)arg1 ;
-(id)occurrencesForDate:(id)arg1 ;
-(id)datesWithOccurrences;
-(void)rebinForTimeZoneString:(id)arg1 ;
-(char)everFilledCache;
-(void)resetWithBestGuessForMainWindowCalendars;
-(char)foregroundResetCompleted;
-(void)setForegroundResetCompleted:(char)arg1 ;
@end

