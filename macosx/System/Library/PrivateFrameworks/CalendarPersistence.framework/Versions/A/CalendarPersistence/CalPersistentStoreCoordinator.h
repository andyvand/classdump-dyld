/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSPersistentStoreCoordinator.h>

@class NSString;

@interface CalPersistentStoreCoordinator : NSPersistentStoreCoordinator {

	NSString* _persistentStorePath;
	NSString* _calendarStorePath;
	char _isForMigration;

}

@property (retain) NSString * calendarStorePath;              //@synthesize calendarStorePath=_calendarStorePath - In the implementation block
@property (assign) char isForMigration;                       //@synthesize isForMigration=_isForMigration - In the implementation block
+(id)defaultPersistentStoreCoordinator;
+(void)_clearPSCForUnitTests;
-(id)init;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(id)addPersistentStoreOfType:(id)arg1 error:(id*)arg2 ;
-(void)setCreationDateForPersistentStore:(id)arg1 ;
-(char)restorePersistentStore:(id*)arg1 ;
-(char)removePersistentStore:(id*)arg1 ;
-(id)calendarCachePath;
-(id)addPersistentStore:(id*)arg1 ;
-(NSString *)calendarStorePath;
-(char)isForMigration;
-(void)setCalendarStorePath:(NSString *)arg1 ;
-(void)_flushMetaDataChangeToDisk;
-(char)restorePersistentStoreInBatches:(char)arg1 error:(id*)arg2 ;
-(void)_removeBackupCacheFiles;
-(void)setIsForMigration:(char)arg1 ;
-(void)setUpgradedEtagsForPersistentStore:(id)arg1 ;
-(id)restorePersistentStoreViaTemp:(id*)arg1 ;
-(void)migrateETags;
@end

