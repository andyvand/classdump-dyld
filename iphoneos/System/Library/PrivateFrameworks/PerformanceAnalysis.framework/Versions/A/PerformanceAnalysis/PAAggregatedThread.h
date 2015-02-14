/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:34 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
#import <PerformanceAnalysis/PASampleNodeDataSource.h>

@class NSMutableArray, NSString;

@interface PAAggregatedThread : NSObject <PASampleNodeDataSource> {

	NSMutableArray* topFrames;
	unsigned numStackshots;
	unsigned long long thread_id;
	unsigned long long startCPUTime;
	unsigned long long endCPUTime;
	int priority;
	char hasDispatchQueue;
	unsigned long long dispatchQueueId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)detailedDescription;
-(unsigned long long)thread_id;
-(id)initWithThread:(id)arg1 ;
-(void)addThreadStackshot:(id)arg1 ;
-(id)initWithSampleThreadData:(id)arg1 ;
-(void)addSampleThreadDataStack:(id)arg1 ;
-(unsigned long long)totalCPUTimeInNs;
-(void)printThreadToFile:(_sFILE*)arg1 ;
-(void)symbolicateWithPid:(int)arg1 andSymbolDataStore:(id)arg2 ;
-(void)symbolicateWithPid:(int)arg1 andSampleTimeSeriesDataStore:(id)arg2 ;
-(id)topStackFrames;
-(unsigned long long)sampleCount;
-(void)dealloc;
-(id)displayName;
-(id)children;
@end

