/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:39 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKProtocolMutableObject.h>
#import <EventKit/NSCopying.h>
#import <EventKit/NSCoding.h>

@class NSManagedObjectID, EKFrozenObject, EKEventStore, NSString, EKChangeSet, EKBatchChangeInfo, NSMutableDictionary, NSDictionary;

@interface EKObject : NSObject <EKProtocolMutableObject, NSCopying, NSCoding> {

	NSManagedObjectID* managedObjectID;
	EKFrozenObject* _backingObject;
	EKEventStore* _eventStore;
	NSString* _eventStoreIdentifier;
	EKChangeSet* _changeSet;
	EKBatchChangeInfo* _batchChangeInfo;
	NSMutableDictionary* _cachedMeltedObjects;
	unsigned long long* _cachedHash;

}

@property (nonatomic,retain) EKFrozenObject * backingObject;                             //@synthesize backingObject=_backingObject - In the implementation block
@property (nonatomic,retain) EKEventStore * eventStore;                                  //@synthesize eventStore=_eventStore - In the implementation block
@property (nonatomic,retain) NSString * eventStoreIdentifier;                            //@synthesize eventStoreIdentifier=_eventStoreIdentifier - In the implementation block
@property (nonatomic,retain) EKChangeSet * changeSet;                                    //@synthesize changeSet=_changeSet - In the implementation block
@property (nonatomic,retain) EKBatchChangeInfo * batchChangeInfo;                        //@synthesize batchChangeInfo=_batchChangeInfo - In the implementation block
@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,retain) NSMutableDictionary * cachedMeltedObjects;                  //@synthesize cachedMeltedObjects=_cachedMeltedObjects - In the implementation block
@property (assign,nonatomic) unsigned long long* cachedHash;                             //@synthesize cachedHash=_cachedHash - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char canBeConvertedToFullObject; 
@property (nonatomic,readonly) char isPartialObject; 
@property (nonatomic,readonly) NSDictionary * preFrozenRelationshipObjects; 
@property (nonatomic,readonly) NSManagedObjectID * managedObjectID; 
+(Class)frozenClass;
+(char)canonicalizedEqualityTestValue1:(id)arg1 value2:(id)arg2 key:(id)arg3 object1:(id)arg4 object2:(id)arg5 ;
+(id)objectWithObject:(id)arg1 ;
+(unsigned long long)hashForObject:(id)arg1 ;
+(id)knownIdentityKeys;
+(id)knownImmutableKeys;
+(id)knownRelationshipSingleValueKeys;
+(id)knownRelationshipMultiValueKeys;
+(id)knownSingleValueKeys;
+(id)keysToCheckForChangedKeysMethod;
+(Class)meltedClass;
+(id)batchChangeNotificationName;
+(char)isMeltedAndNotWeakRelationshipObject:(id)arg1 ;
+(void)_insertPreFrozenRelationshipObject:(id)arg1 withKey:(id)arg2 intoDictionary:(id)arg3 ;
+(char)isWeakRelationship;
+(char)_compareNonRelationshipKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 ;
+(char)_compareSingleValueRelationshipKey:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 ;
+(char)_compareMutliValueRelationshipKey:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 ;
+(char)_object:(id)arg1 equalsObject:(id)arg2 compareImmutableKeys:(char)arg3 ;
+(char)_object:(id)arg1 equalsObject:(id)arg2 forKeys:(id)arg3 compareImmutableKeys:(char)arg4 ;
+(char)_objects:(id)arg1 haveSameMeltedClass:(Class)arg2 frozenClass:(Class)arg3 ;
+(char)_compareKnownKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 compareImmutableKeys:(char)arg4 ;
+(char)_compareAllKnownKeysExceptKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 compareIdentityKeys:(char)arg4 ;
+(char)_compareKnownKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 compareIdentityKeys:(char)arg4 compareImmutableKeys:(char)arg5 ;
+(char)_compareIdentityKeysForObject:(id)arg1 againstObject:(id)arg2 ;
+(char)_compareNonIdentityKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 compareImmutableKeys:(char)arg4 ;
+(id)_createNonPartialObjectFromObject:(id)arg1 ifPropertyIsUnavailable:(id)arg2 ;
+(char)_compareRelationshipObject1:(id)arg1 againstRelationshipObject2:(id)arg2 ;
+(char)_compareSingleValueRelationshipKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 ;
+(char)_compareMultiValueRelationshipKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 ;
+(id)objectWithObject:(id)arg1 preFrozenRelationshipObjects:(id)arg2 ;
+(char)_object:(id)arg1 equalsObject:(id)arg2 ;
+(char)_object:(id)arg1 equalsObject:(id)arg2 forKeys:(id)arg3 ;
+(id)inverseObjectForObject:(id)arg1 fromObject:(id)arg2 ;
+(char)_compareAllKnownKeysExceptKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 ;
+(char)_compareKnownKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 ;
+(char)_compareNonIdentityKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 ;
+(id)uniqueIdentifierForObject:(id)arg1 ;
+(id)propertiesUnavailableForPartialObjects;
-(id)duplicate;
-(char)commit:(id*)arg1 ;
-(id)summary;
-(void)rollback;
-(id)initWithObject:(id)arg1 createPartialBackingObject:(char)arg2 keepBackingObject:(char)arg3 preFrozenRelationshipObjects:(id)arg4 ;
-(EKFrozenObject *)backingObject;
-(id)meltedAndCachedSingleRelationObjectForKey:(id)arg1 ;
-(id)frozenOrMeltedCachedSingleRelationObjectForKey:(id)arg1 ;
-(id)cachedMeltedObjectsForMultiValueKey:(id)arg1 ;
-(void)updateMeltedAndCachedSingleRelationObject:(id)arg1 forKey:(id)arg2 frozenClass:(Class)arg3 ;
-(id)singleChangedValueForKey:(id)arg1 ;
-(void)setSingleChangedValue:(id)arg1 forKey:(id)arg2 ;
-(id)meltedAndCachedMultiRelationObjectsForKey:(id)arg1 ;
-(void)updateMeltedAndCachedMultiRelationObjects:(id)arg1 forKey:(id)arg2 ;
-(EKChangeSet *)changeSet;
-(id)cachedMeltedObjectForSingleValueKey:(id)arg1 ;
-(void)setCachedMeltedObject:(id)arg1 forSingleValueKey:(id)arg2 ;
-(void)setCachedMeltedObjects:(id)arg1 forMultiValueKey:(id)arg2 ;
-(void)addCachedMeltedObject:(id)arg1 forMultiValueKey:(id)arg2 ;
-(id)frozenObject;
-(void)addMultiChangedObjectValues:(id)arg1 forKey:(id)arg2 ;
-(void)removeCachedMeltedObject:(id)arg1 forMultiValueKey:(id)arg2 ;
-(void)removeMultiChangedObjectValues:(id)arg1 forKey:(id)arg2 ;
-(void)removeMultiChangedObjectValue:(id)arg1 forKey:(id)arg2 ;
-(void)addMultiChangedObjectValue:(id)arg1 forKey:(id)arg2 ;
-(void)_decodeValueForKey:(id)arg1 withCoder:(id)arg2 ;
-(unsigned long long)meltedAndCachedMultiRelationCountForKey:(id)arg1 ;
-(id)duplicateWithOptions:(long long)arg1 ;
-(void)changeIdentifiers;
-(void)_resetMeltedCache;
-(void)_clearCachedHash;
-(char)validate:(id*)arg1 ;
-(void)_resetWithObject:(id)arg1 ;
-(id)meltedObjectInStore:(id)arg1 ;
-(char)_hasChangesForKey:(id)arg1 ;
-(void)_applyKnownImmutableValuesFrom:(id)arg1 ;
-(id)_keysToChangeForDuplicateWithOptions:(long long)arg1 ;
-(char)resetWithLatestInBackingStore:(id)arg1 ;
-(void)updateManagedObjectID;
-(void)_markAsNew;
-(NSString *)eventStoreIdentifier;
-(EKBatchChangeInfo *)batchChangeInfo;
-(void)setBatchChangeInfo:(EKBatchChangeInfo *)arg1 ;
-(void)setEventStoreIdentifier:(NSString *)arg1 ;
-(id)diffWithObject:(id)arg1 ;
-(void)markObjectAndRelationshipChangesAsBatched;
-(void)rollbackUnbatched;
-(void)applyChangesFromObject:(id)arg1 except:(id)arg2 ;
-(void)applyOnlyCertainChangesFromObject:(id)arg1 keep:(id)arg2 ;
-(void)_initChangeSetIfNone;
-(void)applyUnbatchedChanges:(id)arg1 ;
-(id)existingMeltedObject;
-(void)setChangeSet:(EKChangeSet *)arg1 ;
-(char)isCompletelyEqual:(id)arg1 ;
-(id)initWithObject:(id)arg1 keepBackingObject:(char)arg2 preFrozenRelationshipObjects:(id)arg3 ;
-(char)_useExistingObjectWhenDecoding;
-(id)_existingObjectForDecodedIdentifier:(id)arg1 ;
-(void)applyChangesByCopying:(id)arg1 ;
-(void)markObjectAndRelationshipChangesAsCommitted;
-(void)markObjectAndRelationshipsAsDeleted;
-(char)hasChangesIgnoreKeys:(id)arg1 ;
-(void)_applyChangesFromObject:(id)arg1 unbatchedOnly:(char)arg2 except:(id)arg3 keep:(id)arg4 ;
-(void)_convertToNonPartialObject;
-(void)setBackingObject:(EKFrozenObject *)arg1 ;
-(void)_applyDefinedAfterFirstSaveFrom:(id)arg1 ;
-(void)setCachedHash:(unsigned long long*)arg1 ;
-(void)_markAsDeleted;
-(NSMutableDictionary *)cachedMeltedObjects;
-(id)_cachedMeltedObjectsForMultiValueKey:(id)arg1 copy:(char)arg2 ;
-(id)multiChangedObjectValuesForKey:(id)arg1 ;
-(void)replaceMultiChangedObjectValuesWithObjectValues:(id)arg1 forKey:(id)arg2 ;
-(id)_cachedMeltedObjectsForMultiValueKey:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 andFault:(char)arg2 ;
-(id)initWithObject:(id)arg1 keepBackingObject:(char)arg2 ;
-(void)_encodeValueForKey:(id)arg1 withCoder:(id)arg2 ;
-(char)_shouldEncodeValue:(id)arg1 forKey:(id)arg2 ;
-(char)_isPropertyUnavailable:(id)arg1 convertToFullObjectIfUnavailable:(char)arg2 ;
-(unsigned long long*)cachedHash;
-(char)isEqual:(id)arg1 comparingKeys:(id)arg2 ;
-(char)isEqual:(id)arg1 comparingKeys:(id)arg2 compareImmutableKeys:(char)arg3 ;
-(id)_duplicateWithChangedKeys:(id)arg1 ;
-(void)applyChanges:(id)arg1 doCopy:(char)arg2 includeBatched:(char)arg3 ;
-(void)updatedMeltedCacheForChangeSet:(id)arg1 ;
-(void)_prepareToPotentiallyBeRecreated;
-(id)_basicSummaryWithDepth:(long long)arg1 ;
-(id)_summaryWithDepth:(long long)arg1 ;
-(char)_areOnlyChangedKeys:(id)arg1 ;
-(id)initWithObject:(id)arg1 createPartialBackingObject:(char)arg2 keepBackingObject:(char)arg3 ;
-(void)applyUnbatchedChangesFromObject:(id)arg1 except:(id)arg2 ;
-(void)emptyMeltedCache;
-(id)changedKeysAgainstObject:(id)arg1 ;
-(id)_copyWithoutFaulting;
-(id)summaryDiffWithObject:(id)arg1 ;
-(char)_hasUnbatchedChangesForKey:(id)arg1 ;
-(char)_isOnlyChangedKey:(id)arg1 ;
-(void)setCachedMeltedObjects:(NSMutableDictionary *)arg1 ;
-(char)saveWithSpan:(int)arg1 error:(id*)arg2 ;
-(char)removeWithSpan:(int)arg1 error:(id*)arg2 ;
-(void)saveWithSpan:(int)arg1 ;
-(void)removeWithSpan:(int)arg1 ;
-(void)_addSummaryWithDepth:(long long)arg1 toMutableString:(id)arg2 indentFirstLine:(char)arg3 ;
-(EKEventStore *)eventStore;
-(void)applyChangesFromObject:(id)arg1 ;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(void)applyChanges:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(void)reset;
-(char)hasChanges;
-(char)_reset;
-(NSManagedObjectID *)managedObjectID;
-(char)isDeleted;
-(void)setManagedObjectID:(NSManagedObjectID *)arg1 ;
-(char)isFrozen;
-(char)isNew;
-(char)isPropertyUnavailable:(id)arg1 ;
-(char)canBeConvertedToFullObject;
-(char)isPartialObject;
-(NSDictionary *)preFrozenRelationshipObjects;
-(char)refresh;
-(id)changedKeys;
@end
