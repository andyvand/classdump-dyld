/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalManagedGroup.h>
#import <CalendarPersistence/DefaultAlarmProviderProtocol.h>

@class NSSet, CalManagedAccount, NSString, CalManagedMigrationGroup, NSURL, NSDate, CalManagedDefaultAlarmSet;

@interface CalManagedPrincipal : CalManagedGroup <DefaultAlarmProviderProtocol> {

	char _statusIsBusy;

}

@property (retain) NSSet * calendarUserAddresses; 
@property (retain) CalManagedAccount * account; 
@property (retain) NSString * fullName; 
@property (retain) NSSet * messages; 
@property (retain) CalManagedMigrationGroup * migrationGroup; 
@property (retain) NSURL * overrideBaseURL; 
@property (assign) char isDelegate; 
@property (assign) char isInSeparateWindow; 
@property (assign) char keepOffline; 
@property (retain) NSDate * refreshDate; 
@property (retain) CalManagedDefaultAlarmSet * localDefaultAlarmSet; 
@property (assign) char isManuallyConfigured; 
@property (readonly) char supportsFreebusy; 
@property (assign) char statusIsBusy;                                                 //@synthesize statusIsBusy=_statusIsBusy - In the implementation block
@property (readonly) char isCalendarServerPrivateEventsSupported; 
@property (readonly) char isPrivateCommentsSupported; 
@property (readonly) char isAutoScheduleSupported; 
@property (readonly) char isMainPrincipal; 
@property (assign) char supportsDefaultAlarms; 
@property (readonly) NSURL * calendarUserAddress; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) char shareDefaultAlarmSettings; 
@property (retain,readonly) CalManagedDefaultAlarmSet * defaultAlarmSet; 
+(id)entityName;
+(id)fetchRequestWithUID:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)fetchPrincipalWithObjectID:(id)arg1 prefetchedRelationshipKeyPaths:(id)arg2 inContext:(id)arg3 ;
+(id)myAddressInPrincipal:(id)arg1 forEvent:(id)arg2 ;
+(Class)freeBusyCacheClass;
+(id)fetchRequestForDelegatesWithAccount:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)fetchRequestForICalMainWindowPrincipalsInManagedObjectContext:(id)arg1 ;
+(char)calendarUserAddress:(id)arg1 isInCalendarAddressUserSet:(id)arg2 ;
+(id)fetchRequestWithUIDs:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)fetchRequestForICalDelegatesInManagedObjectContext:(id)arg1 ;
+(id)fetchRequestForICalDelegatesWithUID:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)properties;
-(id)ownerAddresses;
-(char)calendarUserAddressIsEquivalentToURL:(id)arg1 ;
-(char)isDelegate;
-(id)serverURL;
-(void)setIsDelegate:(char)arg1 ;
-(char)isMainPrincipal;
-(NSURL *)overrideBaseURL;
-(void)setOverrideBaseURL:(NSURL *)arg1 ;
-(char)isAutoScheduleSupported;
-(NSURL *)calendarUserAddress;
-(char)validateForInsert:(id*)arg1 ;
-(char)validateForUpdate:(id*)arg1 ;
-(char)isEnabledForReminders;
-(char)validateForWrite:(id*)arg1 ;
-(id)fetchRequestForInsertValidation;
-(void)awakeFromSnapshotEvents:(unsigned long long)arg1 ;
-(char)isCalendarServerPrivateEventsSupported;
-(char)isPrivateCommentsSupported;
-(char)supportsFreebusy;
-(char)isEnabledForEvents;
-(int)displayOrder;
-(id)providerIdentifier;
-(char)supportsPrivateEvents;
-(id)calendarUserAddressesAsURLs;
-(void)_setOverrideBaseURL:(id)arg1 ;
-(void)stripPathAndSetOverrideBaseURL:(id)arg1 ;
-(char)statusIsBusy;
-(void)setStatusIsBusy:(char)arg1 ;
-(char)_changeAffectsAccountSync:(id)arg1 ;
-(char)_changeAffectsDockTile:(id)arg1 ;
-(char)_changeAffectsRefresh:(id)arg1 ;
-(char)_insertAffectsAccountSync;
-(char)_deleteAffectsAccountSync;
-(char)_insertAffectsDockTile;
-(char)_deleteAffectsDockTile;
-(char)_insertAffectsAccount;
-(char)_deleteAffectsAccount;
@end

