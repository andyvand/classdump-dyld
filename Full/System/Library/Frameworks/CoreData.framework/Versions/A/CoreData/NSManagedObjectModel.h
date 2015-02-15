/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSCoding.h>
#import <CoreData/NSCopying.h>
#import <CoreData/NSFastEnumeration.h>

@class NSMutableDictionary, NSSet, NSDictionary, NSArray;

@interface NSManagedObjectModel : NSObject <NSCoding, NSCopying, NSFastEnumeration> {

	id _dataForOptimization;
	id* _optimizationHints;
	id _localizationPolicy;
	NSMutableDictionary* _entities;
	NSMutableDictionary* _configurations;
	NSMutableDictionary* _fetchRequestTemplates;
	NSSet* _versionIdentifiers;
	struct {
		unsigned _isInUse : 1;
		unsigned _isImmutable : 1;
		unsigned _isOptimizedForEncoding : 1;
		unsigned _reservedEntityDescription : 29;
	}  _managedObjectModelFlags;

}

@property (copy,readonly) NSDictionary * entitiesByName; 
@property (retain) NSArray * entities; 
@property (readonly) NSArray * configurations; 
@property (retain) NSDictionary * localizationDictionary; 
@property (copy,readonly) NSDictionary * fetchRequestTemplatesByName; 
@property (copy) NSSet * versionIdentifiers; 
@property (copy,readonly) NSDictionary * entityVersionHashesByName; 
+(id)_modelPathsFromBundles:(id)arg1 ;
+(id)modelByMergingModels:(id)arg1 ;
+(void)_deepCollectEntitiesInArray:(id)arg1 entity:(id)arg2 ;
+(id)modelByMergingModels:(id)arg1 forStoreMetadata:(id)arg2 ;
+(id)mergedModelFromBundles:(id)arg1 forStoreMetadata:(id)arg2 ;
+(id)_newModelFromOptimizedEncoding:(id)arg1 error:(id*)arg2 ;
+(void)initialize;
+(id)mergedModelFromBundles:(id)arg1 ;
-(NSArray *)entities;
-(NSDictionary *)entityVersionHashesByName;
-(id)_versionIdentifiersAsArray;
-(id)entitiesForConfiguration:(id)arg1 ;
-(id)_entityForName:(id)arg1 ;
-(void)_setIsEditable:(char)arg1 ;
-(id)_localizationPolicy;
-(void)_throwIfNotEditable;
-(id)versionHash;
-(void)_createCachesAndOptimizeState;
-(void)_removeEntity:(id)arg1 ;
-(void)_flattenProperties;
-(char)_isOptimizedForEncoding;
-(void)_stripForMigration;
-(void)_restoreValidation;
-(NSDictionary *)fetchRequestTemplatesByName;
-(id)fetchRequestTemplateForName:(id)arg1 ;
-(void)_setLocalizationPolicy:(id)arg1 ;
-(void)_addEntities:(id)arg1 toConfiguration:(id)arg2 ;
-(void)setFetchRequestTemplate:(id)arg1 forName:(id)arg2 ;
-(NSSet *)versionIdentifiers;
-(void)_addVersionIdentifiers:(id)arg1 ;
-(id)_modelForVersionHashes:(id)arg1 ;
-(id)_initWithEntities:(id)arg1 ;
-(id)initWithContentsOfOptimizedURL:(id)arg1 ;
-(void)setEntities:(NSArray *)arg1 ;
-(void)setEntities:(id)arg1 forConfiguration:(id)arg2 ;
-(void)setVersionIdentifiers:(NSSet *)arg1 ;
-(NSDictionary *)localizationDictionary;
-(void)setLocalizationDictionary:(NSDictionary *)arg1 ;
-(id)_entityVersionHashesByNameInStyle:(unsigned long long)arg1 ;
-(char)_isConfiguration:(id)arg1 inStyle:(unsigned long long)arg2 compatibleWithStoreMetadata:(id)arg3 ;
-(NSArray *)configurations;
-(id)fetchRequestFromTemplateWithName:(id)arg1 substitutionVariables:(id)arg2 ;
-(void)_setIsEditable:(char)arg1 optimizationStyle:(unsigned long long)arg2 ;
-(id)_optimizedEncoding:(id*)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 forStoreMetadata:(id)arg2 ;
-(char)_hasPrecomputedKeyOrder;
-(void)_removeEntities:(id)arg1 fromConfiguration:(id)arg2 ;
-(void)_removeEntityNamed:(id)arg1 ;
-(id)_precomputedKeysForEntity:(id)arg1 ;
-(id)_configurationsByName;
-(id)_sortedEntitiesForConfiguration:(id)arg1 ;
-(id)_entitiesByVersionHash;
-(void)_addEntity:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS7*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEditable;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(NSDictionary *)entitiesByName;
-(char)isConfiguration:(id)arg1 compatibleWithStoreMetadata:(id)arg2 ;
@end

