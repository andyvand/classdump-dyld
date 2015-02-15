/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/NSCoding.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSDictionary;

@interface PAProcessMemoryGroup : NSObject <NSCoding> {

	NSArray* processes;
	NSMutableArray* _memoryObjects;
	NSMutableDictionary* _categoryOrganizers;
	long long totalDirtySize;
	long long totalCleanSize;
	long long totalReclaimableSize;
	long long totalSwappedSize;
	char _needsToBuildCategoryOrganizers;

}

@property (readonly) NSArray * processes; 
@property (readonly) NSDictionary * categoryOrganizers;              //@synthesize categoryOrganizers=_categoryOrganizers - In the implementation block
@property (readonly) NSArray * memoryObjects;                        //@synthesize memoryObjects=_memoryObjects - In the implementation block
@property (readonly) long long totalDirtySize; 
@property (readonly) long long totalCleanSize; 
@property (readonly) long long totalReclaimableSize; 
@property (readonly) long long totalSwappedSize; 
-(NSArray *)processes;
-(id)initWithProcesses:(id)arg1 ;
-(long long)totalDirtySize;
-(long long)totalCleanSize;
-(long long)totalSwappedSize;
-(void)addMemoryObject:(id)arg1 ;
-(long long)totalReclaimableSize;
-(void)_buildCategories;
-(NSArray *)memoryObjects;
-(NSDictionary *)categoryOrganizers;
-(id)detailStringForProcess:(id)arg1 differentiateGroups:(char)arg2 forFlavor:(int)arg3 andCallOutSwapped:(char)arg4 andShowCategories:(char)arg5 andShowRegions:(char)arg6 ;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

