/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PFUbiquityLocation, NSPersistentStoreCoordinator, NSPersistentStore, PFUbiquityMetadataFactoryFilePresenter;

@interface PFUbiquityMetadataFactoryEntry : NSObject {

	PFUbiquityLocation* _metadataStoreFileLocation;
	NSPersistentStoreCoordinator* _psc;
	NSPersistentStore* _store;
	PFUbiquityMetadataFactoryFilePresenter* _filePresenter;

}

@property (nonatomic,readonly) PFUbiquityLocation * metadataStoreFileLocation;                      //@synthesize metadataStoreFileLocation=_metadataStoreFileLocation - In the implementation block
@property (nonatomic,readonly) PFUbiquityMetadataFactoryFilePresenter * filePresenter;              //@synthesize filePresenter=_filePresenter - In the implementation block
@property (nonatomic,readonly) NSPersistentStoreCoordinator * psc;                                  //@synthesize psc=_psc - In the implementation block
@property (nonatomic,readonly) NSPersistentStore * store;                                           //@synthesize store=_store - In the implementation block
-(NSPersistentStore *)store;
-(NSPersistentStoreCoordinator *)psc;
-(PFUbiquityMetadataFactoryFilePresenter *)filePresenter;
-(PFUbiquityLocation *)metadataStoreFileLocation;
-(id)initWithMetadataStoreFileLocation:(id)arg1 ;
-(char)initializePersistentStoreCoordinator:(id*)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
@end

