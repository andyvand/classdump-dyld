/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CoreCalendarSource.h>

@interface CalManagedSource : CoreCalendarSource {

	int _status;

}
-(int)status;
-(id)initWithKey:(id)arg1 ;
-(id)entitiesMatchingSearchElement:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)entityForSharedUID:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(char)modifyEntity:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(char)hasCalendarItemForSharedUID:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(char)addEntity:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(char)removeEntity:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(void)setStatus:(int)arg1 ;
-(id)calendarInManagedObjectContext:(id)arg1 ;
-(id)entityForLocalUID:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(char)addEntities:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(char)modifyEntities:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(char)removeEntities:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)eventsWithFutureInvitationsInManagedObjectContext:(id)arg1 ;
-(id)calendarItemWithLocalUID:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)calendarItemWithSharedUID:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(char)hasEntitiesInManagedObjectContext:(id)arg1 ;
@end

