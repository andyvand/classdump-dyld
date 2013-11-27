/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:27:33 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIScrollView.h>
#import <AddressBookUI/ABPersonTabsScrollView.h>

@protocol ABPersonTabsLayoutManager;
@class UIView, ;

@interface ABPersonOverlayingContainerView : UIScrollView <ABPersonTabsScrollView> {

	float _minimumBottomInset;
	UIEdgeInsets _savedContentInset;
	UIView* _backgroundView;
	UIView* _abContentView;
	<ABPersonTabsLayoutManager>* _tabsLayoutManager;

}

@property (nonatomic,retain) UIView * contentView;                                         //@synthesize abContentView=_abContentView - In the implementation block
@property (assign,nonatomic) float minimumBottomInset; 
@property (nonatomic,retain) UIView * backgroundView;                                      //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) <ABPersonTabsLayoutManager> * tabsLayoutManager;              //@synthesize tabsLayoutManager=_tabsLayoutManager - In the implementation block
-(float)minimumBottomInset;
-(void)setMinimumBottomInset:(float)arg1 ;
-(id)tabsLayoutManager;
-(void)setTabsLayoutManager:(id)arg1 ;
-(void)_updateContentFrameAndSize;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)contentView;
-(void)setContentView:(id)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setBackgroundView:(id)arg1 ;
-(id)backgroundView;
@end
