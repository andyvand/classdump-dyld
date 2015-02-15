/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:41 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
@class PASampleAggregatorOptions, PASampleTimeSeriesDataStore, NSMutableSet, NSMutableArray;

@interface PASampleAggregator : NSObject {

	PASampleAggregatorOptions* _options;
	PASampleTimeSeriesDataStore* _sampleStore;
	NSMutableSet* _tasks;
	NSMutableArray* _wallTimestamps;
	NSMutableArray* _machTimestamps;

}

@property (assign) char tabDelineateBinaryImageSections; 
@property (assign) char binaryImagesBeforeStacks; 
@property (assign) char displayFrameAddresses; 
@property (assign) char displaySub1MsCpuTime; 
@property (assign) char displayStateChangesOnIdleThreads; 
@property (assign) char displayOffsetsFromUnnamedSymbols; 
@property (assign) char displaySymbolInformation; 
@property (assign) char displayBinaryImageAddresses; 
@property (assign) char displayBinaryImagesLackingNameOrPath; 
@property (assign) char displayNonRunnableThreads; 
@property (assign) char displayProcessFirstLastTimes; 
@property (assign) char displayIdleWorkQueueThreads; 
@property (assign) char verbose; 
@property (assign) PASampleAggregatorOptions * options;                      //@synthesize options=_options - In the implementation block
@property (retain) NSMutableSet * tasks;                                     //@synthesize tasks=_tasks - In the implementation block
@property (readonly) PASampleTimeSeriesDataStore * sampleStore;              //@synthesize sampleStore=_sampleStore - In the implementation block
@property (readonly) unsigned long long count; 
-(char)displayFrameAddresses;
-(char)displayStateChangesOnIdleThreads;
-(char)displaySub1MsCpuTime;
-(char)displayProcessFirstLastTimes;
-(char)displayOffsetsFromUnnamedSymbols;
-(char)displaySymbolInformation;
-(char)displayBinaryImageAddresses;
-(char)displayBinaryImagesLackingNameOrPath;
-(char)displayNonRunnableThreads;
-(char)displayIdleWorkQueueThreads;
-(void)setDisplayFrameAddresses:(char)arg1 ;
-(void)setDisplayStateChangesOnIdleThreads:(char)arg1 ;
-(void)setDisplaySub1MsCpuTime:(char)arg1 ;
-(void)setDisplayProcessFirstLastTimes:(char)arg1 ;
-(void)setDisplayOffsetsFromUnnamedSymbols:(char)arg1 ;
-(void)setDisplaySymbolInformation:(char)arg1 ;
-(void)setDisplayBinaryImageAddresses:(char)arg1 ;
-(void)setDisplayBinaryImagesLackingNameOrPath:(char)arg1 ;
-(void)setDisplayNonRunnableThreads:(char)arg1 ;
-(void)setDisplayIdleWorkQueueThreads:(char)arg1 ;
-(char)tabDelineateBinaryImageSections;
-(void)setTabDelineateBinaryImageSections:(char)arg1 ;
-(char)binaryImagesBeforeStacks;
-(void)setBinaryImagesBeforeStacks:(char)arg1 ;
-(double)wallTimeAtTimestampIndex:(unsigned long long)arg1 ;
-(PASampleTimeSeriesDataStore *)sampleStore;
-(void)printDateToStream:(_sFILE*)arg1 ;
-(void)setSamples:(id)arg1 ;
-(void)printHeaderToStream:(_sFILE*)arg1 ;
-(id)sortedTasks;
-(void)printToStream:(_sFILE*)arg1 ;
-(void)printFooterToStream:(_sFILE*)arg1 ;
-(id)newAggregatedTaskForIdentificationPurposesWithSampleTask:(id)arg1 ;
-(id)newAggregatedTaskForSampleTask:(id)arg1 atTimestampIndex:(unsigned long long)arg2 ;
-(void)addSampleTask:(id)arg1 atTimestampIndex:(unsigned long long)arg2 ;
-(id)initWithSampleStore:(id)arg1 ;
-(double)machTimeAtTimestampIndex:(unsigned long long)arg1 ;
-(void)setTasks:(NSMutableSet *)arg1 ;
-(NSMutableSet *)tasks;
-(char)verbose;
-(void)setVerbose:(char)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(PASampleAggregatorOptions *)options;
-(void)setOptions:(PASampleAggregatorOptions *)arg1 ;
@end

