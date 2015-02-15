/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/PASerializable.h>

@class PASampleFrame, NSString;

@interface PASampleThreadData : NSObject <PASerializable> {

	PASampleFrame* leafFrame;
	unsigned long long dispatchQueueId;
	unsigned long long waitEvent;
	unsigned long long continuation;
	unsigned long long userTimeInNs;
	unsigned long long systemTimeInNs;
	unsigned long long threadId;
	int state;
	int staticPriority;
	int currentScheduledPriority;
	int schedulerFlags;
	unsigned threadQos;
	unsigned char ioTier;
	char ioPassive;
	char isSuspended;
	char ss_flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) char hasDispatchQueue; 
@property (readonly) char isWaiting; 
@property (readonly) char isStopped; 
@property (readonly) char isRunning; 
@property (readonly) char isWaitingUninterruptibly; 
@property (readonly) char isHaltedAtTermination; 
@property (readonly) char isAbortingInterruptibleWaits; 
@property (readonly) char isAbortingInterruptibleWaitsAtSafePoints; 
@property (readonly) char isProcessorIdleThread; 
@property (readonly) char is64bitUser; 
@property (readonly) char is64bitKernel; 
@property (readonly) char hasDispatchSerial; 
@property (readonly) char stackTracesHaveNoFramePointers; 
@property (readonly) char isDarwinBG; 
@property (readonly) char hasValidPowerstatsFlags; 
@property (readonly) unsigned powerstatsFlags; 
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
-(id)stack;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(char)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(char)hasDispatchQueue;
-(char)isDarwinBG;
-(unsigned)powerstatsFlags;
-(char)isProcessorIdleThread;
-(char)isStackEqualTo:(id)arg1 ;
-(char)is64bitUser;
-(char)is64bitKernel;
-(char)hasValidPowerstatsFlags;
-(char)isWaiting;
-(char)isWaitingUninterruptibly;
-(char)isHaltedAtTermination;
-(char)isAbortingInterruptibleWaits;
-(char)isAbortingInterruptibleWaitsAtSafePoints;
-(char)hasDispatchSerial;
-(char)stackTracesHaveNoFramePointers;
-(id)initWithStackshotThread:(id)arg1 andLeafFrame:(id)arg2 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(char)isRunning;
-(char)isStopped;
@end

