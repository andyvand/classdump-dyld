/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:03 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSMutableArray.h>

@interface NSCFArray : NSMutableArray
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(char)containsObject:(id)arg1 inRange:(NSRange)arg2 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjects:(id*)arg2 count:(unsigned long long)arg3 ;
-(oneway void)release;
-(id)retain;
-(void)addObject:(id)arg1 ;
-(void)finalize;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(void)removeAllObjects;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)sortUsingFunction:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(void)removeLastObject;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(char)_tryRetain;
-(char)_isDeallocating;
-(void)removeObjectsInRange:(NSRange)arg1 ;
-(void)exchangeObjectAtIndex:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2 ;
@end

