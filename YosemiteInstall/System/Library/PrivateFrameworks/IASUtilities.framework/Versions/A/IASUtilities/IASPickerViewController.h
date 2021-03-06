/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IASUtilities.framework/Versions/A/IASUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@class NSLayoutConstraint, NSCollectionView, NSArrayController, IASMagicPocketScrollView, NSButton, NSArray;

@interface IASPickerViewController : NSViewController {

	NSLayoutConstraint* _scrollerButtonWidthConstraint;
	NSLayoutConstraint* _collectionViewWidthConstraint;
	NSCollectionView* _collectionView;
	NSArrayController* _itemArrayController;
	IASMagicPocketScrollView* _scroller;
	NSButton* _scrollLeftButton;
	NSButton* _scrollRightButton;
	NSArray* _content;

}

@property (__weak) NSLayoutConstraint * scrollerButtonWidthConstraint;              //@synthesize scrollerButtonWidthConstraint=_scrollerButtonWidthConstraint - In the implementation block
@property (__weak) NSLayoutConstraint * collectionViewWidthConstraint;              //@synthesize collectionViewWidthConstraint=_collectionViewWidthConstraint - In the implementation block
@property (__weak) NSCollectionView * collectionView;                               //@synthesize collectionView=_collectionView - In the implementation block
@property (__weak) NSArrayController * itemArrayController;                         //@synthesize itemArrayController=_itemArrayController - In the implementation block
@property (__weak) IASMagicPocketScrollView * scroller;                             //@synthesize scroller=_scroller - In the implementation block
@property (__weak) NSButton * scrollLeftButton;                                     //@synthesize scrollLeftButton=_scrollLeftButton - In the implementation block
@property (__weak) NSButton * scrollRightButton;                                    //@synthesize scrollRightButton=_scrollRightButton - In the implementation block
@property (retain) NSArray * content;                                               //@synthesize content=_content - In the implementation block
+(void)initialize;
-(NSArrayController *)itemArrayController;
-(NSLayoutConstraint *)collectionViewWidthConstraint;
-(void)recalculateCollectionWidthConstraint;
-(void)pressedScrollLeftButton:(id)arg1 ;
-(void)pressedScrollRightButton:(id)arg1 ;
-(NSLayoutConstraint *)scrollerButtonWidthConstraint;
-(void)setScrollerButtonWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setCollectionViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setItemArrayController:(NSArrayController *)arg1 ;
-(NSButton *)scrollLeftButton;
-(void)setScrollLeftButton:(NSButton *)arg1 ;
-(NSButton *)scrollRightButton;
-(void)setScrollRightButton:(NSButton *)arg1 ;
-(void)setCollectionView:(NSCollectionView *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setContent:(NSArray *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSArray *)content;
-(void)awakeFromNib;
-(void)setScroller:(IASMagicPocketScrollView *)arg1 ;
-(NSCollectionView *)collectionView;
-(IASMagicPocketScrollView *)scroller;
@end

