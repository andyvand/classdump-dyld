/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSSet.h>

@interface NSMutableSet : NSSet
+(id)_vk_newWeakSet;
+(id)nonRetainingSet;
+(id)_newUniformTypeIdentifierSet;
+(id)setWithCapacity:(unsigned long long)arg1 ;
-(id)uniquedObject:(id)arg1 ;
-(void)removeObjectsInArray:(id)arg1 ;
-(void)isd_removeObjectsFromArray:(id)arg1 ;
-(int)isd_collectionType;
-(void)CDVAddItemParserMappingWithNameSpace:(id)arg1 name:(id)arg2 parseClass:(Class)arg3 ;
-(void)abAddNonNilObject:(id)arg1 ;
-(Class)classForCoder;
-(void)filterUsingPredicate:(id)arg1 ;
-(void)addObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)minusOrderedSet:(id)arg1 ;
-(void)unionOrderedSet:(id)arg1 ;
-(void)intersectOrderedSet:(id)arg1 ;
-(void)replaceObject:(id)arg1 ;
-(void)_mutate;
-(void)removeObjectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)addObjectsFromArray:(id)arg1 range:(NSRange)arg2 ;
-(void)addObjectsFromOrderedSet:(id)arg1 range:(NSRange)arg2 ;
-(void)addObjectsFromOrderedSet:(id)arg1 ;
-(void)addObjectsFromSet:(id)arg1 ;
-(void)removeObjectsInArray:(id)arg1 range:(NSRange)arg2 ;
-(void)removeObjectsInOrderedSet:(id)arg1 range:(NSRange)arg2 ;
-(void)removeObjectsInOrderedSet:(id)arg1 ;
-(void)removeObjectsInSet:(id)arg1 ;
-(void)removeObjectsPassingTest:(/*^block*/id)arg1 ;
-(void)setOrderedSet:(id)arg1 ;
-(void)addObject:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)removeObject:(id)arg1 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)minusSet:(id)arg1 ;
-(void)removeAllObjects;
-(void)unionSet:(id)arg1 ;
-(void)setObject:(id)arg1 ;
-(void)removeObjectsInArray:(id)arg1 ;
-(void)setSet:(id)arg1 ;
-(void)setArray:(id)arg1 ;
-(void)intersectSet:(id)arg1 ;
@end
