/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
@class NSString, NSMutableArray;

@interface PAMemAllocationCategory : NSObject {

	NSString* name;
	NSString* type;
	NSString* binary;
	NSString* mallocZone;
	NSMutableArray* allocations;
	unsigned long long totalSize;
	long long serializedIndex;
	char isLeaks;

}

@property (retain) NSString * name; 
@property (retain) NSString * type; 
@property (retain) NSString * binary; 
@property (retain) NSString * mallocZone; 
@property (retain) NSMutableArray * allocations; 
@property (assign) unsigned long long totalSize; 
@property (assign) char isLeaks; 
@property (readonly) long long serializedIndex; 
+(id)keyForMemAllocation:(id)arg1 ;
+(id)keyForName:(id)arg1 Type:(id)arg2 Binary:(id)arg3 Zone:(id)arg4 ;
-(id)summaryString;
-(void)addAllocation:(id)arg1 ;
-(NSString *)mallocZone;
-(void)setAllocations:(NSMutableArray *)arg1 ;
-(NSMutableArray *)allocations;
-(id)nameString;
-(id)initWithSameMetaInfoAsCategory:(id)arg1 ;
-(void)setIsLeaks:(char)arg1 ;
-(void)serializeToBuffer:(void*)arg1 WithStringsDict:(id)arg2 Index:(long long)arg3 ;
-(id)initWithName:(id)arg1 Type:(id)arg2 Binary:(id)arg3 Zone:(id)arg4 IsLeaks:(char)arg5 ;
-(id)initWithSerializedMemAllocationCategory:(PASerializedMemAllocationCategory*)arg1 WithStringsArray:(id*)arg2 ;
-(id)keyForCategory;
-(char)isLeaks;
-(NSString *)binary;
-(void)setMallocZone:(NSString *)arg1 ;
-(void)setBinary:(NSString *)arg1 ;
-(unsigned long long)numAllocations;
-(unsigned long long)averageSize;
-(id)sizeString;
-(id)numAllocationsString;
-(id)averageSizeString;
-(id)binaryString;
-(id)mallocZoneString;
-(long long)serializedIndex;
-(void)setTotalSize:(unsigned long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)type;
-(long long)compare:(id)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(unsigned long long)totalSize;
-(id)typeString;
@end

