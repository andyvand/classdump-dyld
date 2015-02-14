/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSMutableSet.h>

@class NSManagedObject, NSPropertyDescription;

@interface _NSFaultingMutableSet : NSMutableSet {

	int _cd_rc;
	struct {
		unsigned _isFault : 1;
		unsigned _mustPropagateDelete : 1;
		unsigned _reserved : 14;
		unsigned _relationship : 16;
	}  _flags;
	id _realSet;
	NSManagedObject* _source;

}

@property (nonatomic,readonly) NSManagedObject * source; 
@property (nonatomic,readonly) NSPropertyDescription * relationship; 
@property (getter=isFault,nonatomic,readonly) char fault; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)accessInstanceVariablesDirectly;
-(char)_shouldProcessKVOChange;
-(NSPropertyDescription *)relationship;
-(id)initWithSource:(id)arg1 forRelationship:(id)arg2 asFault:(char)arg3 ;
-(char)_isIdenticalFault:(id)arg1 ;
-(void)willReadWithContents:(id)arg1 ;
-(void)willRead;
-(id)initWithSource:(id)arg1 destinations:(id)arg2 forRelationship:(id)arg3 inContext:(id)arg4 ;
-(id)objectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)turnIntoFault;
-(id)descriptionWithLocale:(id)arg1 ;
-(oneway void)release;
-(id)retain;
-(void)addObject:(id)arg1 ;
-(void)dealloc;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)count;
-(id)description;
-(id)valueForKey:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS7*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)retainCount;
-(void)removeObject:(id)arg1 ;
-(char)containsObject:(id)arg1 ;
-(id)objectEnumerator;
-(void)addObjectsFromArray:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(void)minusSet:(id)arg1 ;
-(id)allObjects;
-(id)anyObject;
-(void)removeAllObjects;
-(void)makeObjectsPerformSelector:(SEL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)member:(id)arg1 ;
-(void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2 ;
-(void)unionSet:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(char)intersectsSet:(id)arg1 ;
-(void)getObjects:(id*)arg1 ;
-(Class)classForCoder;
-(char)_tryRetain;
-(char)_isDeallocating;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(char)isEqualToSet:(id)arg1 ;
-(void)setSet:(id)arg1 ;
-(NSManagedObject *)source;
-(id)replacementObjectForCoder:(id)arg1 ;
-(char)isFault;
-(void)intersectSet:(id)arg1 ;
-(Class)classForArchiver;
-(char)isSubsetOfSet:(id)arg1 ;
@end

