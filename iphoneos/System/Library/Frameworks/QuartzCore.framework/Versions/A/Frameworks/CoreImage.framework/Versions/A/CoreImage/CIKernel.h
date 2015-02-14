/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:41 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@interface CIKernel : NSObject {

	void* _priv;

}
+(id)kernelWithCLSource:(id)arg1 kernelName:(id)arg2 enqueueCallback:(SEL)arg3 ;
+(id)_buildOneKernel:(id)arg1 program:(cl_programRef)arg2 source:(id)arg3 ;
+(id)_buildOneKernel:(id)arg1 paramArray:(id)arg2 source:(id)arg3 ;
+(id)kernelsWithCLSource:(id)arg1 ;
+(id)internCString:(const char*)arg1 pointer:(void*)arg2 ;
+(id)colorMatrixBiasKernel;
+(id)kernelWithString:(id)arg1 ;
+(id)kernelWithCLSource:(id)arg1 kernelName:(id)arg2 ;
+(id)kernelsWithCLSource:(id)arg1 paramsDict:(id)arg2 ;
+(id)kernelWithCLCallback:(SEL)arg1 c:(Class)arg2 ;
+(id)kernelWithArray:(id)arg1 kernelName:(id)arg2 enqueueCallback:(SEL)arg3 ;
+(id)kernelWithArray:(id)arg1 kernelName:(id)arg2 ;
+(id)kernelsWithString:(id)arg1 ;
+(id)kernelsWithString:(id)arg1 messageLog:(id)arg2 ;
-(id)apply:(id)arg1 to:(_va_list_tag*)arg2 options:(id)arg3 ;
-(id)apply:(id)arg1 to:(id)arg2 options1:(id)arg3 options2:(id)arg4 ;
-(id)initWithCString:(const char*)arg1 noCopy:(char)arg2 ;
-(id)_initWithfeKernel:(fe_kernel_struct*)arg1 ;
-(void)setCLString:(id)arg1 kernelName:(id)arg2 ;
-(void)setEnqueueCallback:(SEL)arg1 ;
-(id)apply:(id)arg1 to:(id*)arg2 params:(fe_params_struct*)arg3 ;
-(void)setEnqueueCallbackData:(int)arg1 ;
-(id)apply:(id)arg1 to:(_va_list_tag*)arg2 ;
-(int)enqueue_LOC_Callback:(cl_kernelRef)arg1 device:(cl_device_idRef)arg2 globalWorkSize:(unsigned long long)arg3 outputImage:(cl_memRef)arg4 queue:(cl_command_queueRef)arg5 ;
-(int)enqueue_GaussianBlur_Callback:(cl_kernelRef)arg1 device:(cl_device_idRef)arg2 globalWorkSize:(unsigned long long)arg3 outputImage:(cl_memRef)arg4 queue:(cl_command_queueRef)arg5 userData:(int)arg6 ;
-(int)enqueue_ConvNxN_Callback:(cl_kernelRef)arg1 device:(cl_device_idRef)arg2 globalWorkSize:(unsigned long long)arg3 outputImage:(cl_memRef)arg4 queue:(cl_command_queueRef)arg5 userData:(int)arg6 ;
-(BOOL)_createKernel:(cl_programRef)arg1 kernelName:(const char*)arg2 kernel:(cl_kernel*)arg3 ;
-(unsigned long long)_kernelWorkGroupSize:(cl_kernelRef)arg1 device:(cl_device_idRef)arg2 ;
-(BOOL)createBuffer:(unsigned long long)arg1 sz:(unsigned long long)arg2 host_ptr:(void*)arg3 buffer:(cl_mem*)arg4 context:(cl_contextRef)arg5 ;
-(BOOL)enqueueKernel:(cl_kernelRef)arg1 dim:(int)arg2 g:(const unsigned long long*)arg3 wg:(const unsigned long long*)arg4 queue:(cl_command_queueRef)arg5 ;
-(BOOL)readBuffer:(cl_command_queueRef)arg1 buffer:(cl_memRef)arg2 blocking:(BOOL)arg3 offset:(unsigned long long)arg4 sz:(unsigned long long)arg5 data:(void*)arg6 ;
-(void)_computeHistogramWithVImage:(cl_memRef)arg1 nBins:(id)arg2 queue:(cl_command_queueRef)arg3 ;
-(int)enqueue_Histogram_Callback:(cl_kernelRef)arg1 device:(cl_device_idRef)arg2 globalWorkSize:(unsigned long long)arg3 outputImage:(cl_memRef)arg4 queue:(cl_command_queueRef)arg5 width:(unsigned long long)arg6 height:(unsigned long long)arg7 nBins:(id)arg8 displayScale:(id)arg9 inputImage:(cl_memRef)arg10 ;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(id)name;
-(void)setCallback:(SEL)arg1 ;
-(id)parameters;
-(void)setROISelector:(SEL)arg1 ;
@end

