/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSMutableCopying.h>
#import <CoreFoundation/NSSecureCoding.h>
#import <CoreFoundation/NSFastEnumeration.h>
#import <CoreFoundation/CKRecordValue.h>

@class NSDictionary, IMMessage, IMMessageItem, NSString;

@interface NSArray : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration, CKRecordValue>

@property (nonatomic,copy,readonly) NSDictionary * dictionaryWithMessagesSortedByStore; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryWithMessagesSortedByMailbox; 
@property (nonatomic,retain,readonly) IMMessage * lastMessage; 
@property (nonatomic,retain,readonly) IMMessage * lastFinishedMessage; 
@property (nonatomic,retain,readonly) IMMessage * lastIncomingMessage; 
@property (nonatomic,retain,readonly) IMMessage * lastIncomingFinishedMessage; 
@property (nonatomic,retain,readonly) IMMessageItem * __imLastMessageItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long count; 
+(id)arrayWithMediaTypeMask:(long long)arg1 ;
+(id)FINodesFromFENodeVector_FI:(const TFENodeVector*)arg1 ;
+(id)arrayOfSetsBySplitting:(id)arg1 batchSize:(unsigned long long)arg2 ;
+(id)isd_propertyValueWithType:(int)arg1 bytesEncodedForSqlite:(const void*)arg2 ;
+(id)_arrayWithIntArg:(int)arg1 additionalArgs:(_va_list_tag*)arg2 ;
+(id)cdvArrayWithIntegers:(int)arg1 ;
+(id)arrayWithArchive:(id)arg1 ofClass:(Class)arg2 ;
+(id)arrayWithValues:(id)arg1 inBlock:(/*^block*/id)arg2 ;
+(id)CI_arrayWithAffineTransform:(CGAffineTransform)arg1 ;
+(id)CI_arrayWithRect:(CGRect)arg1 ;
+(id)_scriptingArrayOfType:(id)arg1 withDescriptor:(id)arg2 ;
+(id)newWithContentsOf:(id)arg1 immutable:(char)arg2 ;
+(id)arrayWithContentsOfFile:(id)arg1 ;
+(id)arrayWithContentsOfURL:(id)arg1 ;
+(id)newArrayWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
+(id)arrayWithArray:(id)arg1 range:(NSRange)arg2 copyItems:(char)arg3 ;
+(id)arrayWithArray:(id)arg1 range:(NSRange)arg2 ;
+(id)arrayWithArray:(id)arg1 copyItems:(char)arg2 ;
+(id)arrayWithOrderedSet:(id)arg1 range:(NSRange)arg2 copyItems:(char)arg3 ;
+(id)arrayWithOrderedSet:(id)arg1 range:(NSRange)arg2 ;
+(id)arrayWithOrderedSet:(id)arg1 copyItems:(char)arg2 ;
+(id)arrayWithOrderedSet:(id)arg1 ;
+(id)arrayWithSet:(id)arg1 copyItems:(char)arg2 ;
+(id)arrayWithSet:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)arrayWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
+(id)arrayWithObjects:(id)arg1 ;
+(id)array;
+(id)arrayWithObject:(id)arg1 ;
+(id)arrayWithArray:(id)arg1 ;
+(char)supportsSecureCoding;
-(id)_mutableDeepCopy;
-(id)makeObjectsPerformSelectorReturningID:(SEL)arg1 ;
-(NSRange)firstRangeOfString:(id)arg1 ;
-(void)makeObjectsPerformSelector:(SEL)arg1 withInt:(int)arg2 ;
-(char)containsAnyOf:(id)arg1 ;
-(id)_mutableDeepCopyWithZone:(NSZone*)arg1 ;
-(id)makeObjectsPerformSelectorReturningID:(SEL)arg1 withObject:(id)arg2 ;
-(void)makeObjectsPerformSelector:(SEL)arg1 withFloat:(float)arg2 ;
-(void)makeObjectsPerformSelector:(SEL)arg1 withBool:(char)arg2 ;
-(id)makeObjectsPerformSelectorReturningID:(SEL)arg1 withObjects:(id)arg2 ;
-(char)hasShallowIntersection:(id)arg1 ;
-(id)getShallowIntersection:(id)arg1 ;
-(id)indexSetOfObjects:(id)arg1 ;
-(char)containsAllObjectsIdenticalTo:(id)arg1 ;
-(id)indicesOfObjectsIdenticalTo:(id)arg1 ;
-(id)AEDescListOfAliases;
-(id)arrayByReversingObjects;
-(id)_AMTokenField_objectArrayByInsertingString:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(char)containsObjectIdenticalTo:(id)arg1 ;
-(id)firstObject;
-(char)isNSArray__;
-(unsigned long long)SCTIndexOfObject:(id*)arg1 containingValue:(id)arg2 withAccessor:(SEL)arg3 ;
-(id)SCTArrayByOrderedIntersectionWithArray:(id)arg1 ;
-(id)SCTArrayByApplyingFunction:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(id)componentsJoinedIntoListWithMaxItems:(int)arg1 ;
-(long long)mediaTypeMask;
-(id)mutableCopyDeepFE_FI;
-(id)copyDeepFE_FI;
-(id)dictionaryAtIndex_FI:(unsigned long long)arg1 ;
-(id)urlAtIndex_FI:(unsigned long long)arg1 ;
-(id)stringAtIndex_FI:(unsigned long long)arg1 ;
-(id)copyDeepCommonFE_FI:(BOOL)arg1 ;
-(BOOL)boolAtIndex_FI:(unsigned long long)arg1 defaultValue:(BOOL)arg2 ;
-(double)cgFloatAtIndex_FI:(unsigned long long)arg1 defaultValue:(double)arg2 ;
-(double)doubleAtIndex_FI:(unsigned long long)arg1 defaultValue:(double)arg2 ;
-(long long)integerAtIndex_FI:(unsigned long long)arg1 defaultValue:(long long)arg2 ;
-(long long)sint64AtIndex_FI:(unsigned long long)arg1 defaultValue:(long long)arg2 ;
-(unsigned)fourCharCodeAtIndex_FI:(unsigned long long)arg1 defaultValue:(unsigned)arg2 ;
-(CGPoint)pointAtIndex_FI:(unsigned long long)arg1 defaultValue:(const CGPoint*)arg2 ;
-(CGRect)rectAtIndex_FI:(unsigned long long)arg1 defaultValue:(const CGRect*)arg2 ;
-(id)stringAtIndex_FI:(unsigned long long)arg1 defaultValue:(id)arg2 ;
-(id)reverseFE_FI;
-(BOOL)boolAtIndex_FI:(unsigned long long)arg1 ;
-(double)cgFloatAtIndex_FI:(unsigned long long)arg1 ;
-(double)doubleAtIndex_FI:(unsigned long long)arg1 ;
-(long long)integerAtIndex_FI:(unsigned long long)arg1 ;
-(long long)sint64AtIndex_FI:(unsigned long long)arg1 ;
-(unsigned)fourCharCodeAtIndex_FI:(unsigned long long)arg1 ;
-(CGPoint)pointAtIndex_FI:(unsigned long long)arg1 ;
-(CGRect)rectAtIndex_FI:(unsigned long long)arg1 ;
-(id)dataAtIndex_FI:(unsigned long long)arg1 ;
-(id)arrayAtIndex_FI:(unsigned long long)arg1 ;
-(id)compactDescription;
-(id)safari_stringAtIndex:(unsigned long long)arg1 ;
-(id)safari_dictionaryAtIndex:(unsigned long long)arg1 ;
-(id)safari_numberAtIndex:(unsigned long long)arg1 ;
-(id)safari_filterObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)safari_mapObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)safari_arrayAtIndex:(unsigned long long)arg1 ;
-(id)safari_mapAndFilterObjectsUsingBlock:(/*^block*/id)arg1 ;
-(char)containsBookmarkOrAnyAncestor:(id)arg1 ;
-(char)safari_containsAnyAncestorOfBookmark:(id)arg1 ;
-(id)safari_arrayByRemovingRedundantDescendantBookmarks;
-(id)fezComponentsJoinedIntoListWithMaxItems:(unsigned long long)arg1 ;
-(id)fezComponentsJoinedIntoQuotedList;
-(id)fezComponentsJoinedIntoListWithMaxItems:(unsigned long long)arg1 totalCount:(unsigned long long)arg2 ;
-(unsigned long long)indexOfObjectPassingTest:(/*^block*/id)arg1 inRange:(NSRange)arg2 ;
-(id)arrayByApplyingBlock:(/*^block*/id)arg1 ;
-(id)CalMutableRecursiveCopy;
-(char)CalContainsObjectIdenticalTo:(id)arg1 ;
-(id)allObjectsWithClass:(Class)arg1 ;
-(int)isd_quickDirtyCoderType;
-(id)isd_deepCopy;
-(void*)isd_bytesEncodedForSqlite;
-(int)isd_sqlitePropertyValueType;
-(id)isd_summaryWithIndent:(long long)arg1 ;
-(int)isd_collectionType;
-(id)isd_arrayByMappingElements:(id)arg1 ;
-(id)isd_flattenArray;
-(char)containsNetwork:(id)arg1 ;
-(char)containsObjectIdenticalTo:(id)arg1 ;
-(id)allObjectsWithClass:(Class)arg1 ;
-(unsigned long long)_mapkit_indexForObject:(id)arg1 usingSortFunction:(/*function pointer*/void*)arg2 context:(void*)arg3 ;
-(id)_mapkit_arrayByRemovingObject:(id)arg1 ;
-(void)_mapkit_orientableAnnotationViewsFixed:(id*)arg1 notFixed:(id*)arg2 ;
-(char)ICSContainsArray:(id)arg1 ;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(void)_ICSParametersAppendingToString:(id)arg1 ;
-(void)_ICSStringsForPropertyValuesWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(id)arrayByEvaluatingObjectSpecifiers;
-(id)sortedArrayOfPasses;
-(id)twiceMutableCopy;
-(unsigned long long)indexOfThirdDate;
-(unsigned long long)indexOfOldestDate;
-(id)thirdDate;
-(NSDictionary *)dictionaryWithMessagesSortedByMailbox;
-(NSDictionary *)dictionaryWithMessagesSortedByStore;
-(id)arrayByAddingAbsentObjectsFromArray:(id)arg1 accordingToEquals:(char)arg2 ;
-(id)indicesOfStringsWithPrefix:(id)arg1 ;
-(id)attributedComponentsJoinedByString:(id)arg1 ;
-(char)containsDictionaryWithKey:(id)arg1 ;
-(id)dictionaryWithKey:(id)arg1 ;
-(id)accountsInXPCRepresentation;
-(id)accountsFromXPCRepresentation;
-(id)IA_objectEqualTo:(id)arg1 ;
-(void)__enumerateItemsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)__itemForChatItemAtIndex:(unsigned long long)arg1 ;
-(id)__imItems;
-(IMMessage *)lastMessage;
-(IMMessage *)lastFinishedMessage;
-(IMMessage *)lastIncomingMessage;
-(IMMessage *)lastIncomingFinishedMessage;
-(id)messageForChatItemAtIndex:(unsigned long long)arg1 ;
-(void)enumerateMessagesWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(IMMessageItem *)__imLastMessageItem;
-(id)messages;
-(id)indexesOfPartsOfMessage:(id)arg1 ;
-(id)indexesOfPartsOfMessageItem:(id)arg1 ;
-(id)_webkit_stringAtIndex:(unsigned long long)arg1 ;
-(id)_webkit_numberAtIndex:(unsigned long long)arg1 ;
-(id)_web_lowercaseStrings;
-(id)_FTFilteredArrayForAPS;
-(id)_URIsFromIDs;
-(id)_IDsFromURIs;
-(id)ps_arrayByApplyingSelector:(SEL)arg1 withObject:(id)arg2 ;
-(char)ps_containsObjectIdenticalTo:(id)arg1 ;
-(id)ps_arrayByApplyingSelector:(SEL)arg1 ;
-(id)_sa_mappedArrayWithBlock:(/*^block*/id)arg1 ;
-(id)_abFilter:(/*^block*/id)arg1 ;
-(id)_abMap:(/*^block*/id)arg1 ;
-(id)abIndicesForObjects:(id)arg1 ;
-(id)_abMapNoFilter:(/*^block*/id)arg1 ;
-(void)_ab_each:(/*^block*/id)arg1 ;
-(id)_abGroupByKey:(/*^block*/id)arg1 ;
-(id)abFilteredArrayUsingBlock:(/*^block*/id)arg1 ;
-(id)_ab_reduceToDictionary:(/*^block*/id)arg1 ;
-(id)_ab_arrayByCollectingResults:(/*^block*/id)arg1 ;
-(id)_abFirstObjectPassingTest:(/*^block*/id)arg1 ;
-(id)_abFirstObject;
-(id)_ab_tail;
-(id)_abFlatten;
-(id)_ab_mapNoNils:(/*^block*/id)arg1 ;
-(void)_ab_each_reverse:(/*^block*/id)arg1 ;
-(id)_ab_uniqueObjects;
-(char)_abAny:(/*^block*/id)arg1 ;
-(char)abContainsObjectUsingPointerComparison:(id)arg1 ;
-(id)_abSortedArrayUsingAuxiliaryKey:(/*^block*/id)arg1 ;
-(id)_abDictionaryOfObjectsByKey:(/*^block*/id)arg1 ;
-(id)abArrayWithResultsOfBlock:(/*^block*/id)arg1 ;
-(id)_ab_subarrayFromIndex:(unsigned long long)arg1 ;
-(id)_ab_safeObjectAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)abCountObjectsPassingTest:(/*^block*/id)arg1 ;
-(char)_abAll:(/*^block*/id)arg1 ;
-(void)_ab_enumerateWithStride:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(char)_ab_containsAnyObjectInArray:(id)arg1 ;
-(char)_ab_containsAnyObjectInSet:(id)arg1 ;
-(id)abPeopleFromUniqueIdsWithAddressBook:(id)arg1 ;
-(id)abUniqueIds;
-(id)abPeopleFromUniqueIds;
-(id)_cn_filter:(/*^block*/id)arg1 ;
-(char)_cn_any:(/*^block*/id)arg1 ;
-(id)_cn_firstObjectPassingTest:(/*^block*/id)arg1 ;
-(void)_cn_each:(/*^block*/id)arg1 ;
-(id)_cn_tail;
-(id)_cn_map:(/*^block*/id)arg1 ;
-(unsigned long long)cr_binaryInsertionIndexOfObject:(id)arg1 usingComparator:(/*^block*/id)arg2 match:(char*)arg3 ;
-(id)cr_map:(/*^block*/id)arg1 ;
-(id)cr_firstObjectPassingTest:(/*^block*/id)arg1 ;
-(id)cr_insertionSortedArrayUsingComparator:(/*^block*/id)arg1 ;
-(void)CKAssignToContainerWithID:(id)arg1 ;
-(id)localizedArrayValues;
-(id)localizedVersionString;
-(id)IKIPArrayByApplyingSelector:(SEL)arg1 withObject:(id)arg2 ;
-(id)IKIPArrayByApplyingSelector:(SEL)arg1 ;
-(char)IKIPContainsObjectIdenticalTo:(id)arg1 ;
-(char)containsString:(id)arg1 ;
-(id)descriptionWithIndent:(unsigned long long)arg1 ;
-(id)archivedArray;
-(double)doubleAtIndex_BU:(unsigned long long)arg1 ;
-(id)stringAtIndex_BU:(unsigned long long)arg1 ;
-(BOOL)boolAtIndex_BU:(unsigned long long)arg1 defaultValue:(BOOL)arg2 ;
-(double)cgFloatAtIndex_BU:(unsigned long long)arg1 defaultValue:(double)arg2 ;
-(double)doubleAtIndex_BU:(unsigned long long)arg1 defaultValue:(double)arg2 ;
-(long long)integerAtIndex_BU:(unsigned long long)arg1 defaultValue:(long long)arg2 ;
-(long long)sint64AtIndex_BU:(unsigned long long)arg1 defaultValue:(long long)arg2 ;
-(unsigned)fourCharCodeAtIndex_BU:(unsigned long long)arg1 defaultValue:(unsigned)arg2 ;
-(CGPoint)pointAtIndex_BU:(unsigned long long)arg1 defaultValue:(const CGPoint*)arg2 ;
-(CGRect)rectAtIndex_BU:(unsigned long long)arg1 defaultValue:(const CGRect*)arg2 ;
-(id)stringAtIndex_BU:(unsigned long long)arg1 defaultValue:(id)arg2 ;
-(BOOL)boolAtIndex_BU:(unsigned long long)arg1 ;
-(double)cgFloatAtIndex_BU:(unsigned long long)arg1 ;
-(long long)integerAtIndex_BU:(unsigned long long)arg1 ;
-(long long)sint64AtIndex_BU:(unsigned long long)arg1 ;
-(unsigned)fourCharCodeAtIndex_BU:(unsigned long long)arg1 ;
-(CGPoint)pointAtIndex_BU:(unsigned long long)arg1 ;
-(CGRect)rectAtIndex_BU:(unsigned long long)arg1 ;
-(id)urlAtIndex_BU:(unsigned long long)arg1 ;
-(id)dataAtIndex_BU:(unsigned long long)arg1 ;
-(id)arrayAtIndex_BU:(unsigned long long)arg1 ;
-(id)dictionaryAtIndex_BU:(unsigned long long)arg1 ;
-(NSRange)rangeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfFirstRangeContainingOrFollowing:(unsigned long long)arg1 ;
-(char)rangesContainLocation:(unsigned long long)arg1 ;
-(NSRange)firstRange;
-(NSRange)maximumRange;
-(NSRange)lastRange;
-(char)_getRangeIndex:(unsigned long long*)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_invokeSelector:(SEL)arg1 withArguments:(id)arg2 onKeyPath:(id)arg3 ofObjectAtIndex:(unsigned long long)arg4 ;
-(id)subarrayWithObjectsOfKind:(Class)arg1 ;
-(void)differencesFromArray:(id)arg1 removedIndexes:(id*)arg2 insertedIndexes:(id*)arg3 ;
-(void)differencesFromArray:(id)arg1 usingComparator:(/*^block*/id)arg2 removedIndexes:(id*)arg3 insertedIndexes:(id*)arg4 ;
-(char)containsObject:(id)arg1 matchingComparison:(SEL)arg2 ;
-(id)_copyForEnumerating;
-(id)__imArrayByApplyingBlock:(/*^block*/id)arg1 ;
-(id)__imSetFromArray;
-(char)__imIsMutable;
-(char)_hasSameMembers:(id)arg1 ;
-(id)__imArrayByFilteringWithBlock:(/*^block*/id)arg1 ;
-(id)__imFirstObject;
-(long long)indexOfObject:(id)arg1 matchingComparison:(SEL)arg2 ;
-(id)__imDeepCopy;
-(void)__imForEach:(/*^block*/id)arg1 ;
-(id)__imArrayByApplyingBlock:(/*^block*/id)arg1 filter:(/*^block*/id)arg2 ;
-(char)containsObjectIdenticalTo:(id)arg1 ;
-(id)cutFirstObject;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLType;
-(id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const ValueInterpolator*)arg4 ;
-(id)CA_addValue:(id)arg1 multipliedBy:(int)arg2 ;
-(id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2 ;
-(id)CI_initWithAffineTransform:(CGAffineTransform)arg1 ;
-(id)CI_initWithRect:(CGRect)arg1 ;
-(CGAffineTransform)CI_affineTransform;
-(CGRect)CI_rect;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(char)_scriptingExists;
-(id)sortedArrayUsingDescriptors:(id)arg1 ;
-(id)_scriptingSetValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)valueAtIndex:(unsigned long long)arg1 inPropertyWithKey:(id)arg2 ;
-(void)insertValue:(id)arg1 atIndex:(unsigned long long)arg2 inPropertyWithKey:(id)arg3 ;
-(void)removeValueAtIndex:(unsigned long long)arg1 fromPropertyWithKey:(id)arg2 ;
-(void)replaceValueAtIndex:(unsigned long long)arg1 inPropertyWithKey:(id)arg2 withValue:(id)arg3 ;
-(id)coerceValue:(id)arg1 forKey:(id)arg2 ;
-(char)_scriptingMightHandleCommand:(id)arg1 ;
-(char)_scriptingCanHandleCommand:(id)arg1 ;
-(void)_scriptingAddToReceiversArray:(id)arg1 ;
-(int)_scriptingAlternativeValueRankWithDescriptor:(id)arg1 ;
-(id)_scriptingDescriptorOfListType:(id)arg1 orReasonWhyNot:(id*)arg2 ;
-(id)filteredArrayUsingPredicate:(id)arg1 ;
-(id)pathsMatchingExtensions:(id)arg1 ;
-(id)stringsByAppendingPathComponent:(id)arg1 ;
-(id)_scriptingSetOfObjectsForSpecifier:(id)arg1 ;
-(id)_scriptingArrayOfObjectsForSpecifier:(id)arg1 ;
-(id)_scriptingValueForSpecifier:(id)arg1 ;
-(id)_scriptingObjectForSpecifier:(id)arg1 ;
-(void)removeObserver:(id)arg1 fromObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 context:(void*)arg4 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(void)removeObserver:(id)arg1 fromObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 ;
-(void)addObserver:(id)arg1 toObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 options:(unsigned long long)arg4 context:(void*)arg5 ;
-(id)_mutableOrderedSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2 ;
-(id)_valueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2 ;
-(void)_setValue:(id)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3 ;
-(char)_validateValue:(inout id*)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3 error:(out id*)arg4 ;
-(id)_mutableArrayValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2 ;
-(id)_mutableSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2 ;
-(id)_sumForKeyPath:(id)arg1 ;
-(id)_unionOfArraysForKeyPath:(id)arg1 ;
-(id)_unionOfObjectsForKeyPath:(id)arg1 ;
-(id)_avgForKeyPath:(id)arg1 ;
-(id)_countForKeyPath:(id)arg1 ;
-(id)_maxForKeyPath:(id)arg1 ;
-(id)_minForKeyPath:(id)arg1 ;
-(id)_unionOfSetsForKeyPath:(id)arg1 ;
-(id)_distinctUnionOfArraysForKeyPath:(id)arg1 ;
-(id)_distinctUnionOfObjectsForKeyPath:(id)arg1 ;
-(id)_distinctUnionOfSetsForKeyPath:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(void)takeValue:(id)arg1 forKey:(id)arg2 ;
-(void)_scriptingRemoveValueForSpecifier:(id)arg1 ;
-(unsigned long long)_scriptingCountNonrecursively;
-(unsigned long long)_scriptingCountOfValueForKey:(id)arg1 ;
-(unsigned long long)_scriptingCount;
-(char)writeToURL:(id)arg1 atomically:(char)arg2 ;
-(id)sortedArrayUsingFunction:(/*function pointer*/void*)arg1 context:(void*)arg2 hint:(id)arg3 ;
-(id)_stringToWrite;
-(id)sortedArrayHint;
-(id)sortedArrayUsingSelector:(SEL)arg1 hint:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(Class)classForCoder;
-(id)initWithContentsOfFile:(id)arg1 ;
-(char)writeToFile:(id)arg1 atomically:(char)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)initWithOrderedSet:(id)arg1 ;
-(id)initWithArray:(id)arg1 range:(NSRange)arg2 copyItems:(char)arg3 ;
-(id)objectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)initWithOrderedSet:(id)arg1 copyItems:(char)arg2 ;
-(char)_hasObjects;
-(char)_hasStrongReferences;
-(id)objectWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)sortedArrayFromRange:(NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(/*^block*/id)arg3 ;
-(id)initWithOrderedSet:(id)arg1 range:(NSRange)arg2 copyItems:(char)arg3 ;
-(char)containsObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(unsigned long long)countForObject:(id)arg1 inRange:(NSRange)arg2 ;
-(id)indexesOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(id)indexesOfObject:(id)arg1 ;
-(id)indexesOfObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(id)indexesOfObjectIdenticalTo:(id)arg1 ;
-(id)objectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)objectPassingTest:(/*^block*/id)arg1 ;
-(id)objectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)reversedArray;
-(id)initWithArray:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithOrderedSet:(id)arg1 range:(NSRange)arg2 ;
-(id)arrayByExcludingToObjectsInArray:(id)arg1 ;
-(char)isNSArray__;
-(char)containsObject:(id)arg1 inRange:(NSRange)arg2 ;
-(unsigned long long)_cfTypeID;
-(id)descriptionWithLocale:(id)arg1 ;
-(char)containsObjectIdenticalTo:(id)arg1 ;
-(id)initWithSet:(id)arg1 copyItems:(char)arg2 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS22*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(char)containsObject:(id)arg1 ;
-(id)objectEnumerator;
-(id)subarrayWithRange:(NSRange)arg1 ;
-(id)arrayByAddingObjectsFromArray:(id)arg1 ;
-(char)isEqualToArray:(id)arg1 ;
-(id)initWithObjects:(id)arg1 ;
-(id)allObjects;
-(id)initWithArray:(id)arg1 ;
-(void)makeObjectsPerformSelector:(SEL)arg1 ;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)lastObject;
-(id)firstObject;
-(void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)componentsJoinedByString:(id)arg1 ;
-(id)reverseObjectEnumerator;
-(id)arrayByAddingObject:(id)arg1 ;
-(id)initWithArray:(id)arg1 copyItems:(char)arg2 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(void)getObjects:(id*)arg1 ;
-(id)sortedArrayUsingSelector:(SEL)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)indexOfObjectPassingTest:(/*^block*/id)arg1 ;
-(id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/id)arg2 ;
-(id)indexesOfObjectsPassingTest:(/*^block*/id)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 inSortedRange:(NSRange)arg2 options:(unsigned long long)arg3 usingComparator:(/*^block*/id)arg4 ;
-(id)arrayByExcludingObjectsInArray:(id)arg1 ;
-(id)sortedArrayUsingFunction:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(id)sortedArrayUsingComparator:(/*^block*/id)arg1 ;
-(id)firstObjectCommonWithArray:(id)arg1 ;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2 ;
-(id)initWithSet:(id)arg1 ;
-(void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)objectsPassingTest:(/*^block*/id)arg1 ;
-(unsigned long long)countForObject:(id)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)arrayByApplyingSelector:(SEL)arg1 ;
@end

