/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKObjectTracker.h>

@class NSMutableDictionary;

@interface EKCreatedObjectsTracker : EKObjectTracker {

	NSMutableDictionary* _createdCalendarItems;
	NSMutableDictionary* _createdCalendars;
	NSMutableDictionary* _createdCalendarSources;

}

@property (nonatomic,retain) NSMutableDictionary * createdCalendarItems;                //@synthesize createdCalendarItems=_createdCalendarItems - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * createdCalendars;                    //@synthesize createdCalendars=_createdCalendars - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * createdCalendarSources;              //@synthesize createdCalendarSources=_createdCalendarSources - In the implementation block
-(void)enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(void)removeItemWithIdentifier:(id)arg1 ;
-(id)itemWithIdentifier:(id)arg1 ;
-(id)initWithBackingStore:(id)arg1 ;
-(id)copyForBackingStore:(id)arg1 ;
-(id)itemIdentifiers;
-(unsigned long long)totalItems;
-(id)itemDictionary;
-(id)calendarIdentifiers;
-(id)calendarSourceWithIdentifier:(id)arg1 ;
-(char)trackItemWithIdentifier:(id)arg1 occurrence:(id)arg2 ;
-(id)detachedItemsForIdentifier:(id)arg1 ;
-(void)removeCalendarWithIdentifier:(id)arg1 ;
-(void)removeCalendarSourceWithIdentifier:(id)arg1 ;
-(void)trackCalendarWithIdentifier:(id)arg1 calendar:(id)arg2 ;
-(void)trackCalendarSource:(id)arg1 withIdentifier:(id)arg2 ;
-(id)sortedItemIdentifiers;
-(id)calendarDictionary;
-(id)calendarSourceIdentifiers;
-(id)calendarSourcesDictionary;
-(void)removeItemsWithManagedObjectIDs:(id)arg1 ;
-(NSMutableDictionary *)createdCalendarItems;
-(void)setCreatedCalendarItems:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)createdCalendars;
-(void)setCreatedCalendars:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)createdCalendarSources;
-(void)setCreatedCalendarSources:(NSMutableDictionary *)arg1 ;
-(char)updateItemWithIdentifier:(id)arg1 occurrence:(id)arg2 ;
-(id)items;
-(id)calendarWithIdentifier:(id)arg1 ;
-(id)calendarSources;
-(id)calendars;
@end

