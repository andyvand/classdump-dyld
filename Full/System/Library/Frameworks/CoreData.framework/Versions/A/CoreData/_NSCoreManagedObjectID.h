/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSManagedObjectID.h>

@interface _NSCoreManagedObjectID : NSManagedObjectID
+(void)_storeDeallocated;
+(Class)classWithStore:(id)arg1 andEntity:(id)arg2 ;
+(void)setObjectStoreIdentifier:(id)arg1 ;
+(char*)generatedNameSuffix;
+(id)_retain_1;
+(void)_release_1;
+(unsigned)allocateBatch:(id*)arg1 count:(unsigned)arg2 ;
+(id)managedObjectIDFromUTF8String:(const char*)arg1 length:(unsigned long long)arg2 ;
+(id)managedObjectIDFromURIRepresentation:(id)arg1 ;
+(void)_setStoreInfo1:(id)arg1 ;
+(id)_storeInfo1;
+(id)alloc;
+(void)release;
+(id)retain;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(long long)version;
+(char)accessInstanceVariablesDirectly;
-(char)_isPersistentStoreAlive;
-(id)_storeIdentifier;
-(id)_storeInfo1;
-(oneway void)release;
-(id)retain;
-(void)finalize;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(id)entityName;
-(id)entity;
-(id)URIRepresentation;
-(id)persistentStore;
-(char)isTemporaryID;
@end

