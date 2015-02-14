/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCImageProvider.h>

@class CIImage, QCRegion, NSArray;

@interface QCProvider_CoreImage : QCImageProvider {

	CIImage* _image;
	QCRegion* _domainOfDefinition;
	NSArray* _pixelFormats;
	NSArray* _textureFormats;
	opaque_pthread_mutex_t _mutex;

}
+(char)isCompatibleWithSource:(id)arg1 sourceMD5:(SCD_Struct_QC4*)arg2 ;
+(id)createProviderWithSource:(id)arg1 options:(id)arg2 ;
-(void)finalize;
-(void)dealloc;
-(CGColorSpaceRef)colorSpace;
-(char)hasAlpha;
-(id)sourceRepresentationType;
-(id)sourceRepresentation;
-(char)supportsCropping;
-(char)supportsTransformation;
-(id)domainOfDefinition;
-(id)nativePixelFormat;
-(id)supportedPixelBufferFormatsForManager:(id)arg1 ;
-(id)createPixelBufferForManager:(id)arg1 withFormat:(id)arg2 transformation:(id)arg3 bounds:(CGRect)arg4 colorSpace:(CGColorSpaceRef)arg5 options:(id)arg6 ;
-(id)supportedTextureBufferTargetsForManager:(id)arg1 ;
-(id)supportedTextureBufferFormatsForManager:(id)arg1 ;
-(id)createTextureBufferForManager:(id)arg1 withFormat:(id)arg2 target:(unsigned)arg3 transformation:(id)arg4 bounds:(CGRect)arg5 colorSpace:(CGColorSpaceRef)arg6 options:(id)arg7 ;
-(char)supportsColorMatching;
-(id)createOptimizedProviderWithTransformation:(id)arg1 cropping:(CGRect)arg2 ;
-(id)initWithCIImage:(id)arg1 options:(id)arg2 ;
@end

