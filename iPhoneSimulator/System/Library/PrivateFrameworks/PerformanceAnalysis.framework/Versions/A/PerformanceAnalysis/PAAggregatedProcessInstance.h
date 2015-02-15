/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:41 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
#import <PerformanceAnalysis/PAAggregatedTask.h>

@class NSMutableArray, NSMutableSet, NSArray, PAProcessInstanceAggregator, NSString, NSUUID;

@interface PAAggregatedProcessInstance : PAAggregatedTask {

	CFDictionaryRef stacks;
	NSMutableArray* _sampleTasks;
	unsigned long long _firstTimestampIndex;
	NSMutableSet* _concurrentDispatchQueueIds;
	NSArray* _threadsInPreviousSample;
	unsigned long long _mainThreadId;
	char _combinedStacks;
	unsigned _countSuspended;
	unsigned _countTerminated;
	unsigned long long _cpuTimeNsCached;

}

@property (readonly) PAProcessInstanceAggregator * aggregator; 
@property (readonly) NSMutableArray * sampleTasks;                              //@synthesize sampleTasks=_sampleTasks - In the implementation block
@property (readonly) NSMutableSet * concurrentDispatchQueueIds;                 //@synthesize concurrentDispatchQueueIds=_concurrentDispatchQueueIds - In the implementation block
@property (readonly) unsigned long long firstTimestampIndex;                    //@synthesize firstTimestampIndex=_firstTimestampIndex - In the implementation block
@property (readonly) unsigned long long lastTimestampIndex; 
@property (retain) NSArray * threadsInPreviousSample;                           //@synthesize threadsInPreviousSample=_threadsInPreviousSample - In the implementation block
@property (readonly) unsigned countSuspended;                                   //@synthesize countSuspended=_countSuspended - In the implementation block
@property (readonly) unsigned countTerminated;                                  //@synthesize countTerminated=_countTerminated - In the implementation block
@property (readonly) unsigned count; 
@property (readonly) int pid; 
@property (readonly) int ppid; 
@property (readonly) int rpid; 
@property (readonly) unsigned uid; 
@property (readonly) unsigned long long uniqueId; 
@property (readonly) NSString * name; 
@property (readonly) NSString * mainBinaryPath; 
@property (readonly) NSUUID * mainBinaryUuid; 
@property (readonly) unsigned long long mainBinaryOffset; 
@property (readonly) char isUnresponsive; 
@property (readonly) double timeOfLastResponse; 
@property (readonly) char usesSuddenTermination; 
@property (readonly) char allowsIdleExit; 
@property (readonly) char isDirty; 
@property (readonly) char workQueueExceededConstrainedThreadLimit; 
@property (readonly) char workQueueExceededTotalThreadLimit; 
@property (readonly) char isThirdParty; 
-(unsigned long long)uniqueId;
-(int)pid;
-(id)architectureString;
-(char)isUnresponsive;
-(NSMutableArray *)sampleTasks;
-(void)printHeaderToStream:(_sFILE*)arg1 ;
-(void)printToStream:(_sFILE*)arg1 ;
-(void)addSampleTask:(id)arg1 atTimestampIndex:(unsigned long long)arg2 ;
-(PAProcessInstanceAggregator *)aggregator;
-(id)initWithAggregator:(id)arg1 andSampleTask:(id)arg2 atTimestampIndex:(unsigned long long)arg3 ;
-(unsigned long long)mainBinaryOffset;
-(NSUUID *)mainBinaryUuid;
-(void)addSampleThread:(id)arg1 atTimestampIndex:(unsigned long long)arg2 ;
-(NSMutableSet *)concurrentDispatchQueueIds;
-(void)setThreadsInPreviousSample:(NSArray *)arg1 ;
-(void)_combineMainThreadStacks;
-(void)_combineSerialDispatchQueueStacks;
-(unsigned long long)firstTimestampIndex;
-(int)ppid;
-(int)rpid;
-(NSString *)mainBinaryPath;
-(double)timeOfLastResponse;
-(char)usesSuddenTermination;
-(char)allowsIdleExit;
-(char)workQueueExceededConstrainedThreadLimit;
-(char)workQueueExceededTotalThreadLimit;
-(char)isThirdParty;
-(unsigned long long)cpuTimeNs;
-(id)sampleTaskAtTimestampIndex:(unsigned long long)arg1 ;
-(unsigned)countSuspended;
-(unsigned)countTerminated;
-(unsigned long long)lastTimestampIndex;
-(char)_shouldDisplayStacks;
-(void)combineStacks;
-(id)sortedStacks;
-(void)printStacksToStream:(_sFILE*)arg1 ;
-(id)initForIdentificationPurposesWithSampleTask:(id)arg1 ;
-(NSArray *)threadsInPreviousSample;
-(void)dealloc;
-(unsigned)count;
-(char)isDirty;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(NSString *)name;
-(long long)compare:(id)arg1 ;
-(unsigned)uid;
@end

