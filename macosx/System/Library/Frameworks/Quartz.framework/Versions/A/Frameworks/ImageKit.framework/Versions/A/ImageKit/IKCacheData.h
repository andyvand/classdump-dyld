/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IKCacheManager, IKCacheDatabase, IKCacheNode;

@interface IKCacheData : NSObject {

	IKCacheManager* _parent;
	IKCacheDatabase* _db;
	IKCacheNode* _lastRequestedNode;
	int _lastRequestedSize;
	unsigned long long _lastRequestedUID;

}
-(id)database;
-(id)cacheNodeWithUID:(unsigned long long)arg1 withSize:(int)arg2 ;
-(char)storeImage:(id)arg1 withUID:(unsigned long long)arg2 withSize:(int)arg3 ;
-(unsigned long long)unshareEntriesWithUIDIfNeeded:(id)arg1 cacheManager:(id)arg2 ;
-(void)removeCacheNodeWithUID:(unsigned long long)arg1 withSize:(int)arg2 ;
-(void)prepareChildsToDie;
-(id)nodeForUID:(unsigned long long)arg1 size:(int)arg2 createIfNeeded:(char)arg3 ;
-(id)objectWithUID:(unsigned long long)arg1 withSize:(int)arg2 withKey:(int)arg3 ;
-(void)removeObjectWithUID:(unsigned long long)arg1 withSize:(int)arg2 withKey:(int)arg3 ;
-(id)init;
-(void)dealloc;
-(id)parent;
-(void)setParent:(id)arg1 ;
@end

