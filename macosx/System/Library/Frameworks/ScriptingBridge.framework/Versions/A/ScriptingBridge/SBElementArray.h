/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/ScriptingBridge.framework/Versions/A/ScriptingBridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScriptingBridge/ScriptingBridge-Structs.h>
#import <CoreFoundation/NSMutableArray.h>

@class SBObject;

@interface SBElementArray : NSMutableArray {

	SBObject* _parent;
	unsigned _elementCode;
	void* _reserved;

}
-(id)qualifiedSpecifier;
-(id)objectWithName:(id)arg1 ;
-(id)filteredArrayUsingPredicate:(id)arg1 ;
-(id)_context;
-(Class)elementClass;
-(unsigned)elementCode;
-(id)objectWithKeyForm:(unsigned)arg1 keyData:(id)arg2 ;
-(id)initWithParent:(id)arg1 elementCode:(unsigned)arg2 ;
-(id)descriptorForExpression:(id)arg1 ;
-(id)_filteredArrayUsingPredicate:(id)arg1 ;
-(id)arrayByApplyingSelector:(SEL)arg1 withObject:(id)arg2 ;
-(id)objectAtLocation:(id)arg1 ;
-(void)removeObjectWithName:(id)arg1 ;
-(void)removeObjectWithID:(id)arg1 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(id)init;
-(void)addObject:(id)arg1 ;
-(void)dealloc;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)description;
-(id)valueForKey:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)debugDescription;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)removeObject:(id)arg1 ;
-(id)subarrayWithRange:(NSRange)arg1 ;
-(id)initWithObjects:(id)arg1 ;
-(id)allObjects;
-(void)removeAllObjects;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)makeObjectsPerformSelector:(SEL)arg1 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)lastObject;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2 ;
-(id)initWithArray:(id)arg1 copyItems:(char)arg2 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(void)removeLastObject;
-(void)filterUsingPredicate:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(id)objectWithID:(id)arg1 ;
-(id)get;
-(id)arrayByApplyingSelector:(SEL)arg1 ;
-(id)_parent;
-(void)_setParent:(id)arg1 ;
@end

