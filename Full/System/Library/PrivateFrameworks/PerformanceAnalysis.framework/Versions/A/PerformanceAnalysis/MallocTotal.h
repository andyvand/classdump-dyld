/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface MallocTotal : NSObject {

	unsigned long long totalBytesReclaimable;
	unsigned long long totalNodesReclaimable;
	unsigned long long totalBytesNonReclaimable;
	unsigned long long totalNodesNonReclaimable;
	NSMutableArray* purgeTypeTotals;

}

@property (assign) unsigned long long totalBytesReclaimable; 
@property (assign) unsigned long long totalNodesReclaimable; 
@property (assign) unsigned long long totalBytesNonReclaimable; 
@property (assign) unsigned long long totalNodesNonReclaimable; 
@property (retain) NSMutableArray * purgeTypeTotals; 
-(unsigned long long)totalBytesReclaimable;
-(unsigned long long)totalNodesReclaimable;
-(unsigned long long)totalBytesNonReclaimable;
-(unsigned long long)totalNodesNonReclaimable;
-(NSMutableArray *)purgeTypeTotals;
-(id)totalForPurgeType:(int)arg1 ;
-(void)printTotals:(id)arg1 ;
-(id)initWithMallocData:(id)arg1 ;
-(void)setTotalBytesReclaimable:(unsigned long long)arg1 ;
-(void)setTotalNodesReclaimable:(unsigned long long)arg1 ;
-(void)setTotalBytesNonReclaimable:(unsigned long long)arg1 ;
-(void)setTotalNodesNonReclaimable:(unsigned long long)arg1 ;
-(void)setPurgeTypeTotals:(NSMutableArray *)arg1 ;
-(void)dealloc;
@end

