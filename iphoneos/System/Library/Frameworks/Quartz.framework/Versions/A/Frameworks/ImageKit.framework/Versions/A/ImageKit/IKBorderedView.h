/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <AppKit/NSView.h>

@class NSColor, NSGradient, NSView;

@interface IKBorderedView : NSView {

	NSColor* _topBorderColor;
	NSColor* _bottomBorderColor;
	NSColor* _leftBorderColor;
	NSColor* _rightBorderColor;
	NSColor* _topInactiveBorderColor;
	NSColor* _bottomInactiveBorderColor;
	NSColor* _leftInactiveBorderColor;
	NSColor* _rightInactiveBorderColor;
	NSColor* _shadowColor;
	NSColor* _backgroundColor;
	NSColor* _inactiveBackgroundColor;
	NSGradient* _backgroundGradient;
	NSGradient* _inactiveBackgroundGradient;
	NSView* _contentView;
	int _verticalContentViewResizingMode;
	int _horizontalContentViewResizingMode;
	int _borderSides;
	int _shadowSides;

}

@property (assign,nonatomic) int borderSides;                                    //@synthesize borderSides=_borderSides - In the implementation block
@property (assign,nonatomic) int shadowSides;                                    //@synthesize shadowSides=_shadowSides - In the implementation block
@property (nonatomic,copy) NSColor * topBorderColor;                             //@synthesize topBorderColor=_topBorderColor - In the implementation block
@property (nonatomic,copy) NSColor * bottomBorderColor;                          //@synthesize bottomBorderColor=_bottomBorderColor - In the implementation block
@property (nonatomic,copy) NSColor * leftBorderColor;                            //@synthesize leftBorderColor=_leftBorderColor - In the implementation block
@property (nonatomic,copy) NSColor * rightBorderColor;                           //@synthesize rightBorderColor=_rightBorderColor - In the implementation block
@property (nonatomic,copy) NSColor * topInactiveBorderColor;                     //@synthesize topInactiveBorderColor=_topInactiveBorderColor - In the implementation block
@property (nonatomic,copy) NSColor * bottomInactiveBorderColor;                  //@synthesize bottomInactiveBorderColor=_bottomInactiveBorderColor - In the implementation block
@property (nonatomic,copy) NSColor * leftInactiveBorderColor;                    //@synthesize leftInactiveBorderColor=_leftInactiveBorderColor - In the implementation block
@property (nonatomic,copy) NSColor * rightInactiveBorderColor;                   //@synthesize rightInactiveBorderColor=_rightInactiveBorderColor - In the implementation block
@property (nonatomic,copy) NSColor * shadowColor;                                //@synthesize shadowColor=_shadowColor - In the implementation block
@property (nonatomic,copy) NSColor * backgroundColor;                            //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSColor * inactiveBackgroundColor;                    //@synthesize inactiveBackgroundColor=_inactiveBackgroundColor - In the implementation block
@property (nonatomic,copy) NSGradient * backgroundGradient;                      //@synthesize backgroundGradient=_backgroundGradient - In the implementation block
@property (nonatomic,copy) NSGradient * inactiveBackgroundGradient;              //@synthesize inactiveBackgroundGradient=_inactiveBackgroundGradient - In the implementation block
@property (readonly) CGRect contentRect; 
@property (assign,nonatomic) NSView * contentView;                               //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) int horizontalContentViewResizingMode;              //@synthesize horizontalContentViewResizingMode=_horizontalContentViewResizingMode - In the implementation block
@property (assign,nonatomic) int verticalContentViewResizingMode;                //@synthesize verticalContentViewResizingMode=_verticalContentViewResizingMode - In the implementation block
-(void)setBottomBorderColor:(NSColor *)arg1 ;
-(NSColor *)bottomBorderColor;
-(int)borderSides;
-(void)setBorderSides:(int)arg1 ;
-(void)setTopBorderColor:(NSColor *)arg1 ;
-(void)setLeftBorderColor:(NSColor *)arg1 ;
-(void)setRightBorderColor:(NSColor *)arg1 ;
-(void)setTopInactiveBorderColor:(NSColor *)arg1 ;
-(void)setBottomInactiveBorderColor:(NSColor *)arg1 ;
-(void)setLeftInactiveBorderColor:(NSColor *)arg1 ;
-(void)setRightInactiveBorderColor:(NSColor *)arg1 ;
-(char)isShowingShadow;
-(int)shadowSides;
-(SCD_Struct_IK19)_shadowInset;
-(SCD_Struct_IK19)_contentInset;
-(CGSize)boundSizeForContentSize:(CGSize)arg1 ;
-(void)_contentViewFrameDidChange:(id)arg1 ;
-(int)horizontalContentViewResizingMode;
-(int)verticalContentViewResizingMode;
-(char)_isInactive;
-(NSGradient *)inactiveBackgroundGradient;
-(NSColor *)inactiveBackgroundColor;
-(NSGradient *)backgroundGradient;
-(CGRect)_contentRectExcludingShadow;
-(NSColor *)topInactiveBorderColor;
-(NSColor *)bottomInactiveBorderColor;
-(NSColor *)leftInactiveBorderColor;
-(NSColor *)rightInactiveBorderColor;
-(NSColor *)topBorderColor;
-(NSColor *)leftBorderColor;
-(NSColor *)rightBorderColor;
-(void)drawBorderInRect:(CGRect)arg1 ;
-(void)_setBorderSides:(int)arg1 ;
-(void)setShadowSide:(int)arg1 ;
-(void)setInactiveBackgroundColor:(NSColor *)arg1 ;
-(void)setBackgroundGradient:(NSGradient *)arg1 ;
-(void)setInactiveBackgroundGradient:(NSGradient *)arg1 ;
-(void)setHorizontalContentViewResizingMode:(int)arg1 ;
-(void)setVerticalContentViewResizingMode:(int)arg1 ;
-(void)setAllBordersToColor:(id)arg1 ;
-(void)setAllInactiveBordersToColor:(id)arg1 ;
-(CGSize)frameSizeForContentSize:(CGSize)arg1 ;
-(void)layoutTopDown;
-(void)layoutBottomUp;
-(void)setShadowSides:(int)arg1 ;
-(void)setBackgroundColor:(NSColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(NSView *)contentView;
-(void)setContentView:(NSView *)arg1 ;
-(NSColor *)backgroundColor;
-(void)setShadowColor:(NSColor *)arg1 ;
-(NSColor *)shadowColor;
-(CGRect)contentRect;
-(SCD_Struct_IK19)_borderInset;
-(void)drawBackgroundInRect:(CGRect)arg1 ;
@end

