/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeGradientDrawing.h>

@interface CUIThemeGradient : NSObject <CUIThemeGradientDrawing> {

	id gradientEvaluator;
	CGFunctionRef colorShader;
	CGColorSpaceRef colorSpace;

}
-(int)blendMode;
-(id)colorStops;
-(id)opacityStops;
-(double)smoothingCoefficient;
-(char)isDithered;
-(void)drawInRect:(CGRect)arg1 angle:(double)arg2 withContext:(CGContextRef)arg3 ;
-(void)drawInRect:(CGRect)arg1 relativeCenterPosition:(CGPoint)arg2 withContext:(CGContextRef)arg3 ;
-(psdGradientColor)_psdGradientColorWithColor:(id)arg1 colorSpace:(CGColorSpaceRef)arg2 ;
-(id)initWithColors:(id)arg1 colorlocations:(id)arg2 colorMidpoints:(id)arg3 opacities:(id)arg4 opacityLocations:(id)arg5 opacityMidpoints:(id)arg6 smoothingCoefficient:(double)arg7 fillColor:(id)arg8 colorSpace:(CGColorSpaceRef)arg9 dither:(char)arg10 ;
-(id)_psdGradientColorStopsWithColors:(id)arg1 locations:(id)arg2 colorSpace:(CGColorSpaceRef)arg3 ;
-(id)_psdGradientOpacityStopsWithOpacities:(id)arg1 locations:(id)arg2 ;
-(id)_initWithGradientEvaluator:(id)arg1 colorSpace:(CGColorSpaceRef)arg2 ;
-(id)_colorFromPSDGradientColor:(psdGradientColor)arg1 ;
-(void)drawFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 options:(unsigned long long)arg3 withContext:(CGContextRef)arg4 ;
-(CGFunctionRef)_newColorShaderForDistance:(double)arg1 ;
-(CGFunctionRef)colorShader;
-(id)initWithColors:(id)arg1 colorlocations:(id)arg2 colorMidpoints:(id)arg3 opacities:(id)arg4 opacityLocations:(id)arg5 opacityMidpoints:(id)arg6 smoothingCoefficient:(double)arg7 fillColor:(id)arg8 colorSpace:(CGColorSpaceRef)arg9 ;
-(id)colorLocations;
-(id)opacityLocations;
-(void)dealloc;
-(id)fillColor;
-(void)drawInRect:(CGRect)arg1 angle:(double)arg2 ;
-(void)drawFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 options:(unsigned long long)arg3 ;
-(id)interpolatedColorAtLocation:(double)arg1 ;
@end
