/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/FEContext.h>

@interface FENoOpContext : FEContext {

	char* next_buffer;
	fe_texture_object_struct* null_texture;
	unsigned long long next_program;

}
-(char)supportsBufferFormat:(FEFormat)arg1 ;
-(char)bindTexture:(fe_texture_object_struct*)arg1 unit:(int)arg2 ;
-(void)unbindTextureWithUnit:(int)arg1 dirty:(char)arg2 ;
-(void)getKernelTarget:(fe_kernel_target_struct*)arg1 args:(const fe_kernel_args_struct*)arg2 ;
-(void)_quad:(const fe_vertex_struct*)arg1 ;
-(char)_loadKernel:(fe_kernel_struct*)arg1 target:(const fe_kernel_target_struct*)arg2 testOnly:(char)arg3 ;
-(const sl_program_limits_struct*)programLimitsForType:(unsigned)arg1 ;
-(fe_texture_object_struct*)_textureForBitmap:(FETiledBitmap*)arg1 bounds:(CGRect*)arg2 target:(unsigned)arg3 wrapMode:(unsigned)arg4 filterMode:(unsigned)arg5 buffer:(id*)arg6 ;
-(fe_texture_object_struct*)nullTextureForTarget:(unsigned)arg1 ;
-(void)setModeForTexture:(fe_texture_object_struct*)arg1 target:(unsigned)arg2 format:(FEFormat)arg3 wrapMode:(unsigned)arg4 filterMode:(unsigned)arg5 ;
-(void)finalize;
-(void)dealloc;
-(id)initWithOptions:(const fe_params_struct*)arg1 ;
@end

