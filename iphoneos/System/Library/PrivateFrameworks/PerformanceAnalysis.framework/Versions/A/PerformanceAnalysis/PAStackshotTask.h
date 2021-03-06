/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:34 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
@class PAStackshot;

@interface PAStackshotTask : NSObject {

	task_snapshot* _task_snap;
	PAStackshot* _stackshot;
	long long _bytesUsedByThreads;
	long long _bytesAvailableForThreads;
	void* _imageInfos;
	void* _mainBinary;
	int* _donationReceivingPids;

}

@property (readonly) int pid; 
@property (readonly) const char* name; 
@property (readonly) char isDarwinBG; 
@property (readonly) char isSuppressed; 
@property (readonly) char isForeground; 
-(int)pid;
-(char)isFromMicrostackshot;
-(char)isDarwinBG;
-(unsigned)powerstatsFlags;
-(char)setBufferPosition:(const char*)arg1 withRemainingBytes:(unsigned long long)arg2 ;
-(unsigned long long)bytesUsedInBuffer;
-(unsigned long long)_bytesUsedByImageInfos;
-(unsigned long long)_bytesUsedByDonationReceivingPids;
-(char)isForeground;
-(char)isSuppressed;
-(unsigned long long)bytesUsedByHeader;
-(void)iterateThreads:(/*^block*/id)arg1 ;
-(unsigned long long)bytesUsedByThreads;
-(id)initWithStackshot:(id)arg1 ;
-(unsigned long long)numImageInfos;
-(dyld_uuid_info_64)mainBinary;
-(id)copyImageInfos;
-(id)copyDonationReceivingPids;
-(const task_snapshot*)task_snap;
-(const char*)name;
@end

