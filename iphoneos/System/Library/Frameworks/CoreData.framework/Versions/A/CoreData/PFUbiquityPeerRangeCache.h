/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSString, NSPersistentStore, NSDictionary;

@interface PFUbiquityPeerRangeCache : NSObject {

	NSMutableDictionary* _cachedRanges;
	NSMutableDictionary* _allEntityRanges;
	NSMutableDictionary* _translatedGlobalIDs;
	NSString* _localPeerID;
	NSString* _storeName;
	NSPersistentStore* _privateStore;
	char _cachedStorePeerRanges;

}

@property (nonatomic,readonly) NSString * localPeerID;                          //@synthesize localPeerID=_localPeerID - In the implementation block
@property (nonatomic,readonly) NSString * storeName;                            //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,readonly) NSPersistentStore * privateStore;                //@synthesize privateStore=_privateStore - In the implementation block
@property (nonatomic,readonly) NSDictionary * translatedGlobalIDs;              //@synthesize translatedGlobalIDs=_translatedGlobalIDs - In the implementation block
+(long long)integerFromPrimaryKeyString:(id)arg1 ;
+(unsigned long long)peerRangeStartForPrimaryKey:(unsigned long long)arg1 ;
+(void)initialize;
-(NSString *)localPeerID;
-(NSPersistentStore *)privateStore;
-(NSString *)storeName;
-(char)refreshPeerRangeCache:(id*)arg1 ;
-(char)cachePeerRanges:(id*)arg1 ;
-(id)createMapOfManagedObjectIDsForStoreSaveSnapshot:(id)arg1 error:(id*)arg2 ;
-(id)createGlobalObjectIDForManagedObjectID:(id)arg1 ;
-(char)cacheSQLCorePeerRange:(id)arg1 error:(id*)arg2 ;
-(id)cachedRangeForOwningPeerID:(id)arg1 andEntityName:(id)arg2 withPrimaryKey:(unsigned long long)arg3 ;
-(id)cachedRangeForLocalPrimaryKey:(unsigned long long)arg1 ofEntityNamed:(id)arg2 ;
-(id)createMapOfManagedObjectIDsForGlobalIDs:(id)arg1 count:(long long)arg2 error:(id*)arg3 ;
-(unsigned long long)localPrimaryKeyForOwningPeerID:(id)arg1 andEntityName:(id)arg2 withPrimaryKey:(unsigned long long)arg3 ;
-(id)initWithPrivateStore:(id)arg1 storeName:(id)arg2 andLocalPeerID:(id)arg3 ;
-(id)describeCaches;
-(id)describeCachesVerbose;
-(NSDictionary *)translatedGlobalIDs;
-(void)dealloc;
-(id)description;
@end

