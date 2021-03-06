/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:56:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/NSCoding.h>
#import <CoreImage/NSCopying.h>

@interface CIImage : NSObject <NSCoding, NSCopying> {

	void* _state;
	void* _priv;

}
+(void)insertAttribute:(id)arg1 intoView:(id)arg2 anchorPosition:(CGPoint*)arg3 forFilter:(id)arg4 settings:(id)arg5 configuration:(id)arg6 objectController:(id)arg7 ;
+(id)imageWithIOSurface:(IOSurfaceRef)arg1 plane:(unsigned long long)arg2 format:(int)arg3 options:(id)arg4 ;
+(id)imageWithBitmapData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(CGSize)arg3 format:(int)arg4 colorSpace:(CGColorSpaceRef)arg5 ;
+(id)imageWithCGImage:(CGImageRef)arg1 options:(id)arg2 ;
+(id)imageWithCGLayer:(CGLayerRef)arg1 options:(id)arg2 ;
+(id)imageWithContentsOfURL:(id)arg1 options:(id)arg2 ;
+(id)imageWithCVImageBuffer:(CVBufferRef)arg1 options:(id)arg2 ;
+(id)imageWithRenderer:(id)arg1 userData:(id)arg2 renderSize:(CGSize)arg3 renderContext:(CGLContextObjectRef)arg4 options:(id)arg5 ;
+(id)imageWithIOSurface:(IOSurfaceRef)arg1 options:(id)arg2 ;
+(id)noiseImage;
+(id)noiseImagePadded;
+(id)imageWithCGLayer:(CGLayerRef)arg1 ;
+(id)imageWithJPEGFile:(id)arg1 ;
+(id)imageWithPNGFile:(id)arg1 ;
+(id)imageWithCVPixelBuffer:(CVBufferRef)arg1 ;
+(id)imageWithCVPixelBuffer:(CVBufferRef)arg1 options:(id)arg2 ;
+(id)imageWithRenderer:(id)arg1 userData:(id)arg2 renderSize:(CGSize)arg3 renderContext:(CGLContextObjectRef)arg4 ;
+(id)imageWithData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(CGSize)arg3 format:(int)arg4 options:(id)arg5 ;
+(id)imageWithData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(CGSize)arg3 format:(int)arg4 colorSpace:(CGColorSpaceRef)arg5 ;
+(id)imageWithData:(id)arg1 options:(id)arg2 ;
+(id)imageWithBitmapData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(CGSize)arg3 format:(int)arg4 options:(id)arg5 ;
+(id)imageWithIOSurface:(IOSurfaceRef)arg1 ;
+(id)imageWithTexture:(unsigned)arg1 size:(CGSize)arg2 options:(id)arg3 ;
+(id)imageWithTexture:(unsigned)arg1 size:(CGSize)arg2 flipped:(char)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
+(id)imageWithTexture:(unsigned)arg1 size:(CGSize)arg2 flipped:(char)arg3 options:(id)arg4 ;
+(id)imageWithImageProvider:(id)arg1 userInfo:(id)arg2 size:(CGSize)arg3 format:(int)arg4 flipped:(char)arg5 colorSpace:(CGColorSpaceRef)arg6 ;
+(id)imageWithImageProvider:(id)arg1 size:(unsigned long long)arg2 :(unsigned long long)arg3 format:(int)arg4 colorSpace:(CGColorSpaceRef)arg5 options:(id)arg6 ;
+(id)smartToneAdjustmentsForValue:(double)arg1 andStatistics:(id)arg2 ;
+(id)smartColorAdjustmentsForValue:(double)arg1 andStatistics:(id)arg2 ;
+(id)createCIImageWithSurfaceBytes:(void*)arg1 bytesPerRow:(unsigned long long)arg2 x:(int)arg3 y:(int)arg4 width:(int)arg5 height:(int)arg6 colorSpace:(CGColorSpaceRef)arg7 transform:(const CGAffineTransform*)arg8 ;
+(id)imageWithData:(id)arg1 ;
+(id)imageWithURL:(id)arg1 ;
+(id)imageWithCGImage:(CGImageRef)arg1 ;
+(id)emptyImage;
+(id)imageWithCVImageBuffer:(CVBufferRef)arg1 ;
+(id)imageWithContentsOfURL:(id)arg1 ;
+(id)imageWithColor:(id)arg1 ;
+(id)nullImage;
-(id)CGX_initWithTexture:(unsigned)arg1 size:(CGSize)arg2 flipped:(char)arg3 isDest:(char)arg4 ;
-(id)rcApplyFilters:(id)arg1 ;
-(void)drawAtPoint:(CGPoint)arg1 fromRect:(CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4 ;
-(void)drawInRect:(CGRect)arg1 fromRect:(CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4 ;
-(id)initWithBitmapImageRep:(id)arg1 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLType;
-(id)filteredImage:(id)arg1 keysAndValues:(id)arg2 ;
-(id)feImage;
-(CGImageRef)cgImageRepresentation;
-(id)_initWithfeImage:(id)arg1 ;
-(fe_sampler_structRef)_feSampler;
-(id)initWithBitmapData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(CGSize)arg3 format:(int)arg4 options:(id)arg5 ;
-(id)_fixupAlphaImageUsingColorSpace:(CGColorSpaceRef)arg1 kernel:(fe_kernel_structRef)arg2 hasCropParam:(char)arg3 ;
-(id)initWithJPEGFile:(id)arg1 ;
-(id)initWithPNGFile:(id)arg1 ;
-(id)initWithJPEGFile:(id)arg1 options:(id)arg2 ;
-(id)initWithPNGFile:(id)arg1 options:(id)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 options:(id)arg2 ;
-(id)initWithRenderer:(id)arg1 userData:(id)arg2 renderSize:(CGSize)arg3 renderContext:(CGLContextObjectRef)arg4 options:(id)arg5 ;
-(id)_initWithBitmapData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(CGSize)arg3 format:(int)arg4 params:(fe_params_struct*)arg5 ;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 options:(id)arg2 ;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 plane:(unsigned long long)arg2 format:(int)arg3 options:(id)arg4 ;
-(id)_initWithUnsupportedIOSurface:(IOSurfaceRef)arg1 options:(id)arg2 ;
-(id)initWithTexture:(unsigned)arg1 size:(CGSize)arg2 options:(id)arg3 ;
-(id)initWithTexture:(unsigned)arg1 size:(CGSize)arg2 flipped:(char)arg3 options:(id)arg4 ;
-(id)initWithTexture:(unsigned)arg1 size:(CGSize)arg2 flipped:(char)arg3 colorSpace:(CGColorSpaceRef)arg4 target:(unsigned)arg5 format:(int)arg6 ;
-(id)_initWithTexture:(unsigned)arg1 size:(CGSize)arg2 target:(unsigned)arg3 format:(int)arg4 params:(fe_params_struct*)arg5 ;
-(CGAffineTransform)imageTransformForOrientation:(int)arg1 ;
-(id)imageByCroppingToRegion:(CGSRegionObjectRef)arg1 ;
-(id)_region:(int)arg1 ;
-(void)invalidateShape:(id)arg1 ;
-(void)setOpaqueShape:(id)arg1 ;
-(void)setCacheHint:(char)arg1 ;
-(char)cacheHint;
-(id)initWithCVPixelBuffer:(CVBufferRef)arg1 ;
-(id)initWithCVPixelBuffer:(CVBufferRef)arg1 options:(id)arg2 ;
-(id)initWithRenderer:(id)arg1 userData:(id)arg2 renderSize:(CGSize)arg3 renderContext:(CGLContextObjectRef)arg4 ;
-(id)initWithData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(CGSize)arg3 format:(int)arg4 colorSpace:(CGColorSpaceRef)arg5 ;
-(id)initWithData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(CGSize)arg3 format:(int)arg4 options:(id)arg5 ;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 ;
-(id)_initWith420IOSurface:(IOSurfaceRef)arg1 options:(id)arg2 ;
-(id)_initWith422IOSurface:(IOSurfaceRef)arg1 options:(id)arg2 ;
-(id)imageByApplyingOrientation:(int)arg1 ;
-(id)transformedImage:(CGAffineTransform)arg1 ;
-(id)_imageByCroppingToRect:(CGRect)arg1 ;
-(id)imageByClampingToExtent;
-(id)imageByCroppingToShape:(id)arg1 ;
-(id)imageByCompositingOverImage:(id)arg1 ;
-(id)imageByApplyingFilter:(id)arg1 withInputParameters:(id)arg2 ;
-(id)flattenedImage:(CGRect)arg1 context:(id)arg2 ;
-(void)writeToTIFF:(id)arg1 ;
-(id)promotedImage:(int)arg1 ;
-(id)opaqueShape;
-(id)initWithImageProvider:(id)arg1 userInfo:(id)arg2 size:(CGSize)arg3 format:(int)arg4 flipped:(char)arg5 colorSpace:(CGColorSpaceRef)arg6 ;
-(id)smartBlackAndWhiteStatistics;
-(id)smartBlackAndWhiteAdjustmentsForValue:(double)arg1 andStatistics:(id)arg2 ;
-(id)smartToneAdjustmentsForValue:(double)arg1 andStatistics:(id)arg2 ;
-(id)smartColorAdjustmentsForValue:(double)arg1 andStatistics:(id)arg2 ;
-(id)smartToneStatistics;
-(id)smartColorStatistics;
-(id)autoRotateFilterFFT:(id)arg1 image:(CGImageRef)arg2 inputRect:(CGRect)arg3 ;
-(CGPoint)calcIntersection:(CGPoint)arg1 slope1:(CGPoint)arg2 pt2:(CGPoint)arg3 slope2:(CGPoint)arg4 ;
-(id)getAutoRotateFilter:(id)arg1 ciImage:(id)arg2 rgbRows:(id)arg3 inputRect:(CGRect)arg4 rotateCropRect:(CGRect*)arg5 ;
-(void)getAutocropRect:(id)arg1 rotateXfrm:(CGAffineTransform)arg2 inputImageRect:(CGRect)arg3 clipRect:(CGRect*)arg4 ;
-(id)_autoRedEyeFilterWithFeatures:(id)arg1 imageProperties:(id)arg2 context:(id)arg3 options:(id)arg4 ;
-(id)_scaleImageToMaxDimension:(unsigned)arg1 ;
-(id)autoAdjustmentFiltersWithOptions:(id)arg1 ;
-(id)autoAdjustmentFiltersWithImageProperties:(id)arg1 options:(id)arg2 ;
-(id)_dictForFeature:(id)arg1 scale:(double)arg2 imageHeight:(float)arg3 ;
-(id)autoAdjustmentFilters;
-(id)autoRedEyeFilterWithFeatures:(id)arg1 imageProperties:(id)arg2 options:(id)arg3 ;
-(id)autoRedEyeFilterWithFeatures:(id)arg1 options:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(id)userInfo;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(id)url;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGColorSpaceRef)colorSpace;
-(id)initWithCGImage:(CGImageRef)arg1 ;
-(CGRect)extent;
-(id)TIFFRepresentation;
-(id)initWithData:(id)arg1 ;
-(id)initWithColor:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)properties;
-(id)initWithCGLayer:(CGLayerRef)arg1 ;
-(void)invalidateRect:(CGRect)arg1 ;
-(id)initWithData:(id)arg1 options:(id)arg2 ;
-(id)initWithCVImageBuffer:(CVBufferRef)arg1 ;
-(id)initWithCVImageBuffer:(CVBufferRef)arg1 options:(id)arg2 ;
-(id)definition;
-(id)imageByApplyingTransform:(CGAffineTransform)arg1 ;
-(id)imageByCroppingToRect:(CGRect)arg1 ;
-(id)initWithImageProvider:(id)arg1 size:(unsigned long long)arg2 :(unsigned long long)arg3 format:(int)arg4 colorSpace:(CGColorSpaceRef)arg5 options:(id)arg6 ;
-(id)initWithCGImage:(CGImageRef)arg1 options:(id)arg2 ;
-(id)initWithBitmapData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(CGSize)arg3 format:(int)arg4 colorSpace:(CGColorSpaceRef)arg5 ;
-(id)initWithTexture:(unsigned)arg1 size:(CGSize)arg2 flipped:(char)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
-(id)initWithCGLayer:(CGLayerRef)arg1 options:(id)arg2 ;
@end

