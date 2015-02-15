/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Versions/A/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <Symbolication/VMURangeArray.h>

@interface VMUNonOverlappingRangeArray : VMURangeArray
-(void)addOrExtendRange:(VMURange)arg1 ;
-(void)mergeRange:(VMURange)arg1 ;
-(void)mergeRange:(VMURange)arg1 excludingRanges:(id)arg2 ;
-(void)_mergeAllBitsOfRange:(VMURange)arg1 excludingRanges:(id)arg2 mergeRanges:(char)arg3 ;
-(void)sortAndMergeRanges;
-(void)mergeRanges:(id)arg1 ;
-(void)mergeRanges:(id)arg1 excludingRanges:(id)arg2 ;
-(id)subtract:(id)arg1 mergeRanges:(char)arg2 ;
-(VMURange)largestUnusedWithInUse:(id)arg1 ;
@end

