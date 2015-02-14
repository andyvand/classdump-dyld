/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCPatch.h>

@class QCStringPort, QCIndexPort, QCStructurePort, QCNumberPort;

@interface QCHostInfo : QCPatch {

	QCStringPort* outputUserName;
	QCStringPort* outputLongUserName;
	QCStringPort* outputComputerName;
	QCStringPort* outputHostName;
	QCStringPort* outputIPAddress;
	QCStringPort* outputMachineName;
	QCStringPort* outputOSVersion;
	QCStringPort* outputKernelVersion;
	QCIndexPort* outputRAMSize;
	QCStringPort* outputCPUType;
	QCStructurePort* _cpuLoadPort;
	QCIndexPort* _CPUCountPort;
	QCNumberPort* _CPULoadPort_1;
	QCNumberPort* _CPULoadPort_2;
	processor_cpu_load_info* _savedTicks;
	unsigned _savedSize;

}
+(unsigned long long)stateVersionWithIdentifier:(id)arg1 ;
+(id)stateKeysWithIdentifier:(id)arg1 ;
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
+(int)executionModeWithIdentifier:(id)arg1 ;
-(char)setState:(id)arg1 ;
-(id)state;
-(id)initWithIdentifier:(id)arg1 ;
-(char)setup:(id)arg1 ;
-(void)cleanup:(id)arg1 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(void)setUseCPUStructure:(char)arg1 ;
-(char)useCPUStructure;
@end

