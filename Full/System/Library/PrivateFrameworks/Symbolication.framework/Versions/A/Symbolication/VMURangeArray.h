/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Versions/A/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <Symbolication/NSCopying.h>

@interface VMURangeArray : NSObject <NSCopying> {

	unsigned _count;
	VMURange* _ranges;
	unsigned _max;
	char _sorted;

}
-(void)removeAllRanges;
-(unsigned long long)indexForLocation:(unsigned long long)arg1 ;
-(VMURange)largestSubrangeNotExcludedBySelfForRange:(VMURange)arg1 andLargerThan:(unsigned long long)arg2 startIndex:(unsigned*)arg3 ;
-(VMURange)rangeForLocation:(unsigned long long)arg1 ;
-(char)intersectsLocation:(unsigned long long)arg1 ;
-(VMURange)subrangeNotExcludedBySelfForRange:(VMURange)arg1 ;
-(VMURange)largestRange;
-(VMURange*)ranges;
-(unsigned long long)sumLengths;
-(void)addRanges:(id)arg1 ;
-(void)sort;
-(void)setCapacity:(unsigned)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned)count;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(VMURange)rangeAtIndex:(unsigned)arg1 ;
-(VMURange)range;
-(void)addRange:(VMURange)arg1 ;
-(id)initWithRanges:(const VMURange*)arg1 count:(unsigned)arg2 ;
-(void)insertRange:(VMURange)arg1 atIndex:(unsigned)arg2 ;
-(void)removeRangeAtIndex:(unsigned)arg1 ;
-(char)intersectsRange:(VMURange)arg1 ;
@end

