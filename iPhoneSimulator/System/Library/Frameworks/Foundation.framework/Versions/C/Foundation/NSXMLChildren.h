/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSMutableArray.h>

@class NSMutableArray;

@interface NSXMLChildren : NSMutableArray {

	NSMutableArray* _array;
	char _isStale;

}
-(void)removeObjectsFromIndices:(unsigned long long*)arg1 numIndices:(unsigned long long)arg2 ;
-(id)initWithMutableArray:(id)arg1 ;
-(void)removeObject:(id)arg1 inRange:(NSRange)arg2 ;
-(void)removeObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(id)reallyAddObject:(id)arg1 ;
-(id)reallyInsertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)reallyRemoveObjectAtIndex:(unsigned long long)arg1 ;
-(id)reallyReplaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(id)reallyRemoveObject:(id)arg1 ;
-(id)reallyRemoveAllObjects;
-(void)makeStale;
-(id)init;
-(void)addObject:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)removeObject:(id)arg1 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)removeAllObjects;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)sortUsingFunction:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeLastObject;
-(void)insertObjects:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeObjectsAtIndexes:(id)arg1 ;
-(void)removeObjectsInArray:(id)arg1 ;
-(void)removeObjectIdenticalTo:(id)arg1 ;
-(void)sortUsingSelector:(SEL)arg1 ;
-(void)removeObjectsInRange:(NSRange)arg1 ;
-(void)setArray:(id)arg1 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjectsFromArray:(id)arg2 ;
-(void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjectsFromArray:(id)arg2 range:(NSRange)arg3 ;
-(void)exchangeObjectAtIndex:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2 ;
@end

