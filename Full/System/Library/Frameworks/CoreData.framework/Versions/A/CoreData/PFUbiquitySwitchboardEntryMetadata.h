/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSString, PFUbiquityLocation, NSMutableSet, NSPersistentStoreCoordinator, NSSQLCore, _PFUbiquityRecordsImporter, _PFUbiquityRecordsExporter, PFUbiquitySwitchboardCacheWrapper, PFUbiquityRecordsImporterSchedulingContext, PFUbiquityBaselineHeuristics, NSSet;

@interface PFUbiquitySwitchboardEntryMetadata : NSObject {

	NSString* _localPeerID;
	NSString* _storeName;
	PFUbiquityLocation* _ubiquityRootLocation;
	PFUbiquityLocation* _localRootLocation;
	NSString* _activeModelVersionHash;
	NSMutableSet* _stores;
	NSPersistentStoreCoordinator* _privatePSC;
	NSSQLCore* _privateStore;
	_PFUbiquityRecordsImporter* _importer;
	_PFUbiquityRecordsExporter* _exporter;
	PFUbiquitySwitchboardCacheWrapper* _cacheWrapper;
	PFUbiquityRecordsImporterSchedulingContext* _schedulingContext;
	char _useLocalStorage;
	char _useLocaAccount;
	dispatch_queue_sRef _privateQueue;
	PFUbiquityBaselineHeuristics* _baselineHeuristics;

}

@property (nonatomic,retain) PFUbiquitySwitchboardCacheWrapper * cacheWrapper;                              //@synthesize cacheWrapper=_cacheWrapper - In the implementation block
@property (nonatomic,readonly) _PFUbiquityRecordsImporter * importer;                                       //@synthesize importer=_importer - In the implementation block
@property (nonatomic,readonly) _PFUbiquityRecordsExporter * exporter;                                       //@synthesize exporter=_exporter - In the implementation block
@property (nonatomic,retain) PFUbiquityLocation * ubiquityRootLocation;                                     //@synthesize ubiquityRootLocation=_ubiquityRootLocation - In the implementation block
@property (nonatomic,readonly) NSSet * stores;                                                              //@synthesize stores=_stores - In the implementation block
@property (nonatomic,readonly) NSString * activeModelVersionHash;                                           //@synthesize activeModelVersionHash=_activeModelVersionHash - In the implementation block
@property (nonatomic,readonly) NSPersistentStoreCoordinator * privatePSC;                                   //@synthesize privatePSC=_privatePSC - In the implementation block
@property (nonatomic,readonly) NSSQLCore * privateStore;                                                    //@synthesize privateStore=_privateStore - In the implementation block
@property (nonatomic,readonly) PFUbiquityRecordsImporterSchedulingContext * schedulingContext;              //@synthesize schedulingContext=_schedulingContext - In the implementation block
@property (assign,nonatomic) char useLocalStorage;                                                          //@synthesize useLocalStorage=_useLocalStorage - In the implementation block
@property (assign,nonatomic) char useLocalAccount;                                                          //@synthesize useLocaAccount=_useLocaAccount - In the implementation block
@property (nonatomic,readonly) PFUbiquityBaselineHeuristics * baselineHeuristics;                           //@synthesize baselineHeuristics=_baselineHeuristics - In the implementation block
-(NSSet *)stores;
-(NSSQLCore *)privateStore;
-(PFUbiquityLocation *)ubiquityRootLocation;
-(_PFUbiquityRecordsImporter *)importer;
-(PFUbiquitySwitchboardCacheWrapper *)cacheWrapper;
-(PFUbiquityBaselineHeuristics *)baselineHeuristics;
-(void)setUseLocalStorage:(char)arg1 ;
-(void)setUbiquityRootLocation:(PFUbiquityLocation *)arg1 ;
-(char)useLocalStorage;
-(void)setCacheWrapper:(PFUbiquitySwitchboardCacheWrapper *)arg1 ;
-(PFUbiquityRecordsImporterSchedulingContext *)schedulingContext;
-(NSPersistentStoreCoordinator *)privatePSC;
-(id)initWithLocalPeerID:(id)arg1 ubiquityRootLocation:(id)arg2 localRootLocation:(id)arg3 storeName:(id)arg4 andPrivateQueue:(dispatch_queue_sRef)arg5 ;
-(_PFUbiquityRecordsExporter *)exporter;
-(void)setUseLocalAccount:(char)arg1 ;
-(NSString *)activeModelVersionHash;
-(char)useLocalAccount;
-(void)dealloc;
-(void)removePersistentStore:(id)arg1 ;
-(void)addPersistentStore:(id)arg1 ;
-(void)tearDown;
@end

