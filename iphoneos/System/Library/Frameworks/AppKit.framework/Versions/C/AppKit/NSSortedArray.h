/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <CoreFoundation/NSMutableArray.h>

@class NSMutableArray;

@interface NSSortedArray : NSMutableArray {

	NSMutableArray* _array;
	SEL _compareSelector;
	unsigned long long _cachedCount;
	id _cachedFirstObject;

}
+(void)initialize;
-(id)init;
-(void)addObject:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(char)conformsToProtocol:(id)arg1 ;
-(id)initWithObjects:(id*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithObjects:(id)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)sortUsingFunction:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithArray:(id)arg1 copyItems:(char)arg2 ;
-(void)removeLastObject;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setCompareSelector:(SEL)arg1 ;
-(void)sortUsingSelector:(SEL)arg1 ;
-(void)setArray:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 compareSelector:(SEL)arg2 ;
-(void)_insertObjectInSortOrder:(id)arg1 ;
-(id)initWithCompareSelector:(SEL)arg1 ;
-(SEL)compareSelector;
@end

