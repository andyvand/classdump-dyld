/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
#import <PerformanceAnalysis/NSCoding.h>

@class NSString, NSArray, PAPageResidency, PAMallocData;

@interface PAProcess : NSObject <NSCoding> {

	NSString* procName;
	NSString* displayName;
	kinfo_proc* kp;
	NSArray* memRegions;
	PAPageResidency* privateRes;
	PAPageResidency* sharedRes;
	PAMallocData* mallocData;
	NSArray* images;
	NSArray* imageSegments;
	unsigned task;
	int pid;
	int responsiblePid;
	unsigned userWired;
	unsigned numPorts;
	unsigned numFaults;
	unsigned numPageins;
	unsigned numCOWFaults;
	unsigned numMessagesSent;
	unsigned numMessagesReceived;
	unsigned numSyscallsUnix;
	unsigned numSyscallsMach;
	unsigned numContextSwitches;
	unsigned numThreads;
	unsigned long long userCPUTime;
	unsigned long long systemCPUTime;
	unsigned long long kmem;
	char is64bit;
	char hasValidPort;
	int idleExitStatus;

}

@property (retain) NSString * procName; 
@property (copy) NSString * displayName; 
@property (assign) unsigned task; 
@property (assign) int pid; 
@property (assign) int responsiblePid; 
@property (retain) NSArray * memRegions; 
@property (retain) NSArray * images; 
@property (retain) NSArray * imageSegments; 
@property (assign) char is64bit; 
@property (assign) unsigned numPorts; 
@property (assign) unsigned numFaults; 
@property (assign) unsigned numPageins; 
@property (assign) unsigned numCOWFaults; 
@property (assign) unsigned numMessagesSent; 
@property (assign) unsigned numMessagesReceived; 
@property (assign) unsigned numSyscallsUnix; 
@property (assign) unsigned numSyscallsMach; 
@property (assign) unsigned numContextSwitches; 
@property (assign) unsigned numThreads; 
@property (assign) unsigned long long userCPUTime; 
@property (assign) unsigned long long systemCPUTime; 
@property (assign) unsigned long long kmem; 
@property (readonly) int idleExitStatus; 
@property (readonly) kinfo_proc* kp; 
+(id)nameForLivingProcessWithPid:(int)arg1 ;
+(id)getProcessesWithName:(id)arg1 ;
+(id)getAllProcesses;
+(id)findChildProcessesOf:(id)arg1 usingCandidateProcesses:(id)arg2 ;
+(id)gatherGroupOfRunningChildProcessesFor:(id)arg1 ;
-(void)setTask:(unsigned)arg1 ;
-(unsigned)task;
-(id)portString;
-(int)pid;
-(NSArray *)images;
-(id)getPrivateResidency;
-(id)getSharedResidency;
-(void)gatherImageInformation;
-(void)countObjectReferences;
-(void)setKmem:(unsigned long long)arg1 ;
-(void)gatherMallocInfo;
-(id)mallocDataWithFilter:(int)arg1 ;
-(double)userCpuTimeInSeconds;
-(double)systemCpuTimeInSeconds;
-(void)initPrivateResidency;
-(void)initSharedResidency;
-(void)setImageSegments:(NSArray *)arg1 ;
-(void)setProcName:(NSString *)arg1 ;
-(void)setMemRegions:(NSArray *)arg1 ;
-(void)setResponsiblePid:(int)arg1 ;
-(void)_gatherDisplayName;
-(void)getPortInfo;
-(void)getEventInfo;
-(void)getThreadAndCPUInfo;
-(void)getKmem;
-(void)_gatherIdleExitStatus;
-(id)totalAllocatedMemoryString;
-(id)totalLeakedMemoryString;
-(id)memorySummaryString;
-(id)nameString;
-(id)architectureString;
-(id)eventString;
-(id)privateResidencyBytesString;
-(id)wiredMemoryString;
-(id)cpuTimeString;
-(id)initWithPid:(int)arg1 ;
-(kinfo_proc*)kp;
-(int)responsiblePid;
-(void)gatherResidentInfoDetailed:(char)arg1 ;
-(void)classifyMemoryRegions;
-(void)gatherMallocDetails;
-(void)gatherMallocDetailsNoStacks;
-(double)totalCpuTimeInSeconds;
-(id)mallocData;
-(id)fullNameString;
-(id)privateResidencyString;
-(id)sharedResidencyString;
-(id)sharedResidencyBytesString;
-(id)messagesString;
-(id)syscallString;
-(id)contextSwitchString;
-(id)topLevelStatsString;
-(id)allRegionsString;
-(id)imageNamesString;
-(id)imageNamesWithSegmentsString;
-(id)imageNamesWithSegmentsAndSectionsString;
-(void)discardDetailedData;
-(NSString *)procName;
-(char)is64bit;
-(void)setIs64bit:(char)arg1 ;
-(NSArray *)memRegions;
-(NSArray *)imageSegments;
-(unsigned)numPorts;
-(void)setNumPorts:(unsigned)arg1 ;
-(unsigned)numThreads;
-(void)setNumThreads:(unsigned)arg1 ;
-(unsigned long long)userCPUTime;
-(void)setUserCPUTime:(unsigned long long)arg1 ;
-(unsigned long long)systemCPUTime;
-(void)setSystemCPUTime:(unsigned long long)arg1 ;
-(unsigned)numFaults;
-(void)setNumFaults:(unsigned)arg1 ;
-(unsigned)numPageins;
-(void)setNumPageins:(unsigned)arg1 ;
-(unsigned)numCOWFaults;
-(void)setNumCOWFaults:(unsigned)arg1 ;
-(unsigned)numMessagesSent;
-(void)setNumMessagesSent:(unsigned)arg1 ;
-(unsigned)numMessagesReceived;
-(void)setNumMessagesReceived:(unsigned)arg1 ;
-(unsigned)numSyscallsUnix;
-(void)setNumSyscallsUnix:(unsigned)arg1 ;
-(unsigned)numSyscallsMach;
-(void)setNumSyscallsMach:(unsigned)arg1 ;
-(unsigned)numContextSwitches;
-(void)setNumContextSwitches:(unsigned)arg1 ;
-(unsigned long long)kmem;
-(int)idleExitStatus;
-(void)setPid:(int)arg1 ;
-(void)setImages:(NSArray *)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
@end

