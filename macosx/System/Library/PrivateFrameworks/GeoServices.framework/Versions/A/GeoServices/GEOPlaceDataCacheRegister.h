/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface GEOPlaceDataCacheRegister : NSObject {

	NSMutableDictionary* _caches;

}
-(void)deletePhoneNumberMapping;
-(void)shrinkToSize:(unsigned long long)arg1 finished:(/*^block*/id)arg2 ;
-(void)calculateFreeableSpaceWithHandler:(/*^block*/id)arg1 ;
-(id)cacheForProviderID:(int)arg1 ;
-(id)allCacheEntries;
-(void)evictAllEntries;
-(id)init;
-(void)dealloc;
@end

