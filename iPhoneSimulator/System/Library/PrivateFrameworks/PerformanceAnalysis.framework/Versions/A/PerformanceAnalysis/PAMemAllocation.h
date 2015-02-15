/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:41 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
#import <PerformanceAnalysis/PAMemRange.h>

@class PAMemAllocationCategory, PAMallocStackTreeFrame;

@interface PAMemAllocation : PAMemRange {

	PAMemAllocationCategory* category;
	PAMallocStackTreeFrame* treeLocation;
	char purgeState;
	char isLeak;

}

@property (assign) PAMemAllocationCategory * category; 
@property (assign) PAMallocStackTreeFrame * treeLocation; 
@property (assign) char purgeState; 
@property (assign) char isLeak; 
+(id)getStringCache;
+(id)uniquedStringForString:(id)arg1 ;
-(char)purgeState;
-(char)isLeak;
-(id)mallocZone;
-(id)fullDescriptionString;
-(id)initWithAddress:(unsigned long long)arg1 andSize:(unsigned long long)arg2 ;
-(void)setPurgeState:(char)arg1 ;
-(id)initWithRawInfoOfMemAllocation:(id)arg1 ;
-(PAMallocStackTreeFrame *)treeLocation;
-(void)setIsLeak:(char)arg1 ;
-(void)writeContentsToBuffer:(void*)arg1 StringDict:(id)arg2 ;
-(void)setTreeLocation:(PAMallocStackTreeFrame *)arg1 ;
-(id)initWithPAMemAllocationSerialized:(PAMemAllocationSerialized*)arg1 WithIndexToMemCategoriesArray:(id*)arg2 WithIndexToStackArray:(id*)arg3 WithNonLeakMemAllocationCategories:(id)arg4 WithStringIndex:(id*)arg5 ;
-(id)binary;
-(char)isEqual:(id)arg1 ;
-(id)name;
-(id)type;
-(void)setCategory:(PAMemAllocationCategory *)arg1 ;
-(PAMemAllocationCategory *)category;
@end

