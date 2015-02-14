/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSString, PFUbiquityLocation, PFUbiquityFilePresenter, PFUbiquityContainerMonitor, NSMutableDictionary, PFUbiquitySwitchboardEntryMetadata, PFUbiquitySetupAssistant;

@interface PFUbiquitySwitchboardEntry : NSObject {

	NSString* _localPeerID;
	NSString* _storeName;
	PFUbiquityLocation* _ubiquityRootLocation;
	PFUbiquityLocation* _localRootLocation;
	PFUbiquityFilePresenter* _fp;
	PFUbiquityFilePresenter* _localFP;
	PFUbiquityContainerMonitor* _monitor;
	unsigned long long _activeStoreCount;
	NSMutableDictionary* _registeredCoordinators;
	PFUbiquitySwitchboardEntryMetadata* _metadata;
	char _finishedSetupForStore;
	char _hasScheduledFinishBlock;
	char _finishedInitializingForStore;
	int _finishLock;
	PFUbiquitySetupAssistant* _finishingSetupAssistant;
	dispatch_queue_sRef _privateQueue;

}

@property (assign) unsigned long long activeStoreCount;                                  //@synthesize activeStoreCount=_activeStoreCount - In the implementation block
@property (nonatomic,readonly) NSString * localPeerID;                                   //@synthesize localPeerID=_localPeerID - In the implementation block
@property (nonatomic,readonly) NSString * storeName;                                     //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,retain) PFUbiquityLocation * ubiquityRootLocation;                  //@synthesize ubiquityRootLocation=_ubiquityRootLocation - In the implementation block
@property (readonly) PFUbiquityLocation * localRootLocation;                             //@synthesize localRootLocation=_localRootLocation - In the implementation block
@property (readonly) PFUbiquityFilePresenter * filePresenter;                            //@synthesize fp=_fp - In the implementation block
@property (readonly) PFUbiquityFilePresenter * localFilePresenter;                       //@synthesize localFP=_localFP - In the implementation block
@property (readonly) PFUbiquityContainerMonitor * monitor;                               //@synthesize monitor=_monitor - In the implementation block
@property (readonly) PFUbiquitySetupAssistant * finishingSetupAssistant;                 //@synthesize finishingSetupAssistant=_finishingSetupAssistant - In the implementation block
@property (nonatomic,retain) PFUbiquitySwitchboardEntryMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
-(PFUbiquitySwitchboardEntryMetadata *)metadata;
-(NSString *)localPeerID;
-(void)unregisterPersistentStore:(id)arg1 ;
-(PFUbiquityFilePresenter *)filePresenter;
-(NSString *)storeName;
-(PFUbiquityLocation *)ubiquityRootLocation;
-(id)cacheWrapperForStoreName:(id)arg1 ;
-(id)metaForStoreName:(id)arg1 ;
-(void)setUbiquityRootLocation:(PFUbiquityLocation *)arg1 ;
-(PFUbiquityLocation *)localRootLocation;
-(void)executeBlockOnPrivateQueue:(/*^block*/id)arg1 ;
-(id)createSetOfActiveStoreNames;
-(id)createSetOfPersistentStoreCoordinatorsRegisteredForStoreName:(id)arg1 ;
-(PFUbiquityFilePresenter *)localFilePresenter;
-(id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 ubiquityRootLocation:(id)arg3 andLocalRootLocation:(id)arg4 ;
-(void)registerPersistentStore:(id)arg1 withStoreName:(id)arg2 ;
-(void)unregisterPersistentStoreCoordinator:(id)arg1 ;
-(unsigned long long)activeStoreCount;
-(void)entryWillBeRemovedFromSwitchboard;
-(void)filePresenterWasNotifiedTransactionLogs:(id)arg1 ;
-(void)filePresenterNoticedBaselineFileChange:(id)arg1 ;
-(void)containerIdentifierChanged:(id)arg1 ;
-(void)setupFinished;
-(void)synchronouslyExecuteBlockOnPrivateQueue:(/*^block*/id)arg1 ;
-(void)containerStateChanged:(id)arg1 ;
-(void)monitorStateChanged:(id)arg1 ;
-(char)finishSetupForStore:(id)arg1 withSetupAssistant:(id)arg2 synchronously:(char)arg3 error:(id*)arg4 finishBlock:(/*^block*/id)arg5 ;
-(void)afterDelay:(double)arg1 executeBlockOnPrivateQueue:(/*^block*/id)arg2 ;
-(void)afterDelay:(double)arg1 executeBlockOnGlobalConcurrentQueue:(/*^block*/id)arg2 ;
-(void)setActiveStoreCount:(unsigned long long)arg1 ;
-(PFUbiquityContainerMonitor *)monitor;
-(PFUbiquitySetupAssistant *)finishingSetupAssistant;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setMetadata:(PFUbiquitySwitchboardEntryMetadata *)arg1 ;
@end

