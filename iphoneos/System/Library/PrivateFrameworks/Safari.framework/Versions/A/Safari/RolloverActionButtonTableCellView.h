/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:53 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSTableCellView.h>

@protocol RolloverActionButtonTableCellViewDelegate;
@class NSArray, RolloverImageButton, NSImage, NSTrackingArea;

@interface RolloverActionButtonTableCellView : NSTableCellView {

	char _cancelRemoveButtonAnimation;
	NSArray* _layoutConstraints;
	char _showsActionButton;
	int _actionButtonState;
	id<RolloverActionButtonTableCellViewDelegate> _delegate;
	RolloverImageButton* _actionButton;
	NSImage* _actionButtonImage;
	NSImage* _actionButtonRolloverImage;
	NSImage* _actionButtonPressedImage;
	double _actionButtonVerticalMargin;
	double _actionButtonHorizontalMargin;
	double _actionButtonYOffsetWhenVerticallyCentered;
	double _actionButtonAnimationDuration;
	NSTrackingArea* _trackingArea;

}

@property (assign,nonatomic,__weak) id<RolloverActionButtonTableCellViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int actionButtonState;                                                      //@synthesize actionButtonState=_actionButtonState - In the implementation block
@property (assign,nonatomic,__weak) RolloverImageButton * actionButton;                                  //@synthesize actionButton=_actionButton - In the implementation block
@property (assign,nonatomic) char showsActionButton;                                                     //@synthesize showsActionButton=_showsActionButton - In the implementation block
@property (nonatomic,retain) NSImage * actionButtonImage;                                                //@synthesize actionButtonImage=_actionButtonImage - In the implementation block
@property (nonatomic,retain) NSImage * actionButtonRolloverImage;                                        //@synthesize actionButtonRolloverImage=_actionButtonRolloverImage - In the implementation block
@property (nonatomic,retain) NSImage * actionButtonPressedImage;                                         //@synthesize actionButtonPressedImage=_actionButtonPressedImage - In the implementation block
@property (assign,nonatomic) double actionButtonVerticalMargin;                                          //@synthesize actionButtonVerticalMargin=_actionButtonVerticalMargin - In the implementation block
@property (assign,nonatomic) double actionButtonHorizontalMargin;                                        //@synthesize actionButtonHorizontalMargin=_actionButtonHorizontalMargin - In the implementation block
@property (assign,nonatomic) double actionButtonYOffsetWhenVerticallyCentered;                           //@synthesize actionButtonYOffsetWhenVerticallyCentered=_actionButtonYOffsetWhenVerticallyCentered - In the implementation block
@property (assign,nonatomic) double actionButtonAnimationDuration;                                       //@synthesize actionButtonAnimationDuration=_actionButtonAnimationDuration - In the implementation block
@property (nonatomic,retain) NSTrackingArea * trackingArea;                                              //@synthesize trackingArea=_trackingArea - In the implementation block
-(RolloverImageButton *)actionButton;
-(void)willShowActionButton;
-(void)didHideActionButton;
-(void)setActionButtonImage:(NSImage *)arg1 ;
-(void)setActionButtonHorizontalMargin:(double)arg1 ;
-(void)setActionButtonState:(int)arg1 ;
-(void)setActionButtonVerticalMargin:(double)arg1 ;
-(void)setShowsActionButton:(char)arg1 ;
-(void)setTrackingArea:(NSTrackingArea *)arg1 ;
-(void)setActionButtonRolloverImage:(NSImage *)arg1 ;
-(void)setActionButtonPressedImage:(NSImage *)arg1 ;
-(void)setActionButtonAnimationDuration:(double)arg1 ;
-(int)actionButtonState;
-(void)_positionActionButton;
-(char)_enhancedAccessibilityEnabled;
-(void)_removeTrackingArea;
-(void)_addTrackingArea;
-(void)_actionButtonClicked:(id)arg1 ;
-(void)setActionButtonYOffsetWhenVerticallyCentered:(double)arg1 ;
-(void)_performSharedSetup;
-(void)setActionButton:(RolloverImageButton *)arg1 ;
-(char)showsActionButton;
-(NSImage *)actionButtonImage;
-(NSImage *)actionButtonRolloverImage;
-(NSImage *)actionButtonPressedImage;
-(double)actionButtonVerticalMargin;
-(double)actionButtonHorizontalMargin;
-(double)actionButtonYOffsetWhenVerticallyCentered;
-(double)actionButtonAnimationDuration;
-(void)setDelegate:(id<RolloverActionButtonTableCellViewDelegate>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<RolloverActionButtonTableCellViewDelegate>)delegate;
-(NSTrackingArea *)trackingArea;
-(void)viewDidMoveToSuperview;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)viewWillMoveToSuperview:(id)arg1 ;
-(void)updateTrackingAreas;
@end

