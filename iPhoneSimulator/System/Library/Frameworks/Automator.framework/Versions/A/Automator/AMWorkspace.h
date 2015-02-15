/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSError;

@interface AMWorkspace : NSObject {

	id _reserved;
	id _reserved2;
	id _reserved3;
	NSError* _error;
	char _didStart;
	char _finishedRunning;

}
+(id)sharedWorkspace;
-(void)setOutput:(id)arg1 ;
-(id)output;
-(id)runWorkflowAtPath:(id)arg1 withInput:(id)arg2 error:(id*)arg3 ;
-(id)runnerInterface;
-(void)workflowRunnerWillRun:(id)arg1 ;
-(void)workflowRunnerDidRun:(id)arg1 ;
-(void)workflowRunnerDidStop:(id)arg1 ;
-(void)workflowRunner:(id)arg1 didError:(id)arg2 ;
-(void)automatorRunnerDied;
-(void)workflowDidError:(id)arg1 ;
-(id)UUID;
-(id)init;
-(void)dealloc;
-(id)error;
-(void)setError:(id)arg1 ;
@end
