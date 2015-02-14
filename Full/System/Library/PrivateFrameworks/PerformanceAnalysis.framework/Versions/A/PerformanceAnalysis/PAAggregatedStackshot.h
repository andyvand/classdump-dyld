/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
@class NSMutableArray, PASymbolDataStore, PASampleTimeSeriesDataStore;

@interface PAAggregatedStackshot : NSObject {

	NSMutableArray* _taskData;
	NSMutableArray* _pidsToTrack;
	unsigned _numStackshots;
	char _symbolicated;
	NSMutableArray* _rawStackshots;
	char _shouldSaveStackshots;
	PASymbolDataStore* _symbolDataStore;
	PASampleTimeSeriesDataStore* _sourceTimeSeriesDataStore;

}

@property (assign) char shouldSaveStackshots;              //@synthesize shouldSaveStackshots=_shouldSaveStackshots - In the implementation block
+(id)pidsForName:(id)arg1 ;
-(void)addSampleData:(id)arg1 ;
-(void)addNewStackshot:(id)arg1 ;
-(unsigned)numStackshots;
-(void)trackProcessesWithName:(id)arg1 ;
-(void)symbolicate;
-(id)initWithSamples:(id)arg1 fromSampleTimeSeriesDataStore:(id)arg2 ;
-(void)setShouldSaveStackshots:(char)arg1 ;
-(void)addToTrackedPids:(int)arg1 ;
-(void)grabSample;
-(void)doAggregation;
-(void)printAggregatedStackshotToFile:(_sFILE*)arg1 ;
-(id)newAggregatedStackshotFromSamplesBetweenStartInSec:(double)arg1 andEndInSec:(double)arg2 ;
-(void)discardTimeStampsOutsideOfStartTime:(double)arg1 andEndTime:(double)arg2 ;
-(char)shouldSaveStackshots;
-(id)tasks;
-(id)init;
-(void)dealloc;
@end

