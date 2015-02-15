/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/Automator-Structs.h>
#import <AppKit/NSController.h>

@class AMWorkflowView, AMWorkflow;

@interface AMWorkflowController : NSController {

	AMWorkflowView* workflowView;
	AMWorkflow* _workflow;
	id _runner;
	id _runnerInterface;
	id _eventMonitor;
	id _delegate;
	struct {
		unsigned shouldRunLocally : 1;
		unsigned isRunningLocally : 1;
		unsigned shouldDisplayProgressInMenuBar : 1;
		unsigned reserved : 29;
	}  _flags;
	AMWorkflowControllerDelegateRespondTo _delegateRespondTo;
	id _future;
	id _future2;
	id _future3;
	id _future4;

}

@property (retain) AMWorkflow * workflow; 
@property (retain) AMWorkflowView * workflowView; 
@property (assign) id delegate; 
@property (readonly) char canRun; 
@property (getter=isRunning,readonly) char running; 
@property (getter=isPaused,readonly) char paused; 
+(id)pasteboardTypes;
-(id)runner;
-(void)stopWithError:(id)arg1 ;
-(AMWorkflow *)workflow;
-(void)actionWasModified:(id)arg1 ;
-(void)actionWasRenamed:(id)arg1 ;
-(void)actionDidChangeInputType:(id)arg1 ;
-(void)actionDidChangeOutputType:(id)arg1 ;
-(AMWorkflowView *)workflowView;
-(id)addVariable:(id)arg1 ;
-(void)setRunner:(id)arg1 ;
-(void)setWorkflow:(AMWorkflow *)arg1 ;
-(void)workflowWasModified;
-(void)workflowWillAddAction:(id)arg1 ;
-(void)workflowDidAddAction:(id)arg1 ;
-(void)workflowDidRemoveAction:(id)arg1 ;
-(void)workflowDidMoveAction:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
-(void)workflowDidAddVariable:(id)arg1 ;
-(void)actionDidChangeConnections:(id)arg1 ;
-(char)canRun;
-(id)_addActionWithBundleIdentifier:(id)arg1 ;
-(char)shouldDisplayProgressInMenuBar;
-(void)setShouldDisplayProgressInMenuBar:(char)arg1 ;
-(id)runnerInterface;
-(char)shouldRunLocally;
-(void)_createLocalAMApplicationStub;
-(void)_runWarningAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(char)_shouldRunAfterShowingWarning;
-(void)_run:(id)arg1 ;
-(void)_reallyRemoveVariable:(id)arg1 ;
-(void)reallyDeleteAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(id)workflowShouldAddVariablesWithPropertyLists:(id)arg1 ;
-(void)_insertActions:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)workflowViewSelectionDidChange:(id)arg1 ;
-(id)_localAMApplicationStub;
-(void)workflowRunnerWillRun:(id)arg1 ;
-(void)workflowRunnerDidRun:(id)arg1 ;
-(void)workflowRunnerDidStop:(id)arg1 ;
-(id)localActionForAction:(id)arg1 ;
-(void)workflowRunner:(id)arg1 willRunAction:(id)arg2 ;
-(void)workflowRunner:(id)arg1 progressDidChange:(id)arg2 forAction:(id)arg3 ;
-(char)isRunningLocally;
-(void)workflowRunner:(id)arg1 didError:(id)arg2 ;
-(void)workflowRunnerDidFinish:(id)arg1 ;
-(char)_shouldDisplayWarningForAction:(id)arg1 givenPreviousAction:(id)arg2 ;
-(void)_warningAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)_insertActionsWithSettingsDictionary:(id)arg1 ;
-(void)_insertActions:(id)arg1 atIndex:(unsigned long long)arg2 displayWarnings:(char)arg3 refuseDeprecatedActions:(char)arg4 ;
-(void)_showDeprecatedSheetForAction:(id)arg1 ;
-(void)_displayWarningsForActions:(id)arg1 toInsertAtIndex:(unsigned long long)arg2 ;
-(void)setWorkflowView:(AMWorkflowView *)arg1 ;
-(void)nullifyRunner;
-(char)isActionRunning:(id)arg1 ;
-(void)setRunLocally:(char)arg1 ;
-(id)runningActionForAction:(id)arg1 ;
-(void)runWithEventData:(id)arg1 ;
-(void)step:(id)arg1 ;
-(void)inspect:(id)arg1 ;
-(char)workflowWouldAddVariable:(id)arg1 ;
-(void)workflowShouldAddActionsWithDefinitions:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)workflowRunnerWillStop:(id)arg1 ;
-(void)workflowRunnerWillPause:(id)arg1 ;
-(void)workflowRunnerDidPause:(id)arg1 ;
-(void)workflowRunner:(id)arg1 didResumeWithAction:(id)arg2 ;
-(void)workflowRunner:(id)arg1 didRunAction:(id)arg2 ;
-(void)workflowRunner:(id)arg1 didLogMessage:(id)arg2 ofType:(unsigned long long)arg3 fromAction:(id)arg4 ;
-(void)workflowRunner:(id)arg1 willRunConversion:(id)arg2 ;
-(void)workflowRunner:(id)arg1 didRunConversion:(id)arg2 ;
-(void)_insertAction:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)addActionsWithDataFromPasteboard:(id)arg1 withIndex:(unsigned long long)arg2 ;
-(id)addActionWithBundleID:(id)arg1 atIndex:(unsigned long long)arg2 withParameters:(id)arg3 ;
-(id)itemsFromPasteboard:(id)arg1 withSpecifiedItemsActionWithBundleID:(id)arg2 ;
-(void)addSpecifiedItemsActionWithBundleID:(id)arg1 atIndex:(unsigned long long)arg2 withItems:(id)arg3 ;
-(void)addAddressBookItemsActionAtIndex:(unsigned long long)arg1 withItemsFromPasteboard:(id)arg2 ;
-(void)addSpecifiedItemsActionWithBundleID:(id)arg1 atIndex:(unsigned long long)arg2 withItemsFromPasteboard:(id)arg3 ;
-(void)addRunWorkflowActionAtIndex:(unsigned long long)arg1 withWorkflowPath:(id)arg2 ;
-(void)addFinderItemsActionAtIndex:(unsigned long long)arg1 withItemsFromPasteboard:(id)arg2 ;
-(void)addSpecifiedURLsActionAtIndex:(unsigned long long)arg1 withItemsFromPasteboard:(id)arg2 ;
-(id)UUID;
-(id)_undoManager;
-(void)removeVariable:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)window;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)delegate;
-(char)isRunning;
-(void)stop:(id)arg1 ;
-(char)isPaused;
-(void)reset:(id)arg1 ;
-(void)run:(id)arg1 ;
-(void)pause:(id)arg1 ;
@end

