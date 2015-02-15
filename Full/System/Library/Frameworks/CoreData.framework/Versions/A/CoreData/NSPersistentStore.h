/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSPersistentStoreCoordinator, NSString, NSURL, NSDictionary;

@interface NSPersistentStore : NSObject {

	NSPersistentStoreCoordinator* _coordinator;
	NSString* _configurationName;
	NSURL* _url;
	NSDictionary* _options;
	id* _oidFactories;
	id _defaultFaultHandler;
	struct {
		unsigned isReadOnly : 1;
		unsigned cleanOnRemove : 1;
		unsigned isMDDirty : 1;
		unsigned _RESERVED : 29;
	}  _flags;
	void* _temporaryIDClass;
	id _externalRecordsMonitor;
	void* _reserved3;

}

@property (nonatomic,__weak,readonly) NSPersistentStoreCoordinator * persistentStoreCoordinator; 
@property (copy,readonly) NSString * configurationName; 
@property (readonly) NSDictionary * options; 
@property (retain) NSURL * URL; 
@property (copy) NSString * identifier; 
@property (copy,readonly) NSString * type; 
@property (getter=isReadOnly) char readOnly; 
@property (nonatomic,retain) NSDictionary * metadata; 
+(id)metadataForPersistentStoreWithURL:(id)arg1 error:(id*)arg2 ;
+(char)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id*)arg3 ;
+(Class)migrationManagerClass;
+(char)_replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 error:(id*)arg5 ;
+(char)_destroyPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(char)doURLStuff:(id)arg1 createdStubFile:(char*)arg2 readOnly:(char*)arg3 error:(id*)arg4 options:(id)arg5 ;
+(id)_figureOutWhereExternalReferencesEndedUpRelativeTo:(id)arg1 ;
+(void)initialize;
+(char)accessInstanceVariablesDirectly;
-(void)setReadOnly:(char)arg1 ;
-(NSDictionary *)metadata;
-(void)_setMetadataDirty:(char)arg1 ;
-(id)_rawMetadata__;
-(char)_unload:(id*)arg1 ;
-(id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4 ;
-(void)_resetObjectIDFactoriesForStoreUUIDChange;
-(char)isReadOnly;
-(NSString *)configurationName;
-(void)willRemoveFromPersistentStoreCoordinator:(id)arg1 ;
-(void)didAddToPersistentStoreCoordinator:(id)arg1 ;
-(char)loadMetadata:(id*)arg1 ;
-(Class)faultHandlerClass;
-(Class)_objectIDClass;
-(id)_updatedMetadataWithSeed:(id)arg1 includeVersioning:(char)arg2 ;
-(id)faultHandler;
-(id)objectIDFactoryForEntity:(id)arg1 ;
-(Class)objectIDClassForEntity:(id)arg1 ;
-(char)load:(id*)arg1 ;
-(void)_preflightCrossCheck;
-(void)doFilesystemCleanupOnRemove:(char)arg1 ;
-(id*)knownKeyValuesForObjectID:(id)arg1 withContext:(id)arg2 ;
-(id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(char)_prepareForExecuteRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4 ;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 ;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 ;
-(id)_defaultMetadata;
-(void)_updateMetadata;
-(char)_isMetadataDirty;
-(void)_didLoadMetadata;
-(id)_storeInfoForEntityDescription:(id)arg1 ;
-(id)externalRecordsPath;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(NSURL *)URL;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(NSDictionary *)options;
-(void)setURL:(NSURL *)arg1 ;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(void)setPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
-(id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
@end

