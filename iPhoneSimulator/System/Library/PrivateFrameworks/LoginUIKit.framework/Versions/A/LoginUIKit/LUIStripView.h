/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:04 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/LoginUIKit.framework/Versions/A/LoginUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <LoginUIKit/LoginUIKit-Structs.h>
#import <AppKit/NSControl.h>

@class NSMutableDictionary, NSImageView, NSImage, NSLayoutConstraint, NSMutableString, NSTimer;

@interface LUIStripView : NSControl {

	id _delegate;
	id _dataSource;
	id _target;
	SEL _action;
	SEL _scrollAction;
	char _needsReload;
	char _loading;
	long long _numItems;
	long long _selectedItem;
	CGSize _itemSize;
	double _spaceBetweenItems;
	NSMutableDictionary* _nibForIdentifier;
	NSMutableDictionary* _reusableItems;
	NSMutableDictionary* _itemDict;
	NSImageView* _highlightImageView;
	NSImage* _selectionImage;
	NSImage* _extendedSelectionImage;
	char _focusing;
	char _focused;
	char _highlighted;
	double _previousConstant;
	NSLayoutConstraint* _firstConstraint;
	NSLayoutConstraint* _highlightConstraintX;
	NSLayoutConstraint* _highlightConstraintY;
	NSMutableString* _searchString;
	NSTimer* _searchStringTimeoutTimer;
	NSTimer* _scrollTimer;
	char _touched;

}

@property (assign) id<LUIStripViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign) id<LUIStripViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign) id target;                                          //@synthesize target=_target - In the implementation block
@property (assign) SEL action;                                         //@synthesize action=_action - In the implementation block
@property (assign) SEL scrollAction;                                   //@synthesize scrollAction=_scrollAction - In the implementation block
@property (assign) CGSize itemSize;                                    //@synthesize itemSize=_itemSize - In the implementation block
@property (assign) double spaceBetweenItems;                           //@synthesize spaceBetweenItems=_spaceBetweenItems - In the implementation block
+(char)accessibilityIsSingleCelled;
-(void)setDelegate:(id<LUIStripViewDelegate>)arg1 ;
-(void)dealloc;
-(char)accessibilityIsIgnored;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTarget:(id)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)target;
-(SEL)action;
-(id<LUIStripViewDelegate>)delegate;
-(id)itemAtIndex:(long long)arg1 ;
-(id)accessibilityChildren;
-(void)viewWillDraw;
-(void)reloadData;
-(CGRect)visibleRect;
-(char)acceptsFirstResponder;
-(void)keyDown:(id)arg1 ;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(void)setDataSource:(id<LUIStripViewDataSource>)arg1 ;
-(long long)selectedItem;
-(CGRect)adjustScroll:(CGRect)arg1 ;
-(void)selectItemAtIndex:(long long)arg1 ;
-(id<LUIStripViewDataSource>)dataSource;
-(void)touchesBeganWithEvent:(id)arg1 ;
-(void)touchesMovedWithEvent:(id)arg1 ;
-(void)touchesEndedWithEvent:(id)arg1 ;
-(void)touchesCancelledWithEvent:(id)arg1 ;
-(void)prepareContentInRect:(CGRect)arg1 ;
-(id)_unarchiveViewWithIdentifier:(id)arg1 owner:(id)arg2 ;
-(id)_reusableItems;
-(void)_addReusableItem:(id)arg1 ;
-(void)_calculateNumVisibleItems:(long long*)arg1 andSetsOfViewsToAdd:(id*)arg2 andRemove:(id*)arg3 ;
-(void)_clearItems;
-(void)_keyboardNavigateToIndex:(long long)arg1 ;
-(void)_searchStringTimeout:(id)arg1 ;
-(void)_updateFocusedItemOrigin;
-(void)_updateHighlight;
-(void)_updateStripView;
-(id)makeItemWithIdentifier:(id)arg1 owner:(id)arg2 ;
-(void)setItemSize:(CGSize)arg1 ;
-(void)selectItemAtIndex:(long long)arg1 highlight:(char)arg2 ;
-(void)loadItemsForView;
-(void)_scrollUpdate:(id)arg1 ;
-(void)setNibName:(id)arg1 forIdentifier:(id)arg2 ;
-(char)moreItemsToLeft;
-(char)moreItemsToRight;
-(void)endFocusOnItem;
-(void)focusOnItem:(long long)arg1 ;
-(char)isFocusing;
-(char)isFocusedOnItem;
-(SEL)scrollAction;
-(void)setScrollAction:(SEL)arg1 ;
-(CGSize)itemSize;
-(double)spaceBetweenItems;
-(void)setSpaceBetweenItems:(double)arg1 ;
@end
