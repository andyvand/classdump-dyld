/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:22 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <AppKit/NSTableCellView.h>

@interface FI_TListHeaderCellView : NSTableCellView {

	TNSRef<FI_TImageView *> _tagImageView;
	TNSRef<FI_TUpdateLayerView *> _rightSeparatorView;
	TNSRef<FI_TUpdateLayerView *> _leftSeparatorView;
	double _rightTextMargin;
	double _leftTextMargin;
	BOOL _isSortAscending;
	BOOL _isDragging;
	BOOL _isPressed;
	BOOL _isNextCellViewPressed;
	BOOL _isInFloatingHeader;
	TKeyValueObserver* _textFieldStringValueObserver;

}

@property (assign,nonatomic) double rightTextMargin;                                             //@synthesize rightTextMargin=_rightTextMargin - In the implementation block
@property (assign,nonatomic) double leftTextMargin;                                              //@synthesize leftTextMargin=_leftTextMargin - In the implementation block
@property (assign,getter=isSeparatorHidden,nonatomic) BOOL separatorHidden; 
@property (assign,getter=isSortTriangleHidden,nonatomic) BOOL sortTriangleHidden; 
@property (assign,getter=isSortAscending,nonatomic) BOOL sortAscending;                          //@synthesize isSortAscending=_isSortAscending - In the implementation block
@property (assign,getter=isDragging,nonatomic) BOOL dragging;                                    //@synthesize isDragging=_isDragging - In the implementation block
@property (assign,getter=isPressed,nonatomic) BOOL pressed;                                      //@synthesize isPressed=_isPressed - In the implementation block
@property (assign,getter=isNextCellViewPressed,nonatomic) BOOL nextCellViewPressed;              //@synthesize isNextCellViewPressed=_isNextCellViewPressed - In the implementation block
@property (assign,getter=isInFloatingHeader,nonatomic) BOOL inFloatingHeader;                    //@synthesize isInFloatingHeader=_isInFloatingHeader - In the implementation block
-(BOOL)isInFloatingHeader;
-(void)setInFloatingHeader:(BOOL)arg1 ;
-(void)setTagImage:(id)arg1 ;
-(void)setPressed:(BOOL)arg1 ;
-(BOOL)isSortAscending;
-(double)rightTextMargin;
-(void)setRightTextMargin:(double)arg1 ;
-(double)leftTextMargin;
-(void)setLeftTextMargin:(double)arg1 ;
-(BOOL)isSeparatorHidden;
-(void)setSeparatorHidden:(BOOL)arg1 ;
-(BOOL)isSortTriangleHidden;
-(void)setSortTriangleHidden:(BOOL)arg1 ;
-(void)setSortAscending:(BOOL)arg1 ;
-(void)setDragging:(BOOL)arg1 ;
-(BOOL)isNextCellViewPressed;
-(void)setNextCellViewPressed:(BOOL)arg1 ;
-(id)sortTriangleView;
-(void)cloneFrom:(id)arg1 ;
-(BOOL)hitTestInSeparator:(const CGPoint*)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layout;
-(void)updateLayer;
-(BOOL)isPressed;
-(BOOL)isDragging;
@end

