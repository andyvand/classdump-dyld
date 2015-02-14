/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/_PFUbiquityRecordImportOperationDelegate.h>
#import <CoreData/NSManagedObjectContextFaultingDelegate.h>
#import <CoreData/PFUbiquityBaselineRollOperationDelegate.h>
#import <CoreData/PFUbiquityBaselineRecoveryOperationDelegate.h>
#import <CoreData/PFUbiquityBaselineRollResponseOperationDelegate.h>

@class NSOperationQueue, NSString, PFUbiquityLocation, NSPersistentStoreCoordinator, NSSQLCore, PFUbiquityRecordsImporterSchedulingContext, PFUbiquitySwitchboardCacheWrapper, NSRecursiveLock, NSMutableDictionary, NSPersistentStore;

@interface _PFUbiquityRecordsImporter : NSObject <_PFUbiquityRecordImportOperationDelegate, NSManagedObjectContextFaultingDelegate, PFUbiquityBaselineRollOperationDelegate, PFUbiquityBaselineRecoveryOperationDelegate, PFUbiquityBaselineRollResponseOperationDelegate> {

	NSOperationQueue* _importQueue;
	dispatch_queue_sRef _privateQueue;
	char _isMonitoring;
	NSString* _localPeerID;
	PFUbiquityLocation* _ubiquityRootLocation;
	NSString* _storeName;
	NSString* _modelVersionHash;
	NSPersistentStoreCoordinator* _privatePSC;
	NSSQLCore* _privateStore;
	PFUbiquityRecordsImporterSchedulingContext* _schedulingContext;
	PFUbiquitySwitchboardCacheWrapper* _sideLoadCacheWrapper;
	dispatch_source_sRef _logRestartTimer;
	NSRecursiveLock* _schedulingLock;
	char _importOnlyActiveStores;
	char _throttleNotifications;
	unsigned long long _numPendingNotifications;
	NSMutableDictionary* _pendingNotificationUserInfo;
	char _allowBaselineRoll;
	unsigned long long _pendingImportOperationsCount;

}

@property (readonly) NSOperationQueue * importQueue;                                                        //@synthesize importQueue=_importQueue - In the implementation block
@property (readonly) NSString * localPeerID;                                                                //@synthesize localPeerID=_localPeerID - In the implementation block
@property (readonly) NSString * storeName;                                                                  //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,retain) PFUbiquityLocation * ubiquityRootLocation;                                     //@synthesize ubiquityRootLocation=_ubiquityRootLocation - In the implementation block
@property (readonly) char isMonitoring;                                                                     //@synthesize isMonitoring=_isMonitoring - In the implementation block
@property (assign) dispatch_source_sRef logRestartTimer;                                                    //@synthesize logRestartTimer=_logRestartTimer - In the implementation block
@property (nonatomic,readonly) NSRecursiveLock * schedulingLock;                                            //@synthesize schedulingLock=_schedulingLock - In the implementation block
@property (assign) char importOnlyActiveStores;                                                             //@synthesize importOnlyActiveStores=_importOnlyActiveStores - In the implementation block
@property (assign) char throttleNotifications;                                                              //@synthesize throttleNotifications=_throttleNotifications - In the implementation block
@property (assign) char allowBaselineRoll;                                                                  //@synthesize allowBaselineRoll=_allowBaselineRoll - In the implementation block
@property (nonatomic,readonly) PFUbiquityRecordsImporterSchedulingContext * schedulingContext;              //@synthesize schedulingContext=_schedulingContext - In the implementation block
@property (nonatomic,retain) PFUbiquitySwitchboardCacheWrapper * sideLoadCacheWrapper;                      //@synthesize sideLoadCacheWrapper=_sideLoadCacheWrapper - In the implementation block
@property (nonatomic,readonly) NSPersistentStore * privateStore;                                            //@synthesize privateStore=_privateStore - In the implementation block
@property (nonatomic,readonly) NSPersistentStoreCoordinator * privatePSC;                                   //@synthesize privatePSC=_privatePSC - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createPrivateCoordinatorForStore:(id)arg1 error:(id*)arg2 ;
+(id)addPrivateStore:(id)arg1 toCoordinator:(id)arg2 atURL:(id)arg3 error:(id*)arg4 ;
+(char)canProcessContentsOfUbiquityRootPath:(id)arg1 ;
+(id)createPrivateCoordinatorAndStoreForStore:(id)arg1 atURL:(id)arg2 error:(id*)arg3 ;
+(void)executeBlockOnRootQueue:(/*^block*/id)arg1 ;
+(void)afterDelay:(double)arg1 executeBlockOnRootQueue:(/*^block*/id)arg2 ;
+(void)initialize;
-(NSString *)localPeerID;
-(NSPersistentStore *)privateStore;
-(NSString *)storeName;
-(PFUbiquityLocation *)ubiquityRootLocation;
-(void)metadataInconsistencyDetectedForStore:(id)arg1 ;
-(void)requestBaselineRollForStore:(id)arg1 ;
-(id)initWithLocalPeerID:(id)arg1 andUbiquityRootLocation:(id)arg2 ;
-(void)setUbiquityRootLocation:(PFUbiquityLocation *)arg1 ;
-(NSOperationQueue *)importQueue;
-(char)canProcessTransactionLogWithScore:(id)arg1 afterLogWithScore:(id)arg2 ;
-(char)isMonitoring;
-(void)setAllowBaselineRoll:(char)arg1 ;
-(NSRecursiveLock *)schedulingLock;
-(id)createSortedOperationsArrayWithMetadata:(id)arg1 isFirstImport:(char)arg2 ;
-(char)checkSchedulingContextForMissingLocalPeerOperations:(id)arg1 error:(id*)arg2 ;
-(char)scheduleTransactionLogOperations:(id)arg1 synchronous:(char)arg2 error:(id*)arg3 ;
-(char)batchDownloadTransactionLogsAtLocations:(id)arg1 error:(id*)arg2 ;
-(char)schedulePendingLogs:(char)arg1 error:(id*)arg2 ;
-(id)createNewSetOfObjectIDsForCoordinator:(id)arg1 fromObjectIDs:(id)arg2 ;
-(char)shouldThrottleNotificationsWithOperation:(id)arg1 ;
-(void)postImportNotificationForStoreName:(id)arg1 andLocalPeerID:(id)arg2 withUserInfo:(id)arg3 ;
-(void)scheduleRecoveryTimer;
-(char)discoverAndImportAllAvailableLogs:(char)arg1 error:(id*)arg2 ;
-(dispatch_source_sRef)logRestartTimer;
-(void)setLogRestartTimer:(dispatch_source_sRef)arg1 ;
-(char)allowBaselineRoll;
-(void)executeBlockOnPrivateQueue:(/*^block*/id)arg1 ;
-(void)scheduleBaselineRecoveryOperationWithActiveBaselineOperation:(id)arg1 ;
-(void)operationDidFinish:(id)arg1 ;
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(void)operationWasInterruptedDuringImport:(id)arg1 ;
-(void)baselineRollOperationEncounteredAnInconsistentBaselineState:(id)arg1 ;
-(void)baselineRollOperationWasUnableToLockPersistentStore:(id)arg1 ;
-(void)recoveryOperation:(id)arg1 didReplaceLocalStoreFileWithBaseline:(id)arg2 ;
-(void)recoveryOperation:(id)arg1 encounteredAnError:(id)arg2 duringRecoveryOfBaseline:(id)arg3 ;
-(void)rollResponseOperation:(id)arg1 successfullyAdoptedBaseline:(id)arg2 ;
-(void)rollResponseOperation:(id)arg1 encounteredAnError:(id)arg2 whileTryingToAdoptBaseline:(id)arg3 ;
-(id)initWithLocalPeerID:(id)arg1 ubiquityRootLocation:(id)arg2 storeName:(id)arg3 andPrivateStore:(id)arg4 ;
-(char)startMonitor:(id*)arg1 ;
-(long long)compareScoreKnowledgeVector:(id)arg1 withScoreDictionary:(id)arg2 ;
-(void)scheduleBaselineRollResponseOperationForBaselineAtLocation:(id)arg1 ;
-(char)throttleNotifications;
-(void)setThrottleNotifications:(char)arg1 ;
-(char)importOnlyActiveStores;
-(void)setImportOnlyActiveStores:(char)arg1 ;
-(PFUbiquityRecordsImporterSchedulingContext *)schedulingContext;
-(PFUbiquitySwitchboardCacheWrapper *)sideLoadCacheWrapper;
-(void)setSideLoadCacheWrapper:(PFUbiquitySwitchboardCacheWrapper *)arg1 ;
-(NSPersistentStoreCoordinator *)privatePSC;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(long long)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4 ;
-(void)tearDown;
@end

