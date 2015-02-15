/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:53 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalManagedObject.h>
#import <CalendarPersistence/EKProtocolSharee.h>

@class NSURL, NSString, CalManagedCalDAVCalendar, NSDictionary, NSManagedObjectID;

@interface CalManagedSharee : CalManagedObject <EKProtocolSharee>

@property (retain) CalManagedCalDAVCalendar * calendar; 
@property (retain) NSString * address; 
@property (retain) NSString * commonName; 
@property (retain) NSString * status; 
@property (retain) NSString * accessLevel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char canBeConvertedToFullObject; 
@property (nonatomic,readonly) char isPartialObject; 
@property (nonatomic,readonly) NSDictionary * preFrozenRelationshipObjects; 
@property (nonatomic,readonly) NSManagedObjectID * managedObjectID; 
@property (nonatomic,copy,readonly) NSURL * URL; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) char isCurrentUserForSharing; 
@property (nonatomic,readonly) char isCurrentUserForScheduling; 
+(id)entityName;
+(id)arrayOfShareesWithAddresses:(id)arg1 inCalendar:(id)arg2 inManagedObjectContext:(id)arg3 ;
-(NSURL *)URL;
-(NSString *)name;
-(void)willSave;
-(id)enclosingSource;
-(char)isCurrentUserForSharing;
-(char)isCurrentUserForScheduling;
-(void)processForType:(int)arg1 inManagedObjectContext:(id)arg2 ;
-(int)calDAVCalendarServerInviteStatus;
-(int)calDAVCalendarServerAccessLevel;
-(id)calDAVCalendarServerUserItem;
@end
