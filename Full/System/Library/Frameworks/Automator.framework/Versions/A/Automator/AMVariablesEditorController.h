/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:27 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>

@class AMVariablesEditorView, AMVariablesEditorPanel, AMVariable, AMWorkflowView;

@interface AMVariablesEditorController : NSWindowController {

	AMVariablesEditorView* _variableEditorView;
	AMVariablesEditorPanel* _editorPanel;
	AMVariable* _variable;
	AMVariable* _tempVariable;
	AMWorkflowView* _workflowView;
	char _variableHasUnsavedChanges;

}
-(id)workflowView;
-(void)setVariable:(id)arg1 ;
-(void)setWorkflowView:(id)arg1 ;
-(id)tempVariable;
-(void)setVariableHasUnsavedChanges:(char)arg1 ;
-(char)variableHasUnsavedChanges;
-(void)setTempVariable:(id)arg1 ;
-(void)willClose;
-(id)variablesEditorView;
-(char)needsUserAttention;
-(void)setVariablesEditorView:(id)arg1 ;
-(id)workflowVariableNames;
-(id)variable;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)cancel:(id)arg1 ;
-(void)ok:(id)arg1 ;
-(void)awakeFromNib;
-(id)windowNibName;
@end
