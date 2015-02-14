/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet;

@interface CalDAVChangeRequestsProducer : NSObject {

	NSMutableSet* _createdScheduleChangeRequests;

}
+(id)sharedInstance;
+(char)changeRequestsShouldBeProducedForContext:(id)arg1 ;
+(void)registerForContextNotifications;
-(id)init;
-(void)dealloc;
-(void)managedObjectContextDidSave:(id)arg1 ;
-(void)managedObjectContextWillSave:(id)arg1 ;
-(void)addCreatedScheduleChangeRequest:(id)arg1 ;
-(id)createdScheduleRequestForMessage:(id)arg1 ;
-(void)processInsertedManagedObjects:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(void)processUpdatedManagedObjects:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(void)processDeletedManagedObjects:(id)arg1 inManagedObjectContext:(id)arg2 ;
@end

