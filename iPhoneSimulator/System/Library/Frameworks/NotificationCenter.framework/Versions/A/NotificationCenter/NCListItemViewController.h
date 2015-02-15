/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:01 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/Versions/A/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@protocol NCWidgetListItemDelegate;
@class NSViewController, NSView, NSLayoutConstraint, NCListViewDeleteButton, NSButton, _NCShieldView, NCLineView;

@interface NCListItemViewController : NSViewController {

	NSViewController* _contentViewController;
	double _originaldeleteButtonWidth;
	BOOL _deleting;
	BOOL _expandedShield;
	BOOL _shieldExpandedInEditMode;
	BOOL _deleteAreaHidden;
	BOOL _delegateCalled;
	BOOL _canBeReordered;
	char _canBeRemoved;
	char _dividerLineHidden;
	char _editing;
	char _shieldEnabled;
	BOOL _deleteButtonHidden;
	id<NCWidgetListItemDelegate> _delegate;
	NSView* _containerView;
	NSLayoutConstraint* _rightMarginConstraint;
	NSView* _itemView;
	NSView* _removeContainer;
	NSLayoutConstraint* _itemTrailingConstraint;
	NSLayoutConstraint* _itemLeadingConstraint;
	NSLayoutConstraint* _deleteButtonSpacingConstraint;
	NCListViewDeleteButton* _deleteButton;
	NSButton* _removeButton;
	NSView* _grabberContainer;
	NSButton* _grabberButton;
	_NCShieldView* _shieldView;
	NSLayoutConstraint* _leftMarginConstraint;
	NSLayoutConstraint* _deleteButtonWidthConstraint;
	NCLineView* _dividerLine;

}

@property (nonatomic,retain) NSViewController * contentViewController;                               //@synthesize contentViewController=_contentViewController - In the implementation block
@property (assign,nonatomic,__weak) id<NCWidgetListItemDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL deleting;                                                          //@synthesize deleting=_deleting - In the implementation block
@property (assign,nonatomic) BOOL expandedShield;                                                    //@synthesize expandedShield=_expandedShield - In the implementation block
@property (assign,nonatomic) BOOL shieldExpandedInEditMode;                                          //@synthesize shieldExpandedInEditMode=_shieldExpandedInEditMode - In the implementation block
@property (assign,nonatomic) BOOL deleteAreaHidden;                                                  //@synthesize deleteAreaHidden=_deleteAreaHidden - In the implementation block
@property (assign,nonatomic) BOOL delegateCalled;                                                    //@synthesize delegateCalled=_delegateCalled - In the implementation block
@property (assign,nonatomic) BOOL canBeReordered;                                                    //@synthesize canBeReordered=_canBeReordered - In the implementation block
@property (assign,nonatomic) char canBeRemoved;                                                      //@synthesize canBeRemoved=_canBeRemoved - In the implementation block
@property (assign,nonatomic) char dividerLineHidden;                                                 //@synthesize dividerLineHidden=_dividerLineHidden - In the implementation block
@property (assign,nonatomic) char editing;                                                           //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic) char shieldEnabled;                                                     //@synthesize shieldEnabled=_shieldEnabled - In the implementation block
@property (assign,nonatomic,__weak) NSView * containerView;                                          //@synthesize containerView=_containerView - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * rightMarginConstraint;                      //@synthesize rightMarginConstraint=_rightMarginConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSView * itemView;                                               //@synthesize itemView=_itemView - In the implementation block
@property (nonatomic,retain) NSView * removeContainer;                                               //@synthesize removeContainer=_removeContainer - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * itemTrailingConstraint;                     //@synthesize itemTrailingConstraint=_itemTrailingConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * itemLeadingConstraint;                      //@synthesize itemLeadingConstraint=_itemLeadingConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * deleteButtonSpacingConstraint;              //@synthesize deleteButtonSpacingConstraint=_deleteButtonSpacingConstraint - In the implementation block
@property (assign,nonatomic) BOOL deleteButtonHidden;                                                //@synthesize deleteButtonHidden=_deleteButtonHidden - In the implementation block
@property (assign,nonatomic,__weak) NCListViewDeleteButton * deleteButton;                           //@synthesize deleteButton=_deleteButton - In the implementation block
@property (assign,nonatomic,__weak) NSButton * removeButton;                                         //@synthesize removeButton=_removeButton - In the implementation block
@property (assign,nonatomic,__weak) NSView * grabberContainer;                                       //@synthesize grabberContainer=_grabberContainer - In the implementation block
@property (assign,nonatomic,__weak) NSButton * grabberButton;                                        //@synthesize grabberButton=_grabberButton - In the implementation block
@property (assign,nonatomic,__weak) _NCShieldView * shieldView;                                      //@synthesize shieldView=_shieldView - In the implementation block
@property (__weak) NSLayoutConstraint * leftMarginConstraint;                                        //@synthesize leftMarginConstraint=_leftMarginConstraint - In the implementation block
@property (__weak) NSLayoutConstraint * deleteButtonWidthConstraint;                                 //@synthesize deleteButtonWidthConstraint=_deleteButtonWidthConstraint - In the implementation block
@property (__weak) NCLineView * dividerLine;                                                         //@synthesize dividerLine=_dividerLine - In the implementation block
-(void)removeAction:(id)arg1 ;
-(NSButton *)removeButton;
-(void)setRemoveButton:(NSButton *)arg1 ;
-(void)setShieldEnabled:(char)arg1 ;
-(char)canBeRemoved;
-(void)setDeleting:(BOOL)arg1 ;
-(void)setExpandedShield:(BOOL)arg1 ;
-(void)setDeleteAreaHidden:(BOOL)arg1 ;
-(void)setDividerLineHidden:(char)arg1 ;
-(void)deleteAction:(id)arg1 ;
-(BOOL)deleting;
-(BOOL)expandedShield;
-(BOOL)shieldExpandedInEditMode;
-(void)setShieldExpandedInEditMode:(BOOL)arg1 ;
-(BOOL)deleteAreaHidden;
-(BOOL)delegateCalled;
-(void)setDelegateCalled:(BOOL)arg1 ;
-(BOOL)canBeReordered;
-(void)setCanBeReordered:(BOOL)arg1 ;
-(void)setCanBeRemoved:(char)arg1 ;
-(char)dividerLineHidden;
-(char)shieldEnabled;
-(NSLayoutConstraint *)rightMarginConstraint;
-(void)setRightMarginConstraint:(NSLayoutConstraint *)arg1 ;
-(NSView *)itemView;
-(void)setItemView:(NSView *)arg1 ;
-(NSView *)removeContainer;
-(void)setRemoveContainer:(NSView *)arg1 ;
-(NSLayoutConstraint *)itemTrailingConstraint;
-(void)setItemTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)itemLeadingConstraint;
-(void)setItemLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)deleteButtonSpacingConstraint;
-(void)setDeleteButtonSpacingConstraint:(NSLayoutConstraint *)arg1 ;
-(BOOL)deleteButtonHidden;
-(void)setDeleteButtonHidden:(BOOL)arg1 ;
-(NSView *)grabberContainer;
-(void)setGrabberContainer:(NSView *)arg1 ;
-(NSButton *)grabberButton;
-(void)setGrabberButton:(NSButton *)arg1 ;
-(_NCShieldView *)shieldView;
-(void)setShieldView:(_NCShieldView *)arg1 ;
-(NSLayoutConstraint *)leftMarginConstraint;
-(void)setLeftMarginConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)deleteButtonWidthConstraint;
-(void)setDeleteButtonWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NCLineView *)dividerLine;
-(void)setDividerLine:(NCLineView *)arg1 ;
-(char)editing;
-(void)setDeleteButton:(NCListViewDeleteButton *)arg1 ;
-(NCListViewDeleteButton *)deleteButton;
-(void)setDelegate:(id<NCWidgetListItemDelegate>)arg1 ;
-(void)dealloc;
-(id<NCWidgetListItemDelegate>)delegate;
-(void)mouseDown:(id)arg1 ;
-(void)loadView;
-(NSView *)containerView;
-(void)setContainerView:(NSView *)arg1 ;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(id)nibBundle;
-(void)viewWillLayout;
-(NSViewController *)contentViewController;
-(void)setEditing:(char)arg1 ;
-(void)setContentViewController:(NSViewController *)arg1 ;
@end

