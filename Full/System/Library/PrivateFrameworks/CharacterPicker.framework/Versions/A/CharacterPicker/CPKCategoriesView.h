/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CharacterPicker.framework/Versions/A/CharacterPicker
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CharacterPicker/CharacterPicker-Structs.h>
#import <AppKit/NSView.h>

@class CPKBaseMatrix, NSView, NSImage;

@interface CPKCategoriesView : NSView {

	CPKBaseMatrix* _fixedCategories;
	CPKBaseMatrix* _scrollbaleCategories;
	NSView* _scrollEnclosure;
	char _enabled;
	long long _separatorIndex;
	long long _scrollerIndex;
	long long _lastSelectedIndex;
	NSImage* _nextPageIndicator;
	NSImage* _prevPageIndicator;
	NSImage* _dividerImage;

}

@property (assign,getter=isEnabled,nonatomic) char enabled;              //@synthesize enabled=_enabled - In the implementation block
-(void)navigationSelectionDidMoved:(id)arg1 ;
-(void)setCategoryTitles:(id)arg1 descriptions:(id)arg2 ;
-(void)setSelectedCategoryIndex:(long long)arg1 ;
-(long long)selectedCategoryIndex;
-(id)selectedCategoryAXElement;
-(void)myDefaultAction:(id)arg1 ;
-(void)scrollItemClicked:(id)arg1 ;
-(void)_selectedCatageoryIndex:(long long)arg1 byUser:(char)arg2 ;
-(long long)_localIndexFromGlobalIndex:(long long)arg1 outMatrix:(id*)arg2 ;
-(char)_shouldIgnoreUserSelectionOnMatrix:(id)arg1 ;
-(long long)_globalIndexFromLocalIndex:(long long)arg1 inMatrix:(id)arg2 ;
-(void)_scrollCategoriesWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setState:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(char)isEnabled;
-(id)state;
@end

