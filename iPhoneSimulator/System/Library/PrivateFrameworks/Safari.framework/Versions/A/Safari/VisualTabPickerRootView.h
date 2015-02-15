/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:12 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/MouseEventBlockingView.h>

@class NSScrollView, NSView, VisualTabPickerGridView, VisualTabPickerSearchField, VisualTabPickerCloudTabsView, VisualTabPickerViewController;

@interface VisualTabPickerRootView : MouseEventBlockingView {

	NSScrollView* _scrollView;
	NSView* _topBarView;
	VisualTabPickerGridView* _gridView;
	VisualTabPickerSearchField* _searchField;
	VisualTabPickerCloudTabsView* _cloudTabsView;
	VisualTabPickerViewController* _visualTabPickerViewController;

}

@property (nonatomic,readonly) VisualTabPickerGridView * gridView;                                              //@synthesize gridView=_gridView - In the implementation block
@property (nonatomic,readonly) VisualTabPickerSearchField * searchField;                                        //@synthesize searchField=_searchField - In the implementation block
@property (nonatomic,readonly) VisualTabPickerCloudTabsView * cloudTabsView;                                    //@synthesize cloudTabsView=_cloudTabsView - In the implementation block
@property (assign,nonatomic,__weak) VisualTabPickerViewController * visualTabPickerViewController;              //@synthesize visualTabPickerViewController=_visualTabPickerViewController - In the implementation block
-(VisualTabPickerSearchField *)searchField;
-(id)initWithFrame:(CGRect)arg1 visualTabPickerViewController:(id)arg2 ;
-(void)startGridAnimation:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(VisualTabPickerViewController *)visualTabPickerViewController;
-(void)setVisualTabPickerViewController:(VisualTabPickerViewController *)arg1 ;
-(void)_startPerspectiveAnimation:(long long)arg1 ;
-(void)_startTopBarAndCloudViewAnimation:(long long)arg1 ;
-(char)makeSearchFieldFirstResponder;
-(void)_getTopBarAnimationDuration:(double*)arg1 timeOffset:(double*)arg2 gridAnimation:(long long)arg3 ;
-(void)showSearchField;
-(void)setUpSubviews;
-(VisualTabPickerGridView *)gridView;
-(VisualTabPickerCloudTabsView *)cloudTabsView;
-(char)wantsUpdateLayer;
-(void)setFrameSize:(CGSize)arg1 ;
-(char)acceptsFirstResponder;
-(char)mouseDownCanMoveWindow;
-(void)cancelOperation:(id)arg1 ;
@end

