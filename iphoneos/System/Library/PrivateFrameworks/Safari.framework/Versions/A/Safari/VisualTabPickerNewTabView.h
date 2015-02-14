/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/VisualTabPickerShadowTileView.h>

@protocol VisualTabPickerNewTabViewDelegate;
@class NSView, NSImageView;

@interface VisualTabPickerNewTabView : VisualTabPickerShadowTileView {

	NSView* _contentView;
	NSImageView* _imageView;
	id<VisualTabPickerNewTabViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<VisualTabPickerNewTabViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_setUpSubviews;
-(void)animateToolbarImage:(id)arg1 height:(double)arg2 gridAnimation:(long long)arg3 ;
-(void)animateSidebarImage:(id)arg1 width:(double)arg2 gridAnimation:(long long)arg3 ;
-(void)setDelegate:(id<VisualTabPickerNewTabViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)accessibilityActionNames;
-(void)accessibilityPerformAction:(id)arg1 ;
-(id<VisualTabPickerNewTabViewDelegate>)delegate;
-(void)mouseDown:(id)arg1 ;
-(void)magnifyWithEvent:(id)arg1 ;
@end

