/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSCopying.h>
#import <Foundation/NSCoding.h>
#import <Foundation/NSFastEnumeration.h>

@class NSPointerFunctions, NSArray, NSSet;

@interface NSHashTable : NSObject <NSCopying, NSCoding, NSFastEnumeration>

@property (copy,readonly) NSPointerFunctions * pointerFunctions; 
@property (readonly) unsigned long long count; 
@property (copy,readonly) NSArray * allObjects; 
@property (nonatomic,readonly) id anyObject; 
@property (copy,readonly) NSSet * setRepresentation; 
+(id)pointerHashTableWithObjects:(id)arg1 ;
+(id)hashTableWithOptions:(unsigned long long)arg1 ;
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)hashTableWithWeakObjects;
+(id)weakObjectsHashTable;
-(void)_mapkit_removeObjects:(id)arg1 ;
-(id)initWithPointerFunctions:(id)arg1 capacity:(unsigned long long)arg2 ;
-(void*)getItem:(const void*)arg1 ;
-(unsigned long long)weakCount;
-(void)insertKnownAbsentItem:(const void*)arg1 ;
-(void)getKeys:(const void*)arg1 count:(unsigned long long*)arg2 ;
-(NSPointerFunctions *)pointerFunctions;
-(char)intersectsHashTable:(id)arg1 ;
-(char)isEqualToHashTable:(id)arg1 ;
-(char)isSubsetOfHashTable:(id)arg1 ;
-(void)intersectHashTable:(id)arg1 ;
-(void)unionHashTable:(id)arg1 ;
-(void)minusHashTable:(id)arg1 ;
-(id)mutableSet;
-(NSSet *)setRepresentation;
-(id)init;
-(void)addObject:(id)arg1 ;
-(unsigned long long)count;
-(id)description;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)copy;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(char)containsObject:(id)arg1 ;
-(id)objectEnumerator;
-(NSArray *)allObjects;
-(id)anyObject;
-(void)removeAllObjects;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)member:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)removeAllItems;
-(id)initWithOptions:(unsigned long long)arg1 capacity:(unsigned long long)arg2 ;
-(void)removeItem:(const void*)arg1 ;
@end

