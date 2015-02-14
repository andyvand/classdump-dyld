/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdate.framework/Versions/A/SoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface SUMetadataCache : NSObject {

	NSString* _cachePath;
	NSMutableArray* _metadata;
	double _cacheAge;

}
+(char)isCacheCurrent;
-(void)clearCache;
-(char)addMetadataFromDistribution:(id)arg1 forProductKey:(id)arg2 isStaged:(char)arg3 ;
-(id)metadataMatchingPredicate:(id)arg1 ;
-(id)initByReadingDiskCache:(char)arg1 ;
-(id)_metadataMatchingPredicate:(id)arg1 pruningProductKeys:(char)arg2 ;
-(double)existingCacheAge;
-(id)cachedProductKeysMatchingPredicate:(id)arg1 ;
-(char)writeCacheToDisk;
-(id)init;
-(void)dealloc;
@end

