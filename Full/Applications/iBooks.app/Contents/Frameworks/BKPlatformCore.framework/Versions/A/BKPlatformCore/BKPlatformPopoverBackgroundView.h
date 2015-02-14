/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/BKPlatformCore.framework/Versions/A/BKPlatformCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BKPlatformCore/BKPlatformCore-Structs.h>
#import <AppKit/NSView.h>

@class NSView, CAShapeLayer;

@interface BKPlatformPopoverBackgroundView : NSView {

	char _topLeftCornerRadiusIsZero;
	char _topRightCornerRadiusIsZero;
	unsigned _chevronEdge;
	NSView* _popoverContentView;
	double _chevronHeight;
	double _chevronWidth;
	double _cornerRadius;
	double _lineSize;
	NSView* _layerHostingView;
	CAShapeLayer* _fillLayer;
	CAShapeLayer* _strokeLayer;
	CGPoint _chevronPoint;
	CGRect _screenTargetRect;
	CGRect _targetRect;

}

@property (retain) NSView * popoverContentView;                  //@synthesize popoverContentView=_popoverContentView - In the implementation block
@property (assign) unsigned chevronEdge;                         //@synthesize chevronEdge=_chevronEdge - In the implementation block
@property (assign) CGPoint chevronPoint;                         //@synthesize chevronPoint=_chevronPoint - In the implementation block
@property (assign) double chevronHeight;                         //@synthesize chevronHeight=_chevronHeight - In the implementation block
@property (assign) double chevronWidth;                          //@synthesize chevronWidth=_chevronWidth - In the implementation block
@property (assign) double cornerRadius;                          //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign) double lineSize;                              //@synthesize lineSize=_lineSize - In the implementation block
@property (assign) CGRect screenTargetRect;                      //@synthesize screenTargetRect=_screenTargetRect - In the implementation block
@property (assign) char topLeftCornerRadiusIsZero;               //@synthesize topLeftCornerRadiusIsZero=_topLeftCornerRadiusIsZero - In the implementation block
@property (assign) char topRightCornerRadiusIsZero;              //@synthesize topRightCornerRadiusIsZero=_topRightCornerRadiusIsZero - In the implementation block
@property (assign) CGRect targetRect;                            //@synthesize targetRect=_targetRect - In the implementation block
@property (retain) NSView * layerHostingView;                    //@synthesize layerHostingView=_layerHostingView - In the implementation block
@property (retain) CAShapeLayer * fillLayer;                     //@synthesize fillLayer=_fillLayer - In the implementation block
@property (retain) CAShapeLayer * strokeLayer;                   //@synthesize strokeLayer=_strokeLayer - In the implementation block
-(void)setChevronHeight:(double)arg1 ;
-(void)setChevronWidth:(double)arg1 ;
-(double)chevronWidth;
-(void)setTopLeftCornerRadiusIsZero:(char)arg1 ;
-(char)topLeftCornerRadiusIsZero;
-(void)setTopRightCornerRadiusIsZero:(char)arg1 ;
-(void)setPopoverContentView:(NSView *)arg1 ;
-(void)setLayerHostingView:(NSView *)arg1 ;
-(CGRect)screenTargetRect;
-(CGPathRef)p_createPathForBounds:(CGRect)arg1 stroke:(char)arg2 outChevronPoint:(CGPoint*)arg3 ;
-(NSView *)popoverContentView;
-(CGRect)p_contentViewFrameForBounds:(CGRect)arg1 ;
-(unsigned)chevronEdge;
-(double)chevronHeight;
-(double)lineSize;
-(void)updateEdge;
-(NSView *)layerHostingView;
-(void)setStrokeLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)strokeLayer;
-(void)setFillLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)fillLayer;
-(void)p_updatePathInBounds:(CGRect)arg1 animated:(char)arg2 ;
-(char)topRightCornerRadiusIsZero;
-(void)setFrame:(CGRect)arg1 animated:(char)arg2 ;
-(CGPoint)chevronPoint;
-(void)setChevronPoint:(CGPoint)arg1 ;
-(void)setChevronEdge:(unsigned)arg1 ;
-(void)setLineSize:(double)arg1 ;
-(void)setScreenTargetRect:(CGRect)arg1 ;
-(CGRect)targetRect;
-(void)setTargetRect:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateLayer;
-(id)hitTest:(CGPoint)arg1 ;
-(char)wantsLayer;
-(double)cornerRadius;
-(char)wantsUpdateLayer;
-(void)setCornerRadius:(double)arg1 ;
-(void)viewDidMoveToWindow;
-(void)setup;
@end

