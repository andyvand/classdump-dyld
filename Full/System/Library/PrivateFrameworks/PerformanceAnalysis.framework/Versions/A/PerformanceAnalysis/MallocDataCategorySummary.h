/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface MallocDataCategorySummary : NSObject {

	unsigned long long totalBytesNonLeaked;
	unsigned long long totalNodesNonLeaked;
	unsigned long long totalBytesLeaked;
	unsigned long long totalNodesLeaked;
	NSString* name;
	unsigned short depth;

}

@property (assign) unsigned long long totalBytesNonLeaked; 
@property (assign) unsigned long long totalNodesNonLeaked; 
@property (assign) unsigned long long totalBytesLeaked; 
@property (assign) unsigned long long totalNodesLeaked; 
@property (assign) unsigned short depth; 
@property (retain) NSString * name; 
-(char)printData:(id)arg1 ;
-(unsigned long long)totalBytesLeaked;
-(unsigned long long)totalNodesLeaked;
-(unsigned long long)totalBytesNonLeaked;
-(unsigned long long)totalNodesNonLeaked;
-(char)passesFilter:(id)arg1 ;
-(void)printIndent;
-(void)printSubcategoryIndent;
-(void)addAllocation:(id)arg1 ;
-(void)setTotalBytesNonLeaked:(unsigned long long)arg1 ;
-(void)setTotalNodesNonLeaked:(unsigned long long)arg1 ;
-(void)setTotalBytesLeaked:(unsigned long long)arg1 ;
-(void)setTotalNodesLeaked:(unsigned long long)arg1 ;
-(void)setDepth:(unsigned short)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(long long)compare:(id)arg1 ;
-(unsigned short)depth;
@end

