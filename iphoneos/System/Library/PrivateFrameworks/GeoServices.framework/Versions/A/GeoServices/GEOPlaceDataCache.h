/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:40 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _GEOPlaceDataCacheProxy;
#import <GeoServices/GeoServices-Structs.h>
@interface GEOPlaceDataCache : NSObject {

	id<_GEOPlaceDataCacheProxy> _proxyCache;

}
-(void)setPlaceData:(id)arg1 forKey:(GEOTileKey)arg2 ;
-(void)setPlaceData:(id)arg1 forMUID:(unsigned long long)arg2 ;
-(void)deletePhoneNumberMapping;
-(void)shrinkToSize:(unsigned long long)arg1 finished:(/*^block*/id)arg2 ;
-(void)calculateFreeableSpaceWithHandler:(/*^block*/id)arg1 ;
-(id)placeDataForMUID:(unsigned long long)arg1 ;
-(void)evictPlaceDataForMUID:(unsigned long long)arg1 ;
-(unsigned long long)muidForPhoneNumber:(unsigned long long)arg1 ;
-(id)placeDataForPhoneNumber:(unsigned long long)arg1 ;
-(id)allCacheEntries;
-(id)placeDataForKey:(GEOTileKey)arg1 ;
-(void)evictPlaceDataForKey:(GEOTileKey)arg1 ;
-(void)evictAllEntries;
-(id)initWithCacheType:(long long)arg1 atPath:(id)arg2 ;
-(id)initWithTransientCacheType;
-(void)dealloc;
@end

