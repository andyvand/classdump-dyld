/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@class AMPluginHeaderViewController, AMWorkflow, AMWorkflowHeaderView;

@interface AMHeaderViewController : NSViewController {

	AMPluginHeaderViewController* _pluginHeaderViewController;
	AMWorkflow* _workflow;
	AMWorkflowHeaderView* _workflowHeaderView;

}

@property (retain) AMWorkflow * workflow; 
@property (retain) AMPluginHeaderViewController * pluginHeaderViewController;              //@synthesize pluginHeaderViewController=_pluginHeaderViewController - In the implementation block
@property (retain) AMWorkflowHeaderView * workflowHeaderView;                              //@synthesize workflowHeaderView=_workflowHeaderView - In the implementation block
+(char)hasHeaderViewForPersonality:(id)arg1 ;
-(AMWorkflow *)workflow;
-(void)setWorkflow:(AMWorkflow *)arg1 ;
-(AMPluginHeaderViewController *)pluginHeaderViewController;
-(void)setWorkflowHeaderView:(AMWorkflowHeaderView *)arg1 ;
-(void)setPluginHeaderViewController:(AMPluginHeaderViewController *)arg1 ;
-(void)updateHeaderConnectionDrawing;
-(AMWorkflowHeaderView *)workflowHeaderView;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)update;
-(void)loadView;
@end

