/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSTask, NSString, NSFileHandle;

@interface PKInstallTask : NSObject {

	NSTask* _task;
	NSString* _logPrefix;
	NSFileHandle* _outputReadHandle;
	NSString* _partialLine;

}
-(id)task;
-(void)_readTaskOutput:(id)arg1 ;
-(void)_flushTaskOutput;
-(char)_processTaskOutput:(id)arg1 ;
-(id)initWithTask:(id)arg1 logWithPrefix:(id)arg2 ;
-(void)dealloc;
-(int)run;
@end

