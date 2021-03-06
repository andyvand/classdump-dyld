/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:11:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/IMCommonCore.framework/Versions/A/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IMCommonCore/IMCommonCore-Structs.h>
@class IMDatabaseHandle, IMAdminTable, NSMutableSet, NSTimer, NSString;

@interface IMPersistentCache : NSObject {

	IMDatabaseHandle* _db;
	IMAdminTable* _adminTable;
	NSMutableSet* _accessedIds;
	unsigned long long _cacheSize;
	unsigned long long _maxSize;
	unsigned long long _count;
	NSMutableSet* _unknownKeys;
	NSTimer* _scanTimer;
	NSString* _path;
	int _accessedIdsLock;
	int _unknownKeysLock;

}

@property (nonatomic,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
-(char)hasItemForKey:(id)arg1 ;
-(char)insertCGImages:(id)arg1 forKey:(id)arg2 mimeType:(id)arg3 baseSize:(CGSize)arg4 properties:(id)arg5 ;
-(void)deleteItemForKey:(id)arg1 ;
-(void)deleteItemsWithKeyLike:(id)arg1 ;
-(id)firstImageKeyWithRootKey:(id)arg1 ;
-(unsigned long long)resourceSizeForKey:(id)arg1 ;
-(id)CGImagesForKey:(id)arg1 size:(CGSize*)arg2 resourceSize:(long long*)arg3 ;
-(char)_createStorageForDb:(id)arg1 ;
-(unsigned long long)_cacheSize;
-(void)setLastAccessDate:(id)arg1 ;
-(void)_updateCaches:(id)arg1 ;
-(void)_createCacheTable:(id)arg1 ;
-(void)_setCacheSize:(long long)arg1 ;
-(void)_unknownKeysRemoveObject:(id)arg1 ;
-(void)_scheduleSizeCleanup;
-(char)_insertCGImage:(CGImageRef)arg1 forKey:(id)arg2 mimeType:(id)arg3 scale:(double)arg4 properties:(id)arg5 ;
-(char)_insertCGImage:(CGImageRef)arg1 forKey:(id)arg2 ;
-(char)insertCGImage:(CGImageRef)arg1 forKey:(id)arg2 mimeType:(id)arg3 scale:(double)arg4 properties:(id)arg5 ;
-(char)insertCGImage:(CGImageRef)arg1 forKey:(id)arg2 mimeType:(id)arg3 properties:(id)arg4 ;
-(CGImageRef)copyCGImageForKey:(id)arg1 resourceSize:(long long*)arg2 ;
-(void)_accessedIdsAddObject:(id)arg1 ;
-(char)_unknownKeysContainsObject:(id)arg1 ;
-(void)_unknownKeysAddObject:(id)arg1 ;
-(CGImageRef)_copyCGImageForRow:(id)arg1 size:(CGSize*)arg2 resourceSize:(long long*)arg3 scale:(double*)arg4 ;
-(CGImageRef)copyCGImageForKey:(id)arg1 resourceSize:(long long*)arg2 scale:(double*)arg3 ;
-(void)deleteItemsWithAllKeysContaining:(id)arg1 ;
-(void)insertData:(id)arg1 forKey:(id)arg2 mimeType:(id)arg3 ;
-(void)_accessedIdsRemoveAllObjects;
-(void)_sizeCleanup;
-(void)_LRUCleanupForMimeType:(id)arg1 ;
-(id)initWithPath:(id)arg1 maxSize:(unsigned long long)arg2 ;
-(char)enableCaseSensitiveLike;
-(char)insertCGImage:(CGImageRef)arg1 forKey:(id)arg2 mimeType:(id)arg3 ;
-(char)insertCGImage:(CGImageRef)arg1 forKey:(id)arg2 ;
-(CGImageRef)copyCGImageForKey:(id)arg1 ;
-(id)itemsForMimeType:(id)arg1 ;
-(id)deleteItemsForMimeType:(id)arg1 ;
-(void)replaceDataForKey:(id)arg1 withData:(id)arg2 mimeType:(id)arg3 ;
-(id)dataForKey:(id)arg1 mimeType:(id)arg2 ;
-(id)dataForKey:(id)arg1 ;
-(NSString *)path;
-(void)clear;
-(id)allKeys;
-(long long)version;
-(id)metadataForKey:(id)arg1 ;
@end

