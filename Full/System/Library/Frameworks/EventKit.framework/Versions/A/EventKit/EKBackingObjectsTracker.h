/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKObjectTracker.h>

@class NSArray, NSMutableDictionary, CalDefaultDictionary;

@interface EKBackingObjectsTracker : EKObjectTracker {

	char _includeEnabledDelegates;
	NSArray* _sourceFilters;
	NSMutableDictionary* _backingCalendarItems;
	NSMutableDictionary* _backingCalendars;
	CalDefaultDictionary* _backingDetached;
	CalDefaultDictionary* _backingExdates;
	NSMutableDictionary* _backingSources;
	NSMutableDictionary* _calendarsToItemIdentifiers;
	NSMutableDictionary* _preFrozenSourceDictionaries;
	NSMutableDictionary* _preFrozenCalendarDictionaries;

}

@property (nonatomic,readonly) char hasSourceFilters; 
@property (assign,nonatomic) char includeEnabledDelegates;                                     //@synthesize includeEnabledDelegates=_includeEnabledDelegates - In the implementation block
@property (nonatomic,retain) NSArray * sourceFilters;                                          //@synthesize sourceFilters=_sourceFilters - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * backingCalendarItems;                       //@synthesize backingCalendarItems=_backingCalendarItems - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * backingCalendars;                           //@synthesize backingCalendars=_backingCalendars - In the implementation block
@property (nonatomic,retain) CalDefaultDictionary * backingDetached;                           //@synthesize backingDetached=_backingDetached - In the implementation block
@property (nonatomic,retain) CalDefaultDictionary * backingExdates;                            //@synthesize backingExdates=_backingExdates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * backingSources;                             //@synthesize backingSources=_backingSources - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * calendarsToItemIdentifiers;                 //@synthesize calendarsToItemIdentifiers=_calendarsToItemIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * preFrozenSourceDictionaries;                //@synthesize preFrozenSourceDictionaries=_preFrozenSourceDictionaries - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * preFrozenCalendarDictionaries;              //@synthesize preFrozenCalendarDictionaries=_preFrozenCalendarDictionaries - In the implementation block
+(void)_addPrefetchRelationshipsForCalendarFetch:(id)arg1 ;
+(void)_addPrefetchRelationshipsForCalDAVCalendarFetch:(id)arg1 ;
-(void)removeItemWithIdentifier:(id)arg1 ;
-(NSArray *)sourceFilters;
-(id)itemWithIdentifier:(id)arg1 ;
-(char)includeEnabledDelegates;
-(id)initWithSourceFilters:(id)arg1 includeEnabledDelegates:(char)arg2 backingStore:(id)arg3 ;
-(id)copyForBackingStore:(id)arg1 ;
-(id)itemIdentifiers;
-(id)itemIdentifiersInCalendars:(id)arg1 ;
-(id)itemDictionary;
-(id)_preFrozenCalendarDictionaryForIdentifier:(id)arg1 ;
-(id)calendarIdentifiers;
-(id)_preFrozenSourceDictionaryForIdentifier:(id)arg1 ;
-(id)calendarSourceWithIdentifier:(id)arg1 ;
-(char)trackItemWithIdentifier:(id)arg1 occurrence:(id)arg2 ;
-(id)detachedItemsForIdentifier:(id)arg1 ;
-(id)exceptionDatesForIdentifier:(id)arg1 ;
-(void)removeCalendarWithIdentifier:(id)arg1 ;
-(void)removeCalendarSourceWithIdentifier:(id)arg1 ;
-(void)trackCalendarWithIdentifier:(id)arg1 calendar:(id)arg2 ;
-(void)trackCalendarSource:(id)arg1 withIdentifier:(id)arg2 ;
-(void)deleteItemWithIdentifier:(id)arg1 thisAndFuture:(char)arg2 ;
-(id)calendarDictionary;
-(id)calendarSourceIdentifiers;
-(id)calendarSourcesDictionary;
-(char)containsSource:(id)arg1 ;
-(void)refreshBackingSources;
-(void)addBackingCalendars:(id)arg1 ;
-(void)addBackingSources:(id)arg1 ;
-(void)removeItemsWithManagedObjectIDs:(id)arg1 ;
-(id)exceptionDictionary;
-(id)fetchBackingCalendarsWithSourceIdentifiers:(id)arg1 ;
-(id)fetchBackingSources;
-(void)useBackingSources:(id)arg1 ;
-(void)useBackingCalendars:(id)arg1 ;
-(void)untrackAllItems;
-(void)updateCalendarToItemsMappingWithItems:(id)arg1 ;
-(NSMutableDictionary *)backingCalendarItems;
-(void)setBackingCalendarItems:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)backingCalendars;
-(void)setBackingCalendars:(NSMutableDictionary *)arg1 ;
-(CalDefaultDictionary *)backingDetached;
-(void)setBackingDetached:(CalDefaultDictionary *)arg1 ;
-(CalDefaultDictionary *)backingExdates;
-(void)setBackingExdates:(CalDefaultDictionary *)arg1 ;
-(NSMutableDictionary *)backingSources;
-(void)setBackingSources:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)calendarsToItemIdentifiers;
-(void)setCalendarsToItemIdentifiers:(NSMutableDictionary *)arg1 ;
-(void)setIncludeEnabledDelegates:(char)arg1 ;
-(void)setSourceFilters:(NSArray *)arg1 ;
-(NSMutableDictionary *)preFrozenSourceDictionaries;
-(void)setPreFrozenSourceDictionaries:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)preFrozenCalendarDictionaries;
-(void)setPreFrozenCalendarDictionaries:(NSMutableDictionary *)arg1 ;
-(void)refreshBackingCalendars;
-(id)fetchBackingCalendarsWithSourceIdentifiers:(id)arg1 usePreFrozenSources:(char)arg2 ;
-(void)_removeTrackedItemWithIdentifier:(id)arg1 removeExdates:(char)arg2 thisAndFuture:(char)arg3 ;
-(char)_isSourceAllowedByFilters:(id)arg1 ;
-(char)hasSourceFilters;
-(id)_fetchBackingSourcesForCoreDataClass:(Class)arg1 predicate:(id)arg2 context:(id)arg3 ;
-(void)updateItems:(id)arg1 ;
-(id)init;
-(id)items;
-(void)reset;
-(id)calendarWithIdentifier:(id)arg1 ;
-(id)calendarSources;
-(id)calendars;
@end

