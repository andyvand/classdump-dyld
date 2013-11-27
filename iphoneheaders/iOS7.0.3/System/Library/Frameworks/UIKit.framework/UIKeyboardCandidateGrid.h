/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:29:28 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIKeyboardCandidateList.h>
#import <UIKit/UIKeyboardCandidateListDelegate.h>
#import <UIKit/UIKeyboardCandidateGridCollectionViewControllerDelegate.h>

@protocol UIKeyboardCandidateListDelegate, UICollectionViewDelegate;
@class UIImageView, UIView, UIKeyboardCandidateSortControl, UIKeyboardCandidateGridHeader, , TIKeyboardCandidateResultSet, NSMutableDictionary, UIKeyboardCandidateGridCollectionViewController, UIKBBackdropView, NSArray, NSString;

@interface UIKeyboardCandidateGrid : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateGridCollectionViewControllerDelegate> {

	UIImageView* _backgroundView;
	UIView* _topBarShadow;
	UIView* _bottomBarShadow;
	UIKeyboardCandidateSortControl* _sortBar;
	UIKeyboardCandidateGridHeader* _gridHeader;
	BOOL _drawTopShadow;
	BOOL _drawBottomShadow;
	BOOL _showHiddenCandidatesOnly;
	<UIKeyboardCandidateListDelegate>* _candidateListDelegate;
	TIKeyboardCandidateResultSet* _candidateSet;
	NSMutableDictionary* _collectionViewControllers;
	UIKeyboardCandidateGridCollectionViewController* _collectionViewController;
	unsigned _numberOfColumns;
	<UICollectionViewDelegate>* _scrollViewDelegate;
	int _candidatesVisualStyle;
	UIKBBackdropView* _backdropView;
	NSArray* _sortedCandidates;
	NSString* _inlineText;

}

@property (assign,nonatomic) BOOL drawTopShadow;                                                                      //@synthesize drawTopShadow=_drawTopShadow - In the implementation block
@property (assign,nonatomic) BOOL drawBottomShadow;                                                                   //@synthesize drawBottomShadow=_drawBottomShadow - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidateResultSet * candidateSet;                                             //@synthesize candidateSet=_candidateSet - In the implementation block
@property (nonatomic,retain) NSArray * sortedCandidates;                                                              //@synthesize sortedCandidates=_sortedCandidates - In the implementation block
@property (nonatomic,retain) NSString * inlineText;                                                                   //@synthesize inlineText=_inlineText - In the implementation block
@property (assign,nonatomic) unsigned numberOfColumns;                                                                //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (assign,nonatomic) int candidatesVisualStyle;                                                               //@synthesize candidatesVisualStyle=_candidatesVisualStyle - In the implementation block
@property (assign,nonatomic) UIKeyboardCandidateSortControl * sortBar;                                                //@synthesize sortBar=_sortBar - In the implementation block
@property (assign,nonatomic) UIKeyboardCandidateGridHeader * gridHeader;                                              //@synthesize gridHeader=_gridHeader - In the implementation block
@property (assign,nonatomic) <UICollectionViewDelegate> * scrollViewDelegate;                                         //@synthesize scrollViewDelegate=_scrollViewDelegate - In the implementation block
@property (assign,nonatomic) <UIKeyboardCandidateListDelegate> * candidateListDelegate;                               //@synthesize candidateListDelegate=_candidateListDelegate - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * collectionViewControllers;                                       //@synthesize collectionViewControllers=_collectionViewControllers - In the implementation block
@property (nonatomic,retain) UIKeyboardCandidateGridCollectionViewController * collectionViewController;              //@synthesize collectionViewController=_collectionViewController - In the implementation block
@property (nonatomic,retain) UIKBBackdropView * backdropView;                                                         //@synthesize backdropView=_backdropView - In the implementation block
@property (assign,nonatomic) BOOL showHiddenCandidatesOnly;                                                           //@synthesize showHiddenCandidatesOnly=_showHiddenCandidatesOnly - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(unsigned)numberOfColumns;
-(void)layout;
-(BOOL)hasCandidates;
-(BOOL)hasNextPage;
-(void)candidateListAcceptCandidate:(id)arg1 ;
-(void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(CGRect)arg3 maxX:(float)arg4 layout:(BOOL)arg5 ;
-(void)candidateListSelectionDidChange:(id)arg1 ;
-(BOOL)isExtendedList;
-(BOOL)isHiddenCandidatesList;
-(void)setUIKeyboardCandidateListDelegate:(id)arg1 ;
-(void)showCandidateAtIndex:(unsigned)arg1 ;
-(void)showCandidate:(id)arg1 ;
-(void)showNextCandidate;
-(void)showPreviousCandidate;
-(void)showNextPage;
-(void)showPreviousPage;
-(void)showNextRow;
-(void)showPreviousRow;
-(id)currentCandidate;
-(unsigned)currentIndex;
-(void)candidateAcceptedAtIndex:(unsigned)arg1 ;
-(id)keyboardBehaviors;
-(id)statisticsIdentifier;
-(unsigned)selectedSortIndex;
-(void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(CGRect)arg4 maxX:(float)arg5 layout:(BOOL)arg6 ;
-(void)setInlineText:(id)arg1 ;
-(BOOL)handleNumberKey:(unsigned)arg1 ;
-(BOOL)handleTabKeyWithShift:(BOOL)arg1 ;
-(BOOL)hasPreviousPage;
-(void)candidatesDidChange;
-(void)revealHiddenCandidates;
-(id)inlineText;
-(void)setCandidatesVisualStyle:(int)arg1 ;
-(int)candidatesVisualStyle;
-(BOOL)padInlineFloatingViewIsExpanded:(id)arg1 ;
-(id)candidateSet;
-(id)candidateListDelegate;
-(unsigned)gridCollectionViewNumberOfColumns:(id)arg1 ;
-(unsigned)gridCollectionViewSelectedSortMethodIndex:(id)arg1 ;
-(BOOL)showHiddenCandidatesOnly;
-(void)setCandidateSet:(id)arg1 ;
-(void)setCandidateListDelegate:(id)arg1 ;
-(void)setShowHiddenCandidatesOnly:(BOOL)arg1 ;
-(void)candidateListShouldBeDismissed:(id)arg1 ;
-(void)setCandidateSet:(id)arg1 showHiddenCandidatesOnly:(BOOL)arg2 ;
-(id)collectionViewController;
-(void)setCollectionViewController:(id)arg1 ;
-(void)sortSelectionBarAction:(id)arg1 ;
-(void)setBackdropView:(id)arg1 ;
-(id)backdropView;
-(void)setDrawTopShadow:(BOOL)arg1 ;
-(void)setDrawBottomShadow:(BOOL)arg1 ;
-(void)statusBarFrameWillChange:(id)arg1 ;
-(void)setSortBar:(id)arg1 ;
-(void)setGridHeader:(id)arg1 ;
-(id)sortBar;
-(BOOL)drawTopShadow;
-(BOOL)drawBottomShadow;
-(id)gridHeader;
-(void)clearViews;
-(id)collectionViewControllers;
-(id)scrollViewDelegate;
-(void)showArrowButton:(BOOL)arg1 ;
-(void)setNumberOfColumns:(unsigned)arg1 ;
-(void)setScrollViewDelegate:(id)arg1 ;
-(id)sortedCandidates;
-(void)setSortedCandidates:(id)arg1 ;
@end
