/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCObject.h>
#import <QuartzComposer/NSCoding.h>

@protocol QCImageProvider;
@class NSAffineTransform, QCRegion;

@interface QCImage : QCObject <NSCoding> {

	id<QCImageProvider> _provider;
	NSAffineTransform* _transformation;
	QCRegion* _domainOfDefinition;
	void** _unused2[4];

}
+(void)initialize;
+(id)imageFileTypes;
+(id)imageFileExtensions;
+(id)createImageWithSource:(id)arg1 options:(id)arg2 ;
+(id)createAllImagesFromData:(id)arg1 options:(id)arg2 ;
+(void)registerImageProviderClass:(Class)arg1 ;
+(void)registerImageExporterClass:(Class)arg1 ;
+(id)imageProviderClasses;
+(id)imageExporterClasses;
+(unsigned long long)imageExporterRegistryTimestamp;
-(void)dealloc;
-(CGRect)bounds;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(id)createImageDataForManager:(id)arg1 withOptions:(id)arg2 ;
-(id)initWithData:(id)arg1 options:(id)arg2 ;
-(id)provider;
-(id)createRepresentationOfType:(id)arg1 forManager:(id)arg2 withOptions:(id)arg3 ;
-(id)createNSImageForManager:(id)arg1 withOptions:(id)arg2 ;
-(id)createNSBitmapImageRepForManager:(id)arg1 withOptions:(id)arg2 ;
-(id)createCIImageForManager:(id)arg1 withOptions:(id)arg2 ;
-(CGImageRef)createCGImageForManager:(id)arg1 withOptions:(id)arg2 ;
-(CVBufferRef)createCVOpenGLBufferForManager:(id)arg1 withOptions:(id)arg2 ;
-(CVBufferRef)createCVPixelBufferForManager:(id)arg1 withOptions:(id)arg2 ;
-(id)initWithQCImageBuffer:(id)arg1 options:(id)arg2 ;
-(id)initWithCVImageBuffer:(CVBufferRef)arg1 options:(id)arg2 ;
-(id)domainOfDefinition;
-(id)initWithProvider:(id)arg1 options:(id)arg2 ;
-(id)createCroppedImageWithRect:(CGRect)arg1 ;
-(id)createTransformedImage:(id)arg1 ;
-(id)createTranslatedImageByX:(double)arg1 Y:(double)arg2 ;
-(id)createScaledImageByX:(double)arg1 Y:(double)arg2 ;
-(id)initWithString:(id)arg1 attributes:(id)arg2 layoutSize:(CGSize)arg3 options:(id)arg4 ;
-(id)initWithTextRenderer:(id)arg1 options:(id)arg2 ;
-(id)transformation;
-(id)initWithCIImage:(id)arg1 options:(id)arg2 ;
-(id)CIImageRepresentation;
-(id)initWithCGImage:(CGImageRef)arg1 options:(id)arg2 ;
-(char)isInfinite;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(id)initWithNSImage:(id)arg1 options:(id)arg2 ;
-(id)initWithNSBitmapImageRep:(id)arg1 options:(id)arg2 ;
-(id)_initWithNSImageSource:(id)arg1 options:(id)arg2 ;
-(id)initWithPDFDocument:(CGPDFDocumentRef)arg1 pageNumber:(unsigned long long)arg2 options:(id)arg3 ;
-(id)initWithCGPath:(CGPathRef)arg1 options:(id)arg2 ;
-(id)initWithCGLayer:(CGLayerRef)arg1 options:(id)arg2 ;
-(id)initWithCGImageSource:(CGImageSourceRef)arg1 imageIndex:(unsigned long long)arg2 options:(id)arg3 ;
-(id)initWithFile:(id)arg1 options:(id)arg2 ;
-(char)writeToURL:(id)arg1 forManager:(id)arg2 withOptions:(id)arg3 ;
-(char)writeToFile:(id)arg1 forManager:(id)arg2 withOptions:(id)arg3 ;
-(id)createTextureBufferForManager:(id)arg1 withFormat:(id)arg2 target:(unsigned)arg3 bounds:(CGRect)arg4 colorSpace:(CGColorSpaceRef)arg5 options:(id)arg6 ;
-(id)_createTransformedImage:(CGAffineTransform*)arg1 definition:(id)arg2 ;
-(id)createRotatedImageByDegrees:(double)arg1 ;
-(id)createScaledImageByX:(double)arg1 Y:(double)arg2 fromX:(double)arg3 Y:(double)arg4 ;
-(id)createRotatedImageByDegrees:(double)arg1 aroundX:(double)arg2 Y:(double)arg3 ;
-(id)createPixelBufferForManager:(id)arg1 withFormat:(id)arg2 bounds:(CGRect)arg3 colorSpace:(CGColorSpaceRef)arg4 options:(id)arg5 ;
-(id)createQCStreamForManager:(id)arg1 withOptions:(id)arg2 ;
-(id)initWithQCStream:(id)arg1 options:(id)arg2 ;
-(id)QCStreamRepresentation;
-(id)createCALayerForManager:(id)arg1 withOptions:(id)arg2 ;
-(id)initWithC3DImage:(C3DImageRef)arg1 options:(id)arg2 ;
-(C3DImageRef)C3DImageRepresentation;
-(id)initWithCALayer:(id)arg1 options:(id)arg2 ;
-(id)CALayerRepresentation;
@end
