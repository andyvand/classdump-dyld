/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/Versions/A/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NotificationCenter/NotificationCenter-Structs.h>
#import <AppKit/NSViewController.h>
#import <NotificationCenter/NCWidgetListItemDelegate.h>

@protocol NCWidgetListViewDelegate;
@class NSMutableDictionary, NCListItemViewController, NSView, NSLayoutConstraint, NSMutableIndexSet, NSMutableArray, NSViewController, NCVerticalListController, NSButton, NSArray, NSString;

@interface NCWidgetListViewController : NSViewController <NCWidgetListItemDelegate> {

	char _initialized;
	char _editing;
	char _disableShieldInEditMode;
	char _hideDeleteArea;
	char _confirmDeletes;
	char _haveReorderableItems;
	NSEdgeInsets _innerInsets;
	NSMutableDictionary* _listItemViewControllers;
	NCListItemViewController* _deletingListItemViewController;
	NCListItemViewController* _dragListItemViewController;
	double _dragMouseDownY;
	double _dragContainerViewHeight;
	NSView* _dragPlaceholderView;
	NSView* _dragContainerView;
	NSLayoutConstraint* _dragContainerOffset;
	unsigned long long _dragOriginalIndex;
	unsigned long long _dragCurrentIndex;
	NSMutableIndexSet* _draggableItems;
	NSMutableArray* _contents;
	char _hasDividerLines;
	char _showsAddButtonWhenEditing;
	char _showAll;
	char _showMoreHidden;
	id<NCWidgetListViewDelegate> _delegate;
	unsigned long long _minimumVisibleRowCount;
	NSViewController* _editingAccessoryViewController;
	NSView* _stackContainerView;
	NSView* _otherContainerView;
	NCVerticalListController* _verticalListView;
	NSLayoutConstraint* _stackBottomConstraint;
	NSView* _editingAccessoryView;
	NSView* _footerView;
	NSView* _editingAccessoryContainerView;
	NSButton* _addButton;
	NSButton* _addTextButton;
	NSButton* _showMoreButton;

}

@property (__weak) id<NCWidgetListViewDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (copy) NSArray * contents; 
@property (assign) unsigned long long minimumVisibleRowCount;                          //@synthesize minimumVisibleRowCount=_minimumVisibleRowCount - In the implementation block
@property (assign) char hasDividerLines;                                               //@synthesize hasDividerLines=_hasDividerLines - In the implementation block
@property (assign) char editing; 
@property (assign) char showsAddButtonWhenEditing;                                     //@synthesize showsAddButtonWhenEditing=_showsAddButtonWhenEditing - In the implementation block
@property (retain) NSViewController * editingAccessoryViewController;                  //@synthesize editingAccessoryViewController=_editingAccessoryViewController - In the implementation block
@property (assign,nonatomic) char showAll;                                             //@synthesize showAll=_showAll - In the implementation block
@property (assign,nonatomic) char showMoreHidden;                                      //@synthesize showMoreHidden=_showMoreHidden - In the implementation block
@property (nonatomic,retain) NSView * stackContainerView;                              //@synthesize stackContainerView=_stackContainerView - In the implementation block
@property (nonatomic,retain) NSView * otherContainerView;                              //@synthesize otherContainerView=_otherContainerView - In the implementation block
@property (nonatomic,retain) NCVerticalListController * verticalListView;              //@synthesize verticalListView=_verticalListView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * stackBottomConstraint;               //@synthesize stackBottomConstraint=_stackBottomConstraint - In the implementation block
@property (nonatomic,retain) NSView * editingAccessoryView;                            //@synthesize editingAccessoryView=_editingAccessoryView - In the implementation block
@property (nonatomic,retain) NSView * footerView;                                      //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,retain) NSView * editingAccessoryContainerView;                   //@synthesize editingAccessoryContainerView=_editingAccessoryContainerView - In the implementation block
@property (nonatomic,retain) NSButton * addButton;                                     //@synthesize addButton=_addButton - In the implementation block
@property (nonatomic,retain) NSButton * addTextButton;                                 //@synthesize addTextButton=_addTextButton - In the implementation block
@property (nonatomic,retain) NSButton * showMoreButton;                                //@synthesize showMoreButton=_showMoreButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSButton *)addButton;
-(void)setAddButton:(NSButton *)arg1 ;
-(NSEdgeInsets)innerInsetsForWidgetListItem:(id)arg1 ;
-(void)widgetListItem:(id)arg1 mouseDown:(id)arg2 ;
-(void)widgetListItem:(id)arg1 mouseDragged:(id)arg2 ;
-(void)widgetListItem:(id)arg1 mouseUp:(id)arg2 ;
-(void)willDeleteWidgetListItem:(id)arg1 ;
-(void)didDeleteWidgetListItem:(id)arg1 ;
-(id)_showAllPrefsKey;
-(void)_displayItems;
-(void)_updateItemViewControllers;
-(void)cancelDeleteAction;
-(void)_updateFooter;
-(id)_nibBundle;
-(char)showMoreHidden;
-(char)showsAddButtonWhenEditing;
-(NSViewController *)editingAccessoryViewController;
-(void)_loadFooterView;
-(void)_updateLineVisibility;
-(id)_listItemViewControllerForRow:(unsigned long long)arg1 ;
-(id)_makeListItemForRow:(long long)arg1 ;
-(unsigned long long)rowForViewController:(id)arg1 ;
-(void)_setupDrag;
-(void)_trackDrag;
-(unsigned long long)minimumVisibleRowCount;
-(void)_updateStackView;
-(void)_updateShowMoreButton;
-(char)hasDividerLines;
-(void)setShowMoreHidden:(char)arg1 ;
-(char)showAll;
-(void)_completeDrag:(BOOL)arg1 ;
-(void)_trackDragEvent:(id)arg1 ;
-(double)_currentDragMouseYForView:(id)arg1 ;
-(void)setShowAll:(char)arg1 ;
-(char)_disableShieldInEditMode;
-(void)set_disableShieldInEditMode:(char)arg1 ;
-(char)_hideDeleteArea;
-(void)set_hideDeleteArea:(char)arg1 ;
-(char)_confirmDeletes;
-(void)set_confirmDeletes:(char)arg1 ;
-(NSEdgeInsets)innerInsets;
-(void)setInnerInsets:(NSEdgeInsets)arg1 ;
-(id)viewControllerAtRow:(unsigned long long)arg1 makeIfNecessary:(char)arg2 ;
-(void)addButtonAction:(id)arg1 ;
-(void)showMoreButtonAction:(id)arg1 ;
-(void)setMinimumVisibleRowCount:(unsigned long long)arg1 ;
-(void)setHasDividerLines:(char)arg1 ;
-(void)setShowsAddButtonWhenEditing:(char)arg1 ;
-(void)setEditingAccessoryViewController:(NSViewController *)arg1 ;
-(NSView *)stackContainerView;
-(void)setStackContainerView:(NSView *)arg1 ;
-(NSView *)otherContainerView;
-(void)setOtherContainerView:(NSView *)arg1 ;
-(NCVerticalListController *)verticalListView;
-(void)setVerticalListView:(NCVerticalListController *)arg1 ;
-(NSLayoutConstraint *)stackBottomConstraint;
-(void)setStackBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSView *)editingAccessoryView;
-(void)setEditingAccessoryView:(NSView *)arg1 ;
-(NSView *)footerView;
-(void)setFooterView:(NSView *)arg1 ;
-(NSView *)editingAccessoryContainerView;
-(void)setEditingAccessoryContainerView:(NSView *)arg1 ;
-(NSButton *)addTextButton;
-(void)setAddTextButton:(NSButton *)arg1 ;
-(NSButton *)showMoreButton;
-(void)setShowMoreButton:(NSButton *)arg1 ;
-(char)editing;
-(void)setDelegate:(id<NCWidgetListViewDelegate>)arg1 ;
-(void)setContents:(NSArray *)arg1 ;
-(NSArray *)contents;
-(id)initWithCoder:(id)arg1 ;
-(id<NCWidgetListViewDelegate>)delegate;
-(void)mouseDown:(id)arg1 ;
-(void)awakeFromNib;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setEditing:(char)arg1 ;
@end
