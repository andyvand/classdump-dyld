/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/PFUbiquitySafeSaveFile.h>

@class PFUbiquityLocation, PFUbiquityBaselineMetadata, NSMutableDictionary, NSString, NSManagedObjectModel, _PFZipFileArchive, NSPersistentStore, NSDictionary;

@interface PFUbiquityBaseline : PFUbiquitySafeSaveFile {

	PFUbiquityLocation* _baselineStagingLocation;
	PFUbiquityBaselineMetadata* _metadata;
	NSMutableDictionary* _storeFilenameToData;
	NSString* _storeFilename;
	NSString* _storeName;
	NSString* _modelVersionHash;
	NSManagedObjectModel* _model;
	_PFZipFileArchive* _baselineArchive;
	NSPersistentStore* _store;

}

@property (readonly) PFUbiquityLocation * baselineArchiveLocation; 
@property (readonly) PFUbiquityLocation * baselineStagingLocation;                  //@synthesize baselineStagingLocation=_baselineStagingLocation - In the implementation block
@property (readonly) PFUbiquityLocation * baselinePeerArchiveLocation; 
@property (readonly) PFUbiquityBaselineMetadata * metadata;                         //@synthesize metadata=_metadata - In the implementation block
@property (readonly) NSDictionary * storeFilenameToData;                            //@synthesize storeFilenameToData=_storeFilenameToData - In the implementation block
@property (readonly) NSString * storeFilename;                                      //@synthesize storeFilename=_storeFilename - In the implementation block
@property (readonly) NSString * storeName;                                          //@synthesize storeName=_storeName - In the implementation block
@property (readonly) NSString * modelVersionHash;                                   //@synthesize modelVersionHash=_modelVersionHash - In the implementation block
@property (readonly) _PFZipFileArchive * baselineArchive;                           //@synthesize baselineArchive=_baselineArchive - In the implementation block
@property (readonly) NSPersistentStore * store;                                     //@synthesize store=_store - In the implementation block
+(char)checkPeerReceiptsUnderRootLocation:(id)arg1 forAgreementWithLocalPeerID:(id)arg2 storeName:(id)arg3 modelVersionHash:(id)arg4 error:(id*)arg5 ;
+(id)createArchiveWithModel:(id)arg1 metadata:(id)arg2 storeFilenameToData:(id)arg3 storeFilename:(id)arg4 error:(id*)arg5 ;
+(id)metadataFromBaselineArchive:(id)arg1 ;
+(id)metadataFromCurrentBaselineForStoreWithName:(id)arg1 peerID:(id)arg2 modelVersionHash:(id)arg3 andUbiquityRootLocation:(id)arg4 withError:(id*)arg5 ;
+(char)isPeerReceiptTooOld:(id)arg1 ;
+(id)createModelFromBaselineModelWithModelVersionHash:(id)arg1 peerID:(id)arg2 storeName:(id)arg3 andUbiquityRootLocation:(id)arg4 ;
+(id)createBaselineGCModelForStoreName:(id)arg1 peerID:(id)arg2 modelVersionHash:(id)arg3 andUbiquityRootLocation:(id)arg4 ;
+(id)createBaselineOptimizedModelForStoreName:(id)arg1 peerID:(id)arg2 modelVersionHash:(id)arg3 andUbiquityRootLocation:(id)arg4 ;
+(char)removePeerSpecificIdentifiersFromStore:(id)arg1 withLocalPeerID:(id)arg2 ;
+(id)createStringOfContentsOfBaselineFile:(id)arg1 ;
-(PFUbiquityBaselineMetadata *)metadata;
-(NSPersistentStore *)store;
-(NSString *)modelVersionHash;
-(NSString *)storeName;
-(id)initWithBaselineLocation:(id)arg1 andLocalPeerID:(id)arg2 ;
-(id)createPersistentStoreCoordinatorForCurrentBaseline:(id*)arg1 ;
-(PFUbiquityLocation *)baselineArchiveLocation;
-(PFUbiquityLocation *)baselineStagingLocation;
-(char)clearOutStagingLocationWithError:(id*)arg1 ;
-(NSDictionary *)storeFilenameToData;
-(NSString *)storeFilename;
-(char)constructBaselineArchive:(id*)arg1 ;
-(PFUbiquityLocation *)baselinePeerArchiveLocation;
-(char)unpackStoreFilesToStagingLocation:(id*)arg1 ;
-(char)haveTransactionLogsForPeer:(id)arg1 between:(long long)arg2 and:(long long)arg3 ;
-(char)makeCurrentBaselineWithError:(id*)arg1 ;
-(char)replaceLocalPersistentStoreAtURL:(id)arg1 ofType:(id)arg2 withOptions:(id)arg3 usingPersistentStoreCoordinator:(id)arg4 error:(id*)arg5 ;
-(id)_createPersistentStoreCoordinatorForCurrentBaseline:(char)arg1 error:(id*)arg2 ;
-(id)optimizedModelData;
-(id)gcModelData;
-(char)moveToPermanentLocation:(id*)arg1 ;
-(id)createManagedObjectModelFromCurrentBaseline;
-(_PFZipFileArchive *)baselineArchive;
-(id)createSetOfInUseExternalDataRefUUIDs:(id*)arg1 ;
-(id)initWithLocalPeerID:(id)arg1 ubiquityRootLocation:(id)arg2 forStoreWithName:(id)arg3 andManagedObjectModel:(id)arg4 ;
-(char)prepareForBaselineRollOfPersistentStore:(id)arg1 andLocalPeerID:(id)arg2 error:(id*)arg3 ;
-(char)gatherContentsFromMigratedBaseline:(id)arg1 withStoreFileURL:(id)arg2 error:(id*)arg3 ;
-(char)gatherContentsAndConstructArchiveWithError:(id*)arg1 ;
-(char)loadFileFromLocation:(id)arg1 error:(id*)arg2 ;
-(char)canReplaceStoreAtKnowledgeVector:(id)arg1 ;
-(char)isUploaded:(id*)arg1 ;
-(char)metadataMatchesCurrentMetadata:(id*)arg1 ;
-(char)importBaselineForStoreAtURL:(id)arg1 ofType:(id)arg2 options:(id)arg3 withLocalPeerID:(id)arg4 stack:(id)arg5 andPersistentStoreCoordinator:(id)arg6 error:(id*)arg7 ;
-(char)updateCurrentStoreIdentifier:(id)arg1 error:(id*)arg2 ;
-(char)writeFileToLocation:(id)arg1 error:(id*)arg2 ;
-(id)baselineMetadataData;
-(id)storeData;
-(id)createManagedObjectModel;
-(char)removeUnusedExternalDataReferences:(id*)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setMetadata:(PFUbiquityBaselineMetadata *)arg1 ;
@end

