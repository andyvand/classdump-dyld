/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:16 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QuartzComposer/QuartzComposer-Structs.h>
@interface QCPixelFormat : NSObject {

	void** _unused[4];

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(id)pixelFormatRGBA8;
+(id)pixelFormatRGBAf;
+(id)pixelFormatBGRA8;
+(id)pixelFormatRGBAh;
+(id)pixelFormatRGBA16;
+(id)pixelFormat422YpCbCr8_601;
+(id)pixelFormatsWithCompatibilities:(unsigned long long)arg1 pixelColorModel:(int)arg2 pixelAlpha:(int)arg3 pixelType:(int)arg4 ;
+(id)pixelFormatARGB8;
+(id)pixelFormat422YpCbCr8_709;
+(id)pixelFormatYUVS;
+(id)pixelFormatsWithCompatibility:(unsigned long long)arg1 ;
+(id)pixelFormatRGB8;
+(id)pixelFormatIf;
+(id)pixelFormatI16;
+(id)pixelFormatI8;
+(id)pixelFormatRGBf;
+(id)pixelFormatRGB16;
+(id)pixelFormatRGBX8;
+(id)pixelFormatXRGB8;
+(id)pixelFormatBGRX8;
+(id)pixelFormatCMYKf;
+(id)pixelFormatCMYK16;
+(id)pixelFormatCMYK8;
+(id)allPixelFormats;
+(id)findPixelFormat:(id)arg1 withColorSpace:(CGColorSpaceRef)arg2 closestToFormats:(id)arg3 ;
+(id)defaultClosestPixelFormat:(id)arg1 withColorSpace:(CGColorSpaceRef)arg2 ;
+(void)registerPixelFormat:(id)arg1 ;
+(id)pixelFormatRGBh;
+(id)pixelFormatIh;
+(id)pixelFormatKYMC8;
+(id)pixelFormatWithName:(id)arg1 ;
+(id)pixelFormatM_I8;
+(id)pixelFormatM_I16;
+(id)pixelFormatM_Ih;
+(id)pixelFormatM_If;
+(id)pixelFormatsForElementSize:(unsigned long long)arg1 type:(int)arg2 ;
-(id)description;
-(id)name;
-(int)type;
-(unsigned)openGLPixelFormat;
-(unsigned)CGBitmapInfo;
-(int)pixelColorModel;
-(unsigned long long)CGBitsPerComponent;
-(unsigned long long)pixelSamples;
-(int)pixelAlpha;
-(unsigned long long)CGBitsPerPixel;
-(int)pixelType;
-(unsigned)openGLInternalFormat;
-(unsigned long long)bitsPerBlock;
-(char)isSupportedOnContext:(id)arg1 ;
-(char)hasCompatibility:(unsigned long long)arg1 ;
-(unsigned)openGLPixelType;
-(unsigned)QTPixelFormat;
-(char)isValidColorSpace:(CGColorSpaceRef)arg1 ;
-(CGColorSpaceRef)defaultColorSpace;
-(int)CIFormat;
-(unsigned long long)packedBytesPerRowForWidth:(unsigned long long)arg1 ;
-(unsigned long long)optimalBytesPerRowForWidth:(unsigned long long)arg1 ;
-(unsigned long long)elementSize;
-(unsigned long long)pixelBlockWidth;
-(unsigned long long)pixelBlockHeight;
-(id)closestPixelFormat:(id)arg1 outDifference:(double*)arg2 ;
-(unsigned long long)compatibilities;
-(cl_image_format)CLFormat;
-(char)isValidWidth:(unsigned long long)arg1 ;
-(char)isValidHeight:(unsigned long long)arg1 ;
-(char)areValidBounds:(CGRect)arg1 ;
-(CGRect)validateBounds:(CGRect)arg1 ;
-(double)compareWithPixelFormat:(id)arg1 ;
@end

