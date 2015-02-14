/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:35 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/NSCoding.h>

@class NSString, PAProcess, NSMutableSet, NSMutableDictionary, NSSet, NSDictionary;

@interface PAMemoryCategory : NSObject <NSCoding> {

	NSString* name;
	PAProcess* process;
	NSMutableSet* _memObjects;
	NSMutableDictionary* _subCategories;
	long long totalDirtySize;
	long long totalSwappedSize;
	long long totalCleanSize;
	long long totalReclaimableSize;

}

@property (readonly) NSString * name; 
@property (readonly) PAProcess * process; 
@property (readonly) NSSet * memObjects;                          //@synthesize memObjects=_memObjects - In the implementation block
@property (readonly) NSDictionary * subCategories;                //@synthesize subCategories=_subCategories - In the implementation block
@property (readonly) long long totalDirtySize; 
@property (readonly) long long totalSwappedSize; 
@property (readonly) long long totalCleanSize; 
@property (readonly) long long totalReclaimableSize; 
-(long long)totalDirtySize;
-(long long)totalCleanSize;
-(long long)totalSwappedSize;
-(void)addMemoryObject:(id)arg1 ;
-(long long)totalReclaimableSize;
-(id)detailStringForFlavor:(int)arg1 andCallOutSwapped:(char)arg2 andShowCategories:(char)arg3 andShowRegions:(char)arg4 ;
-(id)initWithName:(id)arg1 forProcess:(id)arg2 ;
-(NSSet *)memObjects;
-(PAProcess *)process;
-(NSDictionary *)subCategories;
-(id)_sortedNonZeroSubCategoriesForFlavor:(int)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
@end

