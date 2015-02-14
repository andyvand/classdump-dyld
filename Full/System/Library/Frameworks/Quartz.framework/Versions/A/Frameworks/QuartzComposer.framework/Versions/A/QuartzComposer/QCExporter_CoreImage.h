/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCImageExporter.h>

@class CIFilter;

@interface QCExporter_CoreImage : QCImageExporter {

	CIFilter* _ciMatrixFilter;
	char _flipped;

}
-(void)dealloc;
-(id)supportedRepresentationTypes;
-(id)createRepresentationOfType:(id)arg1 withProvider:(id)arg2 transformation:(id)arg3 bounds:(CGRect)arg4 colorSpace:(CGColorSpaceRef)arg5 options:(id)arg6 ;
-(id)_createTransformedCIImage:(id)arg1 transformation:(id)arg2 bounds:(CGRect)arg3 ;
-(void)provideImageData:(void*)arg1 bytesPerRow:(unsigned long long)arg2 origin:(unsigned long long)arg3 :(unsigned long long)arg4 size:(unsigned long long)arg5 :(unsigned long long)arg6 userInfo:(id)arg7 ;
-(unsigned)provideImageTexture:(const CIImageProviderTextureInfoStruct*)arg1 bounds:(CGRect*)arg2 userInfo:(id)arg3 ;
-(void)deleteImageTexture:(const CIImageProviderTextureInfoStruct*)arg1 name:(unsigned)arg2 userInfo:(id)arg3 ;
@end

