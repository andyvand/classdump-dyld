/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:30:28 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@interface CUIShapeEffectStack : NSObject {

	bool hasColorOverlay;
	SCD_Struct_CU15 colorOverlay;
	bool hasInnerGradient;
	SCD_Struct_CU27 innerGradient;
	bool hasInnerGlow;
	SCD_Struct_CU28 innerGlow;
	bool hasInnerShadow;
	SCD_Struct_CU29 insideShadow;
	bool hasOuterGlow;
	SCD_Struct_CU28 outerGlow;
	bool hasEngraveShadow;
	SCD_Struct_CU29 engraveShadow;
	bool hasExtraShadow;
	SCD_Struct_CU29 extraShadow;
	bool hasBevelEmboss;
	SCD_Struct_CU30 emboss;
	float scalefactor;
	int renderStrategy;

}
+(id)colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 ;
+(id)sharedCIContext;
+(id)shapeEffectSingleBlurFrom:(id)arg1 withInteriorFill:(id)arg2 offset:(CGPoint)arg3 blurSize:(float)arg4 innerGlowRed:(float)arg5 innerGlowGreen:(float)arg6 innerGlowBlue:(float)arg7 innerGlowOpacity:(float)arg8 innerShadowRed:(float)arg9 innerShadowGreen:(float)arg10 innerShadowBlue:(float)arg11 innerShadowOpacity:(float)arg12 outerGlowRed:(float)arg13 outerGlowGreen:(float)arg14 outerGlowBlue:(float)arg15 outerGlowOpacity:(float)arg16 outerShadowRed:(float)arg17 outerShadowGreen:(float)arg18 outerShadowBlue:(float)arg19 outerShadowOpacity:(float)arg20 hasInsideShadowBlur:(BOOL)arg21 hasOutsideShadowBlur:(BOOL)arg22 ;
+(id)innerGlowFrom:(id)arg1 withRadius:(float)arg2 red:(float)arg3 green:(float)arg4 blue:(float)arg5 opacity:(float)arg6 ;
+(id)innerShadowFrom:(id)arg1 withOffset:(CGPoint)arg2 radius:(float)arg3 red:(float)arg4 green:(float)arg5 blue:(float)arg6 opacity:(float)arg7 ;
+(id)composite:(id)arg1 over:(id)arg2 ;
+(id)gradientWithParameters:(SCD_Struct_CU27*)arg1 inRect:(CGRect)arg2 ;
+(id)outerGlowFrom:(id)arg1 withRadius:(float)arg2 red:(float)arg3 green:(float)arg4 blue:(float)arg5 opacity:(float)arg6 ;
+(id)outerShadowFrom:(id)arg1 withOffset:(CGPoint)arg2 radius:(float)arg3 red:(float)arg4 green:(float)arg5 blue:(float)arg6 opacity:(float)arg7 ;
+(id)bevelEmbossFrom:(id)arg1 withSize:(unsigned)arg2 soften:(unsigned)arg3 angle:(float)arg4 altitude:(float)arg5 highlightRed:(float)arg6 highlightGreen:(float)arg7 highlightBlue:(float)arg8 highlightOpacity:(float)arg9 shadowRed:(float)arg10 shadowGreen:(float)arg11 shadowBlue:(float)arg12 shadowOpacity:(float)arg13 ;
+(id)composite:(id)arg1 into:(id)arg2 ;
+(id)imageFromBlendWithMask:(id)arg1 foreground:(id)arg2 background:(id)arg3 ;
+(id)preferredCIContextOptions;
+(id)offset:(id)arg1 by:(CGPoint)arg2 ;
+(id)adjustOpacity:(id)arg1 by:(float)arg2 ;
+(id)pixelZoomed:(id)arg1 scale:(int)arg2 about:(CGPoint)arg3 ;
+(id)unsharpMask:(id)arg1 radius:(float)arg2 intensity:(float)arg3 ;
+(id)composite:(id)arg1 outOf:(id)arg2 ;
+(id)composite:(id)arg1 atop:(id)arg2 ;
+(id)image:(id)arg1 withOpacity:(float)arg2 ;
+(id)blur:(id)arg1 radius:(float)arg2 ;
+(id)colorWithGray:(float)arg1 alpha:(float)arg2 ;
+(id)rectangle:(CGRect)arg1 withRed:(float)arg2 green:(float)arg3 blue:(float)arg4 alpha:(float)arg5 ;
+(id)shadowFrom:(id)arg1 red:(float)arg2 green:(float)arg3 blue:(float)arg4 opacity:(float)arg5 ;
+(id)invert:(id)arg1 ;
-(id)effectPreset;
-(id)initWithEffectPreset:(id)arg1 ;
-(id)processedImageFromShapeImage:(id)arg1 withScale:(float)arg2 ;
-(CGRect)effectPaddingWithScale:(float)arg1 ;
-(void)scaleEffectParametersBy:(float)arg1 ;
-(void)_updateRenderStrategyFromEffect:(unsigned)arg1 ;
-(void)_precompositeColorOverlayInnerGradient;
-(void)_setColorFillFromPreset:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)_setInteriorGradientFromPreset:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)_addInnerGlowFromPreset:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)_addInnerShadowFromPreset:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)_addOuterGlowFromPreset:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)_addEngraveShadowFromPreset:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)_addBevelEmbossFromPreset:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)_addExtraShadowFromPreset:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)imageWithInteriorGradientFillOfImage:(id)arg1 ;
-(id)imageWithColorOverlayOfImage:(id)arg1 ;
-(id)imageWithInnerGlowOfImage:(id)arg1 ;
-(id)imageWithInnerShadowOfImage:(id)arg1 ;
-(id)imageWithOuterGlowOfImage:(id)arg1 ;
-(id)imageWithEngraveShadowOfImage:(id)arg1 ;
-(id)imageWithExtraShadowOfImage:(id)arg1 ;
-(id)imageWithBevelEmbossOfImage:(id)arg1 ;
-(id)imageWithSingleBlurShapeEffectOfImage:(id)arg1 withInteriorFill:(id)arg2 ;
-(id)optimizedSingleBlurEffectCompositeWithShapeImage:(id)arg1 ;
-(id)standardEffectCompositeWithShapeImage:(id)arg1 ;
-(id)compositeEffectStackWithShapeImage:(id)arg1 withScale:(float)arg2 ;
-(CGImageRef)newFlattenedImageFromShapeCGImage:(CGImageRef)arg1 withScale:(float)arg2 ;
-(void)applyCustomForegroundColor:(CGColorRef)arg1 ;
-(SCD_Struct_CU15)effectInsetsWithScale:(float)arg1 ;
-(id)processedImageFromShapeImage:(id)arg1 ;
-(CGImageRef)newFlattenedImageFromShapeCGImage:(CGImageRef)arg1 withScale:(float)arg2 ciContext:(id)arg3 ;
-(CGImageRef)newFlattenedImageFromShapeCGImage:(CGImageRef)arg1 ;
-(id)processedImageFromShapePath:(CGPathRef)arg1 inRect:(CGRect)arg2 ;
@end
