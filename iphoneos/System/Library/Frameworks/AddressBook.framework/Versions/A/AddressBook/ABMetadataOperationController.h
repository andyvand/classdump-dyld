/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:43 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABMetadataManager.h>

@class NSDistributedLock, NSString, ABMetadataInfoFile, CNWeakReference, NSOperationQueue, NSMutableDictionary, ABMetadataIgnoredDirectories;

@interface ABMetadataOperationController : NSObject <ABMetadataManager> {

	NSDistributedLock* _metaDataFileLock;
	NSString* _metaDataLockFile;
	NSString* _metadataDirectory;
	ABMetadataInfoFile* _infoFile;
	CNWeakReference* _weakAddressBook;
	NSOperationQueue* _queue;
	unsigned long long _suspended;
	NSMutableDictionary* _delinquentRecords;
	ABMetadataIgnoredDirectories* _ignoredDirectories;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstanceForAddressBook:(id)arg1 ;
+(char)waitUntilAllOperationsAreFinishedWithTimeout:(double)arg1 ;
+(void)initialize;
+(id)sharedInstance;
+(void)waitUntilAllOperationsAreFinished;
+(void)cancelAllOperations;
+(id)operationQueue;
-(id)addressBook;
-(char)nts_RestoreFromMetaDataAndTriggerSync:(char)arg1 ;
-(void)processRecords:(id)arg1 ;
-(void)validateMetaDataIfNeeded;
-(void)resetMetaData;
-(void)markPersonAsViewed:(id)arg1 ;
-(char)lockInfo;
-(void)unlockInfo;
-(void)markViewedForRecord:(id)arg1 tryAgain:(char)arg2 ;
-(void)writeMetadata:(id)arg1 toURL:(id)arg2 ;
-(void)validateAllMetaDataForceRebuild:(char)arg1 ;
-(void)planToComplete:(id)arg1 forType:(int)arg2 ;
-(void)completed:(id)arg1 forType:(int)arg2 ;
-(void)stamp;
-(void)reportDelinquentUIDs:(id)arg1 forJobType:(int)arg2 ;
-(void)removeMetadataForRecordWithUniqueId:(id)arg1 quantumBaseURLs:(id)arg2 ;
-(id)metaDataCacheDirectory;
-(id)metaDataCacheFilenameForUID:(id)arg1 ;
-(id)initWithAddressBook:(id)arg1 ignoredDirectories:(id)arg2 ;
-(id)metaDataLockFile;
-(void)_postpone;
-(void)mdlog:(id)arg1 action:(id)arg2 ;
-(id)currentChecksumForDirectory:(id)arg1 ;
-(void)writeOutInfo;
-(id)keyForType:(long long)arg1 ;
-(id)opsForType:(int)arg1 ;
-(void)removeDuplicates:(id)arg1 ;
-(id)metaDataCachePathForUID:(id)arg1 ;
-(char)shouldIgnoreUpdates;
-(void)manageMetadataForRecords:(id)arg1 action:(int)arg2 ;
-(void)markPersonWithUniqueIdAsViewed:(id)arg1 secondTry:(char)arg2 ;
-(id)viewedDateForRecordWithUniqueId:(id)arg1 ;
-(id)currentChecksumForDatabase;
-(void)wipeMetaDataDirectory;
-(long long)lastChangeCount;
-(void)removeDuplicatesForType:(int)arg1 ;
-(void)addUniqueIdsMissingFromSet:(id)arg1 toArray:(id)arg2 forClass:(Class)arg3 prefetch:(char)arg4 inAddressBook:(id)arg5 ;
-(char)nts_RestoreFromMetaData;
-(void)runIgnoringUpdates:(/*^block*/id)arg1 ;
-(void)postpone;
-(char)hasRecordsInMetaDataCache;
-(void)markPersonWithUniqueIdAsViewed:(id)arg1 ;
-(id)viewedDateForPerson:(id)arg1 ;
-(void)setLastChangeCount:(long long)arg1 ;
-(void)stateOfTheMetadata;
-(char)restoreFromMetaData;
-(void)stopImmediately;
-(void)waitForThreadsToFinish;
-(void)waitForThreadsToFinishWithTimeout:(double)arg1 ;
-(char)isSuspended;
-(void)dealloc;
-(void)setSuspended:(char)arg1 ;
-(char)isRunning;
-(void)addOperation:(id)arg1 ;
-(id)initWithAddressBook:(id)arg1 ;
@end

