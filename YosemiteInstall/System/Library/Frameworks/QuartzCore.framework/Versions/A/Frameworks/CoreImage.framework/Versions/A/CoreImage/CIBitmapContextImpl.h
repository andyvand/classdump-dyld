/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:56:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIContextImpl.h>

@class FEContext;

@interface CIBitmapContextImpl : CIContextImpl {

	FEContext* _feContext;
	fe_bitmap_struct* _bitmap;
	CGRect _viewport;
	fe_params_struct* _options;
	fe_cl_buffer_structRef _dst;
	cl_image_format _format;
	unsigned _width;
	unsigned _height;
	unsigned _rowBytes;
	void* _data;

}
-(void)create_feContext;
-(id)feOpenCLContext;
-(void)renderWithBounds:(CGRect)arg1 matrix:(CGAffineTransform)arg2 function:(/*function pointer*/void*)arg3 info:(void*)arg4 ;
-(id)_feContext;
-(void)render:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)setOwner:(id)arg1 ;
-(id)initWithBitmap:(void*)arg1 rowBytes:(long long)arg2 bounds:(CGRect)arg3 format:(int)arg4 options:(id)arg5 ;
-(char)setBitmap:(void*)arg1 rowBytes:(long long)arg2 bounds:(CGRect)arg3 format:(int)arg4 ;
@end

