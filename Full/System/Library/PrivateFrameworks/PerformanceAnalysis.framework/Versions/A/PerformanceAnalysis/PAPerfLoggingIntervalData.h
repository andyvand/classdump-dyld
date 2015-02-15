/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
#import <PerformanceAnalysis/PAPerfLoggingResult.h>
#import <PerformanceAnalysis/NSCoding.h>

@class NSString, NSArray;

@interface PAPerfLoggingIntervalData : NSObject <PAPerfLoggingResult, NSCoding> {

	NSString* _intervalType;
	NSString* _processName;
	NSString* _operationCategory;
	NSString* _operationName;
	NSArray* _processedContextDataArray;
	NSArray* _processedContextDataUOMsArray;
	double* _intervalDurationInMsArray;
	double* _intervalStartTimeInSecArray;
	double _averageIntervalDurationInMs;
	double _standardDeviationIntervalDurationInMs;
	double _normalizedStandardDeviation;
	unsigned long long _intervalCount;
	unsigned long long _numUnpairedTransitions;
	double _operationStartTimeInSec;
	double _operationEndTimeInSec;
	double _firstIntervalStartInSec;
	double _endOfLastIntervalInSec;

}

@property (retain) NSString * processName;                                                        //@synthesize processName=_processName - In the implementation block
@property (retain) NSString * operationCategory;                                                  //@synthesize operationCategory=_operationCategory - In the implementation block
@property (retain) NSString * operationName;                                                      //@synthesize operationName=_operationName - In the implementation block
@property (retain) NSString * intervalType;                                                       //@synthesize intervalType=_intervalType - In the implementation block
@property (readonly) double* intervalDurationInMsArray;                                           //@synthesize intervalDurationInMsArray=_intervalDurationInMsArray - In the implementation block
@property (readonly) const double* intervalStartTimeInSecArray;                                   //@synthesize intervalStartTimeInSecArray=_intervalStartTimeInSecArray - In the implementation block
@property (readonly) double averageIntervalDurationInMs;                                          //@synthesize averageIntervalDurationInMs=_averageIntervalDurationInMs - In the implementation block
@property (readonly) double standardDeviationIntervalDurationInMs;                                //@synthesize standardDeviationIntervalDurationInMs=_standardDeviationIntervalDurationInMs - In the implementation block
@property (readonly) double normalizedStandardDeviation;                                          //@synthesize normalizedStandardDeviation=_normalizedStandardDeviation - In the implementation block
@property (readonly) double intervalRateOverOperationInIntervalsPerSec; 
@property (readonly) double intervalRateOverOperationIgnoringDelayInIntervalsPerSec; 
@property (assign) unsigned long long intervalCount;                                              //@synthesize intervalCount=_intervalCount - In the implementation block
@property (assign) unsigned long long numUnpairedIntervalEndsOrStarts;                            //@synthesize numUnpairedTransitions=_numUnpairedTransitions - In the implementation block
@property (readonly) double totalOperationDurationInMs; 
@property (readonly) double operationStartTimeInSec;                                              //@synthesize operationStartTimeInSec=_operationStartTimeInSec - In the implementation block
@property (readonly) double operationEndTimeInSec;                                                //@synthesize operationEndTimeInSec=_operationEndTimeInSec - In the implementation block
@property (readonly) double initialDelayDurationInMs; 
@property (readonly) double trailingDelayDurationInMs; 
@property (readonly) double startOfFirstIntervalInSec;                                            //@synthesize firstIntervalStartInSec=_firstIntervalStartInSec - In the implementation block
@property (readonly) double endOfLastIntervalInSec;                                               //@synthesize endOfLastIntervalInSec=_endOfLastIntervalInSec - In the implementation block
@property (readonly) double timeBetweenOperationStartAndFirstIntervalInMs; 
@property (readonly) NSArray * processedContextDataArray;                                         //@synthesize processedContextDataArray=_processedContextDataArray - In the implementation block
@property (readonly) NSArray * processedContextDataUOMsArray;                                     //@synthesize processedContextDataUOMsArray=_processedContextDataUOMsArray - In the implementation block
-(void)logIntervalData:(char)arg1 ;
-(void)setOperationName:(NSString *)arg1 ;
-(void)setOperationCategory:(NSString *)arg1 ;
-(id)initWithIntervalType:(id)arg1 andIntervalDurationInMSArray:(double*)arg2 andIntervalStartTimeInSecArray:(double*)arg3 ofLength:(unsigned long long)arg4 andNumUnpairedTransitions:(unsigned long long)arg5 andTimeOfFirstIntervalStartInSec:(double)arg6 andTimeOfLastIntervalEndInSec:(double)arg7 andProcessedMetaDataArray:(id)arg8 andProcessedMetaDataUOMsArray:(id)arg9 andSampleTimeSeriesDataStore:(id)arg10 withPAPerfLoggingData:(id)arg11 ;
-(NSString *)operationCategory;
-(NSString *)operationName;
-(char)_isWSFrameInterval;
-(double)initialDelayDurationInMs;
-(void)setIntervalCount:(unsigned long long)arg1 ;
-(void)setIntervalType:(NSString *)arg1 ;
-(void)setNumUnpairedIntervalEndsOrStarts:(unsigned long long)arg1 ;
-(void)_initializeFieldsFromParentOperationInformation:(id)arg1 ;
-(NSString *)intervalType;
-(unsigned long long)numUnpairedIntervalEndsOrStarts;
-(char*)_newMessageTracerIntervalSpecificCStringKeyForNSStringDataType:(id)arg1 ;
-(void)_addNSStringDataType:(id)arg1 andDoubleValue:(double)arg2 toMessageTracerMessage:(asl_object_sRef)arg3 ;
-(void)_logPAPerfLoggingDataValue:(double)arg1 uom:(id)arg2 doLocalLogging:(char)arg3 ;
-(double)intervalRateOverOperationIgnoringDelayInIntervalsPerSec;
-(double)normalizedStandardDeviation;
-(double)trailingDelayDurationInMs;
-(id)initialDelayStackshotUsingSampleTimeSeriesDataStore:(id)arg1 ;
-(id)trailingDelayStackshotUsingSampleTimeSeriesDataStore:(id)arg1 ;
-(void)addIntervalDataToMessageTracerMessage:(asl_object_sRef)arg1 ;
-(void)printAggregatedStackshotToFile:(_sFILE*)arg1 forIntervalIndex:(unsigned long long)arg2 withSampleTimeSeriesDataStore:(id)arg3 ;
-(void)printTimelineToFile:(_sFILE*)arg1 ;
-(double)startOfFirstIntervalInSec;
-(double)endOfLastIntervalInSec;
-(NSArray *)processedContextDataUOMsArray;
-(void)setProcessName:(NSString *)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)intervalRateOverOperationInIntervalsPerSec;
-(NSString *)processName;
-(double)averageIntervalDurationInMs;
-(double)totalOperationDurationInMs;
-(double)timeBetweenOperationStartAndFirstIntervalInMs;
-(double)standardDeviationIntervalDurationInMs;
-(unsigned long long)intervalCount;
-(double)operationStartTimeInSec;
-(double)operationEndTimeInSec;
-(NSArray *)processedContextDataArray;
-(double*)intervalDurationInMsArray;
-(const double*)intervalStartTimeInSecArray;
@end

