/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <CoreData/NSManagedObject.h>
#import <AddressBook/ABRecordImplProtocol.h>

@class ABRecord, NSMutableDictionary;

@interface ABCDRecord : NSManagedObject <ABRecordImplProtocol> {

	ABRecord* _publicRecord;
	NSMutableDictionary* _propertyValueCache;

}
+(char)_isPublicRecord;
+(id)propertyTypesForClass:(Class)arg1 withAddressBook:(id)arg2 acquireLock:(char)arg3 ;
+(id)makeUniqueId;
+(long long)addPropertiesAndTypes:(id)arg1 forClass:(Class)arg2 withAddressBook:(id)arg3 acquireLock:(char)arg4 save:(char)arg5 ;
+(id)newNormalizedSearchString:(id)arg1 ;
+(id)copyPublicRecordForClass:(Class)arg1 withDatabaseImpl:(id)arg2 inAddressBook:(id)arg3 ;
+(id)newIncrementedSearchString:(id)arg1 ;
+(id)_table;
+(id)managedObjectContextForAddressBook:(id)arg1 ;
+(id)keyForProperty:(id)arg1 entityName:(id*)arg2 entityKey:(id*)arg3 ;
+(void)extractYear:(long long*)arg1 yearlessDate:(double*)arg2 fromDate:(id)arg3 ;
+(id)customPropertyValueKeyNameForPropertyType:(long long)arg1 isSerializedPropertyList:(char*)arg2 ;
+(id)abEntityName;
+(id)keyForProperty:(id)arg1 entityName:(id*)arg2 entityKey:(id*)arg3 entityWithValueSel:(SEL*)arg4 valueWithEntitySel:(SEL*)arg5 ;
+(id)customPropertyDefinitionWithName:(id)arg1 addressBook:(id)arg2 persistentStore:(id)arg3 ;
+(char)abEntityKnowsKey:(id)arg1 inAddressBook:(id)arg2 ;
+(id)bitwiseAndPredicateForKey:(id)arg1 andNumber:(long long)arg2 comparingToNumber:(long long)arg3 withComparisonType:(unsigned long long)arg4 ;
+(id)compoundPredicateForKey:(id)arg1 option:(id)arg2 andSubPredicate:(id)arg3 ;
+(id)copyPublicRecordsForClass:(Class)arg1 withDatabaseImpls:(id)arg2 inAddressBook:(id)arg3 ;
+(void)addMappedKeysToDictionary:(id)arg1 mappedEntities:(id)arg2 mappedEntitiesMainKeys:(id)arg3 entityWithValueConverter:(CFDictionaryRef)arg4 valueWithEntityConverter:(CFDictionaryRef)arg5 ;
+(id)prefetchRelationshipKeyPaths;
+(long long)addPropertiesAndTypes:(id)arg1 forClass:(Class)arg2 withAddressBook:(id)arg3 ;
+(id)publicRecordsForClass:(Class)arg1 withDatabaseImpls:(id)arg2 inAddressBook:(id)arg3 ;
+(id)metadataType;
+(id)abEntityDescriptionInAddressBook:(id)arg1 ;
+(void)clearCachedPropertyValue:(id)arg1 ;
+(char)hasAddressBookContentForRecord:(id)arg1 ;
+(id)customPropertyDescriptionWithName:(id)arg1 addressBook:(id)arg2 persistentStore:(id)arg3 ;
+(id)newNormalizedSortString:(id)arg1 ;
+(void)initializePropertiesForKeys:(id)arg1 ;
+(id)entityNameForPropertyKey:(id)arg1 ;
+(id)keyForProperty:(id)arg1 entityName:(id*)arg2 entityKey:(id*)arg3 entityWithValueSel:(SEL*)arg4 valueWithEntitySel:(SEL*)arg5 converterKeys:(id*)arg6 ;
+(char)abEntityKnowsKey:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(long long)typeOfCustomProperty:(id)arg1 addressBook:(id)arg2 ;
+(id)customPropertyDescriptionsWithAddressBook:(id)arg1 persistentStore:(id)arg2 ;
+(long long)typeOfProperty:(id)arg1 forRecord:(id)arg2 ;
+(void)initialize;
+(id)propertyForKey:(id)arg1 ;
-(id)addressBook;
-(id)nts_UniqueId;
-(void)touch:(id)arg1 ;
-(char)_isPublicRecord;
-(id)publicRecord;
-(id)accountRepository;
-(id)_table;
-(id)initWithUniqueId:(id)arg1 addressBook:(id)arg2 ;
-(id)nts_ChangedProperties;
-(void)abPublicRecordIsGone:(id)arg1 ;
-(void)setPublicRecord:(id)arg1 ;
-(id)nts_ValueForProperty:(id)arg1 record:(id)arg2 ;
-(char)nts_SetValue:(id)arg1 forProperty:(id)arg2 record:(id)arg3 ;
-(char)nts_HasChangedProperties;
-(id)nts_ParentGroupsOfRecord:(id)arg1 ;
-(id)nts_AffectsSmartGroupsIsNew:(char)arg1 record:(id)arg2 ;
-(id)metadataURL;
-(id)propertyValuesWithKey:(id)arg1 ;
-(id)allCustomPropertyValuesWithCustomProperty:(id)arg1 ;
-(id)allCustomPropertyValuesWithCustomPropertyDescription:(id)arg1 ;
-(char)applyMultiValue:(id)arg1 withProperty:(id)arg2 toRecord:(id)arg3 ;
-(id)propertyValueWithKey:(id)arg1 uniqueId:(id)arg2 ;
-(id)copyMultiValueWithRecord:(id)arg1 withProperty:(id)arg2 ;
-(void)clearCachedPropertyValue:(id)arg1 withKey:(id)arg2 ;
-(void)cachePropertyValue:(id)arg1 withKey:(id)arg2 uniqueId:(id)arg3 ;
-(char)isKindOfEntityNamed:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 withEntityName:(id)arg3 entityKey:(id)arg4 ;
-(id)valueForKey:(id)arg1 withEntityName:(id)arg2 entityKey:(id)arg3 ;
-(id)publicRecordCreatingRecordIfNecessary;
-(id)sortedPropertyValuesWithKey:(id)arg1 ;
-(id)permanentObjectID;
-(void)invalidateAllCachedPropertyValues;
-(id)customPropertyDescriptionWithName:(id)arg1 persistentStore:(id)arg2 ;
-(id)fetchPropertyValuesWithKey:(id)arg1 uniqueId:(id)arg2 ;
-(id)propertyValueWithKey:(id)arg1 uniqueId:(id)arg2 preventFetching:(char)arg3 ;
-(long long)creationDateYear;
-(double)creationDateYearless;
-(long long)modificationDateYear;
-(double)modificationDateYearless;
-(char)_valueHasChangedForKey:(id)arg1 ;
-(id)nts_SingleValueForProperty:(id)arg1 ;
-(void)nts_SetSingleValue:(id)arg1 forProperty:(id)arg2 ;
-(id)customPropertyDefinitionWithName:(id)arg1 persistentStore:(id)arg2 ;
-(id)accountBaseURL;
-(id)bucketKey;
-(void)clearCachedPropertyValuesWithKey:(id)arg1 ;
-(void)invalidateCachedPropertyValuesWithKey:(id)arg1 ;
-(void)setCreationDateYearless:(id)arg1 ;
-(void)setCreationDateYear:(id)arg1 ;
-(void)setModificationDateYearless:(id)arg1 ;
-(void)setModificationDateYear:(id)arg1 ;
-(id)fetchCustomPropertyValuesWithCustomProperty:(id)arg1 addressBook:(id)arg2 ;
-(id)aggregateModificationDate;
-(void)setAggregateModificationDate:(id)arg1 ;
-(id)nameWithFormatter:(id)arg1 rangeOfSortingSubstring:(NSRange*)arg2 ;
-(unsigned long long)nameOrderWithFormatter:(id)arg1 ;
-(void)didTurnIntoFault;
-(void)dealloc;
-(id)displayName;
-(void)setCreationDate:(id)arg1 ;
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
-(id)account;
-(void)awakeFromInsert;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setModificationDate:(id)arg1 ;
@end
