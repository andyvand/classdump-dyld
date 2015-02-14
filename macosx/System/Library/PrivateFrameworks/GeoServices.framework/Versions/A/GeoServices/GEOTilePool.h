/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOTileCache;

@interface GEOTilePool : NSObject {

	dispatch_source_sRef _memoryNotificationEventSource;
	GEOGenericContainer<_GEOTileKey, id, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, geo::GEOGenericContainerWeakReferenceTag, 0, 0, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type>* _pool;
	GEOTileCache* _cache;

}

@property (nonatomic,readonly) unsigned long long currentCount; 
@property (nonatomic,readonly) unsigned long long currentCost; 
@property (assign) unsigned long long maxCapacity; 
@property (assign) unsigned long long maxCost; 
-(void)_receivedMemoryNotification;
-(id)tileForKey:(const GEOTileKey*)arg1 ;
-(void)setMaxCapacity:(unsigned long long)arg1 ;
-(void)setMaxCost:(unsigned long long)arg1 ;
-(char)containsKey:(const GEOTileKey*)arg1 cost:(unsigned long long*)arg2 ;
-(void)removeTilesMatchingPredicate:(/*^block*/id)arg1 ;
-(void)setTile:(id)arg1 forKey:(const GEOTileKey*)arg2 cost:(unsigned long long)arg3 ;
-(void)_enteredBackground:(id)arg1 ;
-(void)enumerate:(/*^block*/id)arg1 ;
-(unsigned long long)maxCapacity;
-(unsigned long long)maxCost;
-(void)setNullForKey:(const GEOTileKey*)arg1 ;
-(void)removeTileForKey:(const GEOTileKey*)arg1 ;
-(void)removeTilesWithKeys:(id)arg1 ;
-(unsigned long long)currentCount;
-(unsigned long long)currentCost;
-(id)initWithSideCacheEnabled:(char)arg1 ;
-(id)init;
-(void)dealloc;
-(void)removeAllObjects;
@end

