/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:22 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_TView.h>

@protocol TSearchScopeSliceControllerDelegate;
@class FI_TTextField, FI_TScopeBarRadioGroupView, FI_TButton, FI_TPopUpButton;

@interface FI_TSearchScopeSlice : FI_TView {

	FI_TTextField* _searchTextView;
	FI_TScopeBarRadioGroupView* _axScopeRadioGroupView;
	FI_TButton* _saveButton;
	FI_TButton* _plusMinusButton;
	TNSRef<NSMutableArray *> _scopeButtons;
	FI_TPopUpButton* _scopeDropdown;
	double _scopeDropdownNaturalWidth;
	FI_TButton* _genericRadioButton;
	id<TSearchScopeSliceControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<TSearchScopeSliceControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setSaveButtonEnabled:(BOOL)arg1 ;
-(void)saveButtonPressed:(id)arg1 ;
-(void)setButtonTitles:(id)arg1 ;
-(void)setButtonToolTips:(id)arg1 ;
-(void)selectButtonAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)selectedButtonIndex;
-(id)selectedButtonTitle;
-(void)setPlusMinusButtonEnabled:(BOOL)arg1 ;
-(void)setPlusMinusButtonTitle:(BOOL)arg1 ;
-(BOOL)isLTRLayoutDirection;
-(double)searchTextXOffset:(BOOL)arg1 ;
-(double)savePlusBtnXOffset:(BOOL)arg1 ;
-(double)gapBetweenSearchAndSavePlusBtn:(BOOL)arg1 save:(BOOL)arg2 ;
-(void)chooseScopeButton:(id)arg1 ;
-(id)createRadioButtonForTitle:(id)arg1 ;
-(id)selectedButton;
-(void)scopeButtonPressed:(id)arg1 ;
-(void)scopeDropdownChanged:(id)arg1 ;
-(void)plusMinusButtonPressed:(id)arg1 ;
-(void)setButtonEnabled:(BOOL)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setDelegate:(id<TSearchScopeSliceControllerDelegate>)arg1 ;
-(void)dealloc;
-(char)accessibilityIsIgnored;
-(void)drawRect:(CGRect)arg1 ;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id<TSearchScopeSliceControllerDelegate>)delegate;
-(void)awakeFromNib;
-(void)adjustSubviews;
-(void)resizeSubviewsWithOldSize:(CGSize)arg1 ;
-(double)minWidth;
@end

