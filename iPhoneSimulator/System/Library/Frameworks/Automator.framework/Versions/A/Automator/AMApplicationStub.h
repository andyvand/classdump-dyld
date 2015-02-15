/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AMApplicationStubPrivateData;

@interface AMApplicationStub : NSObject {

	AMApplicationStubPrivateData* runner;

}
-(id)runner;
-(id)workflow;
-(void)setRunner:(id)arg1 ;
-(void)setWorkflow:(id)arg1 ;
-(char)runWorkflowAtPath:(id)arg1 withInput:(id)arg2 error:(id*)arg3 ;
-(void)setDisplayInMenuBar:(char)arg1 ;
-(void)connectToLauncher;
-(char)runWorkflowWithPropertyList:(id)arg1 fromPath:(id)arg2 withInput:(id)arg3 error:(id*)arg4 ;
-(void)workflowRunnerWillRun:(id)arg1 ;
-(void)workflowRunnerDidRun:(id)arg1 ;
-(void)workflowRunnerDidStop:(id)arg1 ;
-(void)workflowRunner:(id)arg1 willRunAction:(id)arg2 ;
-(void)workflowRunner:(id)arg1 progressDidChange:(id)arg2 forAction:(id)arg3 ;
-(void)workflowRunner:(id)arg1 didError:(id)arg2 ;
-(void)workflowRunnerDidFinish:(id)arg1 ;
-(void)workflowRunner:(id)arg1 didRunAction:(id)arg2 ;
-(void)ownerIsAnApplicationStubDelegateAndWorkflowRunnerDidFinish:(id)arg1 ;
-(char)displayInMenuBar;
-(id)launcher;
-(void)setLauncher:(id)arg1 ;
-(id)launcherConnection;
-(void)setLauncherConnection:(id)arg1 ;
-(void)connectionDidDie:(id)arg1 ;
-(char)loadWorkflowAtPath:(id)arg1 error:(id*)arg2 ;
-(char)runWorkflowWithInput:(id)arg1 error:(id*)arg2 ;
-(void)_forceMeToQuit;
-(void)runDelayedInputForRunner:(id)arg1 ;
-(char)isApplet;
-(char)stayOpen;
-(char)loadWorkflowWithPropertyList:(id)arg1 error:(id*)arg2 ;
-(id)loadBundlesAtPath:(id)arg1 ;
-(void)launchWithDictionary:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

