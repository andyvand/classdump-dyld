/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:44:15 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCacheDelegate.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSCache, TSUPointerKeyDictionary, NSObject, NSMutableDictionary;

@interface TSDTileStorage : NSObject <NSCacheDelegate> {

	NSCache* mCache;
	TSUPointerKeyDictionary* mReverseCacheKeys;
	NSObject<OS_dispatch_semaphore>* mReverseCacheKeysLock;
	NSObject<OS_dispatch_queue>* mCacheKeysQueue;
	NSMutableDictionary* mCacheKeysByBucket;

}
-(void)removeAllContents;
-(id)contentsInRect:(CGRect)arg1 contentsScale:(float)arg2 forTileAtLocation:(NSRange)arg3 inBucket:(id)arg4 ;
-(void)storeContents:(id)arg1 inRect:(CGRect)arg2 contentsScale:(float)arg3 forTileAtLocation:(NSRange)arg4 inBucket:(id)arg5 ;
-(void)removeImagesInBucket:(id)arg1 ;
-(id)p_cacheKeyForImageInRect:(CGRect)arg1 contentsScale:(float)arg2 tileLocation:(NSRange)arg3 ;
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
-(void)dealloc;
-(id)init;
@end
