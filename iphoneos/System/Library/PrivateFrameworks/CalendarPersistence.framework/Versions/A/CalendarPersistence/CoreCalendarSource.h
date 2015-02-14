/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSManagedObjectID, NSString;

@interface CoreCalendarSource : NSObject {

	NSManagedObjectID* _objectID;
	NSString* _key;
	NSString* _bundlePath;

}
-(id)init;
-(void)dealloc;
-(id)description;
-(id)key;
-(id)type;
-(id)bundlePath;
-(int)status;
-(void)setBundlePath:(id)arg1 ;
-(id)initWithKey:(id)arg1 ;
-(id)entitiesMatchingSearchElement:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)managedObjectID;
-(id)entityForSharedUID:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(char)modifyEntity:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(char)hasCalendarItemForSharedUID:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(char)addEntity:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(char)removeEntity:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(void)setManagedObjectID:(id)arg1 ;
-(char)isOwnerMe;
-(char)isSourceInSameAccount:(id)arg1 ;
-(char)isExchange;
-(char)isCalDAV;
-(char)isSourceInSameAccount:(id)arg1 ignoringOwner:(char)arg2 ;
-(char)isBirthday;
-(char)hasCapability:(int)arg1 ;
-(id)meForSource;
-(id)freeBusyCache;
-(void)notifyStatusChange;
-(id)lastOperationError;
-(id)entityForLocalUID:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(char)isSubscription;
-(id)allEntitiesInManagedObjectContext:(id)arg1 ;
-(id)allToDosInManagedObjectContext:(id)arg1 ;
-(id)allEventsInManagedObjectContext:(id)arg1 ;
-(char)markVersionForUID:(id)arg1 forDate:(id)arg2 withComment:(id)arg3 withTagID:(id)arg4 ;
-(char)addEntities:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(char)modifyEntities:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(char)removeEntities:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)ownerForSource;
-(char)allowsSchedulingByMe;
-(id)eventsWithFutureInvitationsInManagedObjectContext:(id)arg1 ;
-(id)entitiesEndingBefore:(id)arg1 withEntityType:(int)arg2 inManagedObjectContext:(id)arg3 ;
-(id)entitiesStartingBefore:(id)arg1 withEntityType:(int)arg2 includingRecurringEvents:(char)arg3 inManagedObjectContext:(id)arg4 ;
-(void)notifyChangesWithChangeTracker:(id)arg1 ;
-(void)notifyChanges;
-(void)fireRepositoryParametersChangeNotification;
-(void)removeCompletedTasksBefore:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(void)removeEventOccurrencesEndingBefore:(id)arg1 inManagedObjectContext:(id)arg2 ;
@end

