/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:34 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface MallocDataCategorySummaryDiff : NSObject {

	long long totalBytesNonLeakedDiff;
	long long totalNodesNonLeakedDiff;
	long long totalBytesLeakedDiff;
	long long totalNodesLeakedDiff;
	NSString* name;
	unsigned short depth;

}

@property (assign) long long totalBytesNonLeakedDiff; 
@property (assign) long long totalNodesNonLeakedDiff; 
@property (assign) long long totalBytesLeakedDiff; 
@property (assign) long long totalNodesLeakedDiff; 
@property (assign) unsigned short depth; 
@property (retain) NSString * name; 
-(char)printData:(id)arg1 ;
-(long long)totalBytesLeakedDiff;
-(long long)totalBytesNonLeakedDiff;
-(long long)totalNodesLeakedDiff;
-(long long)totalNodesNonLeakedDiff;
-(char)passesFilter:(id)arg1 ;
-(void)printIndent;
-(void)printSubcategoryIndent;
-(id)initWithBefore:(id)arg1 After:(id)arg2 ;
-(void)setTotalBytesLeakedDiff:(long long)arg1 ;
-(void)setTotalNodesLeakedDiff:(long long)arg1 ;
-(void)setTotalBytesNonLeakedDiff:(long long)arg1 ;
-(void)setTotalNodesNonLeakedDiff:(long long)arg1 ;
-(void)setDepth:(unsigned short)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(long long)compare:(id)arg1 ;
-(unsigned short)depth;
@end

