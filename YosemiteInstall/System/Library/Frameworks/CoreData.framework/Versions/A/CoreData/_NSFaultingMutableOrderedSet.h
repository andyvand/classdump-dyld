/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:57:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSMutableOrderedSet.h>

@class NSManagedObject, NSPropertyDescription;

@interface _NSFaultingMutableOrderedSet : NSMutableOrderedSet {

	int _cd_rc;
	struct {
		unsigned _isFault : 1;
		unsigned _mustPropagateDelete : 1;
		unsigned _ignoringIdempotentKVO : 1;
		unsigned _mustCopyOnWrite : 1;
		unsigned _isImmutableCopy : 1;
		unsigned _reserved : 11;
		unsigned _relationship : 16;
	}  _flags;
	id _realSet;
	NSManagedObject* _source;
	unsigned* _orderKeys;
	id _grottyHack;

}

@property (nonatomic,readonly) NSManagedObject * source; 
@property (nonatomic,readonly) NSPropertyDescription * relationship; 
@property (getter=isFault,nonatomic,readonly) char fault; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)accessInstanceVariablesDirectly;
-(unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(char)_shouldProcessKVOChange;
-(NSPropertyDescription *)relationship;
-(id)initWithSource:(id)arg1 forRelationship:(id)arg2 asFault:(char)arg3 ;
-(void)addObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(char)_isIdenticalFault:(id)arg1 ;
-(id)initWithOrderedSet:(id)arg1 ;
-(void)willReadWithContents:(id)arg1 ;
-(void)willRead;
-(char)_hasOrderKeys;
-(void)_populateOrderKeysUsingSnapshot:(id)arg1 orderKeys:(id)arg2 newIndexes:(unsigned long long*)arg3 reorderedIndexes:(char**)arg4 ;
-(unsigned)_orderKeyForObject:(id)arg1 ;
-(void)_updateOrderKeysFromOrderOfObjectIDs:(id)arg1 ;
-(id)initWithSource:(id)arg1 destinations:(id)arg2 forRelationship:(id)arg3 inContext:(id)arg4 ;
-(void)turnIntoFault;
-(unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(char)isEqualToOrderedSet:(id)arg1 ;
-(void)_assignOrderKeysUsingCount:(unsigned)arg1 ;
-(void)willChange;
-(void)insertObjects:(const id*)arg1 count:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)minusOrderedSet:(id)arg1 ;
-(void)unionOrderedSet:(id)arg1 ;
-(void)sortRange:(NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(/*^block*/id)arg3 ;
-(void)_setProcessingIdempotentKVO:(char)arg1 ;
-(id)_newOrderKeys;
-(id)descriptionWithLocale:(id)arg1 ;
-(oneway void)release;
-(id)retain;
-(void)addObject:(id)arg1 ;
-(void)dealloc;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(id)description;
-(id)valueForKey:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS7*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)retainCount;
-(char)containsObject:(id)arg1 ;
-(id)objectEnumerator;
-(void)addObjectsFromArray:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(void)minusSet:(id)arg1 ;
-(id)allObjects;
-(void)removeAllObjects;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(void)unionSet:(id)arg1 ;
-(void)insertObjects:(id)arg1 atIndexes:(id)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)getObjects:(id*)arg1 ;
-(Class)classForCoder;
-(char)_tryRetain;
-(char)_isDeallocating;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)removeObjectsInArray:(id)arg1 ;
-(NSManagedObject *)source;
-(void)sortUsingComparator:(/*^block*/id)arg1 ;
-(id)replacementObjectForCoder:(id)arg1 ;
-(void)removeObjectsInRange:(NSRange)arg1 ;
-(void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(char)isFault;
-(void)sortWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/id)arg2 ;
-(id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(Class)classForArchiver;
@end

