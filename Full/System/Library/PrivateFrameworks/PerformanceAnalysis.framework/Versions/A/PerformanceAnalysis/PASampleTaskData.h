/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/PASerializable.h>

@class NSArray, PASampleTimeInsensitiveTaskData, PASampleTaskDataPrivateData, NSSet, NSString, NSUUID;

@interface PASampleTaskData : NSObject <PASerializable> {

	NSArray* sampleThreadsArray;
	PASampleTimeInsensitiveTaskData* _timeInsensitiveTaskData;
	PASampleTaskDataPrivateData* _privateData;
	NSSet* _donatingPids;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) int pid; 
@property (readonly) int ppid; 
@property (readonly) int rpid; 
@property (readonly) unsigned uid; 
@property (readonly) unsigned long long uniqueId; 
@property (readonly) NSString * name; 
@property (readonly) NSString * bundleName; 
@property (readonly) NSString * mainBinaryPath; 
@property (readonly) NSArray * imageInfos; 
@property (readonly) NSUUID * mainBinaryUuid; 
@property (readonly) unsigned long long mainBinaryOffset; 
@property (readonly) NSUUID * sharedCacheUUID; 
@property (readonly) unsigned long long sharedCacheOffset; 
@property (readonly) unsigned long long sharedCacheStart; 
@property (readonly) unsigned long long sharedCacheLength; 
@property (readonly) char isUnresponsive; 
@property (readonly) double timeOfLastResponse; 
@property (readonly) char usesSuddenTermination; 
@property (readonly) char allowsIdleExit; 
@property (readonly) char isDirty; 
@property (readonly) char workQueueExceededConstrainedThreadLimit; 
@property (readonly) char workQueueExceededTotalThreadLimit; 
@property (readonly) char isThirdParty; 
@property (readonly) int suspendCount; 
@property (readonly) int taskSizeInPages; 
@property (readonly) int numberOfPageFaults; 
@property (readonly) int numberOfPageIns; 
@property (readonly) int numberOfCopyOnWritePageFaults; 
@property (readonly) unsigned latency_qos; 
@property (retain) NSSet * donatingPids;                                        //@synthesize donatingPids=_donatingPids - In the implementation block
@property (readonly) unsigned ss_flags; 
@property (readonly) char is64bitUser; 
@property (readonly) char is64bitKernel; 
@property (readonly) char isTaskResourceFlagged; 
@property (readonly) char isTerminatedSnapshot; 
@property (readonly) char isPidSuspended; 
@property (readonly) char isFrozen; 
@property (readonly) char isDarwinBG; 
@property (readonly) char isDarwinExtBG; 
@property (readonly) char isVisible; 
@property (readonly) char isNonVisible; 
@property (readonly) char isForeground; 
@property (readonly) char isBoosted; 
@property (readonly) char isSuppressed; 
@property (readonly) char isTimerThrottled; 
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
-(unsigned long long)uniqueId;
-(NSString *)bundleName;
-(int)pid;
-(NSArray *)imageInfos;
-(id)architectureString;
-(unsigned long long)sharedCacheStart;
-(unsigned long long)sharedCacheLength;
-(unsigned long long)sharedCacheOffset;
-(NSUUID *)sharedCacheUUID;
-(char)isUnresponsive;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(char)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(char)isDarwinBG;
-(char)isForeground;
-(char)isSuppressed;
-(unsigned long long)mainBinaryOffset;
-(NSUUID *)mainBinaryUuid;
-(char)isTerminatedSnapshot;
-(int)ppid;
-(int)rpid;
-(NSString *)mainBinaryPath;
-(double)timeOfLastResponse;
-(char)usesSuddenTermination;
-(char)allowsIdleExit;
-(char)workQueueExceededConstrainedThreadLimit;
-(char)workQueueExceededTotalThreadLimit;
-(char)isThirdParty;
-(int)taskSizeInPages;
-(int)numberOfPageIns;
-(char)isBoosted;
-(NSSet *)donatingPids;
-(unsigned)latency_qos;
-(char)is64bitUser;
-(char)is64bitKernel;
-(char)isTaskResourceFlagged;
-(char)isPidSuspended;
-(char)isDarwinExtBG;
-(char)isNonVisible;
-(char)isTimerThrottled;
-(int)numberOfPageFaults;
-(int)numberOfCopyOnWritePageFaults;
-(unsigned)ss_flags;
-(id)timeInsensitiveTaskData;
-(id)initWithStackshotTask:(id)arg1 andTimeInsensitiveTaskData:(id)arg2 ;
-(char)isSameAsTask:(id)arg1 ;
-(void)setDonatingPids:(NSSet *)arg1 ;
-(int)suspendCount;
-(void)dealloc;
-(NSString *)description;
-(char)isDirty;
-(NSString *)name;
-(char)isVisible;
-(unsigned)uid;
-(char)isFrozen;
@end

