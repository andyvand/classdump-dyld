/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:38 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOTileCacheReserved;

@interface GEOTileCache : NSObject {

	GEOTileCacheReserved* _reserved;
	dispatch_source_sRef _memoryNotificationEventSource;

}

@property (readonly) unsigned long long currentCount; 
@property (readonly) unsigned long long currentCost; 
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
-(id)_description;
-(void)_evictWithMaxCost:(unsigned long long)arg1 maxCapacity:(unsigned long long)arg2 ;
-(void)_removeTileForKey:(const GEOTileKey*)arg1 ;
-(void)enumerate:(/*^block*/id)arg1 ;
-(unsigned long long)maxCapacity;
-(unsigned long long)maxCost;
-(void)setNullForKey:(const GEOTileKey*)arg1 ;
-(void)removeTileForKey:(const GEOTileKey*)arg1 ;
-(void)removeTilesWithKeys:(id)arg1 ;
-(unsigned long long)currentCount;
-(unsigned long long)currentCost;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)removeAllObjects;
@end

