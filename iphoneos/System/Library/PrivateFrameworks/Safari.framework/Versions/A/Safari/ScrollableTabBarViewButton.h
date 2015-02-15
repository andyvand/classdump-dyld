/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:53 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSButton.h>

@class ScrollableTabBarViewButtonLayerDelegate, NSColor, CALayer;

@interface ScrollableTabBarViewButton : NSButton {

	ScrollableTabBarViewButtonLayerDelegate* _layerDelegate;
	NSColor* _backgroundColor;
	CALayer* _backgroundLayer;
	CALayer* _centerLayer;
	CALayer* _leftBorderLayer;
	CALayer* _rightBorderLayer;
	CALayer* _topBorderLayer;
	CALayer* _bottomBorderLayer;
	char _active;
	char _showsLeftSeparator;
	char _showsRightSeparator;
	char _hasMouseOverHighlight;
	char _mouseOverHighlightShouldIncludeRightBorderFrameWidth;

}

@property (assign,getter=isActive,nonatomic) char active;                                            //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) char showsLeftSeparator;                                                //@synthesize showsLeftSeparator=_showsLeftSeparator - In the implementation block
@property (assign,nonatomic) char showsRightSeparator;                                               //@synthesize showsRightSeparator=_showsRightSeparator - In the implementation block
@property (assign,nonatomic) char hasMouseOverHighlight;                                             //@synthesize hasMouseOverHighlight=_hasMouseOverHighlight - In the implementation block
@property (assign,nonatomic) char mouseOverHighlightShouldIncludeRightBorderFrameWidth;              //@synthesize mouseOverHighlightShouldIncludeRightBorderFrameWidth=_mouseOverHighlightShouldIncludeRightBorderFrameWidth - In the implementation block
+(double)contentBoundsWidthForButtonWidth:(double)arg1 ;
-(void)setMouseOverHighlightShouldIncludeRightBorderFrameWidth:(char)arg1 ;
-(void)setShowsLeftSeparator:(char)arg1 ;
-(void)setShowsRightSeparator:(char)arg1 ;
-(void)setHasMouseOverHighlight:(char)arg1 animated:(char)arg2 ;
-(void)_setUpBackgroundLayer;
-(void)_updateBackgroundLayerImagesForActiveTab:(char)arg1 inActiveWindow:(char)arg2 ;
-(void)_setBackgroundColor:(id)arg1 withAnimation:(id)arg2 ;
-(CGRect)contentBounds;
-(void)setHasMouseOverHighlight:(char)arg1 ;
-(char)_isAnimatingBackgroundColor;
-(char)showsLeftSeparator;
-(char)showsRightSeparator;
-(char)hasMouseOverHighlight;
-(char)mouseOverHighlightShouldIncludeRightBorderFrameWidth;
-(double)leftCapWidth;
-(double)rightCapWidth;
-(char)isActive;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layout;
-(void)updateLayer;
-(char)wantsUpdateLayer;
-(void)_windowChangedKeyState;
-(void)setActive:(char)arg1 ;
@end
