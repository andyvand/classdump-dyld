/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSMutableOrderedSet.h>

@class NSMutableArray;

@interface __NSOrderedSetM : NSMutableOrderedSet {

	unsigned long long _used;
	CFBasicHashRef _set;
	NSMutableArray* _array;

}
+(id)__new:(const id*)arg1 :(unsigned long long)arg2 :(char)arg3 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)_mutate;
-(void)finalize;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS22*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(char)containsObject:(id)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)countForObject:(id)arg1 ;
-(void)setObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
@end

