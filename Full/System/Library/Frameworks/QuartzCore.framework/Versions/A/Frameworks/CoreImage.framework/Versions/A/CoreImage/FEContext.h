/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@class FEBuffer, NSPointerArray, NSCache;

@interface FEContext : NSObject {

	int render_abort;
	short render_cannot_abort;
	FEBuffer* current_buffer;
	unsigned compile_only : 1;
	unsigned disable_merging : 1;
	unsigned output_premultiplied : 1;
	unsigned parametric_color_matching : 1;
	unsigned reorder_affine_matrices : 1;
	unsigned inline_affine_matrices : 1;
	unsigned downsampling_mode : 2;
	unsigned accelerated : 1;
	unsigned cl_based : 1;
	unsigned supported_wrap_modes : 8;
	unsigned do_not_modify_inputs : 1;
	unsigned clear_cache_after_render : 1;
	unsigned needs_clear : 1;
	short color_cube_size;
	int dump_textures;
	int version;
	int lock_count;
	NSPointerArray* finalizedImages;
	CGRect* user_ROI;
	void* user_info;
	CGColorSpaceRef working_space;
	CGColorSpaceRef output_space;
	FEFormat working_format;
	FEFormatSet preferred_texture_formats;
	unsigned char format_promotion_cache[48];
	float current_time;
	int collect_counter;
	short render_depth;
	short render_to_buffer;
	short render_passes;
	short render_last_pass;
	SCD_Struct_FE53* cached_colors[4];
	int next_cached_color;
	void* gl_user_context;
	void* gl_share_context;
	void* gl_pixel_format;
	fe_accel_structRef accel;
	const fe_accel_vtable_struct* accel_vtable;
	const char* kernel_name;
	x_hash_table_structRef profile_table;
	double begin_time;
	double current_pixels;
	double total_time;
	double total_pixels;
	int tree_indices[3];
	int print_tree;
	BOOL needsBeginEndPrimitives;
	NSCache* userCallbackCache;

}
+(id)createCPUContextWithOptions:(fe_params_struct*)arg1 ;
+(id)copyContextList;
+(int)defaultVersion;
+(id)createSoftwareContextWithOptions:(fe_params_struct*)arg1 ;
+(id)noOpContextWithOptions:(const fe_params_struct*)arg1 ;
+(void)dirtyBitmap:(fe_bitmap_struct*)arg1 shape:(const FEShape*)arg2 ;
+(id)createOpenCLContextWithOptions:(const fe_params_struct*)arg1 ;
+(void)purgeBitmap:(fe_bitmap_struct*)arg1 ;
+(void)imageIsFinalized:(id)arg1 ;
-(void)finish;
-(void)purge;
-(void)abort;
-(char)setDestination:(fe_bitmap_struct*)arg1 bounds:(CGRect)arg2 ;
-(void)unsetDestination;
-(char)setValue:(id)arg1 forOption:(const char*)arg2 ;
-(id)valueForOption:(const char*)arg1 ;
-(void)collectAndFlushCache:(char)arg1 ;
-(void)_getTextureLimitsSize:(CGSize*)arg1 bytes:(unsigned long long*)arg2 ;
-(char)supportsBufferFormat:(FEFormat)arg1 ;
-(char)startProfiling:(x_hash_table_structRef)arg1 ;
-(fe_accel_structRef)accelerator;
-(void)readTextureWithID:(unsigned long long)arg1 nativeOpenGLContext:(CGLContextObject*)arg2 toBitmap:(fe_bitmap_struct*)arg3 ;
-(fe_texture_object_struct*)textureForBitmap:(FETiledBitmap*)arg1 bounds:(CGRect*)arg2 target:(unsigned)arg3 wrapMode:(unsigned)arg4 filterMode:(unsigned)arg5 buffer:(id*)arg6 ;
-(fe_texture_object_struct*)textureForAcceleratorBuffer:(fe_accel_buffer_structRef)arg1 target:(unsigned)arg2 wrapMode:(unsigned)arg3 filterMode:(unsigned)arg4 ;
-(void)activateBuffer:(id)arg1 data:(void*)arg2 ;
-(char)bindTexture:(fe_texture_object_struct*)arg1 unit:(int)arg2 ;
-(char)loadIDKernelWithSourceFormat:(FEFormat)arg1 sourceWrapMode:(unsigned)arg2 sourceIsOpaque:(char)arg3 destinationFormat:(FEFormat)arg4 destinationIsOpaque:(char)arg5 ;
-(void)setLocalVariables:(const float*)arg1 count:(unsigned long long)arg2 ;
-(void)rectX0:(float)arg1 y0:(float)arg2 x1:(float)arg3 y1:(float)arg4 s0:(float)arg5 t0:(float)arg6 s1:(float)arg7 t1:(float)arg8 ;
-(void)unbindTextureWithUnit:(int)arg1 dirty:(char)arg2 ;
-(void)constructWithOptions:(const fe_params_struct*)arg1 ;
-(void)getKernelTarget:(fe_kernel_target_struct*)arg1 args:(const fe_kernel_args_struct*)arg2 ;
-(void)_quad:(const fe_vertex_struct*)arg1 ;
-(FETextureCacheRef)textureCacheWithCreate:(char)arg1 ;
-(void)_purge;
-(id)printTreeName;
-(void)setWrapMode:(unsigned)arg1 forTexUnit:(unsigned)arg2 ;
-(void)setFilterMode:(unsigned)arg1 forTexUnit:(unsigned)arg2 ;
-(char)needsWrapModeForTextureMatch;
-(fe_kernel_table_structRef)kernelTable;
-(char)_loadKernel:(fe_kernel_struct*)arg1 target:(const fe_kernel_target_struct*)arg2 testOnly:(char)arg3 ;
-(const sl_program_limits_struct*)programLimitsForType:(unsigned)arg1 ;
-(char)supportsCustomQuad;
-(void)_customQuad:(const fe_vertex_struct*)arg1 kernel:(fe_kernel_struct*)arg2 callbackObject:(id)arg3 ;
-(fe_texture_object_struct*)textureWithIOSurface:(IOSurfaceRef)arg1 size:(CGSize)arg2 plane:(unsigned long long)arg3 format:(FEFormat)arg4 target:(unsigned)arg5 wrapMode:(unsigned)arg6 filterMode:(unsigned)arg7 ;
-(void)getBitmap:(fe_bitmap_struct*)arg1 ;
-(void)collect;
-(void*)currentOpenGLContext;
-(char)isPixelAligned;
-(char)setBlendMode:(unsigned)arg1 old:(unsigned*)arg2 ;
-(void)_begin;
-(void)willRender;
-(void)didRender;
-(char)divRectsNeedOverlap;
-(fe_texture_object_struct*)_textureForBitmap:(FETiledBitmap*)arg1 bounds:(CGRect*)arg2 target:(unsigned)arg3 wrapMode:(unsigned)arg4 filterMode:(unsigned)arg5 buffer:(id*)arg6 ;
-(fe_texture_object_struct*)nullTextureForTarget:(unsigned)arg1 ;
-(void)setModeForTexture:(fe_texture_object_struct*)arg1 target:(unsigned)arg2 format:(FEFormat)arg3 wrapMode:(unsigned)arg4 filterMode:(unsigned)arg5 ;
-(void)convertColor:(CGColorRef)arg1 to:(float*)arg2 ;
-(id)finalizedImages;
-(void)waitForDMAForBitmap:(fe_bitmap_struct*)arg1 ;
-(char)didFinishDMAForBitmap:(fe_bitmap_struct*)arg1 ;
-(int)printTreeFlags;
-(void)setNeedsBeginEndPrimitives:(fe_kernel_struct*)arg1 ;
-(void)setUserValue:(id)arg1 forKey:(id)arg2 ;
-(id)userValueForKey:(id)arg1 ;
-(char)_textureIsTilableForBitmap:(FETiledBitmap*)arg1 target:(unsigned)arg2 ;
-(char)texture:(fe_texture_object_struct*)arg1 isBuffer:(id)arg2 ;
-(void)quad:(const fe_vertex_struct*)arg1 kernel:(fe_kernel_struct*)arg2 ;
-(void)getTextureLimitsSize:(CGSize*)arg1 bytes:(unsigned long long*)arg2 ;
-(FEFormat)promotedFormat:(FEFormat)arg1 ;
-(char)loadKernel:(fe_kernel_struct*)arg1 target:(const fe_kernel_target_struct*)arg2 ;
-(fe_texture_object_struct*)noOpTextureForBitmap:(FETiledBitmap*)arg1 bounds:(CGRect*)arg2 target:(unsigned)arg3 wrapMode:(unsigned)arg4 filterMode:(unsigned)arg5 buffer:(id*)arg6 ;
-(void)textureTileMapForBitmap:(FETiledBitmap*)arg1 shape:(const FEShape*)arg2 target:(unsigned)arg3 filterMode:(unsigned)arg4 callback:(/*function pointer*/void*)arg5 context:(void*)arg6 ;
-(fe_texture_object_struct*)textureForWrap:(unsigned long long)arg1 bounds:(CGRect)arg2 format:(FEFormat)arg3 target:(unsigned)arg4 wrapMode:(unsigned)arg5 filterMode:(unsigned)arg6 ;
-(void)collectImageBuffers;
-(char)textureIsTilableForBitmap:(FETiledBitmap*)arg1 target:(unsigned)arg2 ;
-(char)textureIsValidForSize:(CGSize)arg1 format:(FEFormat)arg2 ;
-(void)quad:(const fe_vertex_struct*)arg1 ;
-(char)testKernel:(fe_kernel_struct*)arg1 target:(const fe_kernel_target_struct*)arg2 ;
-(void)quad:(const fe_vertex_struct*)arg1 kernel:(fe_kernel_struct*)arg2 callbackObject:(id)arg3 ;
-(void)postRenderPassForTop:(char)arg1 ;
-(void)preRender;
-(void)_end;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)begin;
-(void)flush;
-(id)initWithOptions:(const fe_params_struct*)arg1 ;
-(char)update;
-(x_hash_table_structRef)stopProfiling;
-(void)end;
@end
