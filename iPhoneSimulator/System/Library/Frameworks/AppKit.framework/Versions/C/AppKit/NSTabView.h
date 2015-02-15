/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:27 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSTabViewItem, NSFont, NSView, NSLayoutConstraint, NSArray;

@interface NSTabView : NSView {

	id _tabViewItems;
	NSTabViewItem* _selectedTabViewItem;
	NSFont* _font;
	unsigned long long _tabViewType;
	char _allowTruncatedLabels;
	id _delegate;
	char _tabViewUnusedBOOL1;
	char _drawsBackground;
	NSTabViewItem* _pressedTabViewItem;
	long long _endTabWidth;
	long long _maxOverlap;
	double _tabHeight;
	NSTabViewItem* _tabViewItemWithKeyView;
	NSView* _originalNextKeyView;
	NSLayoutConstraint* _tabViewMinimumSizeConstraint;
	NSTabViewDelegateRespondTo _delegateRespondTo;
	struct {
		unsigned needsLayout : 1;
		unsigned controlTint : 3;
		unsigned controlSize : 2;
		unsigned wiringNibConnections : 1;
		unsigned wiringInteriorLastKeyView : 1;
		unsigned originalNextKeyViewChanged : 1;
		unsigned liveResizeSkippedResetToolTips : 1;
		unsigned subviewsAddedForTabs : 1;
		unsigned allowsPropertyChange : 1;
		unsigned ownedByTabViewController : 1;
		unsigned reserved : 19;
	}  _flags;
	NSTabViewItem* _focusedTabViewItem;
	void* _tabViewUnused2;

}

@property (readonly) NSTabViewItem * selectedTabViewItem; 
@property (retain) NSFont * font; 
@property (assign) unsigned long long tabViewType; 
@property (copy,readonly) NSArray * tabViewItems; 
@property (assign) char allowsTruncatedLabels; 
@property (readonly) CGSize minimumSize; 
@property (assign) char drawsBackground; 
@property (assign) unsigned long long controlTint; 
@property (assign) unsigned long long controlSize; 
@property (assign) id<NSTabViewDelegate> delegate; 
@property (readonly) CGRect contentRect; 
@property (readonly) long long numberOfTabViewItems; 
+(void)initialize;
+(char)_usesToolTipsWhenTruncated;
+(void)_setUsesToolTipsWhenTruncated:(char)arg1 ;
-(void)stopLoading;
-(void)setDelegate:(id<NSTabViewDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGSize)minimumSize;
-(id)accessibilityFocusedUIElement;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)accessibilityIsIgnored;
-(NSArray *)tabViewItems;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(void)drawRect:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityRoleAttribute;
-(id)accessibilityFocusedAttribute;
-(char)accessibilityIsFocusedAttributeSettable;
-(id)accessibilityChildrenAttribute;
-(NSFont *)font;
-(void)setFont:(NSFont *)arg1 ;
-(void)layout;
-(void)performClick:(id)arg1 ;
-(void)setNextKeyView:(id)arg1 ;
-(void)removeFromSuperview;
-(void)setControlTint:(unsigned long long)arg1 ;
-(void)setContentCompressionResistancePriority:(float)arg1 forOrientation:(long long)arg2 ;
-(id<NSTabViewDelegate>)delegate;
-(void)updateLayer;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)restoreStateWithCoder:(id)arg1 ;
-(void)becomeKeyWindow;
-(void)resignKeyWindow;
-(char)isFlipped;
-(char)wantsUpdateLayer;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)_didRemoveLayer;
-(char)isOpaque;
-(char)allowsVibrancy;
-(NSEdgeInsets)alignmentRectInsets;
-(id)accessibilityContentsAttribute;
-(char)accessibilityIsContentsAttributeSettable;
-(void)setDrawsBackground:(char)arg1 ;
-(char)_hasKeyboardFocus;
-(void)_windowChangedKeyState;
-(unsigned long long)controlSize;
-(void)setControlSize:(unsigned long long)arg1 ;
-(char)acceptsFirstResponder;
-(void)moveRight:(id)arg1 ;
-(void)moveLeft:(id)arg1 ;
-(char)resignFirstResponder;
-(char)acceptsFirstMouse:(id)arg1 ;
-(id)_recursiveSetDefaultKeyViewLoop;
-(char)becomeFirstResponder;
-(char)needsPanelToBecomeKey;
-(char)drawsBackground;
-(void)removeFromSuperviewWithoutNeedingDisplay;
-(void)mouseDown:(id)arg1 ;
-(void)_primitiveSetPreviousKeyView:(id)arg1 ;
-(void)_setWindow:(id)arg1 ;
-(void)_commonInit;
-(unsigned long long)_realControlTint;
-(id)accessibilityValueAttribute;
-(char)accessibilityIsValueAttributeSettable;
-(id)currentEditor;
-(id)_highlightColorForCell:(id)arg1 ;
-(unsigned long long)controlTint;
-(char)mouseDownCanMoveWindow;
-(void)moveUp:(id)arg1 ;
-(void)moveDown:(id)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)_finishedMakingConnections;
-(void)drawFocusRingMask;
-(id)_vibrancyFilter;
-(CGRect)focusRingMaskBounds;
-(CGRect)contentRect;
-(void)instantiateWithObjectInstantiator:(id)arg1 ;
-(void)viewDidEndLiveResize;
-(char)mouseTracker:(id)arg1 shouldStartTrackingWithEvent:(id)arg2 ;
-(char)mouseTracker:(id)arg1 shouldContinueTrackingWithEvent:(id)arg2 ;
-(char)mouseTracker:(id)arg1 didStopTrackingWithEvent:(id)arg2 ;
-(void)_systemColorChanged:(id)arg1 ;
-(char)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3 ;
-(int)_vibrancyBlendMode;
-(char)_canMakePropertyChange;
-(void)viewWillStartLiveResize;
-(void)_drawTabsInDirtyRect:(CGRect)arg1 ;
-(CGRect)_tabRectForTabViewItem:(id)arg1 ;
-(CFDictionaryRef)_copyCoreUIOptionsForTabViewItem:(id)arg1 withState:(unsigned long long)arg2 inRect:(CGRect)arg3 ;
-(void)_removeTabViewItems:(id)arg1 ;
-(void)setTabViewMinimumSizeConstraint:(id)arg1 ;
-(unsigned long long)tabViewType;
-(unsigned long long)_tabOrientation;
-(void)_redisplayForStateChange;
-(char)_hasHorizontalOrientation;
-(char)_tabsAreR2L;
-(void)_layoutTabs;
-(void)_invalidateTabsCache;
-(void)_resizeSelectedTabViewItem;
-(char)_hasTabs;
-(char)_usesSubviewsForButtons;
-(void)removeTabViewItem:(id)arg1 ;
-(void)selectTabViewItemAtIndex:(long long)arg1 ;
-(void)_addedTab:(id)arg1 atIndex:(long long)arg2 ;
-(long long)indexOfTabViewItem:(id)arg1 ;
-(void)_setKeyboardFocusRingNeedsDisplayForTabViewItem:(id)arg1 ;
-(void)_setInteriorNextKeyView:(id)arg1 ;
-(long long)numberOfTabViewItems;
-(void)_cancelDelayedKeyboardNavigationTabSwitch;
-(void)_setNeedsDisplayForTabViewItem:(id)arg1 ;
-(id)_tabViewController;
-(void)_switchInitialFirstResponder:(id)arg1 lastKeyView:(id)arg2 forTabViewItem:(id)arg3 ;
-(id)_findFirstValidKeyViewStartingFrom:(id)arg1 inTabViewItem:(id)arg2 ;
-(void)_setNextKeyViewFor:(id)arg1 toNextKeyView:(id)arg2 ;
-(id)tabViewItemAtIndex:(long long)arg1 ;
-(id)_originalNextKeyView;
-(char)_isViewValidOriginalNextKeyView:(id)arg1 ;
-(void)_primitiveSetNextKeyView:(id)arg1 ;
-(void)_prepareForDefaultKeyLoopComputation;
-(void)_recursiveBreakKeyViewLoop;
-(NSTabViewItem *)selectedTabViewItem;
-(void)_concludeDefaultKeyLoopComputation;
-(char)_shouldSelectTabViewItem:(id)arg1 ;
-(void)_switchTabViewItem:(id)arg1 oldView:(id)arg2 withTabViewItem:(id)arg3 newView:(id)arg4 initialFirstResponder:(id)arg5 lastKeyView:(id)arg6 ;
-(char)_hasKeyboardFocusInTabItem:(id)arg1 ;
-(void)selectTabViewItem:(id)arg1 ;
-(long long)indexOfTabViewItemWithIdentifier:(id)arg1 ;
-(void)_previousNextTab:(long long)arg1 loop:(char)arg2 ;
-(void)_setPressedTabViewItem:(id)arg1 ;
-(long long)_findPreviousNextTab:(long long)arg1 loop:(char)arg2 invertForR2L:(char)arg3 startingAtTabItem:(id)arg4 ;
-(void)_keyboardNavigateDoSelectOfFocusItem:(id)arg1 ;
-(void)_keyboardNavigateToTabAtIndex:(long long)arg1 ;
-(void)_keyboardNavigateToTabByDelta:(long long)arg1 ;
-(id)_tabViewButtons;
-(CGRect)_tabRectAdjustedForOverlap:(CGRect)arg1 ;
-(char)_coreUIDrawTab:(id)arg1 withState:(unsigned long long)arg2 inRect:(CGRect)arg3 ;
-(char)_shouldAppearActive;
-(char)_coreUIDrawBezelInRect:(CGRect)arg1 withClip:(CGRect)arg2 flipped:(char)arg3 ;
-(CFDictionaryRef)_createCoreUIBezelOptionsFlipped:(char)arg1 ;
-(id)_backgroundBezelLayer;
-(void)_updateTabBezelStyleForLayer:(id)arg1 ;
-(char)_hasBezelBorder;
-(id)_currentBorderColor;
-(double)_tabHeight;
-(CGRect)_frameForBezelBorder;
-(CGRect)_hackFrameToMatchLegacyBezelRect:(CGRect)arg1 ;
-(CGRect)_bezelLayerFrame;
-(void)_setBackgroundBezelLayer:(id)arg1 ;
-(CGRect)_tabViewButtonFrame;
-(void)_setTabViewButtons:(id)arg1 ;
-(void)_addAndUpdateBezelLayerIfNeeded;
-(void)_removeBackgroundBezelLayer;
-(void)_performTabLayoutIfNeeded;
-(void)_addTabViewButtons;
-(void)_removeTabButtonLayer;
-(void)_drawTabViewItem:(id)arg1 inRect:(CGRect)arg2 ;
-(CGRect)_titleRectForTabViewItem:(id)arg1 ;
-(void)_drawBorder:(id)arg1 inRect:(CGRect)arg2 ;
-(void)_drawThemeTab:(id)arg1 withState:(unsigned long long)arg2 inRect:(CGRect)arg3 ;
-(CGSize)_nominalSizeNeedForTabItemLabel:(id)arg1 ;
-(double)_endTabWidth;
-(CGRect)_labelRectForTabRect:(CGRect)arg1 forItem:(id)arg2 ;
-(char)_tabIndexIsLeftOrTop:(unsigned long long)arg1 ;
-(char)_tabIndexIsRightOrBottom:(unsigned long long)arg1 ;
-(void)_drawThemeBezelBorder:(id)arg1 inBounds:(CGRect)arg2 clipRect:(CGRect)arg3 ;
-(void)_drawBezelBorder:(id)arg1 inRect:(CGRect)arg2 ;
-(CGRect)_themeTabAndBarArea;
-(void)_old_encodeWithCoder_NSTabView:(id)arg1 ;
-(id)_old_initWithCoder_NSTabView:(id)arg1 ;
-(id)tabViewMinimumSizeConstraint;
-(void)_updateMinimumSizeConstraint;
-(double)_totalMinimumTabsLengthWithOverlap:(double)arg1 ;
-(CGSize)_minimumSizeNeedForTabItemLabel:(id)arg1 ;
-(double)_totalTabsLength:(char)arg1 overlap:(double)arg2 ;
-(double)_totalNominalTabsLengthWithOverlap:(double)arg1 ;
-(id)_tabEnumerationFromLeftToRight;
-(double)_doLayoutTabs:(double)arg1 ;
-(void)_updateTabViewButtonsFrame;
-(CGRect)_themeContentRect;
-(id)tabViewItemAtPoint:(CGPoint)arg1 ;
-(char)_tabViewOwnedByTabViewController;
-(char)_tabViewControllerAllowsPropertyChange;
-(char)allowsTruncatedLabels;
-(void)setAllowsTruncatedLabels:(char)arg1 ;
-(void)setTabViewType:(unsigned long long)arg1 ;
-(void)addTabViewItem:(id)arg1 ;
-(void)insertTabViewItem:(id)arg1 atIndex:(long long)arg2 ;
-(char)_wiringNibConnections;
-(void)_primitiveSetDefaultNextKeyView:(id)arg1 ;
-(void)takeSelectedTabViewItemFromSender:(id)arg1 ;
-(void)selectTabViewItemWithIdentifier:(id)arg1 ;
-(void)selectFirstTabViewItem:(id)arg1 ;
-(void)selectLastTabViewItem:(id)arg1 ;
-(void)selectNextTabViewItem:(id)arg1 ;
-(void)selectPreviousTabViewItem:(id)arg1 ;
-(void)_updateBackgroundBezelLayerIfRequired;
-(CGSize)_frameSizeForContentSize:(CGSize)arg1 ;
-(id)_pressedTabViewItem;
-(double)_maxOverlap;
-(void)_setMaxOverlap:(double)arg1 ;
-(double)_currentTabHeight;
-(void)_setCurrentTabHeight:(double)arg1 ;
-(void)_setNeedsLayout:(char)arg1 ;
-(void)_setEndTabWidth:(double)arg1 ;
-(void)_setTabViewItems:(id)arg1 ;
-(void)_setTabViewControllerAllowsPropertyChange:(char)arg1 ;
-(id)accessibilityTabsAttribute;
-(char)accessibilityIsTabsAttributeSettable;
-(id)ns_widgetType;
@end

