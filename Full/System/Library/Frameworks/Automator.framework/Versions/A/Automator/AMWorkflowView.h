/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/Automator-Structs.h>
#import <AppKit/NSView.h>

@class AMWorkflowController, NSMutableArray, NSArray, NSString;

@interface AMWorkflowView : NSView {

	AMWorkflowController* _workflowController;
	NSMutableArray* _actionViewControllers;
	NSArray* _draggedActionViews;
	NSString* _messageString;
	id _unused;
	id _variablesEditorController;
	id _showWhenRunController;
	struct {
		unsigned ignoreSubviewFrameChanges : 1;
		unsigned editingEnabled : 1;
		unsigned reserved : 30;
	}  _flags;
	unsigned long long _draggingIndex;
	CGRect _selectionRect;
	id _future[4];

}

@property (getter=isEditable) char editable; 
@property (retain) AMWorkflowController * workflowController; 
-(AMWorkflowController *)workflowController;
-(void)editVariable:(id)arg1 withControl:(id)arg2 ;
-(id)variablesEditorController;
-(void)editVariable:(id)arg1 ;
-(void)addAction:(id)arg1 ;
-(unsigned long long)indexOfSubview:(id)arg1 ;
-(void)_clearHeaderView;
-(void)_updateHeaderView;
-(id)connectors;
-(void)removeAction:(id)arg1 ;
-(void)moveActionAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)addActions:(id)arg1 ;
-(void)setWorkflowController:(AMWorkflowController *)arg1 ;
-(void)loadWorkflow:(id)arg1 ;
-(void)workflowControllerWillRun:(id)arg1 ;
-(void)workflowControllerWillStep:(id)arg1 ;
-(void)workflowControllerDidStop:(id)arg1 ;
-(void)workflowController:(id)arg1 willRunAction:(id)arg2 ;
-(void)workflowController:(id)arg1 didRunAction:(id)arg2 ;
-(void)workflowController:(id)arg1 didError:(id)arg2 ;
-(id)viewForAction:(id)arg1 ;
-(void)actionViewDidChangeConnections:(id)arg1 ;
-(void)actionViewDidChangeInput:(id)arg1 ;
-(void)actionViewDidChangeOutput:(id)arg1 ;
-(void)actionViewWasModified:(id)arg1 ;
-(void)actionViewWasRenamed:(id)arg1 ;
-(id)pasteboardTypes;
-(void)releaseActionView:(id)arg1 ;
-(id)actionViews;
-(void)removeActionView:(id)arg1 ;
-(id)_headerViewController;
-(void)addActionWithoutOpening:(id)arg1 ;
-(void)_setActionConstraints:(id)arg1 ;
-(id)_actionConstraints;
-(void)selectActionView:(id)arg1 byExtendingSelection:(char)arg2 ;
-(void)invalidateActionLayout;
-(void)_addAction:(id)arg1 ;
-(void)modified;
-(void)invalidateActionView:(id)arg1 ;
-(void)selectNextActionAfterIndex:(unsigned long long)arg1 ;
-(id)selectedActionViews;
-(void)scrollToAction:(id)arg1 ;
-(void)disableActionView:(id)arg1 ;
-(void)enableActionView:(id)arg1 ;
-(void)disableActionViews:(id)arg1 ;
-(void)enableActionViews:(id)arg1 ;
-(void)selectActionViews:(id)arg1 ;
-(void)deselectActionView:(id)arg1 ;
-(void)_selectActionView:(id)arg1 ;
-(id)objectsIntersectingRect:(CGRect)arg1 ;
-(void)_uniqueSelectActionView:(id)arg1 ;
-(void)dragSelectWithEvent:(id)arg1 ;
-(void)closeDetailsWindow;
-(void)deleteActionViews:(id)arg1 ;
-(void)makeActionViewFirstResponder:(id)arg1 ;
-(void)duplicateActionViews:(id)arg1 ;
-(void)deleteAll:(id)arg1 ;
-(void)toggleActionViewInputIgnored:(id)arg1 ;
-(void)renameActionView:(id)arg1 ;
-(void)showActionViewInFinder:(id)arg1 ;
-(void)showActionViewInLibrary:(id)arg1 ;
-(void)moveActionViewsUp:(id)arg1 ;
-(void)moveActionViewsDown:(id)arg1 ;
-(void)toggleActionViewsResults:(id)arg1 ;
-(void)toggleActionViewsEnabled:(id)arg1 ;
-(char)copyActions:(id)arg1 withPasteboard:(id)arg2 ;
-(void)pasteWithPasteboard:(id)arg1 ;
-(void)addActionsInPasteboard:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setDraggedActionViews:(id)arg1 ;
-(unsigned long long)dragOperationForDraggingInfo:(id)arg1 ;
-(id)subviewAtPoint:(CGPoint)arg1 ;
-(id)draggedActionViews;
-(void)addVariablesInPasteboard:(id)arg1 atIndex:(unsigned long long)arg2 draggingInfo:(id)arg3 ;
-(id)addActionWithBundleID:(id)arg1 atIndex:(unsigned long long)arg2 withParameters:(id)arg3 ;
-(void)addActionsFromDescriptions:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeHeaderView:(id)arg1 ;
-(void)_setHeaderViewController:(id)arg1 ;
-(void)addHeaderView:(id)arg1 ;
-(id)_workflowController;
-(void)_setWorkflowController:(id)arg1 ;
-(void)deleteActionView:(id)arg1 ;
-(void)moveActionViewUp:(id)arg1 ;
-(void)moveActionViewDown:(id)arg1 ;
-(void)collapseAll:(id)arg1 ;
-(void)expandAll:(id)arg1 ;
-(void)extendSelectionToActionView:(id)arg1 ;
-(void)selectAllToAction:(id)arg1 ;
-(id)_visibleActionViews;
-(void)redisplayAction:(id)arg1 ;
-(CGRect)actionViewsFrame;
-(void)duplicateActionView:(id)arg1 ;
-(void)dragViewStarted;
-(id)_undoManager;
-(id)actions;
-(char)_isEditable;
-(void)dealloc;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)accessibilityIsIgnored;
-(void)updateConstraints;
-(char)requiresConstraintBasedLayout;
-(void)drawRect:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)restoreStateWithCoder:(id)arg1 ;
-(char)validateMenuItem:(id)arg1 ;
-(char)isEditable;
-(char)isFlipped;
-(void)setEditable:(char)arg1 ;
-(char)acceptsFirstResponder;
-(void)keyDown:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(void)dragImage:(id)arg1 at:(CGPoint)arg2 offset:(CGSize)arg3 event:(id)arg4 pasteboard:(id)arg5 source:(id)arg6 slideBack:(char)arg7 ;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(unsigned long long)draggingUpdated:(id)arg1 ;
-(void)draggingExited:(id)arg1 ;
-(void)draggingEnded:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)awakeFromNib;
-(void)deselectAll:(id)arg1 ;
-(char)prepareForDragOperation:(id)arg1 ;
-(void)concludeDragOperation:(id)arg1 ;
-(void)_close;
-(void)reset:(id)arg1 ;
@end

