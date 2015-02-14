/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol QCImageProvider;
#import <QuartzComposer/QuartzComposer-Structs.h>
@class QCImageManager, QCPixelFormat, NSAffineTransform, NSDictionary;

@interface QCExporter_CoreImage_Provider : NSObject {

	id<QCImageProvider> _provider;
	QCImageManager* _manager;
	QCPixelFormat* _format;
	NSAffineTransform* _transformation;
	CGRect _bounds;
	CGColorSpaceRef _colorSpace;
	NSDictionary* _options;

}
-(void)finalize;
-(void)dealloc;
-(id)initWithProvider:(id)arg1 imageManager:(id)arg2 pixelFormat:(id)arg3 transformation:(id)arg4 bounds:(CGRect)arg5 colorSpace:(CGColorSpaceRef)arg6 options:(id)arg7 ;
-(void)provideImageData:(void*)arg1 bytesPerRow:(unsigned long long)arg2 origin:(unsigned long long)arg3 :(unsigned long long)arg4 size:(unsigned long long)arg5 :(unsigned long long)arg6 userInfo:(id)arg7 ;
-(unsigned)provideImageTexture:(const CIImageProviderTextureInfoStruct*)arg1 bounds:(CGRect*)arg2 userInfo:(id)arg3 ;
-(void)deleteImageTexture:(const CIImageProviderTextureInfoStruct*)arg1 name:(unsigned)arg2 userInfo:(id)arg3 ;
@end

