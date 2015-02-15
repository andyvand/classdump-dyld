/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class CKDMMCS, CKSQLitePool, NSString, NSObject;

@interface CKDAssetCache : NSObject {

	char _isUnitTestingAccount;
	char _isEvictionScheduled;
	int _fileDownloadPathFd;
	CKDMMCS* _MMCS;
	CKSQLitePool* _dbPool;
	NSString* _applicationBundleID;
	NSString* _dbPath;
	NSString* _fileDownloadPath;
	NSString* _packageDownloadPath;
	NSString* _packageUploadPath;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _expiryTimer;

}

@property (assign,nonatomic,__weak) CKDMMCS * MMCS;                                  //@synthesize MMCS=_MMCS - In the implementation block
@property (nonatomic,readonly) CKSQLitePool * dbPool;                                //@synthesize dbPool=_dbPool - In the implementation block
@property (assign,nonatomic) char isUnitTestingAccount;                              //@synthesize isUnitTestingAccount=_isUnitTestingAccount - In the implementation block
@property (nonatomic,retain) NSString * applicationBundleID;                         //@synthesize applicationBundleID=_applicationBundleID - In the implementation block
@property (nonatomic,retain) NSString * dbPath;                                      //@synthesize dbPath=_dbPath - In the implementation block
@property (nonatomic,retain) NSString * fileDownloadPath;                            //@synthesize fileDownloadPath=_fileDownloadPath - In the implementation block
@property (nonatomic,retain) NSString * packageDownloadPath;                         //@synthesize packageDownloadPath=_packageDownloadPath - In the implementation block
@property (nonatomic,retain) NSString * packageUploadPath;                           //@synthesize packageUploadPath=_packageUploadPath - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> expiryTimer;              //@synthesize expiryTimer=_expiryTimer - In the implementation block
@property (assign,nonatomic) int fileDownloadPathFd;                                 //@synthesize fileDownloadPathFd=_fileDownloadPathFd - In the implementation block
@property (assign) char isEvictionScheduled;                                         //@synthesize isEvictionScheduled=_isEvictionScheduled - In the implementation block
+(id)assetCacheWithApplicationBundleID:(id)arg1 dbPath:(id)arg2 fileDownloadPath:(id)arg3 packageDownloadPath:(id)arg4 packageUploadPath:(id)arg5 ;
+(id)_sharedCachesQueue;
+(id)_sharedCachesByBundleID;
+(int)openFdForDownloadPath:(id)arg1 error:(id*)arg2 ;
-(NSObject*<OS_dispatch_source>)expiryTimer;
-(void)setExpiryTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)clearForced:(char)arg1 ;
-(CKDMMCS *)MMCS;
-(void)setMMCS:(CKDMMCS *)arg1 ;
-(void)cancelExpiryTimer;
-(void)evictAllFilesForced:(char)arg1 ;
-(id)addAssetHandleForDownloadedFileURL:(id)arg1 itemID:(unsigned long long)arg2 signature:(id)arg3 error:(id*)arg4 ;
-(id)addAssetHandleForData:(id)arg1 signature:(id)arg2 error:(id*)arg3 ;
-(int)openFileDescriptorForItemID:(unsigned long long)arg1 itemType:(id*)arg2 error:(id*)arg3 ;
-(char)startTrackingAssetHandles:(id)arg1 error:(id*)arg2 ;
-(void)stopTrackingAssetHandlesByItemIDs:(id)arg1 ;
-(NSString *)dbPath;
-(id)initWithApplicationBundleID:(id)arg1 dbPath:(id)arg2 fileDownloadPath:(id)arg3 packageDownloadPath:(id)arg4 packageUploadPath:(id)arg5 ;
-(void)_expireAssetHandles;
-(void)_evictFilesForced:(char)arg1 ;
-(void)expireAssetHandlesIfNecessary;
-(CKSQLitePool *)dbPool;
-(NSString *)fileDownloadPath;
-(int)fileDownloadPathFd;
-(void)_scheduleEvictionForDownloadedFiles;
-(void)_scheduleExpirationForAssetHandles;
-(id)_addAssetHandleForFileURL:(id)arg1 signature:(id)arg2 itemID:(id)arg3 error:(id*)arg4 ;
-(void)_unregisterItemIDs:(id)arg1 ;
-(char)isEvictionScheduled;
-(void)setIsEvictionScheduled:(char)arg1 ;
-(void)_evictDownloadedFilesForced:(char)arg1 ;
-(void)_evictDownloadedFilesWithDatabase:(id)arg1 forced:(char)arg2 ;
-(NSString *)packageDownloadPath;
-(NSString *)packageUploadPath;
-(void)_evictPackagesForced:(char)arg1 ;
-(void)setDbPath:(NSString *)arg1 ;
-(void)setFileDownloadPath:(NSString *)arg1 ;
-(void)setPackageDownloadPath:(NSString *)arg1 ;
-(void)setPackageUploadPath:(NSString *)arg1 ;
-(void)setFileDownloadPathFd:(int)arg1 ;
-(char)isUnitTestingAccount;
-(void)setIsUnitTestingAccount:(char)arg1 ;
-(NSString *)applicationBundleID;
-(void)setApplicationBundleID:(NSString *)arg1 ;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
