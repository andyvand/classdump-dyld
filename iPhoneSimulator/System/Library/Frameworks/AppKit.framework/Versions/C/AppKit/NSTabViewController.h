/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:32 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSViewController.h>
#import <AppKit/NSTabViewDelegate.h>
#import <AppKit/NSToolbarDelegate.h>

@class NSTabView, NSArray, NSString;

@interface NSTabViewController : NSViewController <NSTabViewDelegate, NSToolbarDelegate> {

	NSTabView* _tabView;
	id _tabViewControllerPrivateData;
	struct {
		unsigned _changingSelection : 1;
		unsigned _addingInitialTabViewItems : 1;
		unsigned __extra : 30;
	}  _tabViewControllerFlags;

}

@property (assign) long long tabStyle; 
@property (retain) NSTabView * tabView;                                            //@synthesize tabView=_tabView - In the implementation block
@property (assign) unsigned long long transitionOptions; 
@property (assign) char canPropagateSelectedChildViewControllerTitle; 
@property (copy) NSArray * tabViewItems; 
@property (assign) long long selectedTabViewItemIndex; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)tabViewItems;
-(void)setTabViewItems:(NSArray *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)title;
-(void)setView:(id)arg1 ;
-(void)loadView;
-(id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(char)arg3 ;
-(id)toolbarDefaultItemIdentifiers:(id)arg1 ;
-(id)toolbarAllowedItemIdentifiers:(id)arg1 ;
-(id)toolbarSelectableItemIdentifiers:(id)arg1 ;
-(void)toolbarWillAddItem:(id)arg1 ;
-(void)toolbarDidRemoveItem:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)removeChildViewControllerAtIndex:(long long)arg1 ;
-(void)insertChildViewController:(id)arg1 atIndex:(long long)arg2 ;
-(void)updateViewConstraints;
-(void)_viewWillMoveToWindow:(id)arg1 unhiding:(char)arg2 ;
-(CGRect)_defaultFrame;
-(NSTabView *)tabView;
-(void)setTabView:(NSTabView *)arg1 ;
-(void)removeTabViewItem:(id)arg1 ;
-(void)tabViewDidChangeNumberOfTabViewItems:(id)arg1 ;
-(unsigned long long)transitionOptions;
-(char)tabView:(id)arg1 shouldSelectTabViewItem:(id)arg2 ;
-(void)tabView:(id)arg1 willSelectTabViewItem:(id)arg2 ;
-(void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2 ;
-(void)addTabViewItem:(id)arg1 ;
-(void)insertTabViewItem:(id)arg1 atIndex:(long long)arg2 ;
-(void)_startObservingTabViewItems;
-(id)segmentedControl;
-(void)_unbindSegmentedControl:(id)arg1 ;
-(void)_stopObservingTabViewItems;
-(void)_unbindPopoverToolbar:(id)arg1 ;
-(void)_removeAllToolbarItems;
-(long long)selectedTabViewItemIndex;
-(long long)tabStyle;
-(void)_makeAndAddSegmentedControlIfNecessary;
-(CGSize)_goodTabViewContentSize;
-(void)_addAllTabs;
-(void)_setupToolbarForWindow:(id)arg1 ;
-(id)_makeTabViewWithFrame:(CGRect)arg1 ;
-(void)_removeAllTabs;
-(void)_updateSelectedTabViewItemIndexInUI;
-(char)_hasPopoverToolbarStyle;
-(id)_tabViewItemForViewControllerAtIndex:(unsigned long long)arg1 ;
-(void)_addToolbarItemForTabViewItem:(id)arg1 atIndex:(long long)arg2 ;
-(void)setSelectedTabViewItemIndex:(long long)arg1 ;
-(void)_startObservingTabViewItem:(id)arg1 ;
-(long long)_indexOfTabViewItem:(id)arg1 ;
-(void)_removeToolbarItemForTabViewItem:(id)arg1 ;
-(void)_stopObservingTabViewItem:(id)arg1 ;
-(void)_tearDownToolbarForWindow:(id)arg1 ;
-(void)_removeSegmentedControl;
-(void)_reestablishLayoutConstraintsForTabView;
-(void)setTabStyle:(long long)arg1 ;
-(void)_tabStyleChangedFrom:(long long)arg1 to:(long long)arg2 ;
-(char)_hasPropagatedTitle;
-(void)_updateToolbarSelection;
-(void)setTransitionOptions:(unsigned long long)arg1 ;
-(char)canPropagateSelectedChildViewControllerTitle;
-(void)_bindSegmentedControl:(id)arg1 ;
-(void)setSegmentedControl:(id)arg1 ;
-(id)_makeSegmentedControl;
-(id)_toolbarItemWithIdentifier:(id)arg1 ;
-(void)_toolbarItemAction:(id)arg1 ;
-(id)_tabViewControllerToolbarItemIdentifiers:(id)arg1 ;
-(char)_isContentViewControllerOfPopoverInWindow:(id)arg1 ;
-(void)_makeAndAddPopoverToolbar;
-(id)_toolbarItemIdentifierForSelectedTabViewItemIndex:(long long)arg1 ;
-(void)_removePopoverToolbar;
-(id)_toolbarItems;
-(id)_tabViewItemWithIdentifier:(id)arg1 ;
-(void)_bindPopoverToolbar:(id)arg1 ;
-(id)tabViewItemForViewController:(id)arg1 ;
-(void)setCanPropagateSelectedChildViewControllerTitle:(char)arg1 ;
@end

