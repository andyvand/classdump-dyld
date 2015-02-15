/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:31 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@protocol NSFindPatternField;
@class NSSearchField, NSTextField, NSButton, NSSegmentedControl, NSMenu, NSMenuItem;

@interface NSTextFinderBarView : NSView {

	id _finder;
	id _container;
	NSSearchField*<NSFindPatternField> _searchField;
	NSTextField*<NSFindPatternField> _replaceField;
	NSButton* _doneButton;
	NSButton* _replaceCheckbox;
	NSSegmentedControl* _forwardBackButtons;
	NSSegmentedControl* _replaceAllButtons;
	NSMenu* _replaceAllMenu;
	NSMenuItem* _ignoreCaseItem;
	NSMenuItem* _wrapAroundItem;
	NSMenuItem* _containsItem;
	NSMenuItem* _startsWithItem;
	NSMenuItem* _fullWordItem;
	NSMenuItem* _patternItem;
	NSMenuItem* _patternItemSeparator;
	char _replaceMode;
	char _useRegularControls;
	char _drawsBackground;
	double _oneRowHeight;
	double _twoRowHeight;
	double _bottomOrSingleRowBaseline;
	double _topRowBaseline;

}
-(void)drawRect:(CGRect)arg1 ;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(id)_contentView;
-(void)viewDidMoveToWindow;
-(void)viewDidMoveToSuperview;
-(char)_drawsNothing;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)_finishedMakingConnections;
-(void)performTextFinderAction:(id)arg1 ;
-(id)_container;
-(id)_replaceField;
-(id)_searchField;
-(void)resizeSubviewsWithOldSize:(CGSize)arg1 ;
-(id)_textFinder;
-(void)_updateLayout;
-(void)_setTextFinder:(id)arg1 ;
-(void)_setEnabledForward:(char)arg1 back:(char)arg2 ;
-(void)_setSearchOptions:(unsigned long long)arg1 ;
-(unsigned long long)_searchOptions;
-(void)_setSubstringMatchType:(long long)arg1 ;
-(long long)_substringMatchType;
-(void)_setReplaceMode:(char)arg1 ;
-(id)_nextKeyView;
-(id)_actionResponderFromView:(id)arg1 ;
-(double)_requiredHeight;
-(void)_layoutBarSubviews;
-(void)_updateReplaceUIVisibility;
-(void)_resizeIfNecessary;
-(void)_updateNextKeyViews;
-(char)_drawsOwnDividerLine;
-(char)_drawsDividerLineAtBottom;
-(void)_insertFindPattern:(id)arg1 ;
-(void)_toggleFindReplace:(id)arg1 ;
-(void)_doneButton:(id)arg1 ;
@end

