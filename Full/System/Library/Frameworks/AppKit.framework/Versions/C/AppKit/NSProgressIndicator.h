/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>
#import <AppKit/NSAccessibilityProgressIndicator.h>

@class NSString;

@interface NSProgressIndicator : NSView <NSAccessibilityProgressIndicator> {

	char _isBezeled;
	char _isIndeterminate;
	char _threadedAnimation;
	double _minimum;
	double _maximum;
	double _value;
	unsigned _animationIndex;
	double _animationDelay;
	id _timer;
	double _drawingWidth;
	id _roundColor;
	id _reserved;
	struct {
		unsigned isSpinning : 1;
		unsigned isVector : 1;
		unsigned isLocked : 1;
		unsigned controlTint : 3;
		unsigned controlSize : 2;
		unsigned style : 1;
		unsigned _delayedStartup : 1;
		unsigned hideWhenStopped : 1;
		unsigned revive : 1;
		unsigned _temporarilyBlockHeartBeating : 1;
		unsigned _isHidden : 1;
		unsigned _isHeartBeatInstalled : 1;
		unsigned _customRenderer : 1;
		unsigned _lastFrame : 8;
		unsigned _isDetaching : 1;
		unsigned RESERVED : 7;
	}  _progressIndicatorFlags;
	id _NSProgressIndicatorReserved1;

}

@property (getter=isIndeterminate) char indeterminate; 
@property (getter=isBezeled) char bezeled; 
@property (assign) unsigned long long controlTint; 
@property (assign) unsigned long long controlSize; 
@property (assign) double doubleValue; 
@property (assign) double minValue; 
@property (assign) double maxValue; 
@property (assign) char usesThreadedAnimation; 
@property (assign) unsigned long long style; 
@property (getter=isDisplayedWhenStopped) char displayedWhenStopped; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)_controlTintChanged:(id)arg1 ;
+(id)_barberImage:(double)arg1 ;
+(id)_gaugeImage:(double)arg1 ;
+(id)_createImage:(id)arg1 :(id)arg2 :(double)arg3 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)style;
-(char)accessibilityIsIgnored;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)drawRect:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityRoleAttribute;
-(void)setFrameOrigin:(CGPoint)arg1 ;
-(void)setControlTint:(unsigned long long)arg1 ;
-(void)sizeToFit;
-(double)doubleValue;
-(id)accessibilityValue;
-(char)isFlipped;
-(void)setFrameSize:(CGSize)arg1 ;
-(char)isOpaque;
-(char)allowsVibrancy;
-(NSEdgeInsets)alignmentRectInsets;
-(char)_contentHuggingDefault_isUsuallyFixedWidth;
-(char)_contentHuggingDefault_isUsuallyFixedHeight;
-(void)_windowChangedKeyState;
-(unsigned long long)controlSize;
-(void)setControlSize:(unsigned long long)arg1 ;
-(id)_invalidateGStatesForTree;
-(void)viewDidMoveToSuperview;
-(void)setBezeled:(char)arg1 ;
-(void)_setWindow:(id)arg1 ;
-(void)_commonInit;
-(char)isBezeled;
-(char)_needRedrawOnWindowChangedKeyState;
-(void)setDoubleValue:(double)arg1 ;
-(void)heartBeat:(SCD_Struct_NS20*)arg1 ;
-(id)accessibilityValueAttribute;
-(char)accessibilityIsValueAttributeSettable;
-(unsigned long long)controlTint;
-(void)viewWillMoveToSuperview:(id)arg1 ;
-(void)_clipViewAncestorDidScroll:(id)arg1 ;
-(double)maxValue;
-(double)minValue;
-(id)_vibrancyFilter;
-(void)setMinValue:(double)arg1 ;
-(void)setMaxValue:(double)arg1 ;
-(id)accessibilityMinValueAttribute;
-(char)accessibilityIsMinValueAttributeSettable;
-(id)accessibilityMaxValueAttribute;
-(char)accessibilityIsMaxValueAttributeSettable;
-(id)accessibilityOrientationAttribute;
-(char)accessibilityIsOrientationAttributeSettable;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)setUsesThreadedAnimation:(char)arg1 ;
-(void)startAnimation:(id)arg1 ;
-(void)stopAnimation:(id)arg1 ;
-(void)_setSurface:(id)arg1 ;
-(void)setIndeterminate:(char)arg1 ;
-(void)_systemColorChanged:(id)arg1 ;
-(void)_stopAnimationWithWait:(char)arg1 andRedisplay:(char)arg2 ;
-(void)_setCompositingImage:(id)arg1 ;
-(void)_setCoreUIOptionsForBar:(CFDictionaryRef)arg1 progressOnly:(char)arg2 ;
-(id)roundDeterminateColor;
-(void)_setCoreUIOptionsForSpinningIndicator:(CFDictionaryRef)arg1 determinate:(char)arg2 flipped:(char)arg3 ;
-(char)_isThreadedAnimationLooping;
-(void)_drawThemeBackground;
-(void)_updateSurfaceWhenInAnInclusiveLayer;
-(void)_setupSurfaceAndStartSpinning:(char)arg1 ;
-(id)_compositingImage;
-(void)_drawDeterminateSpinningIndicator:(id)arg1 ;
-(char)_allowsCoreUI;
-(char)_needsCompositingImageForThreadedDrawing;
-(void)_captureCompositingImageForThreadedDrawingInRect:(CGRect)arg1 ;
-(void)_drawBar:(char)arg1 ;
-(void)_drawThemeProgressArea:(char)arg1 ;
-(void)_stopAnimationWithWait:(char)arg1 ;
-(void)_reconfigureAnimationState:(char)arg1 ;
-(void)_installHeartBeat:(char)arg1 ;
-(void)_animationIdler:(id)arg1 ;
-(char)isDisplayedWhenStopped;
-(void)_startAnimationWithThread:(char)arg1 ;
-(char)usesVectorMovement;
-(void)_windowExposed:(id)arg1 ;
-(char)usesThreadedAnimation;
-(CGRect)_getGaugeFrame;
-(CGRect)_getProgressFrame;
-(void)_fillGrayRect:(CGRect*)arg1 with:(long long)arg2 ;
-(CGRect)_getRemainderFrame;
-(double)_getPosition:(double)arg1 ;
-(void)setRoundDeterminateColor:(id)arg1 ;
-(void)_windowOcclusionChanged:(id)arg1 ;
-(void)_orderFrontSurfacesIfNotHidden;
-(char)isIndeterminate;
-(void)setUsesVectorMovement:(char)arg1 ;
-(void)incrementBy:(double)arg1 ;
-(void)setDisplayedWhenStopped:(char)arg1 ;
-(void)_drawWindowsGaugeRects:(CGRect)arg1 ;
-(void)_drawAnimationStep;
-(void)_drawProgressArea;
-(void)_drawFrame;
-(void)_drawRemainderArea;
-(double)_desiredSurfaceResolution;
-(void)setSpinningTint:(long long)arg1 ;
-(long long)spinningTint;
-(void)_surfaceResized:(id)arg1 ;
-(void)viewDidHide;
-(void)viewDidUnhide;
-(unsigned long long)_proAnimationIndex;
-(void)_setProAnimationIndex:(unsigned long long)arg1 ;
-(char)_proIsSpinning;
-(void)_setProRevive:(char)arg1 ;
-(char)_proDelayedStartup;
-(void)_setProDelayedStartup:(char)arg1 ;
-(double)_proDrawingWidth;
-(void)_setProDrawingWidth:(double)arg1 ;
-(double)animationDelay;
-(void)setAnimationDelay:(double)arg1 ;
-(void)animate:(id)arg1 ;
-(id)ns_widgetType;
@end

