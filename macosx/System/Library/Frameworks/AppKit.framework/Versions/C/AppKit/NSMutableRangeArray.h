/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <CoreFoundation/NSMutableArray.h>

@interface NSMutableRangeArray : NSMutableArray {

	unsigned long long _count;
	unsigned long long _capacity;
	NSRange* _ranges;

}
+(id)array;
+(id)arrayWithRanges:(const NSRange*)arg1 count:(unsigned long long)arg2 ;
+(id)arrayWithRange:(NSRange)arg1 ;
-(id)init;
-(void)addObject:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(id)subarrayWithRange:(NSRange)arg1 ;
-(char)isEqualToArray:(id)arg1 ;
-(void)removeAllObjects;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(void)removeLastObject;
-(NSRange)rangeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfFirstRangeContainingOrFollowing:(unsigned long long)arg1 ;
-(void)addRangesFromArray:(id)arg1 ;
-(void)addRange:(NSRange)arg1 ;
-(NSRange)firstRange;
-(NSRange)lastRange;
-(id)initWithRanges:(const NSRange*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithRange:(NSRange)arg1 ;
-(id)rangesAtIndexes:(id)arg1 ;
-(void)_setCapacity:(unsigned long long)arg1 ;
-(void)_growIfNecessary;
-(void)insertRange:(NSRange)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeRangeAtIndex:(unsigned long long)arg1 ;
-(void)insertRanges:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeLastRange;
-(void)replaceRangeAtIndex:(unsigned long long)arg1 withRange:(NSRange)arg2 ;
-(void)removeRangesAtIndexes:(id)arg1 ;
@end
