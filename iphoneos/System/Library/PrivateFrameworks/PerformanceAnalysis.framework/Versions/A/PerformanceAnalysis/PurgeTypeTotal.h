/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:34 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/MallocDataCategorySummary.h>

@class NSMutableArray;

@interface PurgeTypeTotal : MallocDataCategorySummary {

	int purgeClass;
	NSMutableArray* zones;

}

@property (retain) NSMutableArray * zones; 
@property (assign) int purgeClass; 
-(int)purgeClass;
-(char)printData:(id)arg1 ;
-(void)setPurgeClass:(int)arg1 ;
-(NSMutableArray *)zones;
-(id)initWithPurgeType:(int)arg1 ;
-(void)addAllocation:(id)arg1 ;
-(id)zoneTotalForZoneName:(id)arg1 ;
-(id)stringForType;
-(void)setZones:(NSMutableArray *)arg1 ;
-(void)dealloc;
@end

