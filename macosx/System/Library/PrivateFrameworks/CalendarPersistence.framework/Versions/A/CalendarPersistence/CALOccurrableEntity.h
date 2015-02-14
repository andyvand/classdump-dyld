/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalendarPersistence-Structs.h>
#import <CalendarPersistence/CALAbstractEntity.h>

@class NSManagedObjectID;

@interface CALOccurrableEntity : CALAbstractEntity {

	NSManagedObjectID* _managedObjectID;

}
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)managedObjectID;
-(id)expandOnTimeRange:(id)arg1 ;
-(void)setManagedObjectID:(id)arg1 ;
-(id)getOccurrenceForStartDate:(id)arg1 ;
@end

