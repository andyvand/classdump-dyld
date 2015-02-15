/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:41 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
#import <PerformanceAnalysis/PAAggregatedTask.h>

@class NSString, NSUUID, NSMutableSet, PAExecutableAggregator;

@interface PAAggregatedExecutable : PAAggregatedTask {

	unsigned long long _firstTimestampIndex;
	unsigned long long _lastTimestampIndex;
	NSString* _name;
	NSUUID* _mainBinaryUuid;
	unsigned _count;
	NSMutableSet* _rootFrames;

}

@property (readonly) PAExecutableAggregator * aggregator; 
@property (readonly) NSUUID * mainBinaryUuid;                           //@synthesize mainBinaryUuid=_mainBinaryUuid - In the implementation block
@property (assign) unsigned count;                                      //@synthesize count=_count - In the implementation block
@property (assign) unsigned long long firstTimestampIndex;              //@synthesize firstTimestampIndex=_firstTimestampIndex - In the implementation block
@property (assign) unsigned long long lastTimestampIndex;               //@synthesize lastTimestampIndex=_lastTimestampIndex - In the implementation block
@property (retain) NSMutableSet * rootFrames;                           //@synthesize rootFrames=_rootFrames - In the implementation block
@property (readonly) NSString * name;                                   //@synthesize name=_name - In the implementation block
-(void)printHeaderToStream:(_sFILE*)arg1 ;
-(void)printToStream:(_sFILE*)arg1 ;
-(void)addSampleTask:(id)arg1 atTimestampIndex:(unsigned long long)arg2 ;
-(PAExecutableAggregator *)aggregator;
-(id)initWithAggregator:(id)arg1 andSampleTask:(id)arg2 atTimestampIndex:(unsigned long long)arg3 ;
-(void)printBinaryImagesToStream:(_sFILE*)arg1 ;
-(NSUUID *)mainBinaryUuid;
-(unsigned long long)firstTimestampIndex;
-(unsigned long long)lastTimestampIndex;
-(void)printStacksToStream:(_sFILE*)arg1 ;
-(id)initForIdentificationPurposesWithSampleTask:(id)arg1 ;
-(void)setFirstTimestampIndex:(unsigned long long)arg1 ;
-(void)setLastTimestampIndex:(unsigned long long)arg1 ;
-(NSMutableSet *)rootFrames;
-(id)copyDescriptionForFrame:(id)arg1 ;
-(void)setRootFrames:(NSMutableSet *)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(long long)compare:(id)arg1 ;
-(void)setCount:(unsigned)arg1 ;
@end

