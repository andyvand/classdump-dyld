/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/VisualTabPickerShadowTileView.h>

@protocol VisualTabPickerThumbnailDataSource, VisualTabPickerThumbnailDelegate;
@class VisualTabPickerViewController, NSTextField, _WKThumbnailView, NSView, VisualTabPickerButton;

@interface VisualTabPickerThumbnailView : VisualTabPickerShadowTileView {

	VisualTabPickerViewController* _visualTabPickerViewController;
	NSTextField* _titleTextField;
	_WKThumbnailView* _wkThumbnailView;
	NSView* _thumbnailView;
	VisualTabPickerButton* _closeButton;
	char _closeButtonVisible;
	id<VisualTabPickerThumbnailDataSource> _dataSource;
	id<VisualTabPickerThumbnailDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<VisualTabPickerThumbnailDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<VisualTabPickerThumbnailDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isCloseButtonVisible,nonatomic) char closeButtonVisible;                   //@synthesize closeButtonVisible=_closeButtonVisible - In the implementation block
-(void)_setUpSubviews;
-(char)_enhancedAccessibilityEnabled;
-(id)initWithFrame:(CGRect)arg1 visualTabPickerViewController:(id)arg2 ;
-(void)setCloseButtonVisible:(char)arg1 ;
-(void)_setUpShadows;
-(void)_reloadView;
-(void)_getTitleOpacityAnimationDuration:(double*)arg1 timeOffset:(double*)arg2 gridAnimation:(long long)arg3 ;
-(id)_createTitleTextField;
-(void)resetScaleFactor;
-(void)startTitleOpacityAnimation:(long long)arg1 ;
-(char)isCloseButtonVisible;
-(void)setDelegate:(id<VisualTabPickerThumbnailDelegate>)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)accessibilityActionNames;
-(void)accessibilityPerformAction:(id)arg1 ;
-(id<VisualTabPickerThumbnailDelegate>)delegate;
-(void)mouseDown:(id)arg1 ;
-(void)setDataSource:(id<VisualTabPickerThumbnailDataSource>)arg1 ;
-(void)magnifyWithEvent:(id)arg1 ;
-(id<VisualTabPickerThumbnailDataSource>)dataSource;
-(void)_closeButtonPressed:(id)arg1 ;
@end

