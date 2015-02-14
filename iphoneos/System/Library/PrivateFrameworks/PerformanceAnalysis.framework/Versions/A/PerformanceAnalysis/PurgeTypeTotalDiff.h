/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:34 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/MallocDataCategorySummaryDiff.h>

@class NSMutableDictionary;

@interface PurgeTypeTotalDiff : MallocDataCategorySummaryDiff {

	int purgeClass;
	NSMutableDictionary* zoneDiffs;

}

@property (retain) NSMutableDictionary * zoneDiffs; 
@property (assign) int purgeClass; 
-(id)initWithPurgeType:(int)arg1 Before:(id)arg2 After:(id)arg3 ;
-(int)purgeClass;
-(char)printData:(id)arg1 ;
-(void)setPurgeClass:(int)arg1 ;
-(NSMutableDictionary *)zoneDiffs;
-(void)setZoneDiffs:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
@end

