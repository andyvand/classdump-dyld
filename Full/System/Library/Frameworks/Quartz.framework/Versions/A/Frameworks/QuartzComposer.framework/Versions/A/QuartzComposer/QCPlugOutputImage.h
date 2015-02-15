/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCImageProvider.h>

@protocol QCPlugInOutputImageProvider;
@class QCRegion, NSMutableArray;

@interface QCPlugOutputImage : QCImageProvider {

	id<QCPlugInOutputImageProvider> _image;
	QCRegion* _region;
	CGColorSpaceRef _colorspace;
	NSMutableArray* _bufferFormats;
	NSMutableArray* _textureFormats;

}
+(char)isCompatibleWithSource:(id)arg1 sourceMD5:(SCD_Struct_QC4*)arg2 ;
+(id)createProviderWithSource:(id)arg1 options:(id)arg2 ;
-(void)finalize;
-(void)dealloc;
-(CGColorSpaceRef)colorSpace;
-(char)hasAlpha;
-(id)initWithImage:(id)arg1 ;
-(char)supportsCropping;
-(id)domainOfDefinition;
-(id)supportedPixelBufferFormatsForManager:(id)arg1 ;
-(id)createPixelBufferForManager:(id)arg1 withFormat:(id)arg2 transformation:(id)arg3 bounds:(CGRect)arg4 colorSpace:(CGColorSpaceRef)arg5 options:(id)arg6 ;
-(id)supportedTextureBufferTargetsForManager:(id)arg1 ;
-(id)supportedTextureBufferFormatsForManager:(id)arg1 ;
-(id)createTextureBufferForManager:(id)arg1 withFormat:(id)arg2 target:(unsigned)arg3 transformation:(id)arg4 bounds:(CGRect)arg5 colorSpace:(CGColorSpaceRef)arg6 options:(id)arg7 ;
@end

