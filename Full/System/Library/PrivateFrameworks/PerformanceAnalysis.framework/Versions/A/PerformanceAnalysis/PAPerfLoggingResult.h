/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol PAPerfLoggingResult
@property (readonly) NSString * intervalType; 
@property (readonly) NSString * processName; 
@property (readonly) NSString * operationCategory; 
@property (readonly) NSString * operationName; 
@property (readonly) double averageIntervalDurationInMs; 
@property (readonly) double standardDeviationIntervalDurationInMs; 
@property (readonly) double normalizedStandardDeviation; 
@property (readonly) double intervalRateOverOperationInIntervalsPerSec; 
@property (readonly) double intervalRateOverOperationIgnoringDelayInIntervalsPerSec; 
@property (readonly) double timeBetweenOperationStartAndFirstIntervalInMs; 
@property (readonly) double* intervalDurationInMsArray; 
@property (readonly) const double* intervalStartTimeInSecArray; 
@property (readonly) unsigned long long intervalCount; 
@property (readonly) unsigned long long numUnpairedIntervalEndsOrStarts; 
@property (readonly) double totalOperationDurationInMs; 
@property (readonly) double operationStartTimeInSec; 
@property (readonly) double operationEndTimeInSec; 
@property (readonly) NSArray * processedContextDataArray; 
@required
-(NSString *)operationCategory;
-(NSString *)operationName;
-(NSString *)intervalType;
-(unsigned long long)numUnpairedIntervalEndsOrStarts;
-(double)intervalRateOverOperationIgnoringDelayInIntervalsPerSec;
-(double)normalizedStandardDeviation;
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

