/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, NSManagedObjectContext, NSPersistentStore, NSPersistentStoreCoordinator, NSArray, NSDictionary;

@interface PFUbiquityPeerRangeReservationContext : NSObject {

	NSMutableDictionary* _peerEntityNameRangeStartSet;
	NSMutableDictionary* _globalIDToLocalURI;
	NSMutableArray* _unresolvedGlobalObjectIDs;
	NSManagedObjectContext* _moc;
	NSPersistentStore* _store;
	NSPersistentStoreCoordinator* _psc;
	NSMutableDictionary* _storeNameToFetchedMetadata;
	NSArray* _globalObjectIDs;
	long long _numRangesToReserve;

}

@property (nonatomic,readonly) NSPersistentStoreCoordinator * psc;                      //@synthesize psc=_psc - In the implementation block
@property (nonatomic,readonly) NSPersistentStore * store;                               //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * moc;                            //@synthesize moc=_moc - In the implementation block
@property (nonatomic,readonly) NSArray * globalObjectIDs;                               //@synthesize globalObjectIDs=_globalObjectIDs - In the implementation block
@property (nonatomic,readonly) long long numRangesToReserve;                            //@synthesize numRangesToReserve=_numRangesToReserve - In the implementation block
@property (nonatomic,readonly) NSDictionary * peerEntityNameRangeStartSet;              //@synthesize peerEntityNameRangeStartSet=_peerEntityNameRangeStartSet - In the implementation block
-(NSPersistentStore *)store;
-(NSPersistentStoreCoordinator *)psc;
-(NSManagedObjectContext *)moc;
-(NSArray *)globalObjectIDs;
-(id)initWithPersistentStore:(id)arg1 andGlobalObjectIDs:(id)arg2 ;
-(void)prepareForRangeReservationWithRangeStart:(id)arg1 andGlobalID:(id)arg2 andEntityName:(id)arg3 ;
-(id)createLocalIDStringForStoreUUID:(id)arg1 entityName:(id)arg2 andPrimaryKeyString:(id)arg3 ;
-(long long)numRangesToReserve;
-(char)createNewPeerRangesWithCache:(id)arg1 Error:(id*)arg2 ;
-(NSDictionary *)peerEntityNameRangeStartSet;
-(id)init;
-(void)dealloc;
@end

