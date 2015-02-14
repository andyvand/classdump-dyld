/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Backup.framework/Versions/A/Backup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Backup/Backup-Structs.h>
#import <Backup/BU_TMPushButton.h>

@interface BU_TMToolbarPushButton : BU_TMPushButton {

	BOOL fDrawLeftCap;
	BOOL fDrawRightCap;
	CGRect fLeftDividerBounds;
	CGRect fRightDividerBounds;
	TFCGImage* fCenterImage;
	TFCGImage* fCenterPressedImage;
	TFCGImage* fLeftCapImage;
	TFCGImage* fLeftCapPressedImage;
	TFCGImage* fRightCapImage;
	TFCGImage* fRightCapPressedImage;
	CGImageRef fCachedEnabledImage;
	CGImageRef fCachedPressedImage;
	CGImageRef fCachedDisabledImage;

}
-(CTFontRef)labelFont;
-(CGRect)textFrame;
-(CGSize)optimalSize;
-(TFCGImage*)centerImage;
-(id)init;
-(void)dealloc;
-(void)drawInContext:(CGContextRef)arg1 ;
-(CGImageRef)cachedDrawingImage;
-(TFCGImage*)loadImageWithName:(const char*)arg1 into:(TFCGImage*)arg2 ;
-(TFCGImage*)leftCapImage;
-(double)dividerAngleForPosition:(double)arg1 withEndCapAngle:(double)arg2 ;
-(double)dividerWidthForPosition:(double)arg1 withEndCapAngle:(double)arg2 ;
-(TFCGImage*)rightCapImage;
-(CGColorRef)shadowTextColor;
-(void)drawEmbossedText:(CGContextRef)arg1 withShadowColor:(CGColorRef)arg2 ;
-(double)labelHorizontalCenter;
-(double)verticalTextOffset;
-(CGSize)embossedStringSize:(CFStringRef)arg1 ;
-(BOOL)blurText;
-(void)drawPerspectiveText:(CGContextRef)arg1 withLeftOffset:(double)arg2 withRightOffset:(double)arg3 withBlur:(BOOL)arg4 ;
-(TFCGImage*)leftCapPressedImage;
-(CGPathRef)createLeftFillPath;
-(CGImageRef)createImageMaskWithPath:(CGPathRef)arg1 inverted:(BOOL)arg2 ;
-(TFCGImage*)centerPressedImage;
-(CGPathRef)createRightFillPath;
-(TFCGImage*)rightCapPressedImage;
-(void)renderIntoContext:(CGContextRef)arg1 ;
-(void)drawLabel:(CGContextRef)arg1 ;
-(void)drawDividerLines:(CGContextRef)arg1 atX:(double)arg2 withWidth:(double)arg3 ;
-(void)setDrawLeftCap:(BOOL)arg1 ;
-(void)setDrawRightCap:(BOOL)arg1 ;
-(void)setLeftDividerBounds:(CGRect)arg1 rightDividerBounds:(CGRect)arg2 ;
-(void)updateRenderCache;
-(void)drawBackground:(CGContextRef)arg1 ;
@end

