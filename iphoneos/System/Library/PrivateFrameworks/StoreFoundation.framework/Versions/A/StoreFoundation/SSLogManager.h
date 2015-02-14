/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/StoreFoundation.framework/Versions/A/StoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <StoreFoundation/StoreFoundation-Structs.h>
@class NSObject;

@interface SSLogManager : NSObject {

	char _dirty;
	asl_object_sRef _aslclient;
	asl_object_sRef _aslmsg;
	NSObject*<OS_dispatch_queue> _aslqueue;

}
+(id)dateFormatter;
+(id)sharedManager;
+(id)dateFormatterForFilename;
-(id)init;
-(void)dealloc;
-(void)logLevel:(unsigned long long)arg1 inFunction:(const char*)arg2 inFile:(const char*)arg3 atLine:(unsigned long long)arg4 withFormat:(id)arg5 ;
-(void)_startASL;
-(void)_endASL;
-(void)manageAppStoreLogOrder:(id)arg1 ;
-(void)manageAppStoreLogs:(id)arg1 withPath:(id)arg2 ;
-(void)_markStart;
-(void)_sendStringToASL:(id)arg1 withLevel:(long long)arg2 ;
-(void)logLevel:(unsigned long long)arg1 inFunction:(const char*)arg2 inFile:(const char*)arg3 atLine:(unsigned long long)arg4 withString:(id)arg5 ;
-(id)_createLogFileWithName:(id)arg1 andExtension:(id)arg2 ;
-(void)_sendAuxiliaryFileToASL:(id)arg1 withName:(id)arg2 ;
-(void)logLevel:(unsigned long long)arg1 inFunction:(const char*)arg2 inFile:(const char*)arg3 atLine:(unsigned long long)arg4 forData:(id)arg5 toFilename:(id)arg6 ;
-(void)logLevel:(unsigned long long)arg1 inFunction:(const char*)arg2 inFile:(const char*)arg3 atLine:(unsigned long long)arg4 forPlist:(id)arg5 toFilename:(id)arg6 ;
-(void)logLevel:(unsigned long long)arg1 inFunction:(const char*)arg2 inFile:(const char*)arg3 atLine:(unsigned long long)arg4 forRequest:(id)arg5 toFilename:(id)arg6 ;
-(void)logLevel:(unsigned long long)arg1 inFunction:(const char*)arg2 inFile:(const char*)arg3 atLine:(unsigned long long)arg4 forResponse:(id)arg5 toFilename:(id)arg6 ;
-(void)_markEnd;
@end

