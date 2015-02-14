/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:35 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Versions/A/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSString, NSArray;

@interface VMUProcInfo : NSObject {

	unsigned _task;
	char _needTaskPortDealloc;
	NSString* _name;
	NSArray* _arguments;
	NSArray* _envVars;
	NSString* _procTableName;
	NSString* _realAppName;
	NSString* _requestedAppName;
	NSString* _firstArg;
	int _pid;
	int _ppid;
	timeval _startTime;

}
+(id)getProcessIds;
+(char)isProcessRunning:(int)arg1 ;
+(int)processParentId:(int)arg1 ;
-(unsigned)task;
-(char)isApp;
-(id)realAppName;
-(id)userAppName;
-(id)_infoFromCommandLine:(int)arg1 ;
-(id)procTableName;
-(id)envVars;
-(id)firstArgument;
-(id)requestedAppName;
-(char)isCFM;
-(id)valueForEnvVar:(id)arg1 ;
-(char)isMachO;
-(char)isNative;
-(long long)compareByName:(id)arg1 ;
-(long long)compareByUserAppName:(id)arg1 ;
-(id)initWithTask:(unsigned)arg1 ;
-(int)pid;
-(timeval)startTime;
-(id)initWithPid:(int)arg1 ;
-(int)ppid;
-(int)cpuType;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)name;
-(void)update;
-(char)isRunning;
-(id)arguments;
-(long long)compare:(id)arg1 ;
-(char)terminate;
-(char)signal:(int)arg1 ;
@end

