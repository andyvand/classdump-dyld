/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSStoreMapping.h>

@class NSSQLModel, NSEntityDescription, NSString, NSMutableDictionary, NSArray, NSMutableArray, NSSQLPrimaryKey, NSSQLEntityKey, NSSQLOptLockKey, NSSQLStoreMappingGenerator, NSSQLStatement, NSKnownKeysMappingStrategy;

@interface NSSQLEntity : NSStoreMapping {

	NSSQLModel* _model;
	NSEntityDescription* _entityDescription;
	NSString* _tableName;
	NSMutableDictionary* _properties;
	NSArray* _propertyAllCache;
	NSArray* _propertiesAllToManysCache;
	NSArray* _propertyManyToManyCache;
	NSMutableArray* _columnsToFetch;
	NSMutableArray* _ekColumns;
	NSMutableArray* _fkColumns;
	NSMutableArray* _fokColumns;
	NSMutableArray* _attrColumns;
	NSMutableArray* _virtualFKs;
	NSSQLPrimaryKey* _primaryKey;
	NSSQLEntityKey* _entityKey;
	NSSQLOptLockKey* _optLockKey;
	NSMutableArray* _subentities;
	NSSQLEntity* _superentity;
	NSSQLEntity* _rootEntity;
	NSSQLStoreMappingGenerator* _mappingGenerator;
	unsigned _entityID;
	unsigned _subentityMaxID;
	NSRange _toOneRange;
	long long _maxPK;
	NSSQLStatement* _insertStatementCache;
	NSSQLStatement* _deletionStatementCache;
	NSSQLStatement* _faultingStatementCache;
	NSMutableDictionary* _toManyRelationshipStatementCache;
	CFDictionaryRef _correlationInsertCache;
	CFDictionaryRef _correlationDeleteCache;
	CFDictionaryRef _correlationMasterReorderCache;
	CFDictionaryRef _correlationMasterReorderCachePart2;
	CFDictionaryRef _correlationReorderCache;
	void* _fetch_entity_plan;
	NSKnownKeysMappingStrategy* _propertyMapping;
	void* _odiousHashHackStorage;
	unsigned _pkCount;
	struct {
		unsigned _hasAttributesWithExternalDataReferences : 1;
		unsigned _reserved : 31;
	}  _sqlentityFlags;

}
-(id)model;
-(id)externalName;
-(void)setSubentities:(id)arg1 ;
-(id)_propertySearchMapping;
-(void)_addSubentity:(id)arg1 ;
-(id)subentities;
-(void*)_odiousHashHack;
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(char)isRootEntity;
-(id)tableName;
-(id)columnsToCreate;
-(id)columnsToFetch;
-(id)mappingGenerator;
-(id)manyToManyRelationships;
-(char)hasSubentities;
-(id)subentityKey;
-(id)entityDescription;
-(id)propertyNamed:(id)arg1 ;
-(id)primaryKey;
-(id)propertyMapping;
-(id)foreignKeyColumns;
-(id)attributeColumns;
-(id)attributeNamed:(id)arg1 ;
-(unsigned)_pkCount;
-(void)_setMaxPK:(long long)arg1 ;
-(char)hasAttributesWithExternalDataReferences;
-(id)relationshipNamed:(id)arg1 ;
-(id)faultingStatement;
-(void)cacheFaultingStatement:(id)arg1 ;
-(id)preparedFaultingCachesForRelationship:(id)arg1 ;
-(void)cacheFaultingStatement:(id)arg1 andFetchRequest:(id)arg2 forRelationship:(id)arg3 ;
-(NSRange)_toOneRange;
-(void)_resetPKCount;
-(void)addInsertedObject:(id)arg1 toArray:(id)arg2 ;
-(long long)nextPrimaryKey64;
-(id)foreignEntityKeyColumns;
-(id)foreignOrderKeyColumns;
-(id)optLockKey;
-(void)clearCachedStatements;
-(void)_doPostModelGenerationCleanup;
-(id)rootEntity;
-(unsigned)subentityMaxID;
-(void)_addRootColumnToFetch:(id)arg1 ;
-(void)_addColumnToFetch:(id)arg1 ;
-(void)_addForeignOrderKeyForToOne:(id)arg1 entity:(id)arg2 ;
-(id)_addVirtualToOneForToMany:(id)arg1 withInheritedProperty:(id)arg2 ;
-(void)_generateProperties;
-(void)setSuperentity:(id)arg1 ;
-(unsigned)_generateIDWithSuperEntity:(id)arg1 nextID:(unsigned)arg2 ;
-(char)_collectFKSlots:(id)arg1 error:(id*)arg2 ;
-(void)cacheInsertStatement:(id)arg1 ;
-(void)cacheDeletionStatement:(id)arg1 ;
-(CFDictionaryRef)createCorrelationCacheDictionary;
-(void)insertOrReplaceStatement:(id)arg1 forRelationship:(id)arg2 inDictionary:(CFDictionaryRef)arg3 ;
-(id)initWithModel:(id)arg1 entityDescription:(id)arg2 ;
-(id)toManyRelationships;
-(unsigned)fetchIndexForKey:(id)arg1 ;
-(id)virtualForeignKeyColumns;
-(char)hasInheritance;
-(char)isKindOfSQLEntity:(id)arg1 ;
-(id)_sqlPropertyWithRenamingIdentifier:(id)arg1 ;
-(void)_generateInverseRelationshipsAndMore;
-(char)_entityIsBroken:(id*)arg1 ;
-(id)insertStatement;
-(id)deletionStatement;
-(id)correlationInsertStatementForRelationship:(id)arg1 ;
-(void)cacheCorrelationInsertStatement:(id)arg1 forRelationship:(id)arg2 ;
-(id)correlationMasterReorderStatementForRelationship:(id)arg1 ;
-(void)cacheCorrelationMasterReorderStatement:(id)arg1 forRelationship:(id)arg2 ;
-(id)correlationMasterReorderStatementPart2ForRelationship:(id)arg1 ;
-(void)cacheCorrelationMasterReorderStatementPart2:(id)arg1 forRelationship:(id)arg2 ;
-(id)correlationReorderStatementForRelationship:(id)arg1 ;
-(void)cacheCorrelationReorderStatement:(id)arg1 forRelationship:(id)arg2 ;
-(id)correlationDeleteStatementForRelationship:(id)arg1 ;
-(void)cacheCorrelationDeleteStatement:(id)arg1 forRelationship:(id)arg2 ;
-(char)addPropertiesForReadOnlyFetch:(id)arg1 keys:(id)arg2 context:(id)arg3 ;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(id)name;
-(id)properties;
-(id)attributes;
-(id)superentity;
-(id)propertiesByName;
-(unsigned)entityID;
@end

