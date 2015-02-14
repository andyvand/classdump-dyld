/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSViewController.h>
#import <AppKit/NSSplitViewDelegate.h>

@class NSSplitView, NSArray, NSString;

@interface NSSplitViewController : NSViewController <NSSplitViewDelegate> {

	NSSplitView* _splitView;
	id _splitViewControllerPrivateData;
	struct {
		unsigned _reserved : 32;
	}  _splitViewControllerFlags;

}

@property (retain) NSSplitView * splitView; 
@property (copy) NSArray * splitViewItems; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)splitViewItem:(id)arg1 setCollapsed:(char)arg2 withPriority:(float)arg3 resizeRatio:(double)arg4 animatedWithDuration:(double)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setView:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)removeChildViewControllerAtIndex:(long long)arg1 ;
-(void)insertChildViewController:(id)arg1 atIndex:(long long)arg2 ;
-(void)updateViewConstraints;
-(char)splitView:(id)arg1 canCollapseSubview:(id)arg2 ;
-(void)setSplitViewItems:(NSArray *)arg1 ;
-(NSArray *)splitViewItems;
-(NSSplitView *)splitView;
-(CGRect)_defaultFrame;
-(id)_makeSplitViewWithFrame:(CGRect)arg1 ;
-(CGRect)_splitViewFrame;
-(void)_setupSplitView;
-(void)_tearDownSplitView;
-(void)insertSplitViewItem:(id)arg1 atIndex:(long long)arg2 ;
-(id)_splitViewItemForViewControllerAtIndex:(unsigned long long)arg1 ;
-(void)removeSplitViewItem:(id)arg1 ;
-(void)addSplitViewItem:(id)arg1 ;
-(void)_insertWrapperViewIntoSplitViewForSplitViewItem:(id)arg1 atIndex:(long long)arg2 ;
-(void)_insertSubview:(id)arg1 atIndex:(long long)arg2 ;
-(long long)_indexOfSplitViewItem:(id)arg1 ;
-(id)_splitViewItemForViewAtIndex:(long long)arg1 ;
-(char)hidesFirstDivider;
-(char)hidesLastDivider;
-(char)splitView:(id)arg1 shouldCollapseSubview:(id)arg2 forDoubleClickOnDividerAtIndex:(long long)arg3 ;
-(char)splitView:(id)arg1 shouldHideDividerAtIndex:(long long)arg2 ;
-(CGRect)splitView:(id)arg1 effectiveRect:(CGRect)arg2 forDrawnRect:(CGRect)arg3 ofDividerAtIndex:(long long)arg4 ;
-(CGRect)splitView:(id)arg1 additionalEffectiveRectOfDividerAtIndex:(long long)arg2 ;
-(void)setSplitView:(NSSplitView *)arg1 ;
-(long long)_viewInsertionIndexForSplitViewItem:(id)arg1 ;
-(id)splitViewItemForViewController:(id)arg1 ;
-(void)_collapse:(char)arg1 splitViewItem:(id)arg2 animated:(char)arg3 completionHandler:(/*^block*/id)arg4 ;
-(float)_splitView:(id)arg1 holdingPriorityForViewAtIndex:(long long)arg2 ;
-(void)_setHoldingPriority:(float)arg1 forSplitViewItem:(id)arg2 ;
-(void)setHidesLastDivider:(char)arg1 ;
-(void)setHidesFirstDivider:(char)arg1 ;
@end

