/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/Automator-Structs.h>
#import <AppKit/NSViewController.h>
#import <Automator/NSSplitViewDelegate.h>

@class AMGradientBackgroundView, NSSearchField, NSButton, NSTabView, AMSplitView, AMLibraryOutlineView, NSTreeController, AMLibraryTableView, NSArrayController, NSView, AMGlossyStatusView, NSPopUpButton, NSMenu, NSArray, AMSmartGroupsController, AMDescriptionViewController, NSString;

@interface AMLibraryViewController : NSViewController <NSSplitViewDelegate> {

	AMGradientBackgroundView* _headerBackgroundView;
	NSSearchField* _searchField;
	NSButton* _actionsButton;
	NSButton* _variablesButton;
	NSTabView* _tabView;
	AMSplitView* _actionsMajorSplitView;
	AMSplitView* _actionsMinorSplitView;
	AMSplitView* _variablesMajorSplitView;
	AMSplitView* _variablesMinorSplitView;
	AMLibraryOutlineView* _actionsOutlineView;
	NSTreeController* _actionsTreeController;
	AMLibraryTableView* _actionsTableView;
	NSArrayController* _actionsArrayController;
	AMLibraryOutlineView* _variablesOutlineView;
	NSTreeController* _variablesTreeController;
	AMLibraryTableView* _variablesTableView;
	NSArrayController* _variablesArrayController;
	NSView* _actionDescriptionViewContainer;
	NSView* _variableDescriptionViewContainer;
	AMGlossyStatusView* _statusView;
	NSPopUpButton* _libraryMenuButton;
	NSMenu* _libraryMenu;
	NSButton* _toggleDescriptionButton;
	NSArray* _draggedGroups;
	NSArray* _draggedAssets;
	AMSmartGroupsController* _smartGroupsController;
	AMDescriptionViewController* _actionDescriptionViewController;
	AMDescriptionViewController* _variableDescriptionViewController;
	struct {
		unsigned long long viewMode;
		unsigned long long dragginOutsideLibrary;
		unsigned long long acceptedDraggedAssets;
		unsigned long long isEditingNewSmartGroup;
		unsigned long long hasShownVariables;
		unsigned reserved : 27;
	}  _libraryViewFlags;

}

@property (copy) NSArray * draggedAssets;                           //@synthesize draggedAssets=_draggedAssets - In the implementation block
@property (copy) NSArray * draggedGroups;                           //@synthesize draggedGroups=_draggedGroups - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)workflowViewSelectionDidChange:(id)arg1 ;
-(id)selectedActions;
-(id)selectedVariables;
-(void)displayActionsByApplication:(id)arg1 ;
-(void)displayActionsByCategory:(id)arg1 ;
-(void)displayActions:(id)arg1 ;
-(void)displayVariables:(id)arg1 ;
-(void)registryDidAddAction:(id)arg1 ;
-(void)doDoubleClickInTableView:(id)arg1 ;
-(void)expandCurrentLibraryNode;
-(char)isShowingActions;
-(id)currentTreeController;
-(id)currentOutlineView;
-(id)indexPathForGroup:(id)arg1 ;
-(id)currentArrayController;
-(void)updateDescriptionButton;
-(id)predicateForSearchString:(id)arg1 ;
-(id)currentTableView;
-(id)currentMajorSplitView;
-(id)currentRootNodes;
-(void)selectAction:(id)arg1 ;
-(void)updateTableViewForOutlineViewSelectionChange;
-(id)_addGroup;
-(void)editGroupName:(id)arg1 ;
-(id)clickedNodes;
-(void)beginEditingSmartGroup:(id)arg1 ;
-(void)removeGroupAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)_reallyRemoveAssetsFromGroup:(id)arg1 ;
-(void)removeAssetsAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(id)nodeForGroup:(id)arg1 ;
-(id)smartGroupsController;
-(void)smartGroupsControllerSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(NSArray *)draggedAssets;
-(NSArray *)draggedGroups;
-(char)acceptDropForActionsFrom:(id)arg1 inGroup:(id)arg2 ;
-(char)acceptDropForVariablesFrom:(id)arg1 inGroup:(id)arg2 on:(id)arg3 row:(long long)arg4 ;
-(id)insertAssetsFromDraggingInfo:(id)arg1 intoGroup:(id)arg2 atIndex:(long long)arg3 copy:(char)arg4 ;
-(void)displayDescriptionOfSelectedAction;
-(void)displayDescriptionOfSelectedVariable;
-(id)groupsForOutlineItems:(id)arg1 ;
-(id)representativesForDraggedGroups:(id)arg1 ;
-(char)groupPositionsAreEditable:(id)arg1 ;
-(void)setDraggedGroups:(NSArray *)arg1 ;
-(id)addAssetsFromDraggingInfo:(id)arg1 toGroup:(id)arg2 copy:(char)arg3 ;
-(void)setDraggedAssets:(NSArray *)arg1 ;
-(char)isShowingVariables;
-(void)editGroup:(id)arg1 ;
-(void)addSmartGroup:(id)arg1 ;
-(void)removeGroups:(id)arg1 ;
-(void)find:(id)arg1 ;
-(void)toggleDescriptionView:(id)arg1 ;
-(void)displayDefaultActionDescription;
-(void)displayDefaultVariableDescription;
-(void)removeSelectedAssets;
-(void)search:(id)arg1 ;
-(id)selectGroup:(id)arg1 byExtendingSelection:(char)arg2 ;
-(void)addGroup:(id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)restoreStateWithCoder:(id)arg1 ;
-(char)validateMenuItem:(id)arg1 ;
-(void)loadView;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(char)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3 ;
-(unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4 ;
-(char)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4 ;
-(char)splitView:(id)arg1 canCollapseSubview:(id)arg2 ;
-(char)splitView:(id)arg1 shouldCollapseSubview:(id)arg2 forDoubleClickOnDividerAtIndex:(long long)arg3 ;
-(double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3 ;
-(void)splitViewDidResizeSubviews:(id)arg1 ;
-(void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4 ;
-(char)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3 ;
-(void)outlineViewSelectionDidChange:(id)arg1 ;
-(char)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3 ;
-(unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4 ;
-(char)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4 ;
-(id)library;
@end

