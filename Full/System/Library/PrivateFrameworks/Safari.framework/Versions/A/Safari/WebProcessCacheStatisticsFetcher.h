/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSTimer;

@interface WebProcessCacheStatisticsFetcher : NSObject {

	NSTimer* _periodicFetchTimer;

}
-(void)stopPeriodicFetching;
-(void)periodicFetch:(id)arg1 ;
-(void)notifyOfNewStatistics:(id)arg1 ;
-(void)fetchStatistics:(/*^block*/id)arg1 ;
-(void)fetchStatisticsWithTimeout:(double)arg1 callback:(/*^block*/id)arg2 ;
-(void)fetchStatisticsCallbackTimedOut:(id)arg1 ;
-(void)startPeriodicFetchingWithTimeInterval:(double)arg1 ;
-(id)init;
-(void)dealloc;
@end

