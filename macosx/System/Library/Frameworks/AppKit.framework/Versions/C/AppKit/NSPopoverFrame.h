/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSVisualEffectView.h>

@class NSFloatRange;

@interface NSPopoverFrame : NSVisualEffectView {

	id _privatePopoverFrameData;
	struct {
		unsigned useDragWindowAppearance : 1;
		unsigned hasActiveShadow : 1;
		unsigned hasShadow : 1;
		unsigned invalidateShadow : 1;
		unsigned unused1 : 1;
		unsigned unused2 : 1;
		unsigned shouldInsetForAnchor : 1;
		unsigned doingSolidFillHack : 1;
		unsigned wantsDragWindowAppearance : 1;
		unsigned _reserved : 23;
	}  _flags;

}

@property (assign) unsigned long long anchorEdge; 
@property (assign) CGSize anchorSize; 
@property (assign) NSEdgeInsets contentInset; 
@property (assign) CGPoint anchorPoint; 
@property (assign) long long popoverAppearance; 
@property (assign) char shouldBlurBackground; 
@property (assign) char shouldInsetForAnchor; 
@property (setter=_setWantsDragWindowAppearance:) char _wantsDragWindowAppearance; 
@property (nonatomic,retain) NSFloatRange * rangeOfInterest1; 
@property (nonatomic,retain) NSFloatRange * rangeOfInterest2; 
+(CGRect)contentRectForFrameRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 ;
+(CGRect)frameRectForContentRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 ;
+(CGSize)minFrameSizeForMinContentSize:(CGSize)arg1 styleMask:(unsigned long long)arg2 ;
+(id)defaultAnimationForKey:(id)arg1 ;
+(CGRect)frameRectForContentRect:(CGRect)arg1 appearance:(long long)arg2 anchorSize:(CGSize)arg3 contentInset:(NSEdgeInsets)arg4 hasTitlebar:(char)arg5 ;
+(CGRect)contentRectForFrameRect:(CGRect)arg1 appearance:(long long)arg2 anchorSize:(CGSize)arg3 contentInset:(NSEdgeInsets)arg4 hasTitlebar:(char)arg5 ;
+(char)automaticallyNotifiesObserversOfAnchorPoint;
+(CGRect)frameRectForContentRect:(CGRect)arg1 appearance:(long long)arg2 anchorSize:(CGSize)arg3 contentInset:(NSEdgeInsets)arg4 ;
+(CGRect)contentRectForFrameRect:(CGRect)arg1 appearance:(long long)arg2 anchorSize:(CGSize)arg3 contentInset:(NSEdgeInsets)arg4 ;
-(void)dealloc;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setWantsLayer:(char)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(void)_setFrameNeedsDisplay:(char)arg1 ;
-(unsigned long long)styleMask;
-(char)wantsUpdateLayer;
-(char)canSmoothFontsInLayer;
-(void)setFrameSize:(CGSize)arg1 ;
-(char)isOpaque;
-(void)_windowChangedKeyState;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(void)draggingExited:(id)arg1 ;
-(void)draggingEnded:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(id)opaqueAncestor;
-(void)_setWindow:(id)arg1 ;
-(CGRect)contentRectForFrameRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 ;
-(CGRect)frameRectForContentRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 ;
-(id)initWithFrame:(CGRect)arg1 styleMask:(unsigned long long)arg2 owner:(id)arg3 ;
-(char)_canHaveToolbar;
-(char)_toolbarIsInTransition;
-(char)_toolbarIsShown;
-(char)_toolbarIsHidden;
-(char)_toolbarIsManagedByExternalWindow;
-(void)_showToolbarWithAnimation:(char)arg1 ;
-(void)_hideToolbarWithAnimation:(char)arg1 ;
-(double)_distanceFromToolbarBaseToTitlebar;
-(id)closeButton;
-(id)minimizeButton;
-(id)zoomButton;
-(CGRect)dragRectForFrameRect:(CGRect)arg1 ;
-(CGRect)titlebarRect;
-(void)_clearDragMargins;
-(void)_resetDragMargins;
-(NSEdgeInsets)contentInset;
-(void)setContentInset:(NSEdgeInsets)arg1 ;
-(void)_windowWillOrderOnScreen;
-(void)concludeDragOperation:(id)arg1 ;
-(void)shapeWindow;
-(void)tileAndSetWindowShape:(char)arg1 ;
-(CGRect)_draggableFrame;
-(void)_drawFrameShadowAndFlushContext:(id)arg1 ;
-(void)viewDidChangeBackingProperties;
-(CGRect)overlayBounds;
-(void)drawOverlayRect:(CGRect)arg1 ;
-(void)_updateWindowBackingTypeForLayer:(char)arg1 ;
-(CGPoint)anchorPoint;
-(void)setPopoverAppearance:(long long)arg1 ;
-(unsigned long long)anchorEdge;
-(void)setAnchorEdge:(unsigned long long)arg1 ;
-(char)_hasDragWindowAppearance;
-(void)_setAnchorPoint:(CGPoint)arg1 reshape:(char)arg2 ;
-(void)drawBackgroundInRect:(CGRect)arg1 ofView:(id)arg2 anchorEdge:(unsigned long long)arg3 anchorPoint:(CGPoint)arg4 ;
-(void)_setHasDragWindowAppearance:(char)arg1 ;
-(void)_addTitlebarAnimated:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setDragImage:(id)arg1 ;
-(void)_removeTitlebarAnimated:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(CGSize)anchorSize;
-(char)_hasActiveDragTypes;
-(char)_hasTitlebar;
-(void)_closeButtonPressed:(id)arg1 ;
-(void)_loadTheme;
-(void)_commonPopoverInit;
-(id)_popoverIfAvailable;
-(void)_markAnchorRectAsNeedingDisplay;
-(id)_coreUIOptionsWithAnchorEdge:(unsigned long long)arg1 anchorPoint:(CGPoint)arg2 anchorSize:(CGSize)arg3 shouldInsetForAnchor:(char)arg4 areasOfInterest:(id)arg5 ;
-(NSEdgeInsets)_defaultContentInset;
-(void)_invalidateShadow;
-(char)shouldInsetForAnchor;
-(long long)popoverAppearance;
-(void)_updatePopoverCornerMaskOnLayer:(id)arg1 ;
-(id)_metricsForPopoverFrame;
-(CGPathRef)_newMinimalAppearancePathInBounds:(CGRect)arg1 anchorEdge:(unsigned long long)arg2 arrowPosition:(double)arg3 topCapOnly:(char)arg4 arrowOffset:(double)arg5 ;
-(id)_verticalRangesForAreasOfInterest;
-(CGPathRef)_newMinimalAppearancePathInBounds:(CGRect)arg1 anchorEdge:(unsigned long long)arg2 anchorPoint:(CGPoint)arg3 topCapOnly:(char)arg4 arrowOffset:(double)arg5 ;
-(void)_drawMinimalPopoverAppearanceInRect:(CGRect)arg1 anchorEdge:(unsigned long long)arg2 anchorPoint:(CGPoint)arg3 ;
-(char)_isBorderView;
-(unsigned long long)effectiveAnchorEdge;
-(CGPoint)_adjustedForBoundsAnchorPoint:(CGPoint)arg1 anchorEdge:(unsigned long long)arg2 ;
-(id)_imageMask;
-(void)_drawImageMaskInRect:(CGRect)arg1 ;
-(void)tileAndSetWindowShape:(char)arg1 updateContentView:(char)arg2 ;
-(CGImageRef)_CGImageMask;
-(CGRect)_arrowRect;
-(void)_tileAndRedisplay:(char)arg1 updateContentView:(char)arg2 ;
-(void)setRangeOfInterest:(id*)arg1 sourceRange:(id)arg2 ;
-(void)setAnchorSize:(CGSize)arg1 ;
-(void)setShouldInsetForAnchor:(char)arg1 ;
-(char)shouldBlurBackground;
-(void)setShouldBlurBackground:(char)arg1 ;
-(id)_dragImage;
-(char)_wantsDragWindowAppearance;
-(void)_setWantsDragWindowAppearance:(char)arg1 ;
-(void)_drawHUDPopoverAppearanceInRect:(CGRect)arg1 anchorEdge:(unsigned long long)arg2 anchorPoint:(CGPoint)arg3 ;
-(NSFloatRange *)rangeOfInterest1;
-(NSFloatRange *)rangeOfInterest2;
-(void)setRangeOfInterest1:(NSFloatRange *)arg1 ;
-(void)setRangeOfInterest2:(NSFloatRange *)arg1 ;
@end

