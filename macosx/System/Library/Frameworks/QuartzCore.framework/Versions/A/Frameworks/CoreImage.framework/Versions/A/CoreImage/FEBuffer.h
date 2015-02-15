/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@interface FEBuffer : NSObject {

	FEBuffer* next;
	FEBuffer* stack;
	CGRect bounds;
	unsigned long long bytes;
	fe_accel_buffer_structRef accel_buffer;
	FETiledBitmap* bitmap;
	x_list_struct* textures;
	void* cl_buffer_data;
	fe_cl_buffer_structRef cl_buffer;
	dispatch_semaphore_sRef semaphore;
	FEFormat format;
	unsigned target : 8;
	unsigned wrap_mode : 8;
	unsigned flipped : 1;
	unsigned bitmap_valid : 1;
	unsigned accel_invalid : 1;
	unsigned need_clear : 1;
	unsigned rendering : 1;

}

@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) FEFormat format; 
@property (nonatomic,readonly) char isFlipped; 
@property (nonatomic,readonly) fe_cl_buffer_structRef openCLBuffer; 
@property (nonatomic,readonly) unsigned long long byteCount; 
@property (nonatomic,readonly) fe_bitmap_struct* bitmap; 
+(id)createInverseBufferWithContext:(id)arg1 fromTexture:(fe_texture_object_struct*)arg2 ;
+(void)purgeAllInvalidatedTexturesForContext:(id)arg1 ;
+(void)removeAllInvalidatedTexturesForContext:(id)arg1 ;
+(void)releaseAllTexturesForContext:(id)arg1 ;
-(id)initWithBounds:(CGRect)arg1 format:(FEFormat)arg2 ;
-(void)resetClear;
-(void)beginRenderForContext:(id)arg1 textureTarget:(unsigned)arg2 wrapMode:(unsigned)arg3 flipped:(char)arg4 flags:(unsigned char)arg5 ;
-(void)endRenderForContext:(id)arg1 ;
-(fe_texture_object_struct*)textureWithContext:(id)arg1 textureTarget:(unsigned)arg2 wrapMode:(unsigned)arg3 filterMode:(unsigned)arg4 ;
-(char)hasTexture:(fe_texture_object_struct*)arg1 ;
-(char)setVolatile:(char)arg1 forContext:(id)arg2 ;
-(unsigned long long)byteCount;
-(fe_cl_buffer_structRef)openCLBuffer;
-(fe_bitmap_struct*)bitmap;
-(void)finalize;
-(void)dealloc;
-(CGRect)bounds;
-(void)clear;
-(char)isFlipped;
-(FEFormat)format;
@end
