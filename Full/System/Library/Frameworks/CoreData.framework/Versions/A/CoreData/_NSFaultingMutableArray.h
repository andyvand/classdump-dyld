/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSMutableArray.h>

@class NSMutableArray, NSManagedObject, NSPropertyDescription;

@interface _NSFaultingMutableArray : NSMutableArray {

	int _cd_rc;
	NSMutableArray* _realArray;
	NSManagedObject* _source;
	NSPropertyDescription* _relationship;
	struct {
		unsigned _isFault : 1;
		unsigned _reserved : 31;
	}  _flags;

}

@property (nonatomic,readonly) NSManagedObject * source; 
@property (nonatomic,readonly) NSPropertyDescription * relationship; 
@property (getter=isFault,nonatomic,readonly) char fault; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)accessInstanceVariablesDirectly;
-(unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(NSPropertyDescription *)relationship;
-(id)initWithSource:(id)arg1 forRelationship:(id)arg2 asFault:(char)arg3 ;
-(void)willRead;
-(void)turnIntoFault;
-(unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(oneway void)release;
-(id)retain;
-(void)addObject:(id)arg1 ;
-(void)dealloc;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)description;
-(id)valueForKey:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS7*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)retainCount;
-(id)objectEnumerator;
-(id)valueForKeyPath:(id)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeLastObject;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)getObjects:(id*)arg1 ;
-(char)_tryRetain;
-(char)_isDeallocating;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(NSManagedObject *)source;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2 ;
-(void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(char)isFault;
-(id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
@end

