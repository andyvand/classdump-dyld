/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WBSCloudHistorySyncThrottlerDataStore;
@class NSMutableArray, NSArray;

@interface WBSCloudHistorySyncThrottler : NSObject {

	NSMutableArray* _syncOperationsWithinMonitoredPeriod;
	NSArray* _throttlingDistribution;
	double _numberOfSecondsToMonitor;
	unsigned long long _maximumNumberOfOperationWithinMonitoredPeriod;
	id<WBSCloudHistorySyncThrottlerDataStore> _dataStore;

}

@property (nonatomic,retain) id<WBSCloudHistorySyncThrottlerDataStore> dataStore;              //@synthesize dataStore=_dataStore - In the implementation block
+(id)_distributionBucketsFromConfiguration:(id)arg1 ;
+(char)policyStringRepresentsValidPolicy:(id)arg1 ;
-(id)initWithPolicyString:(id)arg1 ;
-(void)setDataStore:(id<WBSCloudHistorySyncThrottlerDataStore>)arg1 ;
-(void)syncAttemptWithPriority:(long long)arg1 didCompleteWithResult:(long long)arg2 ;
-(char)throttlingPolicyPermitsSyncAttemptWithPriority:(long long)arg1 ;
-(id)dateOfNextPermittedSyncAttemptWithPriority:(long long)arg1 ;
-(void)setPolicyString:(id)arg1 ;
-(void)_loadRecordOfPastSyncOperations;
-(void)_pruneExpiredOrInvalidSyncEntries;
-(id)_dateOfNextPermittedSyncAttemptWithNormalPriority;
-(void)_addSyncOperationAtDate:(id)arg1 ;
-(void)_saveRecordOfPastSyncOperations;
-(double)_currentMinimumTimeIntervalBetweenSyncOperations;
-(char)_loadDistributionConfiguration:(id)arg1 ;
-(double)_timeIntervalUntilNextPermittedSyncAttemptWithNormalPriority;
-(double)_minimumTimeBetweenSyncOperationsForSyncOperations:(id)arg1 ;
-(double)_timeIntervalUntilSyncOperationShouldBePruned:(id)arg1 ;
-(char)_throttlerIsActive;
-(double)_test_numberOfSecondsToMonitor;
-(unsigned long long)_test_maximumNumberOfOperationWithinMonitoredPeriod;
-(id<WBSCloudHistorySyncThrottlerDataStore>)dataStore;
-(id)init;
-(id)description;
@end

