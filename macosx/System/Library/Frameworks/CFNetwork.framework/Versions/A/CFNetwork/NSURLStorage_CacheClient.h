/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLStorageCacheClient.h>

@class NSXPCInterface, NSXPCConnection, NSString, NSData;

@interface NSURLStorage_CacheClient : NSObject <NSURLStorageCacheClient> {

	NSXPCInterface* _netStoreInterface;
	NSXPCConnection* _networkStorageConnection;
	NSString* _taskManagerIdentifier;
	NSString* _path;
	_CFURLCache* _cfCache;
	NSData* _sandboxExtensionToken;
	long long _storageSize;

}
-(long long)currentDiskUsage;
-(id)getPath;
-(void)dealloc;
-(void)setMaxSize:(long long)arg1 ;
-(void)deleteResponsesSinceDate:(id)arg1 ;
-(void)_disassociateCFURLCacheInstance;
-(void)setMinSizeForVMCachedResource:(long long)arg1 ;
-(id)initWithCache:(_CFURLCache*)arg1 ;
-(char)createStorageTaskManagerForPath:(id)arg1 maxSize:(long long)arg2 extension:(id)arg3 withIdentifier:(id)arg4 ;
-(void)copyAllPartitionNamesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)copyHostNamesForOptionalPartition:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)deleteAllHostNames:(id)arg1 forOptionalPartition:(id)arg2 ;
-(void)cachedResponseForKey:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)deleteAllResponses;
-(void)addCachedResponseWithDictionary:(id)arg1 key:(id)arg2 ;
-(void)deleteResponseForRequestWithKey:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)notifyCachedURLResponseBecameFileBacked:(id)arg1 filePath:(id)arg2 forUUID:(id)arg3 ;
-(void)_reconnectWithStorageServer;
-(void)_associateCFURLCacheInstance:(_CFURLCache*)arg1 ;
-(void)addCachedResponse:(id)arg1 key:(id)arg2 ;
@end

