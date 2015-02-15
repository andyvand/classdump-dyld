/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/NSCoding.h>

@class PAMemoryObjectOrganizer, NSArray, PAGraphicsInfoCollector;

@interface PAFootprint : NSObject <NSCoding> {

	PAMemoryObjectOrganizer* memoryObjectOrganizer;
	NSArray* processes;
	long long footprintBytes;
	long long swappedBytes;
	PAGraphicsInfoCollector* graphicsInfoCollector;
	char gatherMallocDetails;
	char gatherDetailedProcessInfo;
	char collapseSharing;
	char showSwapped;
	char showCategories;
	char showRegions;
	char gatherGraphicsData;
	int mallocDetailsDisclosureDepth;
	unsigned long long mallocDetailsMinimumBytes;

}

@property (readonly) NSArray * processes; 
@property (readonly) long long footprintBytes; 
@property (readonly) long long swappedBytes; 
@property (assign) char gatherDetailedProcessInfo; 
@property (assign) char gatherMallocDetails; 
@property (assign) char gatherGraphicsData; 
@property (assign) char collapseSharing; 
@property (assign) char showSwapped; 
@property (assign) char showCategories; 
@property (assign) char showRegions; 
@property (assign) int mallocDetailsDisclosureDepth; 
@property (assign) unsigned long long mallocDetailsMinimumBytes; 
+(id)footprintForProcessNames:(id)arg1 andPids:(id)arg2 withDetailedInfo:(char)arg3 andMallocDetails:(char)arg4 andTargetChildren:(char)arg5 ;
+(id)footprintForProcesses:(id)arg1 withDetailedInfo:(char)arg2 andMallocDetails:(char)arg3 ;
+(id)footprintForProcessNames:(id)arg1 andPids:(id)arg2 withDetailedInfo:(char)arg3 andMallocDetails:(char)arg4 ;
+(id)footprintWithPath:(id)arg1 ;
+(id)footprintForAllProcesses;
+(id)footprintForAllProcessesAndSkipIdleExitClean:(char)arg1 andGatherGraphicsData:(char)arg2 ;
+(id)footprintForProcessNames:(id)arg1 andPids:(id)arg2 withDetailedInfo:(char)arg3 andMallocDetails:(char)arg4 andTargetChildren:(char)arg5 andSkipIdleExitClean:(char)arg6 andGatherGraphicsData:(char)arg7 ;
+(id)footprintForProcesses:(id)arg1 ;
+(id)footprintForProcessNames:(id)arg1 andPids:(id)arg2 ;
-(NSArray *)processes;
-(int)mallocDetailsDisclosureDepth;
-(unsigned long long)mallocDetailsMinimumBytes;
-(char)gatherMallocDetails;
-(long long)swappedBytes;
-(id)initWithProcesses:(id)arg1 ;
-(id)initForAllProcesses;
-(void)gatherData;
-(void)_removeIdleExitCleanProcesses;
-(void)setGatherGraphicsData:(char)arg1 ;
-(void)setGatherDetailedProcessInfo:(char)arg1 ;
-(void)setGatherMallocDetails:(char)arg1 ;
-(id)initWithProcessesNames:(id)arg1 andPids:(id)arg2 andTargetChildren:(char)arg3 ;
-(long long)footprintBytesForProcess:(id)arg1 ;
-(char)gatherDetailedProcessInfo;
-(void)_refreshDataStructures;
-(id)_sortedProcesses;
-(char)collapseSharing;
-(id)_sortedNonZeroProcessGroupsByFlavor:(int)arg1 forGroups:(id)arg2 ;
-(void)printDetailedMemoryTotalsForMemoryLabelled:(id)arg1 onProcess:(id)arg2 forSortedProcessGroups:(id)arg3 withTotalSize:(long long)arg4 andGroupDifferentiation:(char)arg5 forFlavor:(int)arg6 callOutSwapped:(char)arg7 ;
-(void)_printGraphicsSummaryForProcess:(id)arg1 ;
-(void)_printTotal;
-(char)showCategories;
-(char)showRegions;
-(void)_printCategorySummaryWithDetails:(char)arg1 ;
-(char)showSwapped;
-(long long)footprintBytesForPid:(int)arg1 ;
-(id)initWithProcessesNames:(id)arg1 andPids:(id)arg2 ;
-(void)printSummary;
-(long long)footprintBytes;
-(void)setShowSwapped:(char)arg1 ;
-(void)setShowCategories:(char)arg1 ;
-(void)setShowRegions:(char)arg1 ;
-(void)setMallocDetailsDisclosureDepth:(int)arg1 ;
-(void)setMallocDetailsMinimumBytes:(unsigned long long)arg1 ;
-(void)setCollapseSharing:(char)arg1 ;
-(char)gatherGraphicsData;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

