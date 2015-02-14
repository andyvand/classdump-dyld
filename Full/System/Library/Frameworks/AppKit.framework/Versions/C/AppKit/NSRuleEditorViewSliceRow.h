/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSRuleEditorViewSlice.h>

@class NSMutableArray, NSButton;

@interface NSRuleEditorViewSliceRow : NSRuleEditorViewSlice {

	NSMutableArray* _ruleOptionViews;
	NSMutableArray* _ruleOptionFrames;
	NSMutableArray* _correspondingRuleItems;
	NSMutableArray* _ruleOptionInitialViewFrames;
	NSButton* _addButton;
	NSButton* _subtractButton;
	long long _rowType;
	long long _plusButtonRowType;
	SCD_Struct_NS19 _sliceRowFlags;
	id _sliceRowReserved;

}
+(void)initialize;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)validateMenuItem:(id)arg1 ;
-(char)isEditable;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)setEditable:(char)arg1 ;
-(void)viewDidMoveToWindow;
-(id)initWithFrame:(CGRect)arg1 ruleEditorView:(id)arg2 ;
-(void)_setRowTypeToAddFromPlusButton:(long long)arg1 ;
-(void)_reconfigureSubviews;
-(void)_updateButtonVisibilities;
-(unsigned long long)_rowType;
-(char)containsDisplayValue:(id)arg1 ;
-(void)_setHideNonPartDrawing:(char)arg1 ;
-(char)_dropsIndentWhenImmediatelyBelow;
-(double)_alignmentGridWidth;
-(char)_plusMinusButtonsAcceptFirstMouse;
-(void)_relayoutSubviewsWidthChanged:(char)arg1 ;
-(void)_ruleOptionPopupChangedAction:(id)arg1 ;
-(double)_minimumVerticalPopupPadding;
-(id)_createAddRowButton;
-(void)_addOption:(id)arg1 ;
-(double)_rowButtonsRightHorizontalPadding;
-(id)_createDeleteRowButton;
-(void)_deleteOption:(id)arg1 ;
-(double)_rowButtonsInterviewHorizontalPadding;
-(void)_initShared;
-(double)_leftmostViewFixedHorizontalPadding;
-(double)_indentationHorizontalPadding;
-(char)_isRuleStaticTextField:(id)arg1 ;
-(double)_interviewHorizontalPadding;
-(double)_minWidthForPass:(long long)arg1 forView:(id)arg2 withProposedMinWidth:(double)arg3 ;
-(void)_tightenResizables:(id)arg1 intoGivenWidth:(double)arg2 ;
-(char)_isRulePopup:(id)arg1 ;
-(void)_emptyRulePartSubviews;
-(id)_sortOptionDictionariesByLayoutOrder:(id)arg1 ;
-(id)_createStaticTextFieldWithStringValue:(id)arg1 ;
-(id)_createMenuSeparatorItem;
-(id)_createMenuItemWithTitle:(id)arg1 ;
-(id)_createPopUpButtonWithItems:(id)arg1 selectedItemIndex:(long long)arg2 ;
-(void)_updateEnabledStateForSubviews;
-(char)_nestingModeShouldHideAddButton;
-(char)_nestingModeShouldHideSubtractButton;
-(void)_configurePlusButtonByRowType:(long long)arg1 ;
-(double)_rowButtonsLeftHorizontalPadding;
-(void)_setRowType:(unsigned long long)arg1 ;
-(id)_addButton;
-(id)_subtractButton;
@end

