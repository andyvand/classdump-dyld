/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:47 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/Versions/A/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FMF/FMF-Structs.h>
#import <FMF/FMFSystemLog.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface FMF_macosx_SystemLog : FMFSystemLog {

	int _logFileFD;
	NSObject*<OS_dispatch_queue> _dq;
	asl_object_sRef _aslClient;

}

@property (retain) NSObject*<OS_dispatch_queue> dq;              //@synthesize dq=_dq - In the implementation block
@property (assign) asl_object_sRef aslClient;                    //@synthesize aslClient=_aslClient - In the implementation block
@property (assign) int logFileFD;                                //@synthesize logFileFD=_logFileFD - In the implementation block
-(asl_object_sRef)aslClient;
-(void)setAslClient:(asl_object_sRef)arg1 ;
-(char)isLoggingToFile;
-(void)startLoggingToFile:(id)arg1 ;
-(void)stopLoggingToFile;
-(void)writeLevel:(unsigned)arg1 facility:(id)arg2 path:(const char*)arg3 line:(unsigned)arg4 function:(const char*)arg5 format:(id)arg6 ;
-(void)setDq:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setLogFileFD:(int)arg1 ;
-(int)logFileFD;
-(NSObject*<OS_dispatch_queue>)dq;
-(void)processASLMessage:(asl_object_sRef)arg1 ;
-(id)init;
@end

