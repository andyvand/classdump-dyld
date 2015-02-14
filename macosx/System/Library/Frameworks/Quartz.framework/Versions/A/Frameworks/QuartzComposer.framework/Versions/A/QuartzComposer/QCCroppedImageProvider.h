/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCImageProvider.h>

@protocol QCImageProvider;
@class NSAffineTransform, QCRegion;

@interface QCCroppedImageProvider : QCImageProvider {

	id<QCImageProvider> _originalProvider;
	NSAffineTransform* _transformation;
	CGRect _croppingRect;
	QCRegion* _domainOfDefinition;
	void** _unused2[4];

}
-(void)dealloc;
-(CGColorSpaceRef)colorSpace;
-(char)hasAlpha;
-(char)supportsCropping;
-(char)supportsTransformation;
-(id)domainOfDefinition;
-(id)supportedPixelBufferFormatsForManager:(id)arg1 ;
-(id)createPixelBufferForManager:(id)arg1 withFormat:(id)arg2 transformation:(id)arg3 bounds:(CGRect)arg4 colorSpace:(CGColorSpaceRef)arg5 options:(id)arg6 ;
-(id)supportedTextureBufferTargetsForManager:(id)arg1 ;
-(id)supportedTextureBufferFormatsForManager:(id)arg1 ;
-(id)createTextureBufferForManager:(id)arg1 withFormat:(id)arg2 target:(unsigned)arg3 transformation:(id)arg4 bounds:(CGRect)arg5 colorSpace:(CGColorSpaceRef)arg6 options:(id)arg7 ;
-(char)supportsColorMatching;
-(id)originalProvider;
-(id)transformation;
-(CGRect)croppingRect;
-(id)initWithProvider:(id)arg1 transformation:(id)arg2 croppingRect:(CGRect)arg3 ;
-(id)createOptimizedProviderWithTransformation:(id)arg1 cropping:(CGRect)arg2 ;
@end

